/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 11103:  /* cmpccxadd_di */
    case 11102:  /* cmpccxadd_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 11101:  /* atomic_xor_fetch_cmp_0di_1 */
    case 11100:  /* atomic_or_fetch_cmp_0di_1 */
    case 11099:  /* atomic_and_fetch_cmp_0di_1 */
    case 11098:  /* atomic_xor_fetch_cmp_0si_1 */
    case 11097:  /* atomic_or_fetch_cmp_0si_1 */
    case 11096:  /* atomic_and_fetch_cmp_0si_1 */
    case 11095:  /* atomic_xor_fetch_cmp_0hi_1 */
    case 11094:  /* atomic_or_fetch_cmp_0hi_1 */
    case 11093:  /* atomic_and_fetch_cmp_0hi_1 */
    case 11092:  /* atomic_xor_fetch_cmp_0qi_1 */
    case 11091:  /* atomic_or_fetch_cmp_0qi_1 */
    case 11090:  /* atomic_and_fetch_cmp_0qi_1 */
    case 11089:  /* atomic_sub_fetch_cmp_0di_1 */
    case 11088:  /* atomic_sub_fetch_cmp_0si_1 */
    case 11087:  /* atomic_sub_fetch_cmp_0hi_1 */
    case 11086:  /* atomic_sub_fetch_cmp_0qi_1 */
    case 11085:  /* atomic_add_fetch_cmp_0di_1 */
    case 11084:  /* atomic_add_fetch_cmp_0si_1 */
    case 11083:  /* atomic_add_fetch_cmp_0hi_1 */
    case 11082:  /* atomic_add_fetch_cmp_0qi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 11078:  /* atomic_bit_test_and_complementdi_1 */
    case 11077:  /* atomic_bit_test_and_complementsi_1 */
    case 11076:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 11081:  /* atomic_bit_test_and_resetdi_1 */
    case 11080:  /* atomic_bit_test_and_resetsi_1 */
    case 11079:  /* atomic_bit_test_and_resethi_1 */
    case 11075:  /* atomic_bit_test_and_setdi_1 */
    case 11074:  /* atomic_bit_test_and_setsi_1 */
    case 11073:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 11072:  /* atomic_xordi */
    case 11071:  /* atomic_ordi */
    case 11070:  /* atomic_anddi */
    case 11069:  /* atomic_xorsi */
    case 11068:  /* atomic_orsi */
    case 11067:  /* atomic_andsi */
    case 11066:  /* atomic_xorhi */
    case 11065:  /* atomic_orhi */
    case 11064:  /* atomic_andhi */
    case 11063:  /* atomic_xorqi */
    case 11062:  /* atomic_orqi */
    case 11061:  /* atomic_andqi */
    case 11060:  /* atomic_subdi */
    case 11059:  /* atomic_subsi */
    case 11058:  /* atomic_subhi */
    case 11057:  /* atomic_subqi */
    case 11056:  /* atomic_adddi */
    case 11055:  /* atomic_addsi */
    case 11054:  /* atomic_addhi */
    case 11053:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 11052:  /* rao_aadddi */
    case 11051:  /* rao_axordi */
    case 11050:  /* rao_aordi */
    case 11049:  /* rao_aanddi */
    case 11048:  /* rao_aaddsi */
    case 11047:  /* rao_axorsi */
    case 11046:  /* rao_aorsi */
    case 11045:  /* rao_aandsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 11044:  /* atomic_exchangedi */
    case 11043:  /* atomic_exchangesi */
    case 11042:  /* atomic_exchangehi */
    case 11041:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 11040:  /* *atomic_fetch_add_cmpdi */
    case 11039:  /* *atomic_fetch_add_cmpsi */
    case 11038:  /* *atomic_fetch_add_cmphi */
    case 11037:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 11036:  /* atomic_fetch_adddi */
    case 11035:  /* atomic_fetch_addsi */
    case 11034:  /* atomic_fetch_addhi */
    case 11033:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 11032:  /* atomic_compare_and_swapdi_1 */
    case 11031:  /* atomic_compare_and_swapsi_1 */
    case 11030:  /* atomic_compare_and_swaphi_1 */
    case 11029:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 11028:  /* atomic_compare_and_swapti_doubleword */
    case 11027:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 11016:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 10505:  /* *vcvtph2hf8sv8hf_mask */
    case 10504:  /* *vcvtph2hf8v8hf_mask */
    case 10503:  /* *vcvtph2bf8sv8hf_mask */
    case 10502:  /* *vcvtph2bf8v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10481:  /* *vcvtbiasph2hf8sv8hf_mask */
    case 10480:  /* *vcvtbiasph2hf8v8hf_mask */
    case 10479:  /* *vcvtbiasph2bf8sv8hf_mask */
    case 10478:  /* *vcvtbiasph2bf8v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10447:  /* avx10_2_cvt2ps2phx_v16hf_mask_round */
    case 10443:  /* avx10_2_cvt2ps2phx_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10445:  /* avx10_2_cvt2ps2phx_v16hf_round */
    case 10441:  /* avx10_2_cvt2ps2phx_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10581:  /* *vpdpwuuds_v4si_maskz */
    case 10580:  /* *vpdpwuud_v4si_maskz */
    case 10579:  /* *vpdpwsuds_v4si_maskz */
    case 10578:  /* *vpdpwsud_v4si_maskz */
    case 10577:  /* *vpdpwusds_v4si_maskz */
    case 10576:  /* *vpdpwusd_v4si_maskz */
    case 10575:  /* *vpdpwuuds_v8si_maskz */
    case 10574:  /* *vpdpwuud_v8si_maskz */
    case 10573:  /* *vpdpwsuds_v8si_maskz */
    case 10572:  /* *vpdpwsud_v8si_maskz */
    case 10571:  /* *vpdpwusds_v8si_maskz */
    case 10570:  /* *vpdpwusd_v8si_maskz */
    case 10569:  /* *vpdpwuuds_v16si_maskz */
    case 10568:  /* *vpdpwuud_v16si_maskz */
    case 10567:  /* *vpdpwsuds_v16si_maskz */
    case 10566:  /* *vpdpwsud_v16si_maskz */
    case 10565:  /* *vpdpwusds_v16si_maskz */
    case 10564:  /* *vpdpwusd_v16si_maskz */
    case 10427:  /* *vpdpbuuds_v4si_maskz */
    case 10426:  /* *vpdpbuud_v4si_maskz */
    case 10425:  /* *vpdpbsuds_v4si_maskz */
    case 10424:  /* *vpdpbsud_v4si_maskz */
    case 10423:  /* *vpdpbssds_v4si_maskz */
    case 10422:  /* *vpdpbssd_v4si_maskz */
    case 10421:  /* *vpdpbuuds_v8si_maskz */
    case 10420:  /* *vpdpbuud_v8si_maskz */
    case 10419:  /* *vpdpbsuds_v8si_maskz */
    case 10418:  /* *vpdpbsud_v8si_maskz */
    case 10417:  /* *vpdpbssds_v8si_maskz */
    case 10416:  /* *vpdpbssd_v8si_maskz */
    case 10415:  /* *vpdpbuuds_v16si_maskz */
    case 10414:  /* *vpdpbuud_v16si_maskz */
    case 10413:  /* *vpdpbsuds_v16si_maskz */
    case 10412:  /* *vpdpbsud_v16si_maskz */
    case 10411:  /* *vpdpbssds_v16si_maskz */
    case 10410:  /* *vpdpbssd_v16si_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10373:  /* *aesencwide256klu8 */
    case 10372:  /* *aesencwide128klu8 */
    case 10371:  /* *aesdecwide256klu8 */
    case 10370:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 10369:  /* aesenc256klu8 */
    case 10368:  /* aesenc128klu8 */
    case 10367:  /* aesdec256klu8 */
    case 10366:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 10365:  /* *encodekey256u32 */
    case 10364:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 10363:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 10449:  /* avx10_2_cvt2ps2phx_v8hf_mask */
    case 10446:  /* avx10_2_cvt2ps2phx_v16hf_mask */
    case 10442:  /* avx10_2_cvt2ps2phx_v32hf_mask */
    case 10346:  /* avx512f_cvtne2ps2bf16_v8bf_mask */
    case 10344:  /* avx512f_cvtne2ps2bf16_v16bf_mask */
    case 10342:  /* avx512f_cvtne2ps2bf16_v32bf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 10448:  /* avx10_2_cvt2ps2phx_v8hf */
    case 10444:  /* avx10_2_cvt2ps2phx_v16hf */
    case 10440:  /* avx10_2_cvt2ps2phx_v32hf */
    case 10345:  /* avx512f_cvtne2ps2bf16_v8bf */
    case 10343:  /* avx512f_cvtne2ps2bf16_v16bf */
    case 10341:  /* avx512f_cvtne2ps2bf16_v32bf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 10155:  /* *restore_multiple_leave_returndi */
    case 10154:  /* *restore_multiple_leave_returnsi */
    case 10153:  /* *restore_multiple_and_returndi */
    case 10152:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 10151:  /* *restore_multipledi */
    case 10150:  /* *restore_multiplesi */
    case 10149:  /* *save_multipledi */
    case 10148:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 10014:  /* avx512dq_vmfpclassv2df_mask */
    case 10012:  /* avx512dq_vmfpclassv4sf_mask */
    case 10010:  /* avx512dq_vmfpclassv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9890:  /* *avx512f_scatterdiv2df */
    case 9889:  /* *avx512f_scatterdiv2di */
    case 9888:  /* *avx512f_scatterdiv4sf */
    case 9887:  /* *avx512f_scatterdiv4si */
    case 9886:  /* *avx512f_scatterdiv4df */
    case 9885:  /* *avx512f_scatterdiv4di */
    case 9884:  /* *avx512f_scatterdiv8sf */
    case 9883:  /* *avx512f_scatterdiv8si */
    case 9882:  /* *avx512f_scatterdiv8df */
    case 9881:  /* *avx512f_scatterdiv8di */
    case 9880:  /* *avx512f_scatterdiv16sf */
    case 9879:  /* *avx512f_scatterdiv16si */
    case 9878:  /* *avx512f_scatterdiv2df */
    case 9877:  /* *avx512f_scatterdiv2di */
    case 9876:  /* *avx512f_scatterdiv4sf */
    case 9875:  /* *avx512f_scatterdiv4si */
    case 9874:  /* *avx512f_scatterdiv4df */
    case 9873:  /* *avx512f_scatterdiv4di */
    case 9872:  /* *avx512f_scatterdiv8sf */
    case 9871:  /* *avx512f_scatterdiv8si */
    case 9870:  /* *avx512f_scatterdiv8df */
    case 9869:  /* *avx512f_scatterdiv8di */
    case 9868:  /* *avx512f_scatterdiv16sf */
    case 9867:  /* *avx512f_scatterdiv16si */
    case 9866:  /* *avx512f_scattersiv2df */
    case 9865:  /* *avx512f_scattersiv2di */
    case 9864:  /* *avx512f_scattersiv4sf */
    case 9863:  /* *avx512f_scattersiv4si */
    case 9862:  /* *avx512f_scattersiv4df */
    case 9861:  /* *avx512f_scattersiv4di */
    case 9860:  /* *avx512f_scattersiv8sf */
    case 9859:  /* *avx512f_scattersiv8si */
    case 9858:  /* *avx512f_scattersiv8df */
    case 9857:  /* *avx512f_scattersiv8di */
    case 9856:  /* *avx512f_scattersiv16sf */
    case 9855:  /* *avx512f_scattersiv16si */
    case 9854:  /* *avx512f_scattersiv2df */
    case 9853:  /* *avx512f_scattersiv2di */
    case 9852:  /* *avx512f_scattersiv4sf */
    case 9851:  /* *avx512f_scattersiv4si */
    case 9850:  /* *avx512f_scattersiv4df */
    case 9849:  /* *avx512f_scattersiv4di */
    case 9848:  /* *avx512f_scattersiv8sf */
    case 9847:  /* *avx512f_scattersiv8si */
    case 9846:  /* *avx512f_scattersiv8df */
    case 9845:  /* *avx512f_scattersiv8di */
    case 9844:  /* *avx512f_scattersiv16sf */
    case 9843:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 9842:  /* *avx512f_gatherdiv2df_2 */
    case 9841:  /* *avx512f_gatherdiv2di_2 */
    case 9840:  /* *avx512f_gatherdiv4sf_2 */
    case 9839:  /* *avx512f_gatherdiv4si_2 */
    case 9838:  /* *avx512f_gatherdiv4df_2 */
    case 9837:  /* *avx512f_gatherdiv4di_2 */
    case 9836:  /* *avx512f_gatherdiv8sf_2 */
    case 9835:  /* *avx512f_gatherdiv8si_2 */
    case 9834:  /* *avx512f_gatherdiv8df_2 */
    case 9833:  /* *avx512f_gatherdiv8di_2 */
    case 9832:  /* *avx512f_gatherdiv16sf_2 */
    case 9831:  /* *avx512f_gatherdiv16si_2 */
    case 9830:  /* *avx512f_gatherdiv2df_2 */
    case 9829:  /* *avx512f_gatherdiv2di_2 */
    case 9828:  /* *avx512f_gatherdiv4sf_2 */
    case 9827:  /* *avx512f_gatherdiv4si_2 */
    case 9826:  /* *avx512f_gatherdiv4df_2 */
    case 9825:  /* *avx512f_gatherdiv4di_2 */
    case 9824:  /* *avx512f_gatherdiv8sf_2 */
    case 9823:  /* *avx512f_gatherdiv8si_2 */
    case 9822:  /* *avx512f_gatherdiv8df_2 */
    case 9821:  /* *avx512f_gatherdiv8di_2 */
    case 9820:  /* *avx512f_gatherdiv16sf_2 */
    case 9819:  /* *avx512f_gatherdiv16si_2 */
    case 9794:  /* *avx512f_gathersiv2df_2 */
    case 9793:  /* *avx512f_gathersiv2di_2 */
    case 9792:  /* *avx512f_gathersiv4sf_2 */
    case 9791:  /* *avx512f_gathersiv4si_2 */
    case 9790:  /* *avx512f_gathersiv4df_2 */
    case 9789:  /* *avx512f_gathersiv4di_2 */
    case 9788:  /* *avx512f_gathersiv8sf_2 */
    case 9787:  /* *avx512f_gathersiv8si_2 */
    case 9786:  /* *avx512f_gathersiv8df_2 */
    case 9785:  /* *avx512f_gathersiv8di_2 */
    case 9784:  /* *avx512f_gathersiv16sf_2 */
    case 9783:  /* *avx512f_gathersiv16si_2 */
    case 9782:  /* *avx512f_gathersiv2df_2 */
    case 9781:  /* *avx512f_gathersiv2di_2 */
    case 9780:  /* *avx512f_gathersiv4sf_2 */
    case 9779:  /* *avx512f_gathersiv4si_2 */
    case 9778:  /* *avx512f_gathersiv4df_2 */
    case 9777:  /* *avx512f_gathersiv4di_2 */
    case 9776:  /* *avx512f_gathersiv8sf_2 */
    case 9775:  /* *avx512f_gathersiv8si_2 */
    case 9774:  /* *avx512f_gathersiv8df_2 */
    case 9773:  /* *avx512f_gathersiv8di_2 */
    case 9772:  /* *avx512f_gathersiv16sf_2 */
    case 9771:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 9818:  /* *avx512f_gatherdiv2df */
    case 9817:  /* *avx512f_gatherdiv2di */
    case 9816:  /* *avx512f_gatherdiv4sf */
    case 9815:  /* *avx512f_gatherdiv4si */
    case 9814:  /* *avx512f_gatherdiv4df */
    case 9813:  /* *avx512f_gatherdiv4di */
    case 9812:  /* *avx512f_gatherdiv8sf */
    case 9811:  /* *avx512f_gatherdiv8si */
    case 9810:  /* *avx512f_gatherdiv8df */
    case 9809:  /* *avx512f_gatherdiv8di */
    case 9808:  /* *avx512f_gatherdiv16sf */
    case 9807:  /* *avx512f_gatherdiv16si */
    case 9806:  /* *avx512f_gatherdiv2df */
    case 9805:  /* *avx512f_gatherdiv2di */
    case 9804:  /* *avx512f_gatherdiv4sf */
    case 9803:  /* *avx512f_gatherdiv4si */
    case 9802:  /* *avx512f_gatherdiv4df */
    case 9801:  /* *avx512f_gatherdiv4di */
    case 9800:  /* *avx512f_gatherdiv8sf */
    case 9799:  /* *avx512f_gatherdiv8si */
    case 9798:  /* *avx512f_gatherdiv8df */
    case 9797:  /* *avx512f_gatherdiv8di */
    case 9796:  /* *avx512f_gatherdiv16sf */
    case 9795:  /* *avx512f_gatherdiv16si */
    case 9770:  /* *avx512f_gathersiv2df */
    case 9769:  /* *avx512f_gathersiv2di */
    case 9768:  /* *avx512f_gathersiv4sf */
    case 9767:  /* *avx512f_gathersiv4si */
    case 9766:  /* *avx512f_gathersiv4df */
    case 9765:  /* *avx512f_gathersiv4di */
    case 9764:  /* *avx512f_gathersiv8sf */
    case 9763:  /* *avx512f_gathersiv8si */
    case 9762:  /* *avx512f_gathersiv8df */
    case 9761:  /* *avx512f_gathersiv8di */
    case 9760:  /* *avx512f_gathersiv16sf */
    case 9759:  /* *avx512f_gathersiv16si */
    case 9758:  /* *avx512f_gathersiv2df */
    case 9757:  /* *avx512f_gathersiv2di */
    case 9756:  /* *avx512f_gathersiv4sf */
    case 9755:  /* *avx512f_gathersiv4si */
    case 9754:  /* *avx512f_gathersiv4df */
    case 9753:  /* *avx512f_gathersiv4di */
    case 9752:  /* *avx512f_gathersiv8sf */
    case 9751:  /* *avx512f_gathersiv8si */
    case 9750:  /* *avx512f_gathersiv8df */
    case 9749:  /* *avx512f_gathersiv8di */
    case 9748:  /* *avx512f_gathersiv16sf */
    case 9747:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 9746:  /* *avx2_gatherdiv8sf_4 */
    case 9745:  /* *avx2_gatherdiv8si_4 */
    case 9744:  /* *avx2_gatherdiv8sf_4 */
    case 9743:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 9742:  /* *avx2_gatherdiv8sf_3 */
    case 9741:  /* *avx2_gatherdiv8si_3 */
    case 9740:  /* *avx2_gatherdiv8sf_3 */
    case 9739:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 9738:  /* *avx2_gatherdiv8sf_2 */
    case 9737:  /* *avx2_gatherdiv8si_2 */
    case 9736:  /* *avx2_gatherdiv4sf_2 */
    case 9735:  /* *avx2_gatherdiv4si_2 */
    case 9734:  /* *avx2_gatherdiv4df_2 */
    case 9733:  /* *avx2_gatherdiv4di_2 */
    case 9732:  /* *avx2_gatherdiv2df_2 */
    case 9731:  /* *avx2_gatherdiv2di_2 */
    case 9730:  /* *avx2_gatherdiv8sf_2 */
    case 9729:  /* *avx2_gatherdiv8si_2 */
    case 9728:  /* *avx2_gatherdiv4sf_2 */
    case 9727:  /* *avx2_gatherdiv4si_2 */
    case 9726:  /* *avx2_gatherdiv4df_2 */
    case 9725:  /* *avx2_gatherdiv4di_2 */
    case 9724:  /* *avx2_gatherdiv2df_2 */
    case 9723:  /* *avx2_gatherdiv2di_2 */
    case 9706:  /* *avx2_gathersiv8sf_2 */
    case 9705:  /* *avx2_gathersiv8si_2 */
    case 9704:  /* *avx2_gathersiv4sf_2 */
    case 9703:  /* *avx2_gathersiv4si_2 */
    case 9702:  /* *avx2_gathersiv4df_2 */
    case 9701:  /* *avx2_gathersiv4di_2 */
    case 9700:  /* *avx2_gathersiv2df_2 */
    case 9699:  /* *avx2_gathersiv2di_2 */
    case 9698:  /* *avx2_gathersiv8sf_2 */
    case 9697:  /* *avx2_gathersiv8si_2 */
    case 9696:  /* *avx2_gathersiv4sf_2 */
    case 9695:  /* *avx2_gathersiv4si_2 */
    case 9694:  /* *avx2_gathersiv4df_2 */
    case 9693:  /* *avx2_gathersiv4di_2 */
    case 9692:  /* *avx2_gathersiv2df_2 */
    case 9691:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 9722:  /* *avx2_gatherdiv8sf */
    case 9721:  /* *avx2_gatherdiv8si */
    case 9720:  /* *avx2_gatherdiv4sf */
    case 9719:  /* *avx2_gatherdiv4si */
    case 9718:  /* *avx2_gatherdiv4df */
    case 9717:  /* *avx2_gatherdiv4di */
    case 9716:  /* *avx2_gatherdiv2df */
    case 9715:  /* *avx2_gatherdiv2di */
    case 9714:  /* *avx2_gatherdiv8sf */
    case 9713:  /* *avx2_gatherdiv8si */
    case 9712:  /* *avx2_gatherdiv4sf */
    case 9711:  /* *avx2_gatherdiv4si */
    case 9710:  /* *avx2_gatherdiv4df */
    case 9709:  /* *avx2_gatherdiv4di */
    case 9708:  /* *avx2_gatherdiv2df */
    case 9707:  /* *avx2_gatherdiv2di */
    case 9690:  /* *avx2_gathersiv8sf */
    case 9689:  /* *avx2_gathersiv8si */
    case 9688:  /* *avx2_gathersiv4sf */
    case 9687:  /* *avx2_gathersiv4si */
    case 9686:  /* *avx2_gathersiv4df */
    case 9685:  /* *avx2_gathersiv4di */
    case 9684:  /* *avx2_gathersiv2df */
    case 9683:  /* *avx2_gathersiv2di */
    case 9682:  /* *avx2_gathersiv8sf */
    case 9681:  /* *avx2_gathersiv8si */
    case 9680:  /* *avx2_gathersiv4sf */
    case 9679:  /* *avx2_gathersiv4si */
    case 9678:  /* *avx2_gathersiv4df */
    case 9677:  /* *avx2_gathersiv4di */
    case 9676:  /* *avx2_gathersiv2df */
    case 9675:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 9674:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 9668:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 9663:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9651:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9926:  /* compressstorev8hi_mask */
    case 9925:  /* compressstorev16hi_mask */
    case 9924:  /* compressstorev32hi_mask */
    case 9923:  /* compressstorev32qi_mask */
    case 9922:  /* compressstorev16qi_mask */
    case 9921:  /* compressstorev64qi_mask */
    case 9920:  /* avx512vl_compressstorev2df_mask */
    case 9919:  /* avx512vl_compressstorev2di_mask */
    case 9918:  /* avx512vl_compressstorev4sf_mask */
    case 9917:  /* avx512vl_compressstorev4si_mask */
    case 9916:  /* avx512vl_compressstorev4df_mask */
    case 9915:  /* avx512vl_compressstorev4di_mask */
    case 9914:  /* avx512vl_compressstorev8sf_mask */
    case 9913:  /* avx512vl_compressstorev8si_mask */
    case 9912:  /* avx512f_compressstorev8df_mask */
    case 9911:  /* avx512f_compressstorev8di_mask */
    case 9910:  /* avx512f_compressstorev16sf_mask */
    case 9909:  /* avx512f_compressstorev16si_mask */
    case 9552:  /* *avx512vl_storev2df_mask_1 */
    case 9551:  /* *avx512vl_storev4df_mask_1 */
    case 9550:  /* *avx512f_storev8df_mask_1 */
    case 9549:  /* *avx512vl_storev4sf_mask_1 */
    case 9548:  /* *avx512vl_storev8sf_mask_1 */
    case 9547:  /* *avx512f_storev16sf_mask_1 */
    case 9546:  /* *avx512vl_storev8bf_mask_1 */
    case 9545:  /* *avx512vl_storev16bf_mask_1 */
    case 9544:  /* *avx512bw_storev32bf_mask_1 */
    case 9543:  /* *avx512fp16_storev8hf_mask_1 */
    case 9542:  /* *avx512vl_storev16hf_mask_1 */
    case 9541:  /* *avx512bw_storev32hf_mask_1 */
    case 9540:  /* *avx512vl_storev2di_mask_1 */
    case 9539:  /* *avx512vl_storev4di_mask_1 */
    case 9538:  /* *avx512f_storev8di_mask_1 */
    case 9537:  /* *avx512vl_storev4si_mask_1 */
    case 9536:  /* *avx512vl_storev8si_mask_1 */
    case 9535:  /* *avx512f_storev16si_mask_1 */
    case 9534:  /* *avx512vl_storev8hi_mask_1 */
    case 9533:  /* *avx512vl_storev16hi_mask_1 */
    case 9532:  /* *avx512bw_storev32hi_mask_1 */
    case 9531:  /* *avx512vl_storev16qi_mask_1 */
    case 9530:  /* *avx512vl_storev32qi_mask_1 */
    case 9529:  /* *avx512bw_storev64qi_mask_1 */
    case 9528:  /* avx512vl_storev8bf_mask */
    case 9527:  /* avx512vl_storev16bf_mask */
    case 9526:  /* avx512bw_storev32bf_mask */
    case 9525:  /* avx512fp16_storev8hf_mask */
    case 9524:  /* avx512vl_storev16hf_mask */
    case 9523:  /* avx512bw_storev32hf_mask */
    case 9522:  /* avx512vl_storev8hi_mask */
    case 9521:  /* avx512vl_storev16hi_mask */
    case 9520:  /* avx512bw_storev32hi_mask */
    case 9519:  /* avx512vl_storev32qi_mask */
    case 9518:  /* avx512vl_storev16qi_mask */
    case 9517:  /* avx512bw_storev64qi_mask */
    case 9516:  /* avx512vl_storev2df_mask */
    case 9515:  /* avx512vl_storev4df_mask */
    case 9514:  /* avx512f_storev8df_mask */
    case 9513:  /* avx512vl_storev4sf_mask */
    case 9512:  /* avx512vl_storev8sf_mask */
    case 9511:  /* avx512f_storev16sf_mask */
    case 9510:  /* avx512vl_storev2di_mask */
    case 9509:  /* avx512vl_storev4di_mask */
    case 9508:  /* avx512f_storev8di_mask */
    case 9507:  /* avx512vl_storev4si_mask */
    case 9506:  /* avx512vl_storev8si_mask */
    case 9505:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 9504:  /* avx2_maskstored */
    case 9503:  /* avx2_maskstored256 */
    case 9502:  /* avx_maskstorepd256 */
    case 9501:  /* avx_maskstoreps256 */
    case 9500:  /* avx2_maskstoreq */
    case 9499:  /* avx2_maskstoreq256 */
    case 9498:  /* avx_maskstorepd */
    case 9497:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 9496:  /* avx2_maskloadd */
    case 9495:  /* avx2_maskloadd256 */
    case 9494:  /* avx_maskloadpd256 */
    case 9493:  /* avx_maskloadps256 */
    case 9492:  /* avx2_maskloadq */
    case 9491:  /* avx2_maskloadq256 */
    case 9490:  /* avx_maskloadpd */
    case 9489:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 9450:  /* avx512vl_vpermt2varv16qi3_mask */
    case 9449:  /* avx512vl_vpermt2varv32qi3_mask */
    case 9448:  /* avx512bw_vpermt2varv64qi3_mask */
    case 9447:  /* avx512vl_vpermt2varv8hi3_mask */
    case 9446:  /* avx512vl_vpermt2varv16hi3_mask */
    case 9445:  /* avx512bw_vpermt2varv32hi3_mask */
    case 9444:  /* avx512vl_vpermt2varv2df3_mask */
    case 9443:  /* avx512vl_vpermt2varv2di3_mask */
    case 9442:  /* avx512vl_vpermt2varv4sf3_mask */
    case 9441:  /* avx512vl_vpermt2varv4si3_mask */
    case 9440:  /* avx512vl_vpermt2varv4df3_mask */
    case 9439:  /* avx512vl_vpermt2varv4di3_mask */
    case 9438:  /* avx512vl_vpermt2varv8sf3_mask */
    case 9437:  /* avx512vl_vpermt2varv8si3_mask */
    case 9436:  /* avx512f_vpermt2varv8df3_mask */
    case 9435:  /* avx512f_vpermt2varv8di3_mask */
    case 9434:  /* avx512f_vpermt2varv16sf3_mask */
    case 9433:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 9384:  /* *avx512vl_vpermi2varv2df3_mask */
    case 9383:  /* *avx512vl_vpermi2varv4df3_mask */
    case 9382:  /* *avx512f_vpermi2varv8df3_mask */
    case 9381:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 9380:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 9379:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 9378:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 9377:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 9376:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 9375:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 9374:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 9373:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 9372:  /* *avx512vl_vpermi2varv2di3_mask */
    case 9371:  /* *avx512vl_vpermi2varv4di3_mask */
    case 9370:  /* *avx512vl_vpermi2varv4si3_mask */
    case 9369:  /* *avx512vl_vpermi2varv8si3_mask */
    case 9368:  /* *avx512f_vpermi2varv8di3_mask */
    case 9367:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 9300:  /* avx2_lddqu_inserti_to_bcasti */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9322:  /* avx_vbroadcastf128_v16bf */
    case 9321:  /* avx_vbroadcastf128_v16hf */
    case 9320:  /* avx_vbroadcastf128_v4df */
    case 9319:  /* avx_vbroadcastf128_v8sf */
    case 9318:  /* avx_vbroadcastf128_v4di */
    case 9317:  /* avx_vbroadcastf128_v8si */
    case 9316:  /* avx_vbroadcastf128_v16hi */
    case 9315:  /* avx_vbroadcastf128_v32qi */
    case 9299:  /* avx2_vbroadcasti128_v4di */
    case 9298:  /* avx2_vbroadcasti128_v8si */
    case 9297:  /* avx2_vbroadcasti128_v16hi */
    case 9296:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9172:  /* *avx_vpermilpv2df_mask */
    case 9170:  /* *avx_vpermilpv4df_mask */
    case 9168:  /* *avx512f_vpermilpv8df_mask */
    case 9166:  /* *avx_vpermilpv4sf_mask */
    case 9164:  /* *avx_vpermilpv8sf_mask */
    case 9162:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9464:  /* *ssse3_palignrv2df_perm */
    case 9463:  /* *ssse3_palignrv4sf_perm */
    case 9462:  /* *ssse3_palignrv2di_perm */
    case 9461:  /* *ssse3_palignrv4si_perm */
    case 9460:  /* *ssse3_palignrv8bf_perm */
    case 9459:  /* *ssse3_palignrv8hf_perm */
    case 9458:  /* *ssse3_palignrv8hi_perm */
    case 9457:  /* *ssse3_palignrv16qi_perm */
    case 9171:  /* *avx_vpermilpv2df */
    case 9169:  /* *avx_vpermilpv4df */
    case 9167:  /* *avx512f_vpermilpv8df */
    case 9165:  /* *avx_vpermilpv4sf */
    case 9163:  /* *avx_vpermilpv8sf */
    case 9161:  /* *avx512f_vpermilpv16sf */
    case 9160:  /* *avx_vperm_broadcast_v4df */
    case 9159:  /* *avx_vperm_broadcast_v8sf */
    case 9158:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 9092:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 9076:  /* xop_maskcmp_uns2v2di3 */
    case 9075:  /* xop_maskcmp_uns2v4si3 */
    case 9074:  /* xop_maskcmp_uns2v8hi3 */
    case 9073:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 9055:  /* xop_shlv2di3 */
    case 9054:  /* xop_shlv4si3 */
    case 9053:  /* xop_shlv8hi3 */
    case 9052:  /* xop_shlv16qi3 */
    case 9051:  /* xop_shav2di3 */
    case 9050:  /* xop_shav4si3 */
    case 9049:  /* xop_shav8hi3 */
    case 9048:  /* xop_shav16qi3 */
    case 9047:  /* xop_vrotlv2di3 */
    case 9046:  /* xop_vrotlv4si3 */
    case 9045:  /* xop_vrotlv8hi3 */
    case 9044:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 9035:  /* xop_pperm_pack_v8hi_v16qi */
    case 9034:  /* xop_pperm_pack_v4si_v8hi */
    case 9033:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 9022:  /* xop_phaddubq */
    case 9021:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 9026:  /* xop_phadduwq */
    case 9025:  /* xop_phaddwq */
    case 9020:  /* xop_phaddubd */
    case 9019:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 9031:  /* xop_phsubdq */
    case 9030:  /* xop_phsubwd */
    case 9029:  /* xop_phsubbw */
    case 9028:  /* xop_phaddudq */
    case 9027:  /* xop_phadddq */
    case 9024:  /* xop_phadduwd */
    case 9023:  /* xop_phaddwd */
    case 9018:  /* xop_phaddubw */
    case 9017:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9000:  /* xop_pmadcsswd */
    case 8999:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 8998:  /* xop_pmacsswd */
    case 8997:  /* xop_pmacswd */
    case 8996:  /* xop_pmacssdqh */
    case 8995:  /* xop_pmacsdqh */
    case 8994:  /* xop_pmacssdql */
    case 8993:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8988:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 8987:  /* sse4_2_pcmpistrm */
    case 8986:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 8985:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 8984:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 8983:  /* sse4_2_pcmpestrm */
    case 8982:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 8981:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 8970:  /* *ptestv4df_and */
    case 8969:  /* *ptestv8sf_and */
    case 8968:  /* *ptestv2ti_and */
    case 8967:  /* *ptestv4di_and */
    case 8966:  /* *ptestv8si_and */
    case 8965:  /* *ptestv16hi_and */
    case 8964:  /* *ptestv32qi_and */
    case 8963:  /* *ptestv2df_and */
    case 8962:  /* *ptestv4sf_and */
    case 8961:  /* *ptestv1ti_and */
    case 8960:  /* *ptestv2di_and */
    case 8959:  /* *ptestv4si_and */
    case 8958:  /* *ptestv8hi_and */
    case 8957:  /* *ptestv16qi_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 8937:  /* *sse4_1_zero_extendv2siv2di2_4 */
    case 8923:  /* *avx2_zero_extendv4siv4di2_2 */
    case 8917:  /* *avx512f_zero_extendv8siv8di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8883:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 8882:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 8881:  /* *sse4_1_zero_extendv2qiv2di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 8911:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 8909:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 8872:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 8870:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 8816:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 8814:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8910:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 8908:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 8871:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 8869:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 8815:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 8813:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 8935:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 8933:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 8899:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 8897:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 8860:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 8858:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 8844:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 8842:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 8804:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 8802:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 8784:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 8782:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8934:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 8932:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 8898:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 8896:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 8859:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 8857:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 8843:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 8841:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 8803:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 8801:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 8783:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 8781:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 8848:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 8847:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 8846:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 8832:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 8831:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 8830:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 8824:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 8823:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 8822:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 8788:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 8787:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 8786:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 8772:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 8771:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 8770:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 8764:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 8763:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 8762:  /* *avx2_zero_extendv16qiv16hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 9649:  /* *vec_concatv2df_0_1 */
    case 9648:  /* *vec_concatv4df_0_1 */
    case 9647:  /* *vec_concatv8df_0_1 */
    case 9646:  /* *vec_concatv4sf_0_1 */
    case 9645:  /* *vec_concatv8sf_0_1 */
    case 9644:  /* *vec_concatv16sf_0_1 */
    case 9643:  /* *vec_concatv8bf_0_1 */
    case 9642:  /* *vec_concatv16bf_0_1 */
    case 9641:  /* *vec_concatv32bf_0_1 */
    case 9640:  /* *vec_concatv8hf_0_1 */
    case 9639:  /* *vec_concatv16hf_0_1 */
    case 9638:  /* *vec_concatv32hf_0_1 */
    case 9637:  /* *vec_concatv2di_0_1 */
    case 9636:  /* *vec_concatv4di_0_1 */
    case 9635:  /* *vec_concatv8di_0_1 */
    case 9634:  /* *vec_concatv4si_0_1 */
    case 9633:  /* *vec_concatv8si_0_1 */
    case 9632:  /* *vec_concatv16si_0_1 */
    case 9631:  /* *vec_concatv8hi_0_1 */
    case 9630:  /* *vec_concatv16hi_0_1 */
    case 9629:  /* *vec_concatv32hi_0_1 */
    case 9628:  /* *vec_concatv16qi_0_1 */
    case 9627:  /* *vec_concatv32qi_0_1 */
    case 9626:  /* *vec_concatv64qi_0_1 */
    case 9456:  /* *avx_vperm2f128v4df_nozero */
    case 9455:  /* *avx_vperm2f128v8sf_nozero */
    case 9454:  /* *avx_vperm2f128v8si_nozero */
    case 8936:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 8922:  /* *avx2_zero_extendv4siv4di2_1 */
    case 8916:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 8845:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 8829:  /* avx2_zero_extendv8hiv8si2_1 */
    case 8821:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 8785:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 8769:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 8761:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8747:  /* *sse4_1_pblendvb_gt_subreg_not */
    case 8746:  /* *avx2_pblendvb_gt_subreg_not */
    case 8745:  /* *sse4_1_pblendvb_lt_subreg_not */
    case 8744:  /* *avx2_pblendvb_lt_subreg_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 8716:  /* *avx_blendvpd256_not_gtint */
    case 8715:  /* *avx_blendvps256_not_gtint */
    case 8714:  /* *sse4_1_blendvpd_not_gtint */
    case 8713:  /* *sse4_1_blendvps_not_gtint */
    case 8712:  /* *avx_blendvpd256_not_ltint */
    case 8711:  /* *avx_blendvps256_not_ltint */
    case 8710:  /* *sse4_1_blendvpd_not_ltint */
    case 8709:  /* *sse4_1_blendvps_not_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 8708:  /* *avx_blendvpd256_gtint */
    case 8707:  /* *avx_blendvps256_gtint */
    case 8706:  /* *sse4_1_blendvpd_gtint */
    case 8705:  /* *sse4_1_blendvps_gtint */
    case 8704:  /* *avx_blendvpd256_ltint */
    case 8703:  /* *avx_blendvps256_ltint */
    case 8702:  /* *sse4_1_blendvpd_ltint */
    case 8701:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 8634:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 8625:  /* *ssse3_pmulhrswv8hi3_mask */
    case 8623:  /* *avx2_pmulhrswv16hi3_mask */
    case 8621:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8627:  /* *smulhrsv2hi3 */
    case 8626:  /* *ssse3_pmulhrswv4hi3 */
    case 8624:  /* *ssse3_pmulhrswv8hi3 */
    case 8622:  /* *avx2_pmulhrswv16hi3 */
    case 8620:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 8617:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8616:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 8608:  /* ssse3_phsubdv2si3 */
    case 8607:  /* ssse3_phadddv2si3 */
    case 8606:  /* ssse3_phsubdv4si3 */
    case 8605:  /* ssse3_phadddv4si3 */
    case 8604:  /* avx2_phsubdv8si3 */
    case 8603:  /* avx2_phadddv8si3 */
    case 8602:  /* ssse3_phsubswv4hi3 */
    case 8601:  /* ssse3_phsubwv4hi3 */
    case 8600:  /* ssse3_phaddswv4hi3 */
    case 8599:  /* ssse3_phaddwv4hi3 */
    case 8598:  /* ssse3_phsubswv8hi3 */
    case 8597:  /* ssse3_phsubwv8hi3 */
    case 8596:  /* ssse3_phaddswv8hi3 */
    case 8595:  /* ssse3_phaddwv8hi3 */
    case 8594:  /* avx2_phsubswv16hi3 */
    case 8593:  /* avx2_phsubwv16hi3 */
    case 8592:  /* avx2_phaddswv16hi3 */
    case 8591:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 8582:  /* *pmovsk_ptest_v16qi_avx512 */
    case 8581:  /* *pmovsk_ptest_v32qi_avx512 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 2), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 2), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 8580:  /* *pmovsk_mask_cmp_v16qi_avx512 */
    case 8579:  /* *pmovsk_mask_cmp_v32qi_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 8578:  /* *pmovsk_mask_v32qi_avx512 */
    case 8577:  /* *pmovsk_kmask_v16qi_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 8576:  /* *sse2_pmovmskb_ext_lt_avx512 */
    case 8575:  /* *sse2_pmovmskb_ext_lt_avx512 */
    case 8573:  /* *sse2_pmovmskb_zext_lt_avx512 */
    case 8572:  /* *avx2_pmovmskb_zext_lt_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 2), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 2), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 8569:  /* *sse2_pmovmskb_lt_avx512 */
    case 8568:  /* *avx2_pmovmskb_lt_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 8565:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 8559:  /* *sse2_movmskpd_uext_shift */
    case 8558:  /* *sse2_movmskpd_ext_shift */
    case 8557:  /* *avx_movmskpd256_uext_shift */
    case 8556:  /* *avx_movmskpd256_ext_shift */
    case 8555:  /* *sse_movmskps_uext_shift */
    case 8554:  /* *sse_movmskps_ext_shift */
    case 8553:  /* *avx_movmskps256_uext_shift */
    case 8552:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 8551:  /* *sse2_movmskpd_shift */
    case 8550:  /* *avx_movmskpd256_shift */
    case 8549:  /* *sse_movmskps_shift */
    case 8548:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 8547:  /* *sse2_movmskpd_uext_lt_avx512 */
    case 8546:  /* *sse2_movmskpd_ext_lt_avx512 */
    case 8545:  /* *avx_movmskpd256_uext_lt_avx512 */
    case 8544:  /* *avx_movmskpd256_ext_lt_avx512 */
    case 8543:  /* *sse_movmskps_uext_lt_avx512 */
    case 8542:  /* *sse_movmskps_ext_lt_avx512 */
    case 8541:  /* *avx_movmskps256_uext_lt_avx512 */
    case 8540:  /* *avx_movmskps256_ext_lt_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 2), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 2), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 8574:  /* *sse2_pmovmskb_ext_lt */
    case 8571:  /* *sse2_pmovmskb_zext_lt */
    case 8570:  /* *avx2_pmovmskb_zext_lt */
    case 8539:  /* *sse2_movmskpd_uext_lt */
    case 8538:  /* *sse2_movmskpd_ext_lt */
    case 8537:  /* *avx_movmskpd256_uext_lt */
    case 8536:  /* *avx_movmskpd256_ext_lt */
    case 8535:  /* *sse_movmskps_uext_lt */
    case 8534:  /* *sse_movmskps_ext_lt */
    case 8533:  /* *avx_movmskps256_uext_lt */
    case 8532:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 8531:  /* *sse2_movmskpd_lt_avx512 */
    case 8530:  /* *avx_movmskpd256_lt_avx512 */
    case 8529:  /* *sse_movmskps_lt_avx512 */
    case 8528:  /* *avx_movmskps256_lt_avx512 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 8508:  /* *sse2_uavgv8hi3_mask */
    case 8506:  /* *avx2_uavgv16hi3_mask */
    case 8504:  /* *avx512bw_uavgv32hi3_mask */
    case 8502:  /* *sse2_uavgv16qi3_mask */
    case 8500:  /* *avx2_uavgv32qi3_mask */
    case 8498:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 8507:  /* *sse2_uavgv8hi3 */
    case 8505:  /* *avx2_uavgv16hi3 */
    case 8503:  /* *avx512bw_uavgv32hi3 */
    case 8501:  /* *sse2_uavgv16qi3 */
    case 8499:  /* *avx2_uavgv32qi3 */
    case 8497:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 8489:  /* *vec_concatv8hi_permt2 */
    case 8488:  /* *vec_concatv16qi_permt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 8458:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8457:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 8456:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8455:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 8450:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8449:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 8442:  /* avx512f_pshufd_1_mask */
    case 8440:  /* *avx512f_shuf_i32x4_1_mask_1 */
    case 8438:  /* *avx512f_shuf_f32x4_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8441:  /* avx512f_pshufd_1 */
    case 8439:  /* *avx512f_shuf_i32x4_1_1 */
    case 8437:  /* *avx512f_shuf_f32x4_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 9180:  /* avx512f_permv8di_1_mask */
    case 9178:  /* avx512f_permv8df_1_mask */
    case 8444:  /* avx2_pshufd_1_mask */
    case 8428:  /* *avx512f_shuf_i64x2_1_mask_1 */
    case 8426:  /* *avx512f_shuf_f64x2_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9179:  /* avx512f_permv8di_1 */
    case 9177:  /* avx512f_permv8df_1 */
    case 8443:  /* avx2_pshufd_1 */
    case 8427:  /* *avx512f_shuf_i64x2_1_1 */
    case 8425:  /* *avx512f_shuf_f64x2_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 9476:  /* vec_set_lo_v8sf_mask */
    case 9474:  /* vec_set_lo_v8si_mask */
    case 9468:  /* vec_set_lo_v4df_mask */
    case 9466:  /* vec_set_lo_v4di_mask */
    case 8412:  /* vec_set_lo_v8di_mask */
    case 8410:  /* vec_set_lo_v8df_mask */
    case 8404:  /* vec_set_lo_v16si_mask */
    case 8402:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8400:  /* avx512f_vinserti32x4_1_mask */
    case 8398:  /* avx512f_vinsertf32x4_1_mask */
    case 8396:  /* avx512dq_vinserti64x2_1_mask */
    case 8394:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8399:  /* *avx512f_vinserti32x4_1 */
    case 8397:  /* *avx512f_vinsertf32x4_1 */
    case 8395:  /* *avx512dq_vinserti64x2_1 */
    case 8393:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8316:  /* avx512bw_packssdw_mask */
    case 8314:  /* avx2_packssdw_mask */
    case 8310:  /* avx512bw_packsswb_mask */
    case 8308:  /* avx2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8315:  /* avx512bw_packssdw */
    case 8313:  /* avx2_packssdw */
    case 8309:  /* avx512bw_packsswb */
    case 8307:  /* avx2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 8312:  /* sse2_packssdw_mask */
    case 8306:  /* sse2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8304:  /* *avx512vl_testnmv2di3_zext_mask */
    case 8303:  /* *avx512vl_testnmv2di3_zext_mask */
    case 8302:  /* *avx512vl_testnmv2di3_zext_mask */
    case 8301:  /* *avx512vl_testnmv4di3_zext_mask */
    case 8300:  /* *avx512vl_testnmv4di3_zext_mask */
    case 8299:  /* *avx512vl_testnmv4di3_zext_mask */
    case 8298:  /* *avx512f_testnmv8di3_zext_mask */
    case 8297:  /* *avx512f_testnmv8di3_zext_mask */
    case 8296:  /* *avx512f_testnmv8di3_zext_mask */
    case 8295:  /* *avx512vl_testnmv4si3_zext_mask */
    case 8294:  /* *avx512vl_testnmv4si3_zext_mask */
    case 8293:  /* *avx512vl_testnmv4si3_zext_mask */
    case 8292:  /* *avx512vl_testnmv8si3_zext_mask */
    case 8291:  /* *avx512vl_testnmv8si3_zext_mask */
    case 8290:  /* *avx512vl_testnmv8si3_zext_mask */
    case 8289:  /* *avx512f_testnmv16si3_zext_mask */
    case 8288:  /* *avx512f_testnmv16si3_zext_mask */
    case 8287:  /* *avx512f_testnmv16si3_zext_mask */
    case 8286:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 8285:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 8284:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 8283:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 8282:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 8281:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 8280:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 8279:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 8278:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 8277:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 8276:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 8275:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 8274:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 8273:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 8272:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 8271:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 8270:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 8269:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 8232:  /* *avx512vl_testmv2di3_zext_mask */
    case 8231:  /* *avx512vl_testmv2di3_zext_mask */
    case 8230:  /* *avx512vl_testmv2di3_zext_mask */
    case 8229:  /* *avx512vl_testmv4di3_zext_mask */
    case 8228:  /* *avx512vl_testmv4di3_zext_mask */
    case 8227:  /* *avx512vl_testmv4di3_zext_mask */
    case 8226:  /* *avx512f_testmv8di3_zext_mask */
    case 8225:  /* *avx512f_testmv8di3_zext_mask */
    case 8224:  /* *avx512f_testmv8di3_zext_mask */
    case 8223:  /* *avx512vl_testmv4si3_zext_mask */
    case 8222:  /* *avx512vl_testmv4si3_zext_mask */
    case 8221:  /* *avx512vl_testmv4si3_zext_mask */
    case 8220:  /* *avx512vl_testmv8si3_zext_mask */
    case 8219:  /* *avx512vl_testmv8si3_zext_mask */
    case 8218:  /* *avx512vl_testmv8si3_zext_mask */
    case 8217:  /* *avx512f_testmv16si3_zext_mask */
    case 8216:  /* *avx512f_testmv16si3_zext_mask */
    case 8215:  /* *avx512f_testmv16si3_zext_mask */
    case 8214:  /* *avx512vl_testmv8hi3_zext_mask */
    case 8213:  /* *avx512vl_testmv8hi3_zext_mask */
    case 8212:  /* *avx512vl_testmv8hi3_zext_mask */
    case 8211:  /* *avx512vl_testmv16hi3_zext_mask */
    case 8210:  /* *avx512vl_testmv16hi3_zext_mask */
    case 8209:  /* *avx512vl_testmv16hi3_zext_mask */
    case 8208:  /* *avx512bw_testmv32hi3_zext_mask */
    case 8207:  /* *avx512bw_testmv32hi3_zext_mask */
    case 8206:  /* *avx512bw_testmv32hi3_zext_mask */
    case 8205:  /* *avx512vl_testmv16qi3_zext_mask */
    case 8204:  /* *avx512vl_testmv16qi3_zext_mask */
    case 8203:  /* *avx512vl_testmv16qi3_zext_mask */
    case 8202:  /* *avx512vl_testmv32qi3_zext_mask */
    case 8201:  /* *avx512vl_testmv32qi3_zext_mask */
    case 8200:  /* *avx512vl_testmv32qi3_zext_mask */
    case 8199:  /* *avx512bw_testmv64qi3_zext_mask */
    case 8198:  /* *avx512bw_testmv64qi3_zext_mask */
    case 8197:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 7989:  /* *one_cmplv2di2_pternlog_false_dep */
    case 7988:  /* *one_cmplv4di2_pternlog_false_dep */
    case 7987:  /* *one_cmplv4si2_pternlog_false_dep */
    case 7986:  /* *one_cmplv8si2_pternlog_false_dep */
    case 7985:  /* *one_cmplv8hi2_pternlog_false_dep */
    case 7984:  /* *one_cmplv16hi2_pternlog_false_dep */
    case 7983:  /* *one_cmplv32hi2_pternlog_false_dep */
    case 7982:  /* *one_cmplv16qi2_pternlog_false_dep */
    case 7981:  /* *one_cmplv32qi2_pternlog_false_dep */
    case 7980:  /* *one_cmplv64qi2_pternlog_false_dep */
    case 7979:  /* *one_cmplv8di2_pternlog_false_dep */
    case 7978:  /* *one_cmplv16si2_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 7915:  /* *avx2_pcmpv16qi3_5 */
    case 7914:  /* *avx2_pcmpv32qi3_5 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 7646:  /* *avx512_ashrv2di3_1 */
    case 7645:  /* *avx512_ashrv4di3_1 */
    case 7644:  /* *avx512_ashrv8di3_1 */
    case 7643:  /* *avx512_ashrv4si3_1 */
    case 7642:  /* *avx512_ashrv8si3_1 */
    case 7641:  /* *avx512_ashrv16si3_1 */
    case 7640:  /* *avx512_ashrv8hi3_1 */
    case 7639:  /* *avx512_ashrv16hi3_1 */
    case 7638:  /* *avx512_ashrv32hi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      break;

    case 7591:  /* *sse4_1_mulv2siv2di3_mask */
    case 7589:  /* *vec_widen_smult_even_v8si_mask */
    case 7587:  /* *vec_widen_smult_even_v16si_mask */
    case 7585:  /* *vec_widen_umult_even_v4si_mask */
    case 7583:  /* *vec_widen_umult_even_v8si_mask */
    case 7581:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7579:  /* *umulv8hi3_highpart_mask */
    case 7577:  /* *smulv8hi3_highpart_mask */
    case 7575:  /* *umulv16hi3_highpart_mask */
    case 7573:  /* *smulv16hi3_highpart_mask */
    case 7571:  /* *umulv32hi3_highpart_mask */
    case 7569:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7465:  /* avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 7464:  /* avx512f_truncatev8div16qi2_mask_store_1 */
    case 7463:  /* avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 7447:  /* avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 7446:  /* avx512vl_truncatev2div2si2_mask_store_1 */
    case 7445:  /* avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 7428:  /* avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 7427:  /* avx512vl_truncatev2div2hi2_mask_store_1 */
    case 7426:  /* avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 7413:  /* avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 7412:  /* avx512vl_truncatev4div4hi2_mask_store_1 */
    case 7411:  /* avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 7410:  /* avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 7409:  /* avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 7408:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 7373:  /* avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 7372:  /* avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 7371:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 7370:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 7369:  /* avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 7368:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 7343:  /* avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 7342:  /* avx512vl_truncatev4div4qi2_mask_store_1 */
    case 7341:  /* avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 7340:  /* avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 7339:  /* avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 7338:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 7313:  /* avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 7312:  /* avx512vl_truncatev2div2qi2_mask_store_1 */
    case 7311:  /* avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 7383:  /* *avx512f_pshufb_truncv4siv4hi_1 */
    case 7298:  /* *avx512f_pshufb_truncv8hiv8qi_1 */
    case 7242:  /* *avx512f_permvar_truncv8siv8hi_1_hf */
    case 7240:  /* *avx512bw_permvar_truncv16siv16hi_1_hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 7199:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8436:  /* avx512f_shuf_i32x4_1_mask */
    case 8434:  /* avx512f_shuf_f32x4_1_mask */
    case 7194:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8435:  /* avx512f_shuf_i32x4_1 */
    case 8433:  /* avx512f_shuf_f32x4_1 */
    case 7193:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7192:  /* *avx512f_rndscalev2df_round */
    case 7190:  /* *avx512f_rndscalev4sf_round */
    case 7188:  /* *avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8980:  /* *sse4_1_roundsd */
    case 8979:  /* *sse4_1_roundss */
    case 8978:  /* *sse4_1_roundsh */
    case 7191:  /* *avx512f_rndscalev2df */
    case 7189:  /* *avx512f_rndscalev4sf */
    case 7187:  /* *avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 7186:  /* avx512f_rndscalev2df_mask_round */
    case 7182:  /* avx512f_rndscalev4sf_mask_round */
    case 7178:  /* avx512f_rndscalev8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7185:  /* avx512f_rndscalev2df_round */
    case 7181:  /* avx512f_rndscalev4sf_round */
    case 7177:  /* avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7184:  /* avx512f_rndscalev2df_mask */
    case 7180:  /* avx512f_rndscalev4sf_mask */
    case 7176:  /* avx512f_rndscalev8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 8977:  /* sse4_1_roundsd */
    case 8976:  /* sse4_1_roundss */
    case 8975:  /* sse4_1_roundsh */
    case 7183:  /* avx512f_rndscalev2df */
    case 7179:  /* avx512f_rndscalev4sf */
    case 7175:  /* avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 7144:  /* avx512f_sfixupimmv2df_mask_round */
    case 7142:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 7143:  /* avx512f_sfixupimmv2df_mask */
    case 7141:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 7140:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 7136:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7139:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 7135:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7138:  /* avx512f_sfixupimmv2df_round */
    case 7134:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7137:  /* avx512f_sfixupimmv2df */
    case 7133:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7131:  /* avx512vl_fixupimmv4df_mask_round */
    case 7129:  /* avx512f_fixupimmv8df_mask_round */
    case 7126:  /* avx512vl_fixupimmv8sf_mask_round */
    case 7124:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7120:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 7116:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 7110:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 7106:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7118:  /* avx512vl_fixupimmv4df_round */
    case 7114:  /* avx512f_fixupimmv8df_round */
    case 7108:  /* avx512vl_fixupimmv8sf_round */
    case 7104:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7132:  /* avx512vl_fixupimmv2df_mask */
    case 7130:  /* avx512vl_fixupimmv4df_mask */
    case 7128:  /* avx512f_fixupimmv8df_mask */
    case 7127:  /* avx512vl_fixupimmv4sf_mask */
    case 7125:  /* avx512vl_fixupimmv8sf_mask */
    case 7123:  /* avx512f_fixupimmv16sf_mask */
    case 7040:  /* *avx512vl_vternlogv2di_mask */
    case 7039:  /* *avx512vl_vternlogv4di_mask */
    case 7038:  /* *avx512f_vternlogv8di_mask */
    case 7037:  /* *avx512vl_vternlogv4si_mask */
    case 7036:  /* *avx512vl_vternlogv8si_mask */
    case 7035:  /* *avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6170:  /* *avx512vl_vpternlogv2df_1 */
    case 6169:  /* *avx512vl_vpternlogv2df_1 */
    case 6168:  /* *avx512vl_vpternlogv2df_1 */
    case 6167:  /* *avx512vl_vpternlogv2df_1 */
    case 6166:  /* *avx512vl_vpternlogv2df_1 */
    case 6165:  /* *avx512vl_vpternlogv2df_1 */
    case 6164:  /* *avx512vl_vpternlogv2df_1 */
    case 6163:  /* *avx512vl_vpternlogv2df_1 */
    case 6162:  /* *avx512vl_vpternlogv2df_1 */
    case 6161:  /* *avx512vl_vpternlogv2df_1 */
    case 6160:  /* *avx512vl_vpternlogv2df_1 */
    case 6159:  /* *avx512vl_vpternlogv2df_1 */
    case 6158:  /* *avx512vl_vpternlogv2df_1 */
    case 6157:  /* *avx512vl_vpternlogv2df_1 */
    case 6156:  /* *avx512vl_vpternlogv2df_1 */
    case 6155:  /* *avx512vl_vpternlogv2df_1 */
    case 6154:  /* *avx512vl_vpternlogv2df_1 */
    case 6153:  /* *avx512vl_vpternlogv2df_1 */
    case 6152:  /* *avx512vl_vpternlogv2df_1 */
    case 6151:  /* *avx512vl_vpternlogv2df_1 */
    case 6150:  /* *avx512vl_vpternlogv2df_1 */
    case 6149:  /* *avx512vl_vpternlogv2df_1 */
    case 6148:  /* *avx512vl_vpternlogv2df_1 */
    case 6147:  /* *avx512vl_vpternlogv2df_1 */
    case 6146:  /* *avx512vl_vpternlogv2df_1 */
    case 6145:  /* *avx512vl_vpternlogv2df_1 */
    case 6144:  /* *avx512vl_vpternlogv2df_1 */
    case 6143:  /* *avx512vl_vpternlogv4df_1 */
    case 6142:  /* *avx512vl_vpternlogv4df_1 */
    case 6141:  /* *avx512vl_vpternlogv4df_1 */
    case 6140:  /* *avx512vl_vpternlogv4df_1 */
    case 6139:  /* *avx512vl_vpternlogv4df_1 */
    case 6138:  /* *avx512vl_vpternlogv4df_1 */
    case 6137:  /* *avx512vl_vpternlogv4df_1 */
    case 6136:  /* *avx512vl_vpternlogv4df_1 */
    case 6135:  /* *avx512vl_vpternlogv4df_1 */
    case 6134:  /* *avx512vl_vpternlogv4df_1 */
    case 6133:  /* *avx512vl_vpternlogv4df_1 */
    case 6132:  /* *avx512vl_vpternlogv4df_1 */
    case 6131:  /* *avx512vl_vpternlogv4df_1 */
    case 6130:  /* *avx512vl_vpternlogv4df_1 */
    case 6129:  /* *avx512vl_vpternlogv4df_1 */
    case 6128:  /* *avx512vl_vpternlogv4df_1 */
    case 6127:  /* *avx512vl_vpternlogv4df_1 */
    case 6126:  /* *avx512vl_vpternlogv4df_1 */
    case 6125:  /* *avx512vl_vpternlogv4df_1 */
    case 6124:  /* *avx512vl_vpternlogv4df_1 */
    case 6123:  /* *avx512vl_vpternlogv4df_1 */
    case 6122:  /* *avx512vl_vpternlogv4df_1 */
    case 6121:  /* *avx512vl_vpternlogv4df_1 */
    case 6120:  /* *avx512vl_vpternlogv4df_1 */
    case 6119:  /* *avx512vl_vpternlogv4df_1 */
    case 6118:  /* *avx512vl_vpternlogv4df_1 */
    case 6117:  /* *avx512vl_vpternlogv4df_1 */
    case 6116:  /* *avx512f_vpternlogv8df_1 */
    case 6115:  /* *avx512f_vpternlogv8df_1 */
    case 6114:  /* *avx512f_vpternlogv8df_1 */
    case 6113:  /* *avx512f_vpternlogv8df_1 */
    case 6112:  /* *avx512f_vpternlogv8df_1 */
    case 6111:  /* *avx512f_vpternlogv8df_1 */
    case 6110:  /* *avx512f_vpternlogv8df_1 */
    case 6109:  /* *avx512f_vpternlogv8df_1 */
    case 6108:  /* *avx512f_vpternlogv8df_1 */
    case 6107:  /* *avx512f_vpternlogv8df_1 */
    case 6106:  /* *avx512f_vpternlogv8df_1 */
    case 6105:  /* *avx512f_vpternlogv8df_1 */
    case 6104:  /* *avx512f_vpternlogv8df_1 */
    case 6103:  /* *avx512f_vpternlogv8df_1 */
    case 6102:  /* *avx512f_vpternlogv8df_1 */
    case 6101:  /* *avx512f_vpternlogv8df_1 */
    case 6100:  /* *avx512f_vpternlogv8df_1 */
    case 6099:  /* *avx512f_vpternlogv8df_1 */
    case 6098:  /* *avx512f_vpternlogv8df_1 */
    case 6097:  /* *avx512f_vpternlogv8df_1 */
    case 6096:  /* *avx512f_vpternlogv8df_1 */
    case 6095:  /* *avx512f_vpternlogv8df_1 */
    case 6094:  /* *avx512f_vpternlogv8df_1 */
    case 6093:  /* *avx512f_vpternlogv8df_1 */
    case 6092:  /* *avx512f_vpternlogv8df_1 */
    case 6091:  /* *avx512f_vpternlogv8df_1 */
    case 6090:  /* *avx512f_vpternlogv8df_1 */
    case 6089:  /* *avx512vl_vpternlogv4sf_1 */
    case 6088:  /* *avx512vl_vpternlogv4sf_1 */
    case 6087:  /* *avx512vl_vpternlogv4sf_1 */
    case 6086:  /* *avx512vl_vpternlogv4sf_1 */
    case 6085:  /* *avx512vl_vpternlogv4sf_1 */
    case 6084:  /* *avx512vl_vpternlogv4sf_1 */
    case 6083:  /* *avx512vl_vpternlogv4sf_1 */
    case 6082:  /* *avx512vl_vpternlogv4sf_1 */
    case 6081:  /* *avx512vl_vpternlogv4sf_1 */
    case 6080:  /* *avx512vl_vpternlogv4sf_1 */
    case 6079:  /* *avx512vl_vpternlogv4sf_1 */
    case 6078:  /* *avx512vl_vpternlogv4sf_1 */
    case 6077:  /* *avx512vl_vpternlogv4sf_1 */
    case 6076:  /* *avx512vl_vpternlogv4sf_1 */
    case 6075:  /* *avx512vl_vpternlogv4sf_1 */
    case 6074:  /* *avx512vl_vpternlogv4sf_1 */
    case 6073:  /* *avx512vl_vpternlogv4sf_1 */
    case 6072:  /* *avx512vl_vpternlogv4sf_1 */
    case 6071:  /* *avx512vl_vpternlogv4sf_1 */
    case 6070:  /* *avx512vl_vpternlogv4sf_1 */
    case 6069:  /* *avx512vl_vpternlogv4sf_1 */
    case 6068:  /* *avx512vl_vpternlogv4sf_1 */
    case 6067:  /* *avx512vl_vpternlogv4sf_1 */
    case 6066:  /* *avx512vl_vpternlogv4sf_1 */
    case 6065:  /* *avx512vl_vpternlogv4sf_1 */
    case 6064:  /* *avx512vl_vpternlogv4sf_1 */
    case 6063:  /* *avx512vl_vpternlogv4sf_1 */
    case 6062:  /* *avx512vl_vpternlogv8sf_1 */
    case 6061:  /* *avx512vl_vpternlogv8sf_1 */
    case 6060:  /* *avx512vl_vpternlogv8sf_1 */
    case 6059:  /* *avx512vl_vpternlogv8sf_1 */
    case 6058:  /* *avx512vl_vpternlogv8sf_1 */
    case 6057:  /* *avx512vl_vpternlogv8sf_1 */
    case 6056:  /* *avx512vl_vpternlogv8sf_1 */
    case 6055:  /* *avx512vl_vpternlogv8sf_1 */
    case 6054:  /* *avx512vl_vpternlogv8sf_1 */
    case 6053:  /* *avx512vl_vpternlogv8sf_1 */
    case 6052:  /* *avx512vl_vpternlogv8sf_1 */
    case 6051:  /* *avx512vl_vpternlogv8sf_1 */
    case 6050:  /* *avx512vl_vpternlogv8sf_1 */
    case 6049:  /* *avx512vl_vpternlogv8sf_1 */
    case 6048:  /* *avx512vl_vpternlogv8sf_1 */
    case 6047:  /* *avx512vl_vpternlogv8sf_1 */
    case 6046:  /* *avx512vl_vpternlogv8sf_1 */
    case 6045:  /* *avx512vl_vpternlogv8sf_1 */
    case 6044:  /* *avx512vl_vpternlogv8sf_1 */
    case 6043:  /* *avx512vl_vpternlogv8sf_1 */
    case 6042:  /* *avx512vl_vpternlogv8sf_1 */
    case 6041:  /* *avx512vl_vpternlogv8sf_1 */
    case 6040:  /* *avx512vl_vpternlogv8sf_1 */
    case 6039:  /* *avx512vl_vpternlogv8sf_1 */
    case 6038:  /* *avx512vl_vpternlogv8sf_1 */
    case 6037:  /* *avx512vl_vpternlogv8sf_1 */
    case 6036:  /* *avx512vl_vpternlogv8sf_1 */
    case 6035:  /* *avx512f_vpternlogv16sf_1 */
    case 6034:  /* *avx512f_vpternlogv16sf_1 */
    case 6033:  /* *avx512f_vpternlogv16sf_1 */
    case 6032:  /* *avx512f_vpternlogv16sf_1 */
    case 6031:  /* *avx512f_vpternlogv16sf_1 */
    case 6030:  /* *avx512f_vpternlogv16sf_1 */
    case 6029:  /* *avx512f_vpternlogv16sf_1 */
    case 6028:  /* *avx512f_vpternlogv16sf_1 */
    case 6027:  /* *avx512f_vpternlogv16sf_1 */
    case 6026:  /* *avx512f_vpternlogv16sf_1 */
    case 6025:  /* *avx512f_vpternlogv16sf_1 */
    case 6024:  /* *avx512f_vpternlogv16sf_1 */
    case 6023:  /* *avx512f_vpternlogv16sf_1 */
    case 6022:  /* *avx512f_vpternlogv16sf_1 */
    case 6021:  /* *avx512f_vpternlogv16sf_1 */
    case 6020:  /* *avx512f_vpternlogv16sf_1 */
    case 6019:  /* *avx512f_vpternlogv16sf_1 */
    case 6018:  /* *avx512f_vpternlogv16sf_1 */
    case 6017:  /* *avx512f_vpternlogv16sf_1 */
    case 6016:  /* *avx512f_vpternlogv16sf_1 */
    case 6015:  /* *avx512f_vpternlogv16sf_1 */
    case 6014:  /* *avx512f_vpternlogv16sf_1 */
    case 6013:  /* *avx512f_vpternlogv16sf_1 */
    case 6012:  /* *avx512f_vpternlogv16sf_1 */
    case 6011:  /* *avx512f_vpternlogv16sf_1 */
    case 6010:  /* *avx512f_vpternlogv16sf_1 */
    case 6009:  /* *avx512f_vpternlogv16sf_1 */
    case 6008:  /* *avx512vl_vpternlogv8bf_1 */
    case 6007:  /* *avx512vl_vpternlogv8bf_1 */
    case 6006:  /* *avx512vl_vpternlogv8bf_1 */
    case 6005:  /* *avx512vl_vpternlogv8bf_1 */
    case 6004:  /* *avx512vl_vpternlogv8bf_1 */
    case 6003:  /* *avx512vl_vpternlogv8bf_1 */
    case 6002:  /* *avx512vl_vpternlogv8bf_1 */
    case 6001:  /* *avx512vl_vpternlogv8bf_1 */
    case 6000:  /* *avx512vl_vpternlogv8bf_1 */
    case 5999:  /* *avx512vl_vpternlogv8bf_1 */
    case 5998:  /* *avx512vl_vpternlogv8bf_1 */
    case 5997:  /* *avx512vl_vpternlogv8bf_1 */
    case 5996:  /* *avx512vl_vpternlogv8bf_1 */
    case 5995:  /* *avx512vl_vpternlogv8bf_1 */
    case 5994:  /* *avx512vl_vpternlogv8bf_1 */
    case 5993:  /* *avx512vl_vpternlogv8bf_1 */
    case 5992:  /* *avx512vl_vpternlogv8bf_1 */
    case 5991:  /* *avx512vl_vpternlogv8bf_1 */
    case 5990:  /* *avx512vl_vpternlogv8bf_1 */
    case 5989:  /* *avx512vl_vpternlogv8bf_1 */
    case 5988:  /* *avx512vl_vpternlogv8bf_1 */
    case 5987:  /* *avx512vl_vpternlogv8bf_1 */
    case 5986:  /* *avx512vl_vpternlogv8bf_1 */
    case 5985:  /* *avx512vl_vpternlogv8bf_1 */
    case 5984:  /* *avx512vl_vpternlogv8bf_1 */
    case 5983:  /* *avx512vl_vpternlogv8bf_1 */
    case 5982:  /* *avx512vl_vpternlogv8bf_1 */
    case 5981:  /* *avx512vl_vpternlogv16bf_1 */
    case 5980:  /* *avx512vl_vpternlogv16bf_1 */
    case 5979:  /* *avx512vl_vpternlogv16bf_1 */
    case 5978:  /* *avx512vl_vpternlogv16bf_1 */
    case 5977:  /* *avx512vl_vpternlogv16bf_1 */
    case 5976:  /* *avx512vl_vpternlogv16bf_1 */
    case 5975:  /* *avx512vl_vpternlogv16bf_1 */
    case 5974:  /* *avx512vl_vpternlogv16bf_1 */
    case 5973:  /* *avx512vl_vpternlogv16bf_1 */
    case 5972:  /* *avx512vl_vpternlogv16bf_1 */
    case 5971:  /* *avx512vl_vpternlogv16bf_1 */
    case 5970:  /* *avx512vl_vpternlogv16bf_1 */
    case 5969:  /* *avx512vl_vpternlogv16bf_1 */
    case 5968:  /* *avx512vl_vpternlogv16bf_1 */
    case 5967:  /* *avx512vl_vpternlogv16bf_1 */
    case 5966:  /* *avx512vl_vpternlogv16bf_1 */
    case 5965:  /* *avx512vl_vpternlogv16bf_1 */
    case 5964:  /* *avx512vl_vpternlogv16bf_1 */
    case 5963:  /* *avx512vl_vpternlogv16bf_1 */
    case 5962:  /* *avx512vl_vpternlogv16bf_1 */
    case 5961:  /* *avx512vl_vpternlogv16bf_1 */
    case 5960:  /* *avx512vl_vpternlogv16bf_1 */
    case 5959:  /* *avx512vl_vpternlogv16bf_1 */
    case 5958:  /* *avx512vl_vpternlogv16bf_1 */
    case 5957:  /* *avx512vl_vpternlogv16bf_1 */
    case 5956:  /* *avx512vl_vpternlogv16bf_1 */
    case 5955:  /* *avx512vl_vpternlogv16bf_1 */
    case 5954:  /* *avx512bw_vpternlogv32bf_1 */
    case 5953:  /* *avx512bw_vpternlogv32bf_1 */
    case 5952:  /* *avx512bw_vpternlogv32bf_1 */
    case 5951:  /* *avx512bw_vpternlogv32bf_1 */
    case 5950:  /* *avx512bw_vpternlogv32bf_1 */
    case 5949:  /* *avx512bw_vpternlogv32bf_1 */
    case 5948:  /* *avx512bw_vpternlogv32bf_1 */
    case 5947:  /* *avx512bw_vpternlogv32bf_1 */
    case 5946:  /* *avx512bw_vpternlogv32bf_1 */
    case 5945:  /* *avx512bw_vpternlogv32bf_1 */
    case 5944:  /* *avx512bw_vpternlogv32bf_1 */
    case 5943:  /* *avx512bw_vpternlogv32bf_1 */
    case 5942:  /* *avx512bw_vpternlogv32bf_1 */
    case 5941:  /* *avx512bw_vpternlogv32bf_1 */
    case 5940:  /* *avx512bw_vpternlogv32bf_1 */
    case 5939:  /* *avx512bw_vpternlogv32bf_1 */
    case 5938:  /* *avx512bw_vpternlogv32bf_1 */
    case 5937:  /* *avx512bw_vpternlogv32bf_1 */
    case 5936:  /* *avx512bw_vpternlogv32bf_1 */
    case 5935:  /* *avx512bw_vpternlogv32bf_1 */
    case 5934:  /* *avx512bw_vpternlogv32bf_1 */
    case 5933:  /* *avx512bw_vpternlogv32bf_1 */
    case 5932:  /* *avx512bw_vpternlogv32bf_1 */
    case 5931:  /* *avx512bw_vpternlogv32bf_1 */
    case 5930:  /* *avx512bw_vpternlogv32bf_1 */
    case 5929:  /* *avx512bw_vpternlogv32bf_1 */
    case 5928:  /* *avx512bw_vpternlogv32bf_1 */
    case 5927:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5926:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5925:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5924:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5923:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5922:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5921:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5920:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5919:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5918:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5917:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5916:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5915:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5914:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5913:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5912:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5911:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5910:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5909:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5908:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5907:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5906:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5905:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5904:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5903:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5902:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5901:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5900:  /* *avx512vl_vpternlogv16hf_1 */
    case 5899:  /* *avx512vl_vpternlogv16hf_1 */
    case 5898:  /* *avx512vl_vpternlogv16hf_1 */
    case 5897:  /* *avx512vl_vpternlogv16hf_1 */
    case 5896:  /* *avx512vl_vpternlogv16hf_1 */
    case 5895:  /* *avx512vl_vpternlogv16hf_1 */
    case 5894:  /* *avx512vl_vpternlogv16hf_1 */
    case 5893:  /* *avx512vl_vpternlogv16hf_1 */
    case 5892:  /* *avx512vl_vpternlogv16hf_1 */
    case 5891:  /* *avx512vl_vpternlogv16hf_1 */
    case 5890:  /* *avx512vl_vpternlogv16hf_1 */
    case 5889:  /* *avx512vl_vpternlogv16hf_1 */
    case 5888:  /* *avx512vl_vpternlogv16hf_1 */
    case 5887:  /* *avx512vl_vpternlogv16hf_1 */
    case 5886:  /* *avx512vl_vpternlogv16hf_1 */
    case 5885:  /* *avx512vl_vpternlogv16hf_1 */
    case 5884:  /* *avx512vl_vpternlogv16hf_1 */
    case 5883:  /* *avx512vl_vpternlogv16hf_1 */
    case 5882:  /* *avx512vl_vpternlogv16hf_1 */
    case 5881:  /* *avx512vl_vpternlogv16hf_1 */
    case 5880:  /* *avx512vl_vpternlogv16hf_1 */
    case 5879:  /* *avx512vl_vpternlogv16hf_1 */
    case 5878:  /* *avx512vl_vpternlogv16hf_1 */
    case 5877:  /* *avx512vl_vpternlogv16hf_1 */
    case 5876:  /* *avx512vl_vpternlogv16hf_1 */
    case 5875:  /* *avx512vl_vpternlogv16hf_1 */
    case 5874:  /* *avx512vl_vpternlogv16hf_1 */
    case 5873:  /* *avx512bw_vpternlogv32hf_1 */
    case 5872:  /* *avx512bw_vpternlogv32hf_1 */
    case 5871:  /* *avx512bw_vpternlogv32hf_1 */
    case 5870:  /* *avx512bw_vpternlogv32hf_1 */
    case 5869:  /* *avx512bw_vpternlogv32hf_1 */
    case 5868:  /* *avx512bw_vpternlogv32hf_1 */
    case 5867:  /* *avx512bw_vpternlogv32hf_1 */
    case 5866:  /* *avx512bw_vpternlogv32hf_1 */
    case 5865:  /* *avx512bw_vpternlogv32hf_1 */
    case 5864:  /* *avx512bw_vpternlogv32hf_1 */
    case 5863:  /* *avx512bw_vpternlogv32hf_1 */
    case 5862:  /* *avx512bw_vpternlogv32hf_1 */
    case 5861:  /* *avx512bw_vpternlogv32hf_1 */
    case 5860:  /* *avx512bw_vpternlogv32hf_1 */
    case 5859:  /* *avx512bw_vpternlogv32hf_1 */
    case 5858:  /* *avx512bw_vpternlogv32hf_1 */
    case 5857:  /* *avx512bw_vpternlogv32hf_1 */
    case 5856:  /* *avx512bw_vpternlogv32hf_1 */
    case 5855:  /* *avx512bw_vpternlogv32hf_1 */
    case 5854:  /* *avx512bw_vpternlogv32hf_1 */
    case 5853:  /* *avx512bw_vpternlogv32hf_1 */
    case 5852:  /* *avx512bw_vpternlogv32hf_1 */
    case 5851:  /* *avx512bw_vpternlogv32hf_1 */
    case 5850:  /* *avx512bw_vpternlogv32hf_1 */
    case 5849:  /* *avx512bw_vpternlogv32hf_1 */
    case 5848:  /* *avx512bw_vpternlogv32hf_1 */
    case 5847:  /* *avx512bw_vpternlogv32hf_1 */
    case 5846:  /* *avx512vl_vpternlogv2di_1 */
    case 5845:  /* *avx512vl_vpternlogv2di_1 */
    case 5844:  /* *avx512vl_vpternlogv2di_1 */
    case 5843:  /* *avx512vl_vpternlogv2di_1 */
    case 5842:  /* *avx512vl_vpternlogv2di_1 */
    case 5841:  /* *avx512vl_vpternlogv2di_1 */
    case 5840:  /* *avx512vl_vpternlogv2di_1 */
    case 5839:  /* *avx512vl_vpternlogv2di_1 */
    case 5838:  /* *avx512vl_vpternlogv2di_1 */
    case 5837:  /* *avx512vl_vpternlogv2di_1 */
    case 5836:  /* *avx512vl_vpternlogv2di_1 */
    case 5835:  /* *avx512vl_vpternlogv2di_1 */
    case 5834:  /* *avx512vl_vpternlogv2di_1 */
    case 5833:  /* *avx512vl_vpternlogv2di_1 */
    case 5832:  /* *avx512vl_vpternlogv2di_1 */
    case 5831:  /* *avx512vl_vpternlogv2di_1 */
    case 5830:  /* *avx512vl_vpternlogv2di_1 */
    case 5829:  /* *avx512vl_vpternlogv2di_1 */
    case 5828:  /* *avx512vl_vpternlogv2di_1 */
    case 5827:  /* *avx512vl_vpternlogv2di_1 */
    case 5826:  /* *avx512vl_vpternlogv2di_1 */
    case 5825:  /* *avx512vl_vpternlogv2di_1 */
    case 5824:  /* *avx512vl_vpternlogv2di_1 */
    case 5823:  /* *avx512vl_vpternlogv2di_1 */
    case 5822:  /* *avx512vl_vpternlogv2di_1 */
    case 5821:  /* *avx512vl_vpternlogv2di_1 */
    case 5820:  /* *avx512vl_vpternlogv2di_1 */
    case 5819:  /* *avx512vl_vpternlogv4di_1 */
    case 5818:  /* *avx512vl_vpternlogv4di_1 */
    case 5817:  /* *avx512vl_vpternlogv4di_1 */
    case 5816:  /* *avx512vl_vpternlogv4di_1 */
    case 5815:  /* *avx512vl_vpternlogv4di_1 */
    case 5814:  /* *avx512vl_vpternlogv4di_1 */
    case 5813:  /* *avx512vl_vpternlogv4di_1 */
    case 5812:  /* *avx512vl_vpternlogv4di_1 */
    case 5811:  /* *avx512vl_vpternlogv4di_1 */
    case 5810:  /* *avx512vl_vpternlogv4di_1 */
    case 5809:  /* *avx512vl_vpternlogv4di_1 */
    case 5808:  /* *avx512vl_vpternlogv4di_1 */
    case 5807:  /* *avx512vl_vpternlogv4di_1 */
    case 5806:  /* *avx512vl_vpternlogv4di_1 */
    case 5805:  /* *avx512vl_vpternlogv4di_1 */
    case 5804:  /* *avx512vl_vpternlogv4di_1 */
    case 5803:  /* *avx512vl_vpternlogv4di_1 */
    case 5802:  /* *avx512vl_vpternlogv4di_1 */
    case 5801:  /* *avx512vl_vpternlogv4di_1 */
    case 5800:  /* *avx512vl_vpternlogv4di_1 */
    case 5799:  /* *avx512vl_vpternlogv4di_1 */
    case 5798:  /* *avx512vl_vpternlogv4di_1 */
    case 5797:  /* *avx512vl_vpternlogv4di_1 */
    case 5796:  /* *avx512vl_vpternlogv4di_1 */
    case 5795:  /* *avx512vl_vpternlogv4di_1 */
    case 5794:  /* *avx512vl_vpternlogv4di_1 */
    case 5793:  /* *avx512vl_vpternlogv4di_1 */
    case 5792:  /* *avx512f_vpternlogv8di_1 */
    case 5791:  /* *avx512f_vpternlogv8di_1 */
    case 5790:  /* *avx512f_vpternlogv8di_1 */
    case 5789:  /* *avx512f_vpternlogv8di_1 */
    case 5788:  /* *avx512f_vpternlogv8di_1 */
    case 5787:  /* *avx512f_vpternlogv8di_1 */
    case 5786:  /* *avx512f_vpternlogv8di_1 */
    case 5785:  /* *avx512f_vpternlogv8di_1 */
    case 5784:  /* *avx512f_vpternlogv8di_1 */
    case 5783:  /* *avx512f_vpternlogv8di_1 */
    case 5782:  /* *avx512f_vpternlogv8di_1 */
    case 5781:  /* *avx512f_vpternlogv8di_1 */
    case 5780:  /* *avx512f_vpternlogv8di_1 */
    case 5779:  /* *avx512f_vpternlogv8di_1 */
    case 5778:  /* *avx512f_vpternlogv8di_1 */
    case 5777:  /* *avx512f_vpternlogv8di_1 */
    case 5776:  /* *avx512f_vpternlogv8di_1 */
    case 5775:  /* *avx512f_vpternlogv8di_1 */
    case 5774:  /* *avx512f_vpternlogv8di_1 */
    case 5773:  /* *avx512f_vpternlogv8di_1 */
    case 5772:  /* *avx512f_vpternlogv8di_1 */
    case 5771:  /* *avx512f_vpternlogv8di_1 */
    case 5770:  /* *avx512f_vpternlogv8di_1 */
    case 5769:  /* *avx512f_vpternlogv8di_1 */
    case 5768:  /* *avx512f_vpternlogv8di_1 */
    case 5767:  /* *avx512f_vpternlogv8di_1 */
    case 5766:  /* *avx512f_vpternlogv8di_1 */
    case 5765:  /* *avx512vl_vpternlogv4si_1 */
    case 5764:  /* *avx512vl_vpternlogv4si_1 */
    case 5763:  /* *avx512vl_vpternlogv4si_1 */
    case 5762:  /* *avx512vl_vpternlogv4si_1 */
    case 5761:  /* *avx512vl_vpternlogv4si_1 */
    case 5760:  /* *avx512vl_vpternlogv4si_1 */
    case 5759:  /* *avx512vl_vpternlogv4si_1 */
    case 5758:  /* *avx512vl_vpternlogv4si_1 */
    case 5757:  /* *avx512vl_vpternlogv4si_1 */
    case 5756:  /* *avx512vl_vpternlogv4si_1 */
    case 5755:  /* *avx512vl_vpternlogv4si_1 */
    case 5754:  /* *avx512vl_vpternlogv4si_1 */
    case 5753:  /* *avx512vl_vpternlogv4si_1 */
    case 5752:  /* *avx512vl_vpternlogv4si_1 */
    case 5751:  /* *avx512vl_vpternlogv4si_1 */
    case 5750:  /* *avx512vl_vpternlogv4si_1 */
    case 5749:  /* *avx512vl_vpternlogv4si_1 */
    case 5748:  /* *avx512vl_vpternlogv4si_1 */
    case 5747:  /* *avx512vl_vpternlogv4si_1 */
    case 5746:  /* *avx512vl_vpternlogv4si_1 */
    case 5745:  /* *avx512vl_vpternlogv4si_1 */
    case 5744:  /* *avx512vl_vpternlogv4si_1 */
    case 5743:  /* *avx512vl_vpternlogv4si_1 */
    case 5742:  /* *avx512vl_vpternlogv4si_1 */
    case 5741:  /* *avx512vl_vpternlogv4si_1 */
    case 5740:  /* *avx512vl_vpternlogv4si_1 */
    case 5739:  /* *avx512vl_vpternlogv4si_1 */
    case 5738:  /* *avx512vl_vpternlogv8si_1 */
    case 5737:  /* *avx512vl_vpternlogv8si_1 */
    case 5736:  /* *avx512vl_vpternlogv8si_1 */
    case 5735:  /* *avx512vl_vpternlogv8si_1 */
    case 5734:  /* *avx512vl_vpternlogv8si_1 */
    case 5733:  /* *avx512vl_vpternlogv8si_1 */
    case 5732:  /* *avx512vl_vpternlogv8si_1 */
    case 5731:  /* *avx512vl_vpternlogv8si_1 */
    case 5730:  /* *avx512vl_vpternlogv8si_1 */
    case 5729:  /* *avx512vl_vpternlogv8si_1 */
    case 5728:  /* *avx512vl_vpternlogv8si_1 */
    case 5727:  /* *avx512vl_vpternlogv8si_1 */
    case 5726:  /* *avx512vl_vpternlogv8si_1 */
    case 5725:  /* *avx512vl_vpternlogv8si_1 */
    case 5724:  /* *avx512vl_vpternlogv8si_1 */
    case 5723:  /* *avx512vl_vpternlogv8si_1 */
    case 5722:  /* *avx512vl_vpternlogv8si_1 */
    case 5721:  /* *avx512vl_vpternlogv8si_1 */
    case 5720:  /* *avx512vl_vpternlogv8si_1 */
    case 5719:  /* *avx512vl_vpternlogv8si_1 */
    case 5718:  /* *avx512vl_vpternlogv8si_1 */
    case 5717:  /* *avx512vl_vpternlogv8si_1 */
    case 5716:  /* *avx512vl_vpternlogv8si_1 */
    case 5715:  /* *avx512vl_vpternlogv8si_1 */
    case 5714:  /* *avx512vl_vpternlogv8si_1 */
    case 5713:  /* *avx512vl_vpternlogv8si_1 */
    case 5712:  /* *avx512vl_vpternlogv8si_1 */
    case 5711:  /* *avx512f_vpternlogv16si_1 */
    case 5710:  /* *avx512f_vpternlogv16si_1 */
    case 5709:  /* *avx512f_vpternlogv16si_1 */
    case 5708:  /* *avx512f_vpternlogv16si_1 */
    case 5707:  /* *avx512f_vpternlogv16si_1 */
    case 5706:  /* *avx512f_vpternlogv16si_1 */
    case 5705:  /* *avx512f_vpternlogv16si_1 */
    case 5704:  /* *avx512f_vpternlogv16si_1 */
    case 5703:  /* *avx512f_vpternlogv16si_1 */
    case 5702:  /* *avx512f_vpternlogv16si_1 */
    case 5701:  /* *avx512f_vpternlogv16si_1 */
    case 5700:  /* *avx512f_vpternlogv16si_1 */
    case 5699:  /* *avx512f_vpternlogv16si_1 */
    case 5698:  /* *avx512f_vpternlogv16si_1 */
    case 5697:  /* *avx512f_vpternlogv16si_1 */
    case 5696:  /* *avx512f_vpternlogv16si_1 */
    case 5695:  /* *avx512f_vpternlogv16si_1 */
    case 5694:  /* *avx512f_vpternlogv16si_1 */
    case 5693:  /* *avx512f_vpternlogv16si_1 */
    case 5692:  /* *avx512f_vpternlogv16si_1 */
    case 5691:  /* *avx512f_vpternlogv16si_1 */
    case 5690:  /* *avx512f_vpternlogv16si_1 */
    case 5689:  /* *avx512f_vpternlogv16si_1 */
    case 5688:  /* *avx512f_vpternlogv16si_1 */
    case 5687:  /* *avx512f_vpternlogv16si_1 */
    case 5686:  /* *avx512f_vpternlogv16si_1 */
    case 5685:  /* *avx512f_vpternlogv16si_1 */
    case 5684:  /* *avx512vl_vpternlogv8hi_1 */
    case 5683:  /* *avx512vl_vpternlogv8hi_1 */
    case 5682:  /* *avx512vl_vpternlogv8hi_1 */
    case 5681:  /* *avx512vl_vpternlogv8hi_1 */
    case 5680:  /* *avx512vl_vpternlogv8hi_1 */
    case 5679:  /* *avx512vl_vpternlogv8hi_1 */
    case 5678:  /* *avx512vl_vpternlogv8hi_1 */
    case 5677:  /* *avx512vl_vpternlogv8hi_1 */
    case 5676:  /* *avx512vl_vpternlogv8hi_1 */
    case 5675:  /* *avx512vl_vpternlogv8hi_1 */
    case 5674:  /* *avx512vl_vpternlogv8hi_1 */
    case 5673:  /* *avx512vl_vpternlogv8hi_1 */
    case 5672:  /* *avx512vl_vpternlogv8hi_1 */
    case 5671:  /* *avx512vl_vpternlogv8hi_1 */
    case 5670:  /* *avx512vl_vpternlogv8hi_1 */
    case 5669:  /* *avx512vl_vpternlogv8hi_1 */
    case 5668:  /* *avx512vl_vpternlogv8hi_1 */
    case 5667:  /* *avx512vl_vpternlogv8hi_1 */
    case 5666:  /* *avx512vl_vpternlogv8hi_1 */
    case 5665:  /* *avx512vl_vpternlogv8hi_1 */
    case 5664:  /* *avx512vl_vpternlogv8hi_1 */
    case 5663:  /* *avx512vl_vpternlogv8hi_1 */
    case 5662:  /* *avx512vl_vpternlogv8hi_1 */
    case 5661:  /* *avx512vl_vpternlogv8hi_1 */
    case 5660:  /* *avx512vl_vpternlogv8hi_1 */
    case 5659:  /* *avx512vl_vpternlogv8hi_1 */
    case 5658:  /* *avx512vl_vpternlogv8hi_1 */
    case 5657:  /* *avx512vl_vpternlogv16hi_1 */
    case 5656:  /* *avx512vl_vpternlogv16hi_1 */
    case 5655:  /* *avx512vl_vpternlogv16hi_1 */
    case 5654:  /* *avx512vl_vpternlogv16hi_1 */
    case 5653:  /* *avx512vl_vpternlogv16hi_1 */
    case 5652:  /* *avx512vl_vpternlogv16hi_1 */
    case 5651:  /* *avx512vl_vpternlogv16hi_1 */
    case 5650:  /* *avx512vl_vpternlogv16hi_1 */
    case 5649:  /* *avx512vl_vpternlogv16hi_1 */
    case 5648:  /* *avx512vl_vpternlogv16hi_1 */
    case 5647:  /* *avx512vl_vpternlogv16hi_1 */
    case 5646:  /* *avx512vl_vpternlogv16hi_1 */
    case 5645:  /* *avx512vl_vpternlogv16hi_1 */
    case 5644:  /* *avx512vl_vpternlogv16hi_1 */
    case 5643:  /* *avx512vl_vpternlogv16hi_1 */
    case 5642:  /* *avx512vl_vpternlogv16hi_1 */
    case 5641:  /* *avx512vl_vpternlogv16hi_1 */
    case 5640:  /* *avx512vl_vpternlogv16hi_1 */
    case 5639:  /* *avx512vl_vpternlogv16hi_1 */
    case 5638:  /* *avx512vl_vpternlogv16hi_1 */
    case 5637:  /* *avx512vl_vpternlogv16hi_1 */
    case 5636:  /* *avx512vl_vpternlogv16hi_1 */
    case 5635:  /* *avx512vl_vpternlogv16hi_1 */
    case 5634:  /* *avx512vl_vpternlogv16hi_1 */
    case 5633:  /* *avx512vl_vpternlogv16hi_1 */
    case 5632:  /* *avx512vl_vpternlogv16hi_1 */
    case 5631:  /* *avx512vl_vpternlogv16hi_1 */
    case 5630:  /* *avx512bw_vpternlogv32hi_1 */
    case 5629:  /* *avx512bw_vpternlogv32hi_1 */
    case 5628:  /* *avx512bw_vpternlogv32hi_1 */
    case 5627:  /* *avx512bw_vpternlogv32hi_1 */
    case 5626:  /* *avx512bw_vpternlogv32hi_1 */
    case 5625:  /* *avx512bw_vpternlogv32hi_1 */
    case 5624:  /* *avx512bw_vpternlogv32hi_1 */
    case 5623:  /* *avx512bw_vpternlogv32hi_1 */
    case 5622:  /* *avx512bw_vpternlogv32hi_1 */
    case 5621:  /* *avx512bw_vpternlogv32hi_1 */
    case 5620:  /* *avx512bw_vpternlogv32hi_1 */
    case 5619:  /* *avx512bw_vpternlogv32hi_1 */
    case 5618:  /* *avx512bw_vpternlogv32hi_1 */
    case 5617:  /* *avx512bw_vpternlogv32hi_1 */
    case 5616:  /* *avx512bw_vpternlogv32hi_1 */
    case 5615:  /* *avx512bw_vpternlogv32hi_1 */
    case 5614:  /* *avx512bw_vpternlogv32hi_1 */
    case 5613:  /* *avx512bw_vpternlogv32hi_1 */
    case 5612:  /* *avx512bw_vpternlogv32hi_1 */
    case 5611:  /* *avx512bw_vpternlogv32hi_1 */
    case 5610:  /* *avx512bw_vpternlogv32hi_1 */
    case 5609:  /* *avx512bw_vpternlogv32hi_1 */
    case 5608:  /* *avx512bw_vpternlogv32hi_1 */
    case 5607:  /* *avx512bw_vpternlogv32hi_1 */
    case 5606:  /* *avx512bw_vpternlogv32hi_1 */
    case 5605:  /* *avx512bw_vpternlogv32hi_1 */
    case 5604:  /* *avx512bw_vpternlogv32hi_1 */
    case 5603:  /* *avx512vl_vpternlogv16qi_1 */
    case 5602:  /* *avx512vl_vpternlogv16qi_1 */
    case 5601:  /* *avx512vl_vpternlogv16qi_1 */
    case 5600:  /* *avx512vl_vpternlogv16qi_1 */
    case 5599:  /* *avx512vl_vpternlogv16qi_1 */
    case 5598:  /* *avx512vl_vpternlogv16qi_1 */
    case 5597:  /* *avx512vl_vpternlogv16qi_1 */
    case 5596:  /* *avx512vl_vpternlogv16qi_1 */
    case 5595:  /* *avx512vl_vpternlogv16qi_1 */
    case 5594:  /* *avx512vl_vpternlogv16qi_1 */
    case 5593:  /* *avx512vl_vpternlogv16qi_1 */
    case 5592:  /* *avx512vl_vpternlogv16qi_1 */
    case 5591:  /* *avx512vl_vpternlogv16qi_1 */
    case 5590:  /* *avx512vl_vpternlogv16qi_1 */
    case 5589:  /* *avx512vl_vpternlogv16qi_1 */
    case 5588:  /* *avx512vl_vpternlogv16qi_1 */
    case 5587:  /* *avx512vl_vpternlogv16qi_1 */
    case 5586:  /* *avx512vl_vpternlogv16qi_1 */
    case 5585:  /* *avx512vl_vpternlogv16qi_1 */
    case 5584:  /* *avx512vl_vpternlogv16qi_1 */
    case 5583:  /* *avx512vl_vpternlogv16qi_1 */
    case 5582:  /* *avx512vl_vpternlogv16qi_1 */
    case 5581:  /* *avx512vl_vpternlogv16qi_1 */
    case 5580:  /* *avx512vl_vpternlogv16qi_1 */
    case 5579:  /* *avx512vl_vpternlogv16qi_1 */
    case 5578:  /* *avx512vl_vpternlogv16qi_1 */
    case 5577:  /* *avx512vl_vpternlogv16qi_1 */
    case 5576:  /* *avx512vl_vpternlogv32qi_1 */
    case 5575:  /* *avx512vl_vpternlogv32qi_1 */
    case 5574:  /* *avx512vl_vpternlogv32qi_1 */
    case 5573:  /* *avx512vl_vpternlogv32qi_1 */
    case 5572:  /* *avx512vl_vpternlogv32qi_1 */
    case 5571:  /* *avx512vl_vpternlogv32qi_1 */
    case 5570:  /* *avx512vl_vpternlogv32qi_1 */
    case 5569:  /* *avx512vl_vpternlogv32qi_1 */
    case 5568:  /* *avx512vl_vpternlogv32qi_1 */
    case 5567:  /* *avx512vl_vpternlogv32qi_1 */
    case 5566:  /* *avx512vl_vpternlogv32qi_1 */
    case 5565:  /* *avx512vl_vpternlogv32qi_1 */
    case 5564:  /* *avx512vl_vpternlogv32qi_1 */
    case 5563:  /* *avx512vl_vpternlogv32qi_1 */
    case 5562:  /* *avx512vl_vpternlogv32qi_1 */
    case 5561:  /* *avx512vl_vpternlogv32qi_1 */
    case 5560:  /* *avx512vl_vpternlogv32qi_1 */
    case 5559:  /* *avx512vl_vpternlogv32qi_1 */
    case 5558:  /* *avx512vl_vpternlogv32qi_1 */
    case 5557:  /* *avx512vl_vpternlogv32qi_1 */
    case 5556:  /* *avx512vl_vpternlogv32qi_1 */
    case 5555:  /* *avx512vl_vpternlogv32qi_1 */
    case 5554:  /* *avx512vl_vpternlogv32qi_1 */
    case 5553:  /* *avx512vl_vpternlogv32qi_1 */
    case 5552:  /* *avx512vl_vpternlogv32qi_1 */
    case 5551:  /* *avx512vl_vpternlogv32qi_1 */
    case 5550:  /* *avx512vl_vpternlogv32qi_1 */
    case 5549:  /* *avx512bw_vpternlogv64qi_1 */
    case 5548:  /* *avx512bw_vpternlogv64qi_1 */
    case 5547:  /* *avx512bw_vpternlogv64qi_1 */
    case 5546:  /* *avx512bw_vpternlogv64qi_1 */
    case 5545:  /* *avx512bw_vpternlogv64qi_1 */
    case 5544:  /* *avx512bw_vpternlogv64qi_1 */
    case 5543:  /* *avx512bw_vpternlogv64qi_1 */
    case 5542:  /* *avx512bw_vpternlogv64qi_1 */
    case 5541:  /* *avx512bw_vpternlogv64qi_1 */
    case 5540:  /* *avx512bw_vpternlogv64qi_1 */
    case 5539:  /* *avx512bw_vpternlogv64qi_1 */
    case 5538:  /* *avx512bw_vpternlogv64qi_1 */
    case 5537:  /* *avx512bw_vpternlogv64qi_1 */
    case 5536:  /* *avx512bw_vpternlogv64qi_1 */
    case 5535:  /* *avx512bw_vpternlogv64qi_1 */
    case 5534:  /* *avx512bw_vpternlogv64qi_1 */
    case 5533:  /* *avx512bw_vpternlogv64qi_1 */
    case 5532:  /* *avx512bw_vpternlogv64qi_1 */
    case 5531:  /* *avx512bw_vpternlogv64qi_1 */
    case 5530:  /* *avx512bw_vpternlogv64qi_1 */
    case 5529:  /* *avx512bw_vpternlogv64qi_1 */
    case 5528:  /* *avx512bw_vpternlogv64qi_1 */
    case 5527:  /* *avx512bw_vpternlogv64qi_1 */
    case 5526:  /* *avx512bw_vpternlogv64qi_1 */
    case 5525:  /* *avx512bw_vpternlogv64qi_1 */
    case 5524:  /* *avx512bw_vpternlogv64qi_1 */
    case 5523:  /* *avx512bw_vpternlogv64qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 7122:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 7119:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 7115:  /* avx512f_fixupimmv8df_maskz_1 */
    case 7112:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 7109:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 7105:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 5474:  /* avx512vl_vternlogv2di_maskz_1 */
    case 5472:  /* avx512vl_vternlogv4di_maskz_1 */
    case 5470:  /* avx512f_vternlogv8di_maskz_1 */
    case 5468:  /* avx512vl_vternlogv4si_maskz_1 */
    case 5466:  /* avx512vl_vternlogv8si_maskz_1 */
    case 5464:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 10096:  /* vsm3rnds2 */
    case 9084:  /* xop_vpermil2v2df3 */
    case 9083:  /* xop_vpermil2v4df3 */
    case 9082:  /* xop_vpermil2v4sf3 */
    case 9081:  /* xop_vpermil2v8sf3 */
    case 8681:  /* sse4a_insertqi */
    case 7121:  /* avx512vl_fixupimmv2df */
    case 7117:  /* avx512vl_fixupimmv4df */
    case 7113:  /* avx512f_fixupimmv8df */
    case 7111:  /* avx512vl_fixupimmv4sf */
    case 7107:  /* avx512vl_fixupimmv8sf */
    case 7103:  /* avx512f_fixupimmv16sf */
    case 5498:  /* *avx512vl_vternlogv2df_all */
    case 5497:  /* *avx512vl_vternlogv4df_all */
    case 5496:  /* *avx512f_vternlogv8df_all */
    case 5495:  /* *avx512vl_vternlogv4sf_all */
    case 5494:  /* *avx512vl_vternlogv8sf_all */
    case 5493:  /* *avx512f_vternlogv16sf_all */
    case 5492:  /* *avx512vl_vternlogv8bf_all */
    case 5491:  /* *avx512vl_vternlogv16bf_all */
    case 5490:  /* *avx512bw_vternlogv32bf_all */
    case 5489:  /* *avx512fp16_vternlogv8hf_all */
    case 5488:  /* *avx512vl_vternlogv16hf_all */
    case 5487:  /* *avx512bw_vternlogv32hf_all */
    case 5486:  /* *avx512vl_vternlogv2di_all */
    case 5485:  /* *avx512vl_vternlogv4di_all */
    case 5484:  /* *avx512f_vternlogv8di_all */
    case 5483:  /* *avx512vl_vternlogv4si_all */
    case 5482:  /* *avx512vl_vternlogv8si_all */
    case 5481:  /* *avx512f_vternlogv16si_all */
    case 5480:  /* *avx512vl_vternlogv8hi_all */
    case 5479:  /* *avx512vl_vternlogv16hi_all */
    case 5478:  /* *avx512bw_vternlogv32hi_all */
    case 5477:  /* *avx512vl_vternlogv16qi_all */
    case 5476:  /* *avx512vl_vternlogv32qi_all */
    case 5475:  /* *avx512bw_vternlogv64qi_all */
    case 5473:  /* avx512vl_vternlogv2di */
    case 5471:  /* avx512vl_vternlogv4di */
    case 5469:  /* avx512f_vternlogv8di */
    case 5467:  /* avx512vl_vternlogv4si */
    case 5465:  /* avx512vl_vternlogv8si */
    case 5463:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 9176:  /* avx2_permv4df_1_mask */
    case 9174:  /* avx2_permv4di_1_mask */
    case 8452:  /* sse2_pshuflw_1_mask */
    case 8446:  /* sse2_pshufd_1_mask */
    case 5346:  /* avx512f_vextracti32x4_1_mask */
    case 5345:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5342:  /* avx512dq_vextracti64x2_1_mask */
    case 5341:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8496:  /* vec_setv4di_0 */
    case 8495:  /* vec_setv8di_0 */
    case 8459:  /* sse2_loadld */
    case 7226:  /* vec_setv4df_0 */
    case 7225:  /* vec_setv8df_0 */
    case 5337:  /* vec_setv2df_0 */
    case 5330:  /* vec_setv16sf_0 */
    case 5329:  /* vec_setv16si_0 */
    case 5328:  /* vec_setv8sf_0 */
    case 5327:  /* vec_setv8si_0 */
    case 5315:  /* vec_setv32bf_0 */
    case 5314:  /* vec_setv16bf_0 */
    case 5313:  /* vec_setv32hf_0 */
    case 5312:  /* vec_setv16hf_0 */
    case 5311:  /* vec_setv32hi_0 */
    case 5310:  /* vec_setv16hi_0 */
    case 5306:  /* vec_setv8bf_0 */
    case 5305:  /* vec_setv8hf_0 */
    case 5304:  /* vec_setv8hi_0 */
    case 5303:  /* vec_setv4sf_0 */
    case 5302:  /* vec_setv4si_0 */
    case 5301:  /* *vec_concatv8hi_movss */
    case 5300:  /* *vec_concatv8bf_movss */
    case 5299:  /* *vec_concatv8hf_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 9487:  /* vec_set_lo_v32qi */
    case 9483:  /* vec_set_lo_v16bf */
    case 9482:  /* vec_set_lo_v16hf */
    case 9481:  /* vec_set_lo_v16hi */
    case 9475:  /* vec_set_lo_v8sf */
    case 9473:  /* vec_set_lo_v8si */
    case 9467:  /* vec_set_lo_v4df */
    case 9465:  /* vec_set_lo_v4di */
    case 8411:  /* vec_set_lo_v8di */
    case 8409:  /* vec_set_lo_v8df */
    case 8403:  /* vec_set_lo_v16si */
    case 8401:  /* vec_set_lo_v16sf */
    case 7219:  /* sse2_loadlpd */
    case 5283:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 8419:  /* *avx512dq_shuf_f64x2_1 */
    case 8417:  /* *avx512dq_shuf_i64x2_1 */
    case 7197:  /* avx_shufpd256_1 */
    case 5279:  /* sse_shufps_v4sf */
    case 5278:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 8420:  /* avx512dq_shuf_f64x2_1_mask */
    case 8418:  /* avx512dq_shuf_i64x2_1_mask */
    case 7198:  /* avx_shufpd256_1_mask */
    case 5277:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8432:  /* avx512vl_shuf_f32x4_1_mask */
    case 8430:  /* avx512vl_shuf_i32x4_1_mask */
    case 8424:  /* avx512f_shuf_i64x2_1_mask */
    case 8422:  /* avx512f_shuf_f64x2_1_mask */
    case 7196:  /* avx512f_shufpd512_1_mask */
    case 5276:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8431:  /* avx512vl_shuf_f32x4_1 */
    case 8429:  /* avx512vl_shuf_i32x4_1 */
    case 8423:  /* avx512f_shuf_i64x2_1 */
    case 8421:  /* avx512f_shuf_f64x2_1 */
    case 7195:  /* avx512f_shufpd512_1 */
    case 5275:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 5416:  /* avx_movddup256_mask */
    case 5412:  /* avx512f_movddup512_mask */
    case 5274:  /* avx512f_movsldup512_mask */
    case 5272:  /* sse3_movsldup_mask */
    case 5270:  /* avx_movsldup256_mask */
    case 5268:  /* avx512f_movshdup512_mask */
    case 5266:  /* sse3_movshdup_mask */
    case 5264:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5415:  /* avx_movddup256 */
    case 5411:  /* avx512f_movddup512 */
    case 5273:  /* *avx512f_movsldup512 */
    case 5271:  /* sse3_movsldup */
    case 5269:  /* avx_movsldup256 */
    case 5267:  /* *avx512f_movshdup512 */
    case 5265:  /* sse3_movshdup */
    case 5263:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8382:  /* vec_interleave_lowv4si_mask */
    case 8380:  /* avx512f_interleave_lowv16si_mask */
    case 8378:  /* avx2_interleave_lowv8si_mask */
    case 8376:  /* vec_interleave_highv4si_mask */
    case 8374:  /* avx512f_interleave_highv16si_mask */
    case 8372:  /* avx2_interleave_highv8si_mask */
    case 8370:  /* vec_interleave_lowv8bf_mask */
    case 8368:  /* vec_interleave_lowv8hf_mask */
    case 8366:  /* vec_interleave_lowv8hi_mask */
    case 8364:  /* avx2_interleave_lowv16bf_mask */
    case 8362:  /* avx2_interleave_lowv16hf_mask */
    case 8360:  /* avx2_interleave_lowv16hi_mask */
    case 8358:  /* avx512bw_interleave_lowv32bf_mask */
    case 8356:  /* avx512bw_interleave_lowv32hf_mask */
    case 8354:  /* avx512bw_interleave_lowv32hi_mask */
    case 8352:  /* vec_interleave_highv8bf_mask */
    case 8350:  /* vec_interleave_highv8hf_mask */
    case 8348:  /* vec_interleave_highv8hi_mask */
    case 8346:  /* avx2_interleave_highv16bf_mask */
    case 8344:  /* avx2_interleave_highv16hf_mask */
    case 8342:  /* avx2_interleave_highv16hi_mask */
    case 8340:  /* avx512bw_interleave_highv32bf_mask */
    case 8338:  /* avx512bw_interleave_highv32hf_mask */
    case 8336:  /* avx512bw_interleave_highv32hi_mask */
    case 8334:  /* vec_interleave_lowv16qi_mask */
    case 8332:  /* avx2_interleave_lowv32qi_mask */
    case 8330:  /* avx512bw_interleave_lowv64qi_mask */
    case 8328:  /* vec_interleave_highv16qi_mask */
    case 8326:  /* avx2_interleave_highv32qi_mask */
    case 8324:  /* avx512bw_interleave_highv64qi_mask */
    case 7211:  /* vec_interleave_lowv2di_mask */
    case 7209:  /* avx512f_interleave_lowv8di_mask */
    case 7207:  /* avx2_interleave_lowv4di_mask */
    case 7205:  /* vec_interleave_highv2di_mask */
    case 7203:  /* avx512f_interleave_highv8di_mask */
    case 7201:  /* avx2_interleave_highv4di_mask */
    case 5419:  /* avx512vl_unpcklpd128_mask */
    case 5418:  /* avx_unpcklpd256_mask */
    case 5414:  /* avx512f_unpcklpd512_mask */
    case 5409:  /* avx512vl_unpckhpd128_mask */
    case 5408:  /* avx_unpckhpd256_mask */
    case 5406:  /* avx512f_unpckhpd512_mask */
    case 5261:  /* unpcklps128_mask */
    case 5260:  /* avx_unpcklps256_mask */
    case 5258:  /* avx512f_unpcklps512_mask */
    case 5256:  /* vec_interleave_highv4sf_mask */
    case 5254:  /* avx_unpckhps256_mask */
    case 5252:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5241:  /* *avx512vl_cvtmask2qv2di_pternlog_false_dep */
    case 5240:  /* *avx512vl_cvtmask2qv4di_pternlog_false_dep */
    case 5239:  /* *avx512f_cvtmask2qv8di_pternlog_false_dep */
    case 5238:  /* *avx512vl_cvtmask2dv4si_pternlog_false_dep */
    case 5237:  /* *avx512vl_cvtmask2dv8si_pternlog_false_dep */
    case 5236:  /* *avx512f_cvtmask2dv16si_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 5235:  /* *avx512vl_cvtmask2qv2di_not */
    case 5234:  /* *avx512vl_cvtmask2qv4di_not */
    case 5233:  /* *avx512f_cvtmask2qv8di_not */
    case 5232:  /* *avx512vl_cvtmask2dv4si_not */
    case 5231:  /* *avx512vl_cvtmask2dv8si_not */
    case 5230:  /* *avx512f_cvtmask2dv16si_not */
    case 5229:  /* *avx512vl_cvtmask2wv8hi_not */
    case 5228:  /* *avx512vl_cvtmask2wv16hi_not */
    case 5227:  /* *avx512bw_cvtmask2wv32hi_not */
    case 5226:  /* *avx512vl_cvtmask2bv16qi_not */
    case 5225:  /* *avx512vl_cvtmask2bv32qi_not */
    case 5224:  /* *avx512bw_cvtmask2bv64qi_not */
    case 5223:  /* *avx512vl_cvtmask2qv2di */
    case 5222:  /* *avx512vl_cvtmask2qv4di */
    case 5221:  /* *avx512f_cvtmask2qv8di */
    case 5220:  /* *avx512vl_cvtmask2dv4si */
    case 5219:  /* *avx512vl_cvtmask2dv8si */
    case 5218:  /* *avx512f_cvtmask2dv16si */
    case 5217:  /* *avx512vl_cvtmask2wv8hi */
    case 5216:  /* *avx512vl_cvtmask2wv16hi */
    case 5215:  /* *avx512bw_cvtmask2wv32hi */
    case 5214:  /* *avx512vl_cvtmask2bv32qi */
    case 5213:  /* *avx512vl_cvtmask2bv16qi */
    case 5212:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5176:  /* sse2_cvtss2sd_mask_round */
    case 5171:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5175:  /* sse2_cvtss2sd_mask */
    case 5170:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7462:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 7461:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 7460:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 7444:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 7443:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 7442:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 7425:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 7424:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 7423:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 7407:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 7406:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 7405:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 7404:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 7403:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 7402:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 7367:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 7366:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 7365:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 7364:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 7363:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 7362:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 7337:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 7336:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 7335:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 7334:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 7333:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 7332:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 7310:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 7309:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 7308:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 5167:  /* *sse2_cvttpd2dq_mask_1 */
    case 5048:  /* *fixuns_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 7459:  /* avx512f_us_truncatev8div16qi2_mask */
    case 7458:  /* avx512f_truncatev8div16qi2_mask */
    case 7457:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 7441:  /* avx512vl_us_truncatev2div2si2_mask */
    case 7440:  /* avx512vl_truncatev2div2si2_mask */
    case 7439:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 7422:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 7421:  /* avx512vl_truncatev2div2hi2_mask */
    case 7420:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 7401:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 7400:  /* avx512vl_truncatev4div4hi2_mask */
    case 7399:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 7398:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 7397:  /* avx512vl_truncatev4siv4hi2_mask */
    case 7396:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 7361:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 7360:  /* avx512vl_truncatev8siv8qi2_mask */
    case 7359:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 7358:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 7357:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 7356:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 7331:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 7330:  /* avx512vl_truncatev4div4qi2_mask */
    case 7329:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 7328:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 7327:  /* avx512vl_truncatev4siv4qi2_mask */
    case 7326:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 7307:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 7306:  /* avx512vl_truncatev2div2qi2_mask */
    case 7305:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 5166:  /* sse2_cvttpd2dq_mask */
    case 5047:  /* fixuns_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 5027:  /* *fixuns_notruncv2dfv2si2_mask_1 */
    case 5016:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 5046:  /* unspec_fixuns_truncv2dfv2si2_mask */
    case 5026:  /* fixuns_notruncv2dfv2si2_mask */
    case 5015:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4874:  /* avx512dq_cvtps2uqqv2di_mask */
    case 4864:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9650:  /* vcvtph2ps */
    case 8564:  /* *sse2_pmovmskb_ext */
    case 8563:  /* *sse2_pmovmskb_zext */
    case 8562:  /* *avx2_pmovmskb_zext */
    case 8523:  /* *sse2_movmskpd_uext */
    case 8522:  /* *sse2_movmskpd_ext */
    case 8521:  /* *avx_movmskpd256_uext */
    case 8520:  /* *avx_movmskpd256_ext */
    case 8519:  /* *sse_movmskps_uext */
    case 8518:  /* *sse_movmskps_ext */
    case 8517:  /* *avx_movmskps256_uext */
    case 8516:  /* *avx_movmskps256_ext */
    case 5044:  /* *unspec_fixuns_truncv2dfv2si2 */
    case 5025:  /* fixuns_notruncv2dfv2si2 */
    case 5014:  /* sse2_cvtpd2dq */
    case 4787:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 4786:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4781:  /* avx512fp16_vcvtss2sh_mask_round */
    case 4777:  /* avx512fp16_vcvtsd2sh_mask_round */
    case 4769:  /* avx512fp16_vcvtsh2ss_mask_round */
    case 4765:  /* avx512fp16_vcvtsh2sd_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4779:  /* avx512fp16_vcvtss2sh_round */
    case 4775:  /* avx512fp16_vcvtsd2sh_round */
    case 4768:  /* avx512fp16_vcvtsh2ss_round */
    case 4764:  /* avx512fp16_vcvtsh2sd_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4780:  /* avx512fp16_vcvtss2sh_mask */
    case 4776:  /* avx512fp16_vcvtsd2sh_mask */
    case 4767:  /* avx512fp16_vcvtsh2ss_mask */
    case 4763:  /* avx512fp16_vcvtsh2sd_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4778:  /* avx512fp16_vcvtss2sh */
    case 4774:  /* avx512fp16_vcvtsd2sh */
    case 4766:  /* avx512fp16_vcvtsh2ss */
    case 4762:  /* avx512fp16_vcvtsh2sd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4729:  /* avx512fp16_float_extend_phv4df2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4948:  /* sse2_cvttsd2siq_round */
    case 4946:  /* sse2_cvttsd2si_round */
    case 4934:  /* avx512f_vcvttsd2usiq_round */
    case 4932:  /* avx512f_vcvttsd2usi_round */
    case 4922:  /* avx512f_vcvttss2usiq_round */
    case 4920:  /* avx512f_vcvttss2usi_round */
    case 4807:  /* sse_cvttss2siq_round */
    case 4805:  /* sse_cvttss2si_round */
    case 4727:  /* avx512fp16_float_extend_phv4df2_round */
    case 4709:  /* avx512fp16_fixuns_truncdi2_round */
    case 4707:  /* avx512fp16_fix_truncdi2_round */
    case 4705:  /* avx512fp16_fixuns_truncsi2_round */
    case 4703:  /* avx512fp16_fix_truncsi2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9332:  /* avx512dq_broadcastv8sf_mask */
    case 9330:  /* avx512dq_broadcastv16sf_mask */
    case 9328:  /* avx512dq_broadcastv4si_mask */
    case 9326:  /* avx512dq_broadcastv8si_mask */
    case 9324:  /* avx512dq_broadcastv16si_mask */
    case 9236:  /* avx512vl_vec_dupv8bf_mask */
    case 9234:  /* avx512vl_vec_dupv16bf_mask */
    case 9232:  /* avx512bw_vec_dupv32bf_mask */
    case 9230:  /* avx512fp16_vec_dupv8hf_mask */
    case 9228:  /* avx512vl_vec_dupv16hf_mask */
    case 9226:  /* avx512bw_vec_dupv32hf_mask */
    case 9224:  /* avx512vl_vec_dupv8hi_mask */
    case 9222:  /* avx512vl_vec_dupv16hi_mask */
    case 9220:  /* avx512bw_vec_dupv32hi_mask */
    case 9218:  /* avx512vl_vec_dupv32qi_mask */
    case 9216:  /* avx512vl_vec_dupv16qi_mask */
    case 9214:  /* avx512bw_vec_dupv64qi_mask */
    case 9212:  /* avx512vl_vec_dupv2df_mask */
    case 9210:  /* avx512vl_vec_dupv4df_mask */
    case 9208:  /* avx512f_vec_dupv8df_mask */
    case 9206:  /* avx512vl_vec_dupv4sf_mask */
    case 9204:  /* avx512vl_vec_dupv8sf_mask */
    case 9202:  /* avx512f_vec_dupv16sf_mask */
    case 9200:  /* avx512vl_vec_dupv2di_mask */
    case 9198:  /* avx512vl_vec_dupv4di_mask */
    case 9196:  /* avx512f_vec_dupv8di_mask */
    case 9194:  /* avx512vl_vec_dupv4si_mask */
    case 9192:  /* avx512vl_vec_dupv8si_mask */
    case 9190:  /* avx512f_vec_dupv16si_mask */
    case 8927:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 8925:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 8903:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 8901:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 8891:  /* avx2_zero_extendv4hiv4di2_mask */
    case 8889:  /* avx2_sign_extendv4hiv4di2_mask */
    case 8876:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 8874:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 8864:  /* avx2_zero_extendv4qiv4di2_mask */
    case 8862:  /* avx2_sign_extendv4qiv4di2_mask */
    case 8852:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 8850:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 8836:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 8834:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 8808:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 8806:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 8796:  /* avx2_zero_extendv8qiv8si2_mask */
    case 8794:  /* avx2_sign_extendv8qiv8si2_mask */
    case 8776:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 8774:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 5243:  /* sse2_cvtps2pd_mask */
    case 5152:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 5150:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 5004:  /* sse2_cvtdq2pd_mask */
    case 5000:  /* floatunsv2siv2df2_mask */
    case 4737:  /* avx512fp16_float_extend_phv2df2_mask */
    case 4731:  /* avx512fp16_float_extend_phv4sf2_mask */
    case 4728:  /* avx512fp16_float_extend_phv4df2_mask */
    case 4689:  /* avx512fp16_fixuns_truncv2di2_mask */
    case 4687:  /* avx512fp16_fix_truncv2di2_mask */
    case 4673:  /* avx512fp16_fixuns_truncv4di2_mask */
    case 4671:  /* avx512fp16_fix_truncv4di2_mask */
    case 4669:  /* avx512fp16_fixuns_truncv4si2_mask */
    case 4667:  /* avx512fp16_fix_truncv4si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5174:  /* sse2_cvtss2sd_round */
    case 5169:  /* sse2_cvtsd2ss_round */
    case 4910:  /* sse2_cvtsi2sdq_round */
    case 4814:  /* cvtusi2sd64_round */
    case 4812:  /* cvtusi2ss64_round */
    case 4809:  /* cvtusi2ss32_round */
    case 4793:  /* sse_cvtsi2ssq_round */
    case 4791:  /* sse_cvtsi2ss_round */
    case 4565:  /* avx512fp16_vcvtusi2shq_round */
    case 4563:  /* avx512fp16_vcvtsi2shq_round */
    case 4561:  /* avx512fp16_vcvtusi2sh_round */
    case 4559:  /* avx512fp16_vcvtsi2sh_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5309:  /* *vec_setv8bf_0_1 */
    case 5308:  /* *vec_setv8hf_0_1 */
    case 5307:  /* *vec_setv8hi_0_1 */
    case 5177:  /* *sse2_vd_cvtss2sd */
    case 5173:  /* sse2_cvtss2sd */
    case 5172:  /* *sse2_vd_cvtsd2ss */
    case 5168:  /* sse2_cvtsd2ss */
    case 4909:  /* sse2_cvtsi2sdq */
    case 4908:  /* sse2_cvtsi2sd */
    case 4813:  /* cvtusi2sd64 */
    case 4811:  /* cvtusi2ss64 */
    case 4810:  /* cvtusi2sd32 */
    case 4808:  /* cvtusi2ss32 */
    case 4792:  /* sse_cvtsi2ssq */
    case 4790:  /* sse_cvtsi2ss */
    case 4564:  /* avx512fp16_vcvtusi2shq */
    case 4562:  /* avx512fp16_vcvtsi2shq */
    case 4560:  /* avx512fp16_vcvtusi2sh */
    case 4558:  /* avx512fp16_vcvtsi2sh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 10934:  /* avx10_2_vcvttss2usisdi_round */
    case 10932:  /* avx10_2_vcvttss2sisdi_round */
    case 10930:  /* avx10_2_vcvttss2usissi_round */
    case 10928:  /* avx10_2_vcvttss2sissi_round */
    case 10926:  /* avx10_2_vcvttsd2usisdi_round */
    case 10924:  /* avx10_2_vcvttsd2sisdi_round */
    case 10922:  /* avx10_2_vcvttsd2usissi_round */
    case 10920:  /* avx10_2_vcvttsd2sissi_round */
    case 4938:  /* sse2_cvtsd2siq_round */
    case 4936:  /* sse2_cvtsd2si_round */
    case 4926:  /* avx512f_vcvtsd2usiq_round */
    case 4924:  /* avx512f_vcvtsd2usi_round */
    case 4914:  /* avx512f_vcvtss2usiq_round */
    case 4912:  /* avx512f_vcvtss2usi_round */
    case 4797:  /* sse_cvtss2siq_round */
    case 4795:  /* sse_cvtss2si_round */
    case 4553:  /* avx512fp16_vcvtsh2siq_round */
    case 4551:  /* avx512fp16_vcvtsh2usiq_round */
    case 4549:  /* avx512fp16_vcvtsh2si_round */
    case 4547:  /* avx512fp16_vcvtsh2usi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5189:  /* *sse2_cvtpd2ps_mask_1 */
    case 4994:  /* *floatunsv2div2sf2_mask_1 */
    case 4993:  /* *floatv2div2sf2_mask_1 */
    case 4761:  /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */
    case 4758:  /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 4757:  /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 4545:  /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */
    case 4544:  /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */
    case 4539:  /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 4538:  /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 4537:  /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 4536:  /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4755:  /* avx512fp16_vcvtpd2ph_v4df_mask_round_1 */
    case 4535:  /* avx512fp16_vcvtuqq2ph_v4di_mask_round_1 */
    case 4533:  /* avx512fp16_vcvtqq2ph_v4di_mask_round_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10348:  /* avx512f_cvtneps2bf16_v4sf_mask_1 */
    case 5188:  /* *sse2_cvtpd2ps_mask */
    case 4992:  /* *floatunsv2div2sf2_mask */
    case 4991:  /* *floatv2div2sf2_mask */
    case 4760:  /* *avx512fp16_vcvtpd2ph_v2df_mask */
    case 4756:  /* avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 4754:  /* avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 4543:  /* *avx512fp16_vcvtuqq2ph_v2di_mask */
    case 4542:  /* *avx512fp16_vcvtqq2ph_v2di_mask */
    case 4534:  /* avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 4532:  /* avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 4531:  /* avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 4530:  /* avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10914:  /* avx10_2_vcvttps2uqqsv4di_mask_round */
    case 10910:  /* avx10_2_vcvttps2qqsv4di_mask_round */
    case 10906:  /* avx10_2_vcvttps2uqqsv8di_mask_round */
    case 10902:  /* avx10_2_vcvttps2qqsv8di_mask_round */
    case 10894:  /* avx10_2_vcvttpd2uqqsv4df_mask_round */
    case 10890:  /* avx10_2_vcvttpd2qqsv4df_mask_round */
    case 10886:  /* avx10_2_vcvttpd2uqqsv8df_mask_round */
    case 10882:  /* avx10_2_vcvttpd2qqsv8df_mask_round */
    case 10874:  /* avx10_2_vcvttpd2udqsv4df_mask_round */
    case 10870:  /* avx10_2_vcvttpd2dqsv4df_mask_round */
    case 10866:  /* avx10_2_vcvttpd2udqsv8df_mask_round */
    case 10862:  /* avx10_2_vcvttpd2dqsv8df_mask_round */
    case 10854:  /* avx10_2_vcvttps2udqsv8sf_mask_round */
    case 10850:  /* avx10_2_vcvttps2dqsv8sf_mask_round */
    case 10846:  /* avx10_2_vcvttps2udqsv16sf_mask_round */
    case 10842:  /* avx10_2_vcvttps2dqsv16sf_mask_round */
    case 10834:  /* avx10_2_cvttps2iubsv8sf_mask_round */
    case 10830:  /* avx10_2_cvttps2ibsv8sf_mask_round */
    case 10826:  /* avx10_2_cvttps2iubsv16sf_mask_round */
    case 10822:  /* avx10_2_cvttps2ibsv16sf_mask_round */
    case 10814:  /* avx10_2_cvtps2iubsv8sf_mask_round */
    case 10810:  /* avx10_2_cvtps2ibsv8sf_mask_round */
    case 10806:  /* avx10_2_cvtps2iubsv16sf_mask_round */
    case 10802:  /* avx10_2_cvtps2ibsv16sf_mask_round */
    case 10794:  /* avx10_2_cvttph2iubsv16hf_mask_round */
    case 10790:  /* avx10_2_cvttph2ibsv16hf_mask_round */
    case 10786:  /* avx10_2_cvttph2iubsv32hf_mask_round */
    case 10782:  /* avx10_2_cvttph2ibsv32hf_mask_round */
    case 10774:  /* avx10_2_cvtph2iubsv16hf_mask_round */
    case 10770:  /* avx10_2_cvtph2ibsv16hf_mask_round */
    case 10766:  /* avx10_2_cvtph2iubsv32hf_mask_round */
    case 10762:  /* avx10_2_cvtph2ibsv32hf_mask_round */
    case 9661:  /* avx512f_vcvtph2ps512_mask_round */
    case 9657:  /* vcvtph2ps256_mask_round */
    case 7068:  /* avx512vl_getexpv4df_mask_round */
    case 7064:  /* avx512f_getexpv8df_mask_round */
    case 7058:  /* avx512vl_getexpv8sf_mask_round */
    case 7054:  /* avx512f_getexpv16sf_mask_round */
    case 7048:  /* avx512vl_getexpv16hf_mask_round */
    case 7044:  /* avx512bw_getexpv32hf_mask_round */
    case 5156:  /* unspec_fixuns_truncv8sfv8si2_mask_round */
    case 5136:  /* unspec_fixuns_truncv4sfv4di2_mask_round */
    case 5132:  /* unspec_fix_truncv4sfv4di2_mask_round */
    case 5128:  /* unspec_fixuns_truncv8sfv8di2_mask_round */
    case 5124:  /* unspec_fix_truncv8sfv8di2_mask_round */
    case 5118:  /* fixuns_notruncv4dfv4di2_mask_round */
    case 5114:  /* fixuns_notruncv8dfv8di2_mask_round */
    case 5108:  /* fix_notruncv4dfv4di2_mask_round */
    case 5104:  /* fix_notruncv8dfv8di2_mask_round */
    case 5076:  /* unspec_fixuns_truncv4dfv4di2_mask_round */
    case 5072:  /* unspec_fix_truncv4dfv4di2_mask_round */
    case 5068:  /* unspec_fixuns_truncv8dfv8di2_mask_round */
    case 5064:  /* unspec_fix_truncv8dfv8di2_mask_round */
    case 5058:  /* unspec_fixuns_truncv4dfv4si2_mask_round */
    case 5052:  /* unspec_fix_truncv4dfv4si2_mask_round */
    case 5035:  /* unspec_fixuns_truncv8dfv8si2_mask_round */
    case 5031:  /* unspec_fix_truncv8dfv8si2_mask_round */
    case 5024:  /* fixuns_notruncv4dfv4si2_mask_round */
    case 5020:  /* fixuns_notruncv8dfv8si2_mask_round */
    case 5012:  /* avx_cvtpd2dq256_mask_round */
    case 5008:  /* avx512f_cvtpd2dq512_mask_round */
    case 4894:  /* unspec_fix_truncv8sfv8si2_mask_round */
    case 4882:  /* unspec_fixuns_truncv16sfv16si2_mask_round */
    case 4878:  /* unspec_fix_truncv16sfv16si2_mask_round */
    case 4872:  /* avx512dq_cvtps2uqqv4di_mask_round */
    case 4868:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 4862:  /* avx512dq_cvtps2qqv4di_mask_round */
    case 4858:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 4852:  /* avx512vl_fixuns_notruncv8sfv8si_mask_round */
    case 4848:  /* avx512f_fixuns_notruncv16sfv16si_mask_round */
    case 4844:  /* avx512f_fix_notruncv16sfv16si_mask_round */
    case 4838:  /* avx_fix_notruncv8sfv8si_mask_round */
    case 4665:  /* unspec_avx512fp16_fixuns_truncv4di2_mask_round */
    case 4661:  /* unspec_avx512fp16_fix_truncv4di2_mask_round */
    case 4609:  /* unspec_avx512fp16_fixuns_truncv8di2_mask_round */
    case 4605:  /* unspec_avx512fp16_fix_truncv8di2_mask_round */
    case 4601:  /* unspec_avx512fp16_fixuns_truncv16si2_mask_round */
    case 4597:  /* unspec_avx512fp16_fix_truncv16si2_mask_round */
    case 4593:  /* unspec_avx512fp16_fixuns_truncv8si2_mask_round */
    case 4589:  /* unspec_avx512fp16_fix_truncv8si2_mask_round */
    case 4585:  /* unspec_avx512fp16_fixuns_truncv32hi2_mask_round */
    case 4581:  /* unspec_avx512fp16_fix_truncv32hi2_mask_round */
    case 4577:  /* unspec_avx512fp16_fixuns_truncv16hi2_mask_round */
    case 4573:  /* unspec_avx512fp16_fix_truncv16hi2_mask_round */
    case 4469:  /* avx512fp16_vcvtph2qq_v4di_mask_round */
    case 4465:  /* avx512fp16_vcvtph2uqq_v4di_mask_round */
    case 4461:  /* avx512fp16_vcvtph2dq_v8si_mask_round */
    case 4457:  /* avx512fp16_vcvtph2udq_v8si_mask_round */
    case 4453:  /* avx512fp16_vcvtph2w_v16hi_mask_round */
    case 4449:  /* avx512fp16_vcvtph2uw_v16hi_mask_round */
    case 4445:  /* avx512fp16_vcvtph2qq_v8di_mask_round */
    case 4441:  /* avx512fp16_vcvtph2uqq_v8di_mask_round */
    case 4437:  /* avx512fp16_vcvtph2dq_v16si_mask_round */
    case 4433:  /* avx512fp16_vcvtph2udq_v16si_mask_round */
    case 4429:  /* avx512fp16_vcvtph2w_v32hi_mask_round */
    case 4425:  /* avx512fp16_vcvtph2uw_v32hi_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10912:  /* avx10_2_vcvttps2uqqsv4di_round */
    case 10908:  /* avx10_2_vcvttps2qqsv4di_round */
    case 10904:  /* avx10_2_vcvttps2uqqsv8di_round */
    case 10900:  /* avx10_2_vcvttps2qqsv8di_round */
    case 10892:  /* avx10_2_vcvttpd2uqqsv4df_round */
    case 10888:  /* avx10_2_vcvttpd2qqsv4df_round */
    case 10884:  /* avx10_2_vcvttpd2uqqsv8df_round */
    case 10880:  /* avx10_2_vcvttpd2qqsv8df_round */
    case 10872:  /* avx10_2_vcvttpd2udqsv4df_round */
    case 10868:  /* avx10_2_vcvttpd2dqsv4df_round */
    case 10864:  /* avx10_2_vcvttpd2udqsv8df_round */
    case 10860:  /* avx10_2_vcvttpd2dqsv8df_round */
    case 10852:  /* avx10_2_vcvttps2udqsv8sf_round */
    case 10848:  /* avx10_2_vcvttps2dqsv8sf_round */
    case 10844:  /* avx10_2_vcvttps2udqsv16sf_round */
    case 10840:  /* avx10_2_vcvttps2dqsv16sf_round */
    case 10832:  /* avx10_2_cvttps2iubsv8sf_round */
    case 10828:  /* avx10_2_cvttps2ibsv8sf_round */
    case 10824:  /* avx10_2_cvttps2iubsv16sf_round */
    case 10820:  /* avx10_2_cvttps2ibsv16sf_round */
    case 10812:  /* avx10_2_cvtps2iubsv8sf_round */
    case 10808:  /* avx10_2_cvtps2ibsv8sf_round */
    case 10804:  /* avx10_2_cvtps2iubsv16sf_round */
    case 10800:  /* avx10_2_cvtps2ibsv16sf_round */
    case 10792:  /* avx10_2_cvttph2iubsv16hf_round */
    case 10788:  /* avx10_2_cvttph2ibsv16hf_round */
    case 10784:  /* avx10_2_cvttph2iubsv32hf_round */
    case 10780:  /* avx10_2_cvttph2ibsv32hf_round */
    case 10772:  /* avx10_2_cvtph2iubsv16hf_round */
    case 10768:  /* avx10_2_cvtph2ibsv16hf_round */
    case 10764:  /* avx10_2_cvtph2iubsv32hf_round */
    case 10760:  /* avx10_2_cvtph2ibsv32hf_round */
    case 9659:  /* *avx512f_vcvtph2ps512_round */
    case 9655:  /* vcvtph2ps256_round */
    case 7066:  /* avx512vl_getexpv4df_round */
    case 7062:  /* avx512f_getexpv8df_round */
    case 7056:  /* avx512vl_getexpv8sf_round */
    case 7052:  /* avx512f_getexpv16sf_round */
    case 7046:  /* avx512vl_getexpv16hf_round */
    case 7042:  /* avx512bw_getexpv32hf_round */
    case 5154:  /* *unspec_fixuns_truncv8sfv8si2_round */
    case 5134:  /* unspec_fixuns_truncv4sfv4di2_round */
    case 5130:  /* unspec_fix_truncv4sfv4di2_round */
    case 5126:  /* unspec_fixuns_truncv8sfv8di2_round */
    case 5122:  /* unspec_fix_truncv8sfv8di2_round */
    case 5116:  /* fixuns_notruncv4dfv4di2_round */
    case 5112:  /* fixuns_notruncv8dfv8di2_round */
    case 5106:  /* fix_notruncv4dfv4di2_round */
    case 5102:  /* fix_notruncv8dfv8di2_round */
    case 5074:  /* unspec_fixuns_truncv4dfv4di2_round */
    case 5070:  /* unspec_fix_truncv4dfv4di2_round */
    case 5066:  /* unspec_fixuns_truncv8dfv8di2_round */
    case 5062:  /* unspec_fix_truncv8dfv8di2_round */
    case 5056:  /* unspec_fixuns_truncv4dfv4si2_round */
    case 5050:  /* unspec_fix_truncv4dfv4si2_round */
    case 5033:  /* unspec_fixuns_truncv8dfv8si2_round */
    case 5029:  /* unspec_fix_truncv8dfv8si2_round */
    case 5022:  /* fixuns_notruncv4dfv4si2_round */
    case 5018:  /* fixuns_notruncv8dfv8si2_round */
    case 5010:  /* avx_cvtpd2dq256_round */
    case 5006:  /* avx512f_cvtpd2dq512_round */
    case 4944:  /* unspec_sse2_cvttsd2siq_round */
    case 4942:  /* unspec_sse2_cvttsd2si_round */
    case 4930:  /* unspec_avx512f_vcvttsd2usiq_round */
    case 4928:  /* unspec_avx512f_vcvttsd2usi_round */
    case 4918:  /* unspec_avx512f_vcvttss2usiq_round */
    case 4916:  /* unspec_avx512f_vcvttss2usi_round */
    case 4892:  /* unspec_fix_truncv8sfv8si2_round */
    case 4880:  /* unspec_fixuns_truncv16sfv16si2_round */
    case 4876:  /* unspec_fix_truncv16sfv16si2_round */
    case 4870:  /* *avx512dq_cvtps2uqqv4di_round */
    case 4866:  /* *avx512dq_cvtps2uqqv8di_round */
    case 4860:  /* *avx512dq_cvtps2qqv4di_round */
    case 4856:  /* *avx512dq_cvtps2qqv8di_round */
    case 4850:  /* *avx512vl_fixuns_notruncv8sfv8si_round */
    case 4846:  /* *avx512f_fixuns_notruncv16sfv16si_round */
    case 4842:  /* avx512f_fix_notruncv16sfv16si_round */
    case 4836:  /* avx_fix_notruncv8sfv8si_round */
    case 4803:  /* unspec_sse_cvttss2siq_round */
    case 4801:  /* unspec_sse_cvttss2si_round */
    case 4701:  /* unspec_avx512fp16_fixuns_truncdi2_round */
    case 4699:  /* unspec_avx512fp16_fix_truncdi2_round */
    case 4697:  /* unspec_avx512fp16_fixuns_truncsi2_round */
    case 4695:  /* unspec_avx512fp16_fix_truncsi2_round */
    case 4663:  /* unspec_avx512fp16_fixuns_truncv4di2_round */
    case 4659:  /* unspec_avx512fp16_fix_truncv4di2_round */
    case 4607:  /* unspec_avx512fp16_fixuns_truncv8di2_round */
    case 4603:  /* unspec_avx512fp16_fix_truncv8di2_round */
    case 4599:  /* unspec_avx512fp16_fixuns_truncv16si2_round */
    case 4595:  /* unspec_avx512fp16_fix_truncv16si2_round */
    case 4591:  /* unspec_avx512fp16_fixuns_truncv8si2_round */
    case 4587:  /* unspec_avx512fp16_fix_truncv8si2_round */
    case 4583:  /* unspec_avx512fp16_fixuns_truncv32hi2_round */
    case 4579:  /* unspec_avx512fp16_fix_truncv32hi2_round */
    case 4575:  /* unspec_avx512fp16_fixuns_truncv16hi2_round */
    case 4571:  /* unspec_avx512fp16_fix_truncv16hi2_round */
    case 4467:  /* avx512fp16_vcvtph2qq_v4di_round */
    case 4463:  /* avx512fp16_vcvtph2uqq_v4di_round */
    case 4459:  /* avx512fp16_vcvtph2dq_v8si_round */
    case 4455:  /* avx512fp16_vcvtph2udq_v8si_round */
    case 4451:  /* avx512fp16_vcvtph2w_v16hi_round */
    case 4447:  /* avx512fp16_vcvtph2uw_v16hi_round */
    case 4443:  /* avx512fp16_vcvtph2qq_v8di_round */
    case 4439:  /* avx512fp16_vcvtph2uqq_v8di_round */
    case 4435:  /* avx512fp16_vcvtph2dq_v16si_round */
    case 4431:  /* avx512fp16_vcvtph2udq_v16si_round */
    case 4427:  /* avx512fp16_vcvtph2w_v32hi_round */
    case 4423:  /* avx512fp16_vcvtph2uw_v32hi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4421:  /* avx512fp16_fcmulcsh_v8hf_mask_round */
    case 4417:  /* avx512fp16_fmulcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4420:  /* avx512fp16_fcmulcsh_v8hf_mask */
    case 4416:  /* avx512fp16_fmulcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4413:  /* avx512fp16_fcmaddcsh_v8hf_mask_round */
    case 4411:  /* avx512fp16_fmaddcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 4412:  /* avx512fp16_fcmaddcsh_v8hf_mask */
    case 4410:  /* avx512fp16_fmaddcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 4409:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */
    case 4405:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4408:  /* avx512fp16_fma_fcmaddcsh_v8hf_round */
    case 4404:  /* avx512fp16_fma_fmaddcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4407:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */
    case 4403:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4406:  /* avx512fp16_fma_fcmaddcsh_v8hf */
    case 4402:  /* avx512fp16_fma_fmaddcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4397:  /* avx512vl_fcmulc_v16hf_mask_round */
    case 4393:  /* avx512vl_fmulc_v16hf_mask_round */
    case 4389:  /* avx512bw_fcmulc_v32hf_mask_round */
    case 4385:  /* avx512bw_fmulc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4401:  /* avx512fp16_fcmulc_v8hf_mask */
    case 4399:  /* avx512fp16_fmulc_v8hf_mask */
    case 4395:  /* avx512vl_fcmulc_v16hf_mask */
    case 4391:  /* avx512vl_fmulc_v16hf_mask */
    case 4387:  /* avx512bw_fcmulc_v32hf_mask */
    case 4383:  /* avx512bw_fmulc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 4379:  /* avx512vl_fcmaddc_v16hf_mask_round */
    case 4377:  /* avx512vl_fmaddc_v16hf_mask_round */
    case 4375:  /* avx512bw_fcmaddc_v32hf_mask_round */
    case 4373:  /* avx512bw_fmaddc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4381:  /* avx512fp16_fcmaddc_v8hf_mask */
    case 4380:  /* avx512fp16_fmaddc_v8hf_mask */
    case 4378:  /* avx512vl_fcmaddc_v16hf_mask */
    case 4376:  /* avx512vl_fmaddc_v16hf_mask */
    case 4374:  /* avx512bw_fcmaddc_v32hf_mask */
    case 4372:  /* avx512bw_fmaddc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4371:  /* fma_v8hf_fcmaddc_bcst */
    case 4370:  /* fma_v16hf_fcmaddc_bcst */
    case 4369:  /* fma_v32hf_fcmaddc_bcst */
    case 4368:  /* fma_v8hf_fmaddc_bcst */
    case 4367:  /* fma_v16hf_fmaddc_bcst */
    case 4366:  /* fma_v32hf_fmaddc_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 4343:  /* fma_fcmaddc_v16hf_maskz_1_round */
    case 4339:  /* fma_fmaddc_v16hf_maskz_1_round */
    case 4335:  /* fma_fcmaddc_v32hf_maskz_1_round */
    case 4331:  /* fma_fmaddc_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4347:  /* fma_fcmaddc_v8hf_maskz_1 */
    case 4345:  /* fma_fmaddc_v8hf_maskz_1 */
    case 4342:  /* fma_fcmaddc_v16hf_maskz_1 */
    case 4338:  /* fma_fmaddc_v16hf_maskz_1 */
    case 4334:  /* fma_fcmaddc_v32hf_maskz_1 */
    case 4330:  /* fma_fmaddc_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 4327:  /* *fma4i_vmfnmsub_v2df */
    case 4326:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4323:  /* *fma4i_vmfmsub_v2df */
    case 4322:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4321:  /* *fma4i_vmfmadd_v2df */
    case 4320:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4319:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 4317:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
    case 4315:  /* *avx512f_vmfnmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4318:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 4316:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
    case 4314:  /* *avx512f_vmfnmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4313:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 4311:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
    case 4309:  /* *avx512f_vmfnmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4312:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 4310:  /* *avx512f_vmfnmsub_v4sf_mask3 */
    case 4308:  /* *avx512f_vmfnmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4307:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 4305:  /* *avx512f_vmfnmsub_v4sf_mask_round */
    case 4303:  /* *avx512f_vmfnmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4306:  /* *avx512f_vmfnmsub_v2df_mask */
    case 4304:  /* *avx512f_vmfnmsub_v4sf_mask */
    case 4302:  /* *avx512f_vmfnmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4301:  /* avx512f_vmfnmadd_v2df_maskz_1_round */
    case 4299:  /* avx512f_vmfnmadd_v4sf_maskz_1_round */
    case 4297:  /* avx512f_vmfnmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4300:  /* avx512f_vmfnmadd_v2df_maskz_1 */
    case 4298:  /* avx512f_vmfnmadd_v4sf_maskz_1 */
    case 4296:  /* avx512f_vmfnmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4295:  /* avx512f_vmfnmadd_v2df_mask3_round */
    case 4293:  /* avx512f_vmfnmadd_v4sf_mask3_round */
    case 4291:  /* avx512f_vmfnmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4294:  /* avx512f_vmfnmadd_v2df_mask3 */
    case 4292:  /* avx512f_vmfnmadd_v4sf_mask3 */
    case 4290:  /* avx512f_vmfnmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4289:  /* avx512f_vmfnmadd_v2df_mask_round */
    case 4287:  /* avx512f_vmfnmadd_v4sf_mask_round */
    case 4285:  /* avx512f_vmfnmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4288:  /* avx512f_vmfnmadd_v2df_mask */
    case 4286:  /* avx512f_vmfnmadd_v4sf_mask */
    case 4284:  /* avx512f_vmfnmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4283:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 4281:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
    case 4279:  /* *avx512f_vmfmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4282:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 4280:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
    case 4278:  /* *avx512f_vmfmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4277:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 4275:  /* avx512f_vmfmsub_v4sf_mask3_round */
    case 4273:  /* avx512f_vmfmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4276:  /* avx512f_vmfmsub_v2df_mask3 */
    case 4274:  /* avx512f_vmfmsub_v4sf_mask3 */
    case 4272:  /* avx512f_vmfmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4271:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 4269:  /* *avx512f_vmfmsub_v4sf_mask_round */
    case 4267:  /* *avx512f_vmfmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4270:  /* *avx512f_vmfmsub_v2df_mask */
    case 4268:  /* *avx512f_vmfmsub_v4sf_mask */
    case 4266:  /* *avx512f_vmfmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4265:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 4263:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
    case 4261:  /* avx512f_vmfmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4264:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 4262:  /* avx512f_vmfmadd_v4sf_maskz_1 */
    case 4260:  /* avx512f_vmfmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4259:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 4257:  /* avx512f_vmfmadd_v4sf_mask3_round */
    case 4255:  /* avx512f_vmfmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4258:  /* avx512f_vmfmadd_v2df_mask3 */
    case 4256:  /* avx512f_vmfmadd_v4sf_mask3 */
    case 4254:  /* avx512f_vmfmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 4253:  /* avx512f_vmfmadd_v2df_mask_round */
    case 4251:  /* avx512f_vmfmadd_v4sf_mask_round */
    case 4249:  /* avx512f_vmfmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4252:  /* avx512f_vmfmadd_v2df_mask */
    case 4250:  /* avx512f_vmfmadd_v4sf_mask */
    case 4248:  /* avx512f_vmfmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 4247:  /* *fmai_fnmsub_v2df_round */
    case 4245:  /* *fmai_fnmsub_v4sf_round */
    case 4243:  /* *fmai_fnmsub_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4246:  /* *fmai_fnmsub_v2df */
    case 4244:  /* *fmai_fnmsub_v4sf */
    case 4242:  /* *fmai_fnmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4241:  /* *fmai_fnmadd_v2df_round */
    case 4239:  /* *fmai_fnmadd_v4sf_round */
    case 4237:  /* *fmai_fnmadd_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4240:  /* *fmai_fnmadd_v2df */
    case 4238:  /* *fmai_fnmadd_v4sf */
    case 4236:  /* *fmai_fnmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4235:  /* *fmai_fmsub_v2df */
    case 4233:  /* *fmai_fmsub_v4sf */
    case 4231:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4234:  /* *fmai_fmsub_v2df */
    case 4232:  /* *fmai_fmsub_v4sf */
    case 4230:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4229:  /* *fmai_fmadd_v2df */
    case 4227:  /* *fmai_fmadd_v4sf */
    case 4225:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4228:  /* *fmai_fmadd_v2df */
    case 4226:  /* *fmai_fmadd_v4sf */
    case 4224:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4223:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 4221:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 4219:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 4217:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 4215:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 4213:  /* avx512f_fmsubadd_v16sf_mask3_round */
    case 4211:  /* avx512fp16_fmsubadd_v8hf_mask3_round */
    case 4209:  /* avx512vl_fmsubadd_v16hf_mask3_round */
    case 4207:  /* avx512bw_fmsubadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 4222:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 4220:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 4218:  /* avx512f_fmsubadd_v8df_mask3 */
    case 4216:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 4214:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 4212:  /* avx512f_fmsubadd_v16sf_mask3 */
    case 4210:  /* avx512fp16_fmsubadd_v8hf_mask3 */
    case 4208:  /* avx512vl_fmsubadd_v16hf_mask3 */
    case 4206:  /* avx512bw_fmsubadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 4205:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 4203:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 4201:  /* avx512f_fmsubadd_v8df_mask_round */
    case 4199:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 4197:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 4195:  /* avx512f_fmsubadd_v16sf_mask_round */
    case 4193:  /* avx512fp16_fmsubadd_v8hf_mask_round */
    case 4191:  /* avx512vl_fmsubadd_v16hf_mask_round */
    case 4189:  /* avx512bw_fmsubadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4204:  /* avx512vl_fmsubadd_v2df_mask */
    case 4202:  /* avx512vl_fmsubadd_v4df_mask */
    case 4200:  /* avx512f_fmsubadd_v8df_mask */
    case 4198:  /* avx512vl_fmsubadd_v4sf_mask */
    case 4196:  /* avx512vl_fmsubadd_v8sf_mask */
    case 4194:  /* avx512f_fmsubadd_v16sf_mask */
    case 4192:  /* avx512fp16_fmsubadd_v8hf_mask */
    case 4190:  /* avx512vl_fmsubadd_v16hf_mask */
    case 4188:  /* avx512bw_fmsubadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4185:  /* fma_fmsubadd_v4df_maskz_1_round */
    case 4181:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 4175:  /* fma_fmsubadd_v8sf_maskz_1_round */
    case 4171:  /* fma_fmsubadd_v16sf_maskz_1_round */
    case 4165:  /* fma_fmsubadd_v16hf_maskz_1_round */
    case 4161:  /* fma_fmsubadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4184:  /* *fma_fmsubadd_v4df_round */
    case 4180:  /* *fma_fmsubadd_v8df_round */
    case 4174:  /* *fma_fmsubadd_v8sf_round */
    case 4170:  /* *fma_fmsubadd_v16sf_round */
    case 4164:  /* *fma_fmsubadd_v16hf_round */
    case 4160:  /* *fma_fmsubadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4187:  /* fma_fmsubadd_v2df_maskz_1 */
    case 4183:  /* fma_fmsubadd_v4df_maskz_1 */
    case 4179:  /* fma_fmsubadd_v8df_maskz_1 */
    case 4177:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 4173:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 4169:  /* fma_fmsubadd_v16sf_maskz_1 */
    case 4167:  /* fma_fmsubadd_v8hf_maskz_1 */
    case 4163:  /* fma_fmsubadd_v16hf_maskz_1 */
    case 4159:  /* fma_fmsubadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4186:  /* *fma_fmsubadd_v2df */
    case 4182:  /* *fma_fmsubadd_v4df */
    case 4178:  /* *fma_fmsubadd_v8df */
    case 4176:  /* *fma_fmsubadd_v4sf */
    case 4172:  /* *fma_fmsubadd_v8sf */
    case 4168:  /* *fma_fmsubadd_v16sf */
    case 4166:  /* *fma_fmsubadd_v8hf */
    case 4162:  /* *fma_fmsubadd_v16hf */
    case 4158:  /* *fma_fmsubadd_v32hf */
    case 4157:  /* *fma_fmsubadd_v2df */
    case 4156:  /* *fma_fmsubadd_v4df */
    case 4155:  /* *fma_fmsubadd_v4sf */
    case 4154:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 4152:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 4150:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 4147:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 4145:  /* avx512f_fmaddsub_v16sf_mask3_round */
    case 4142:  /* avx512vl_fmaddsub_v16hf_mask3_round */
    case 4140:  /* avx512bw_fmaddsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 4153:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 4151:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 4149:  /* avx512f_fmaddsub_v8df_mask3 */
    case 4148:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 4146:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 4144:  /* avx512f_fmaddsub_v16sf_mask3 */
    case 4143:  /* avx512fp16_fmaddsub_v8hf_mask3 */
    case 4141:  /* avx512vl_fmaddsub_v16hf_mask3 */
    case 4139:  /* avx512bw_fmaddsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 4137:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 4135:  /* avx512f_fmaddsub_v8df_mask_round */
    case 4132:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 4130:  /* avx512f_fmaddsub_v16sf_mask_round */
    case 4127:  /* avx512vl_fmaddsub_v16hf_mask_round */
    case 4125:  /* avx512bw_fmaddsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10587:  /* vdpphps_v4sf_mask */
    case 10586:  /* vdpphps_v8sf_mask */
    case 10585:  /* vdpphps_v16sf_mask */
    case 10563:  /* vpdpwuuds_v4si_mask */
    case 10562:  /* vpdpwuud_v4si_mask */
    case 10561:  /* vpdpwsuds_v4si_mask */
    case 10560:  /* vpdpwsud_v4si_mask */
    case 10559:  /* vpdpwusds_v4si_mask */
    case 10558:  /* vpdpwusd_v4si_mask */
    case 10557:  /* vpdpwuuds_v8si_mask */
    case 10556:  /* vpdpwuud_v8si_mask */
    case 10555:  /* vpdpwsuds_v8si_mask */
    case 10554:  /* vpdpwsud_v8si_mask */
    case 10553:  /* vpdpwusds_v8si_mask */
    case 10552:  /* vpdpwusd_v8si_mask */
    case 10551:  /* vpdpwuuds_v16si_mask */
    case 10550:  /* vpdpwuud_v16si_mask */
    case 10549:  /* vpdpwsuds_v16si_mask */
    case 10548:  /* vpdpwsud_v16si_mask */
    case 10547:  /* vpdpwusds_v16si_mask */
    case 10546:  /* vpdpwusd_v16si_mask */
    case 10409:  /* vpdpbuuds_v4si_mask */
    case 10408:  /* vpdpbuud_v4si_mask */
    case 10407:  /* vpdpbsuds_v4si_mask */
    case 10406:  /* vpdpbsud_v4si_mask */
    case 10405:  /* vpdpbssds_v4si_mask */
    case 10404:  /* vpdpbssd_v4si_mask */
    case 10403:  /* vpdpbuuds_v8si_mask */
    case 10402:  /* vpdpbuud_v8si_mask */
    case 10401:  /* vpdpbsuds_v8si_mask */
    case 10400:  /* vpdpbsud_v8si_mask */
    case 10399:  /* vpdpbssds_v8si_mask */
    case 10398:  /* vpdpbssd_v8si_mask */
    case 10397:  /* vpdpbuuds_v16si_mask */
    case 10396:  /* vpdpbuud_v16si_mask */
    case 10395:  /* vpdpbsuds_v16si_mask */
    case 10394:  /* vpdpbsud_v16si_mask */
    case 10393:  /* vpdpbssds_v16si_mask */
    case 10392:  /* vpdpbssd_v16si_mask */
    case 10362:  /* avx512f_dpbf16ps_v4sf_mask */
    case 10361:  /* avx512f_dpbf16ps_v8sf_mask */
    case 10360:  /* avx512f_dpbf16ps_v16sf_mask */
    case 10308:  /* vpdpwssds_v4si_mask */
    case 10307:  /* vpdpwssds_v8si_mask */
    case 10306:  /* vpdpwssds_v16si_mask */
    case 10299:  /* vpdpwssd_v4si_mask */
    case 10298:  /* vpdpwssd_v8si_mask */
    case 10297:  /* vpdpwssd_v16si_mask */
    case 10290:  /* vpdpbusds_v4si_mask */
    case 10289:  /* vpdpbusds_v8si_mask */
    case 10288:  /* vpdpbusds_v16si_mask */
    case 10281:  /* vpdpbusd_v4si_mask */
    case 10280:  /* vpdpbusd_v8si_mask */
    case 10279:  /* vpdpbusd_v16si_mask */
    case 10266:  /* vpshldv_v2di_mask */
    case 10265:  /* vpshldv_v4si_mask */
    case 10264:  /* vpshldv_v8hi_mask */
    case 10263:  /* vpshldv_v4di_mask */
    case 10262:  /* vpshldv_v8si_mask */
    case 10261:  /* vpshldv_v16hi_mask */
    case 10260:  /* vpshldv_v8di_mask */
    case 10259:  /* vpshldv_v16si_mask */
    case 10258:  /* vpshldv_v32hi_mask */
    case 10239:  /* vpshrdv_v2di_mask */
    case 10238:  /* vpshrdv_v4si_mask */
    case 10237:  /* vpshrdv_v8hi_mask */
    case 10236:  /* vpshrdv_v4di_mask */
    case 10235:  /* vpshrdv_v8si_mask */
    case 10234:  /* vpshrdv_v16hi_mask */
    case 10233:  /* vpshrdv_v8di_mask */
    case 10232:  /* vpshrdv_v16si_mask */
    case 10231:  /* vpshrdv_v32hi_mask */
    case 10129:  /* vpmadd52huqv2di_mask */
    case 10128:  /* vpmadd52luqv2di_mask */
    case 10127:  /* vpmadd52huqv4di_mask */
    case 10126:  /* vpmadd52luqv4di_mask */
    case 10125:  /* vpmadd52huqv8di_mask */
    case 10124:  /* vpmadd52luqv8di_mask */
    case 4138:  /* avx512vl_fmaddsub_v2df_mask */
    case 4136:  /* avx512vl_fmaddsub_v4df_mask */
    case 4134:  /* avx512f_fmaddsub_v8df_mask */
    case 4133:  /* avx512vl_fmaddsub_v4sf_mask */
    case 4131:  /* avx512vl_fmaddsub_v8sf_mask */
    case 4129:  /* avx512f_fmaddsub_v16sf_mask */
    case 4128:  /* avx512fp16_fmaddsub_v8hf_mask */
    case 4126:  /* avx512vl_fmaddsub_v16hf_mask */
    case 4124:  /* avx512bw_fmaddsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10976:  /* avx10_2_minmaxpv2df_mask_round */
    case 10972:  /* avx10_2_minmaxpv4df_mask_round */
    case 10968:  /* avx10_2_minmaxpv8df_mask_round */
    case 10964:  /* avx10_2_minmaxpv4sf_mask_round */
    case 10960:  /* avx10_2_minmaxpv8sf_mask_round */
    case 10956:  /* avx10_2_minmaxpv16sf_mask_round */
    case 10952:  /* avx10_2_minmaxpv8hf_mask_round */
    case 10948:  /* avx10_2_minmaxpv16hf_mask_round */
    case 10944:  /* avx10_2_minmaxpv32hf_mask_round */
    case 9980:  /* avx512dq_rangepv4df_mask_round */
    case 9976:  /* avx512dq_rangepv8df_mask_round */
    case 9970:  /* avx512dq_rangepv8sf_mask_round */
    case 9966:  /* avx512dq_rangepv16sf_mask_round */
    case 4121:  /* fma_fmaddsub_v4df_maskz_1_round */
    case 4117:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 4111:  /* fma_fmaddsub_v8sf_maskz_1_round */
    case 4107:  /* fma_fmaddsub_v16sf_maskz_1_round */
    case 4101:  /* fma_fmaddsub_v16hf_maskz_1_round */
    case 4097:  /* fma_fmaddsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10975:  /* avx10_2_minmaxpv2df_mask */
    case 10971:  /* avx10_2_minmaxpv4df_mask */
    case 10967:  /* avx10_2_minmaxpv8df_mask */
    case 10963:  /* avx10_2_minmaxpv4sf_mask */
    case 10959:  /* avx10_2_minmaxpv8sf_mask */
    case 10955:  /* avx10_2_minmaxpv16sf_mask */
    case 10951:  /* avx10_2_minmaxpv8hf_mask */
    case 10947:  /* avx10_2_minmaxpv16hf_mask */
    case 10943:  /* avx10_2_minmaxpv32hf_mask */
    case 10940:  /* avx10_2_minmaxbf16_v8bf_mask */
    case 10938:  /* avx10_2_minmaxbf16_v16bf_mask */
    case 10936:  /* avx10_2_minmaxbf16_v32bf_mask */
    case 10590:  /* vdpphps_v4sf_maskz_1 */
    case 10589:  /* vdpphps_v8sf_maskz_1 */
    case 10588:  /* vdpphps_v16sf_maskz_1 */
    case 10359:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 10357:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 10355:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 10311:  /* vpdpwssds_v4si_maskz_1 */
    case 10310:  /* vpdpwssds_v8si_maskz_1 */
    case 10309:  /* vpdpwssds_v16si_maskz_1 */
    case 10302:  /* vpdpwssd_v4si_maskz_1 */
    case 10301:  /* vpdpwssd_v8si_maskz_1 */
    case 10300:  /* vpdpwssd_v16si_maskz_1 */
    case 10293:  /* vpdpbusds_v4si_maskz_1 */
    case 10292:  /* vpdpbusds_v8si_maskz_1 */
    case 10291:  /* vpdpbusds_v16si_maskz_1 */
    case 10284:  /* vpdpbusd_v4si_maskz_1 */
    case 10283:  /* vpdpbusd_v8si_maskz_1 */
    case 10282:  /* vpdpbusd_v16si_maskz_1 */
    case 10275:  /* vpshldv_v2di_maskz_1 */
    case 10274:  /* vpshldv_v4si_maskz_1 */
    case 10273:  /* vpshldv_v8hi_maskz_1 */
    case 10272:  /* vpshldv_v4di_maskz_1 */
    case 10271:  /* vpshldv_v8si_maskz_1 */
    case 10270:  /* vpshldv_v16hi_maskz_1 */
    case 10269:  /* vpshldv_v8di_maskz_1 */
    case 10268:  /* vpshldv_v16si_maskz_1 */
    case 10267:  /* vpshldv_v32hi_maskz_1 */
    case 10248:  /* vpshrdv_v2di_maskz_1 */
    case 10247:  /* vpshrdv_v4si_maskz_1 */
    case 10246:  /* vpshrdv_v8hi_maskz_1 */
    case 10245:  /* vpshrdv_v4di_maskz_1 */
    case 10244:  /* vpshrdv_v8si_maskz_1 */
    case 10243:  /* vpshrdv_v16hi_maskz_1 */
    case 10242:  /* vpshrdv_v8di_maskz_1 */
    case 10241:  /* vpshrdv_v16si_maskz_1 */
    case 10240:  /* vpshrdv_v32hi_maskz_1 */
    case 10221:  /* vpshld_v2di_mask */
    case 10219:  /* vpshld_v4si_mask */
    case 10217:  /* vpshld_v8hi_mask */
    case 10215:  /* vpshld_v4di_mask */
    case 10213:  /* vpshld_v8si_mask */
    case 10211:  /* vpshld_v16hi_mask */
    case 10209:  /* vpshld_v8di_mask */
    case 10207:  /* vpshld_v16si_mask */
    case 10205:  /* vpshld_v32hi_mask */
    case 10203:  /* vpshrd_v2di_mask */
    case 10201:  /* vpshrd_v4si_mask */
    case 10199:  /* vpshrd_v8hi_mask */
    case 10197:  /* vpshrd_v4di_mask */
    case 10195:  /* vpshrd_v8si_mask */
    case 10193:  /* vpshrd_v16hi_mask */
    case 10191:  /* vpshrd_v8di_mask */
    case 10189:  /* vpshrd_v16si_mask */
    case 10187:  /* vpshrd_v32hi_mask */
    case 10179:  /* vgf2p8affineqb_v16qi_mask */
    case 10177:  /* vgf2p8affineqb_v32qi_mask */
    case 10175:  /* vgf2p8affineqb_v64qi_mask */
    case 10173:  /* vgf2p8affineinvqb_v16qi_mask */
    case 10171:  /* vgf2p8affineinvqb_v32qi_mask */
    case 10169:  /* vgf2p8affineinvqb_v64qi_mask */
    case 10123:  /* vpmadd52huqv2di_maskz_1 */
    case 10122:  /* vpmadd52luqv2di_maskz_1 */
    case 10121:  /* vpmadd52huqv4di_maskz_1 */
    case 10120:  /* vpmadd52luqv4di_maskz_1 */
    case 10119:  /* vpmadd52huqv8di_maskz_1 */
    case 10118:  /* vpmadd52luqv8di_maskz_1 */
    case 10062:  /* avx512bw_dbpsadbwv32hi_mask */
    case 10060:  /* avx512bw_dbpsadbwv16hi_mask */
    case 10058:  /* avx512bw_dbpsadbwv8hi_mask */
    case 9982:  /* avx512dq_rangepv2df_mask */
    case 9979:  /* avx512dq_rangepv4df_mask */
    case 9975:  /* avx512dq_rangepv8df_mask */
    case 9972:  /* avx512dq_rangepv4sf_mask */
    case 9969:  /* avx512dq_rangepv8sf_mask */
    case 9965:  /* avx512dq_rangepv16sf_mask */
    case 9432:  /* avx512vl_vpermt2varv8bf3_maskz_1 */
    case 9430:  /* avx512vl_vpermt2varv16bf3_maskz_1 */
    case 9428:  /* avx512bw_vpermt2varv32bf3_maskz_1 */
    case 9426:  /* avx512fp16_vpermt2varv8hf3_maskz_1 */
    case 9424:  /* avx512vl_vpermt2varv16hf3_maskz_1 */
    case 9422:  /* avx512bw_vpermt2varv32hf3_maskz_1 */
    case 9420:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 9418:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 9416:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 9414:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 9412:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 9410:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 9408:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 9406:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 9404:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 9402:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 9400:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 9398:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 9396:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 9394:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 9392:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 9390:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 9388:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 9386:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 8731:  /* sse4_1_mpsadbw_mask */
    case 8729:  /* avx2_mpsadbw_mask */
    case 8727:  /* avx10_2_mpsadbw_mask */
    case 8646:  /* ssse3_palignrv16qi_mask */
    case 8645:  /* avx2_palignrv32qi_mask */
    case 8644:  /* avx512bw_palignrv64qi_mask */
    case 7094:  /* avx512vl_alignv2di_mask */
    case 7092:  /* avx512vl_alignv4di_mask */
    case 7090:  /* avx512f_alignv8di_mask */
    case 7088:  /* avx512vl_alignv4si_mask */
    case 7086:  /* avx512vl_alignv8si_mask */
    case 7084:  /* avx512f_alignv16si_mask */
    case 4123:  /* fma_fmaddsub_v2df_maskz_1 */
    case 4119:  /* fma_fmaddsub_v4df_maskz_1 */
    case 4115:  /* fma_fmaddsub_v8df_maskz_1 */
    case 4113:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 4109:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 4105:  /* fma_fmaddsub_v16sf_maskz_1 */
    case 4103:  /* fma_fmaddsub_v8hf_maskz_1 */
    case 4099:  /* fma_fmaddsub_v16hf_maskz_1 */
    case 4095:  /* fma_fmaddsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4088:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 4086:  /* avx512f_fnmsub_v8df_mask3_round */
    case 4083:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 4081:  /* avx512f_fnmsub_v16sf_mask3_round */
    case 4078:  /* avx512vl_fnmsub_v16hf_mask3_round */
    case 4076:  /* avx512bw_fnmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 10680:  /* avx10_2_fnmsubbf16_v8bf_mask3 */
    case 10679:  /* avx10_2_fnmsubbf16_v16bf_mask3 */
    case 10678:  /* avx10_2_fnmsubbf16_v32bf_mask3 */
    case 4089:  /* avx512vl_fnmsub_v2df_mask3 */
    case 4087:  /* avx512vl_fnmsub_v4df_mask3 */
    case 4085:  /* avx512f_fnmsub_v8df_mask3 */
    case 4084:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 4082:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 4080:  /* avx512f_fnmsub_v16sf_mask3 */
    case 4079:  /* avx512fp16_fnmsub_v8hf_mask3 */
    case 4077:  /* avx512vl_fnmsub_v16hf_mask3 */
    case 4075:  /* avx512bw_fnmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 4073:  /* avx512vl_fnmsub_v4df_mask_round */
    case 4071:  /* avx512f_fnmsub_v8df_mask_round */
    case 4068:  /* avx512vl_fnmsub_v8sf_mask_round */
    case 4066:  /* avx512f_fnmsub_v16sf_mask_round */
    case 4063:  /* avx512vl_fnmsub_v16hf_mask_round */
    case 4061:  /* avx512bw_fnmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10677:  /* avx10_2_fnmsubbf16_v8bf_mask */
    case 10676:  /* avx10_2_fnmsubbf16_v16bf_mask */
    case 10675:  /* avx10_2_fnmsubbf16_v32bf_mask */
    case 4074:  /* avx512vl_fnmsub_v2df_mask */
    case 4072:  /* avx512vl_fnmsub_v4df_mask */
    case 4070:  /* avx512f_fnmsub_v8df_mask */
    case 4069:  /* avx512vl_fnmsub_v4sf_mask */
    case 4067:  /* avx512vl_fnmsub_v8sf_mask */
    case 4065:  /* avx512f_fnmsub_v16sf_mask */
    case 4064:  /* avx512fp16_fnmsub_v8hf_mask */
    case 4062:  /* avx512vl_fnmsub_v16hf_mask */
    case 4060:  /* avx512bw_fnmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4057:  /* fma_fnmsub_v4df_maskz_1_round */
    case 4053:  /* fma_fnmsub_v8df_maskz_1_round */
    case 4046:  /* fma_fnmsub_v8sf_maskz_1_round */
    case 4042:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 4034:  /* fma_fnmsub_v16hf_maskz_1_round */
    case 4030:  /* fma_fnmsub_v32hf_maskz_1_round */
    case 4026:  /* *fma_fnmsub_v4df */
    case 4022:  /* *fma_fnmsub_v8sf */
    case 4018:  /* *fma_fnmsub_v2df */
    case 4014:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10674:  /* avx10_2_fnmsubbf16_v8bf_maskz_1 */
    case 10672:  /* avx10_2_fnmsubbf16_v16bf_maskz_1 */
    case 10670:  /* avx10_2_fnmsubbf16_v32bf_maskz_1 */
    case 4059:  /* fma_fnmsub_v2df_maskz_1 */
    case 4055:  /* fma_fnmsub_v4df_maskz_1 */
    case 4051:  /* fma_fnmsub_v8df_maskz_1 */
    case 4048:  /* fma_fnmsub_v4sf_maskz_1 */
    case 4044:  /* fma_fnmsub_v8sf_maskz_1 */
    case 4040:  /* fma_fnmsub_v16sf_maskz_1 */
    case 4036:  /* fma_fnmsub_v8hf_maskz_1 */
    case 4032:  /* fma_fnmsub_v16hf_maskz_1 */
    case 4028:  /* fma_fnmsub_v32hf_maskz_1 */
    case 4024:  /* *fma_fnmsub_v4df */
    case 4020:  /* *fma_fnmsub_v8sf */
    case 4016:  /* *fma_fnmsub_v2df */
    case 4012:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4056:  /* *fma_fnmsub_v4df_round */
    case 4052:  /* *fma_fnmsub_v8df_round */
    case 4045:  /* *fma_fnmsub_v8sf_round */
    case 4041:  /* *fma_fnmsub_v16sf_round */
    case 4033:  /* *fma_fnmsub_v16hf_round */
    case 4029:  /* *fma_fnmsub_v32hf_round */
    case 4025:  /* *fma_fnmsub_v4df */
    case 4021:  /* *fma_fnmsub_v8sf */
    case 4017:  /* *fma_fnmsub_v2df */
    case 4013:  /* *fma_fnmsub_v4sf */
    case 4010:  /* *fma_fnmsub_df */
    case 4008:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10673:  /* avx10_2_fnmsubbf16_v8bf */
    case 10671:  /* avx10_2_fnmsubbf16_v16bf */
    case 10669:  /* avx10_2_fnmsubbf16_v32bf */
    case 4058:  /* *fma_fnmsub_v2df */
    case 4054:  /* *fma_fnmsub_v4df */
    case 4050:  /* *fma_fnmsub_v8df */
    case 4049:  /* *fma_fnmsub_df */
    case 4047:  /* *fma_fnmsub_v4sf */
    case 4043:  /* *fma_fnmsub_v8sf */
    case 4039:  /* *fma_fnmsub_v16sf */
    case 4038:  /* *fma_fnmsub_sf */
    case 4037:  /* *fma_fnmsub_hf */
    case 4035:  /* *fma_fnmsub_v8hf */
    case 4031:  /* *fma_fnmsub_v16hf */
    case 4027:  /* *fma_fnmsub_v32hf */
    case 4023:  /* *fma_fnmsub_v4df */
    case 4019:  /* *fma_fnmsub_v8sf */
    case 4015:  /* *fma_fnmsub_v2df */
    case 4011:  /* *fma_fnmsub_v4sf */
    case 4009:  /* *fma_fnmsub_df */
    case 4007:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 4005:  /* avx512vl_fnmadd_v4df_mask3_round */
    case 4003:  /* avx512f_fnmadd_v8df_mask3_round */
    case 4000:  /* avx512vl_fnmadd_v8sf_mask3_round */
    case 3998:  /* avx512f_fnmadd_v16sf_mask3_round */
    case 3995:  /* avx512vl_fnmadd_v16hf_mask3_round */
    case 3993:  /* avx512bw_fnmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 10656:  /* avx10_2_fnmaddbf16_v8bf_mask3 */
    case 10655:  /* avx10_2_fnmaddbf16_v16bf_mask3 */
    case 10654:  /* avx10_2_fnmaddbf16_v32bf_mask3 */
    case 4006:  /* avx512vl_fnmadd_v2df_mask3 */
    case 4004:  /* avx512vl_fnmadd_v4df_mask3 */
    case 4002:  /* avx512f_fnmadd_v8df_mask3 */
    case 4001:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 3999:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 3997:  /* avx512f_fnmadd_v16sf_mask3 */
    case 3996:  /* avx512fp16_fnmadd_v8hf_mask3 */
    case 3994:  /* avx512vl_fnmadd_v16hf_mask3 */
    case 3992:  /* avx512bw_fnmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3990:  /* avx512vl_fnmadd_v4df_mask_round */
    case 3988:  /* avx512f_fnmadd_v8df_mask_round */
    case 3985:  /* avx512vl_fnmadd_v8sf_mask_round */
    case 3983:  /* avx512f_fnmadd_v16sf_mask_round */
    case 3980:  /* avx512vl_fnmadd_v16hf_mask_round */
    case 3978:  /* avx512bw_fnmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10653:  /* avx10_2_fnmaddbf16_v8bf_mask */
    case 10652:  /* avx10_2_fnmaddbf16_v16bf_mask */
    case 10651:  /* avx10_2_fnmaddbf16_v32bf_mask */
    case 3991:  /* avx512vl_fnmadd_v2df_mask */
    case 3989:  /* avx512vl_fnmadd_v4df_mask */
    case 3987:  /* avx512f_fnmadd_v8df_mask */
    case 3986:  /* avx512vl_fnmadd_v4sf_mask */
    case 3984:  /* avx512vl_fnmadd_v8sf_mask */
    case 3982:  /* avx512f_fnmadd_v16sf_mask */
    case 3981:  /* avx512fp16_fnmadd_v8hf_mask */
    case 3979:  /* avx512vl_fnmadd_v16hf_mask */
    case 3977:  /* avx512bw_fnmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3974:  /* fma_fnmadd_v4df_maskz_1_round */
    case 3970:  /* fma_fnmadd_v8df_maskz_1_round */
    case 3963:  /* fma_fnmadd_v8sf_maskz_1_round */
    case 3959:  /* fma_fnmadd_v16sf_maskz_1_round */
    case 3951:  /* fma_fnmadd_v16hf_maskz_1_round */
    case 3947:  /* fma_fnmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10650:  /* avx10_2_fnmaddbf16_v8bf_maskz_1 */
    case 10648:  /* avx10_2_fnmaddbf16_v16bf_maskz_1 */
    case 10646:  /* avx10_2_fnmaddbf16_v32bf_maskz_1 */
    case 3976:  /* fma_fnmadd_v2df_maskz_1 */
    case 3972:  /* fma_fnmadd_v4df_maskz_1 */
    case 3968:  /* fma_fnmadd_v8df_maskz_1 */
    case 3965:  /* fma_fnmadd_v4sf_maskz_1 */
    case 3961:  /* fma_fnmadd_v8sf_maskz_1 */
    case 3957:  /* fma_fnmadd_v16sf_maskz_1 */
    case 3953:  /* fma_fnmadd_v8hf_maskz_1 */
    case 3949:  /* fma_fnmadd_v16hf_maskz_1 */
    case 3945:  /* fma_fnmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3936:  /* avx512vl_fmsub_v4df_mask3_round */
    case 3934:  /* avx512f_fmsub_v8df_mask3_round */
    case 3931:  /* avx512vl_fmsub_v8sf_mask3_round */
    case 3929:  /* avx512f_fmsub_v16sf_mask3_round */
    case 3926:  /* avx512vl_fmsub_v16hf_mask3_round */
    case 3924:  /* avx512bw_fmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 10668:  /* avx10_2_fmsubbf16_v8bf_mask3 */
    case 10667:  /* avx10_2_fmsubbf16_v16bf_mask3 */
    case 10666:  /* avx10_2_fmsubbf16_v32bf_mask3 */
    case 3937:  /* avx512vl_fmsub_v2df_mask3 */
    case 3935:  /* avx512vl_fmsub_v4df_mask3 */
    case 3933:  /* avx512f_fmsub_v8df_mask3 */
    case 3932:  /* avx512vl_fmsub_v4sf_mask3 */
    case 3930:  /* avx512vl_fmsub_v8sf_mask3 */
    case 3928:  /* avx512f_fmsub_v16sf_mask3 */
    case 3927:  /* avx512fp16_fmsub_v8hf_mask3 */
    case 3925:  /* avx512vl_fmsub_v16hf_mask3 */
    case 3923:  /* avx512bw_fmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3921:  /* avx512vl_fmsub_v4df_mask_round */
    case 3919:  /* avx512f_fmsub_v8df_mask_round */
    case 3916:  /* avx512vl_fmsub_v8sf_mask_round */
    case 3914:  /* avx512f_fmsub_v16sf_mask_round */
    case 3911:  /* avx512vl_fmsub_v16hf_mask_round */
    case 3909:  /* avx512bw_fmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10665:  /* avx10_2_fmsubbf16_v8bf_mask */
    case 10664:  /* avx10_2_fmsubbf16_v16bf_mask */
    case 10663:  /* avx10_2_fmsubbf16_v32bf_mask */
    case 3922:  /* avx512vl_fmsub_v2df_mask */
    case 3920:  /* avx512vl_fmsub_v4df_mask */
    case 3918:  /* avx512f_fmsub_v8df_mask */
    case 3917:  /* avx512vl_fmsub_v4sf_mask */
    case 3915:  /* avx512vl_fmsub_v8sf_mask */
    case 3913:  /* avx512f_fmsub_v16sf_mask */
    case 3912:  /* avx512fp16_fmsub_v8hf_mask */
    case 3910:  /* avx512vl_fmsub_v16hf_mask */
    case 3908:  /* avx512bw_fmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3905:  /* fma_fmsub_v4df_maskz_1_round */
    case 3901:  /* fma_fmsub_v8df_maskz_1_round */
    case 3894:  /* fma_fmsub_v8sf_maskz_1_round */
    case 3890:  /* fma_fmsub_v16sf_maskz_1_round */
    case 3882:  /* fma_fmsub_v16hf_maskz_1_round */
    case 3878:  /* fma_fmsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3904:  /* *fma_fmsub_v4df_round */
    case 3900:  /* *fma_fmsub_v8df_round */
    case 3893:  /* *fma_fmsub_v8sf_round */
    case 3889:  /* *fma_fmsub_v16sf_round */
    case 3881:  /* *fma_fmsub_v16hf_round */
    case 3877:  /* *fma_fmsub_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10662:  /* avx10_2_fmsubbf16_v8bf_maskz_1 */
    case 10660:  /* avx10_2_fmsubbf16_v16bf_maskz_1 */
    case 10658:  /* avx10_2_fmsubbf16_v32bf_maskz_1 */
    case 3907:  /* fma_fmsub_v2df_maskz_1 */
    case 3903:  /* fma_fmsub_v4df_maskz_1 */
    case 3899:  /* fma_fmsub_v8df_maskz_1 */
    case 3896:  /* fma_fmsub_v4sf_maskz_1 */
    case 3892:  /* fma_fmsub_v8sf_maskz_1 */
    case 3888:  /* fma_fmsub_v16sf_maskz_1 */
    case 3884:  /* fma_fmsub_v8hf_maskz_1 */
    case 3880:  /* fma_fmsub_v16hf_maskz_1 */
    case 3876:  /* fma_fmsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 10661:  /* avx10_2_fmsubbf16_v8bf */
    case 10659:  /* avx10_2_fmsubbf16_v16bf */
    case 10657:  /* avx10_2_fmsubbf16_v32bf */
    case 3906:  /* *fma_fmsub_v2df */
    case 3902:  /* *fma_fmsub_v4df */
    case 3898:  /* *fma_fmsub_v8df */
    case 3897:  /* *fma_fmsub_df */
    case 3895:  /* *fma_fmsub_v4sf */
    case 3891:  /* *fma_fmsub_v8sf */
    case 3887:  /* *fma_fmsub_v16sf */
    case 3886:  /* *fma_fmsub_sf */
    case 3885:  /* *fma_fmsub_hf */
    case 3883:  /* *fma_fmsub_v8hf */
    case 3879:  /* *fma_fmsub_v16hf */
    case 3875:  /* *fma_fmsub_v32hf */
    case 3874:  /* *fma_fmsub_v4df */
    case 3873:  /* *fma_fmsub_v8sf */
    case 3872:  /* *fma_fmsub_v2df */
    case 3871:  /* *fma_fmsub_v4sf */
    case 3870:  /* *fma_fmsub_df */
    case 3869:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 3867:  /* avx512vl_fmadd_v4df_mask3_round */
    case 3865:  /* avx512f_fmadd_v8df_mask3_round */
    case 3862:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 3860:  /* avx512f_fmadd_v16sf_mask3_round */
    case 3857:  /* avx512vl_fmadd_v16hf_mask3_round */
    case 3855:  /* avx512bw_fmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 10644:  /* avx10_2_fmaddbf16_v8bf_mask3 */
    case 10643:  /* avx10_2_fmaddbf16_v16bf_mask3 */
    case 10642:  /* avx10_2_fmaddbf16_v32bf_mask3 */
    case 3868:  /* avx512vl_fmadd_v2df_mask3 */
    case 3866:  /* avx512vl_fmadd_v4df_mask3 */
    case 3864:  /* avx512f_fmadd_v8df_mask3 */
    case 3863:  /* avx512vl_fmadd_v4sf_mask3 */
    case 3861:  /* avx512vl_fmadd_v8sf_mask3 */
    case 3859:  /* avx512f_fmadd_v16sf_mask3 */
    case 3858:  /* avx512fp16_fmadd_v8hf_mask3 */
    case 3856:  /* avx512vl_fmadd_v16hf_mask3 */
    case 3854:  /* avx512bw_fmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3852:  /* avx512vl_fmadd_v4df_mask_round */
    case 3850:  /* avx512f_fmadd_v8df_mask_round */
    case 3847:  /* avx512vl_fmadd_v8sf_mask_round */
    case 3845:  /* avx512f_fmadd_v16sf_mask_round */
    case 3842:  /* avx512vl_fmadd_v16hf_mask_round */
    case 3840:  /* avx512bw_fmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10641:  /* avx10_2_fmaddbf16_v8bf_mask */
    case 10640:  /* avx10_2_fmaddbf16_v16bf_mask */
    case 10639:  /* avx10_2_fmaddbf16_v32bf_mask */
    case 3853:  /* avx512vl_fmadd_v2df_mask */
    case 3851:  /* avx512vl_fmadd_v4df_mask */
    case 3849:  /* avx512f_fmadd_v8df_mask */
    case 3848:  /* avx512vl_fmadd_v4sf_mask */
    case 3846:  /* avx512vl_fmadd_v8sf_mask */
    case 3844:  /* avx512f_fmadd_v16sf_mask */
    case 3843:  /* avx512fp16_fmadd_v8hf_mask */
    case 3841:  /* avx512vl_fmadd_v16hf_mask */
    case 3839:  /* avx512bw_fmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3836:  /* fma_fmadd_v4df_maskz_1_round */
    case 3832:  /* fma_fmadd_v8df_maskz_1_round */
    case 3825:  /* fma_fmadd_v8sf_maskz_1_round */
    case 3821:  /* fma_fmadd_v16sf_maskz_1_round */
    case 3813:  /* fma_fmadd_v16hf_maskz_1_round */
    case 3809:  /* fma_fmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3835:  /* *fma_fmadd_v4df_round */
    case 3831:  /* *fma_fmadd_v8df_round */
    case 3824:  /* *fma_fmadd_v8sf_round */
    case 3820:  /* *fma_fmadd_v16sf_round */
    case 3812:  /* *fma_fmadd_v16hf_round */
    case 3808:  /* *fma_fmadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10638:  /* avx10_2_fmaddbf16_v8bf_maskz_1 */
    case 10636:  /* avx10_2_fmaddbf16_v16bf_maskz_1 */
    case 10634:  /* avx10_2_fmaddbf16_v32bf_maskz_1 */
    case 3838:  /* fma_fmadd_v2df_maskz_1 */
    case 3834:  /* fma_fmadd_v4df_maskz_1 */
    case 3830:  /* fma_fmadd_v8df_maskz_1 */
    case 3827:  /* fma_fmadd_v4sf_maskz_1 */
    case 3823:  /* fma_fmadd_v8sf_maskz_1 */
    case 3819:  /* fma_fmadd_v16sf_maskz_1 */
    case 3815:  /* fma_fmadd_v8hf_maskz_1 */
    case 3811:  /* fma_fmadd_v16hf_maskz_1 */
    case 3807:  /* fma_fmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9480:  /* vec_set_hi_v8sf_mask */
    case 9478:  /* vec_set_hi_v8si_mask */
    case 9472:  /* vec_set_hi_v4df_mask */
    case 9470:  /* vec_set_hi_v4di_mask */
    case 8416:  /* vec_set_hi_v8di_mask */
    case 8414:  /* vec_set_hi_v8df_mask */
    case 8408:  /* vec_set_hi_v16si_mask */
    case 8406:  /* vec_set_hi_v16sf_mask */
    case 8007:  /* *andnotv2di3_mask */
    case 8006:  /* *andnotv4di3_mask */
    case 8005:  /* *andnotv8di3_mask */
    case 8004:  /* *andnotv4si3_mask */
    case 8003:  /* *andnotv8si3_mask */
    case 8002:  /* *andnotv16si3_mask */
    case 3712:  /* avx512f_andnotv8df3_mask */
    case 3710:  /* avx512f_andnotv16sf3_mask */
    case 3706:  /* sse2_andnotv2df3_mask */
    case 3704:  /* avx_andnotv4df3_mask */
    case 3702:  /* sse_andnotv4sf3_mask */
    case 3700:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3693:  /* sse2_ucomi_round */
    case 3689:  /* sse_ucomi_round */
    case 3685:  /* avx512fp16_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3692:  /* sse2_ucomi */
    case 3688:  /* sse_ucomi */
    case 3684:  /* avx512fp16_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 3691:  /* sse2_comi_round */
    case 3687:  /* sse_comi_round */
    case 3683:  /* avx512fp16_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3694:  /* avx10_2_comisbf16_v8bf */
    case 3690:  /* sse2_comi */
    case 3686:  /* sse_comi */
    case 3682:  /* avx512fp16_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3681:  /* avx10_2_ucomxdf_round */
    case 3677:  /* avx10_2_ucomxsf_round */
    case 3673:  /* avx10_2_ucomxhf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3680:  /* avx10_2_ucomxdf */
    case 3676:  /* avx10_2_ucomxsf */
    case 3672:  /* avx10_2_ucomxhf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1), 0));
      break;

    case 3679:  /* avx10_2_comxdf_round */
    case 3675:  /* avx10_2_comxsf_round */
    case 3671:  /* avx10_2_comxhf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3678:  /* avx10_2_comxdf */
    case 3674:  /* avx10_2_comxsf */
    case 3670:  /* avx10_2_comxhf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      break;

    case 3669:  /* avx512f_vmcmpv2df3_mask_round */
    case 3667:  /* avx512f_vmcmpv4sf3_mask_round */
    case 3665:  /* avx512f_vmcmpv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3668:  /* avx512f_vmcmpv2df3_mask */
    case 3666:  /* avx512f_vmcmpv4sf3_mask */
    case 3664:  /* avx512f_vmcmpv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3663:  /* avx512f_vmcmpv2df3_round */
    case 3661:  /* avx512f_vmcmpv4sf3_round */
    case 3659:  /* avx512f_vmcmpv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3657:  /* *avx512vl_ucmpv8hi3_1 */
    case 3656:  /* *avx512vl_ucmpv8hi3_1 */
    case 3655:  /* *avx512vl_ucmpv16hi3_1 */
    case 3654:  /* *avx512vl_ucmpv16hi3_1 */
    case 3653:  /* *avx512bw_ucmpv32hi3_1 */
    case 3652:  /* *avx512bw_ucmpv32hi3_1 */
    case 3651:  /* *avx512vl_ucmpv32qi3_1 */
    case 3650:  /* *avx512vl_ucmpv32qi3_1 */
    case 3649:  /* *avx512vl_ucmpv16qi3_1 */
    case 3648:  /* *avx512vl_ucmpv16qi3_1 */
    case 3647:  /* *avx512bw_ucmpv64qi3_1 */
    case 3646:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 10728:  /* avx10_2_fpclassbf16_v8bf_mask */
    case 10726:  /* avx10_2_fpclassbf16_v16bf_mask */
    case 10724:  /* avx10_2_fpclassbf16_v32bf_mask */
    case 10477:  /* *vcvtbiasph2hf8sv8hf */
    case 10476:  /* *vcvtbiasph2hf8v8hf */
    case 10475:  /* *vcvtbiasph2bf8sv8hf */
    case 10474:  /* *vcvtbiasph2bf8v8hf */
    case 10332:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 10330:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 10328:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 10008:  /* avx512dq_fpclassv2df_mask */
    case 10006:  /* avx512dq_fpclassv4df_mask */
    case 10004:  /* avx512dq_fpclassv8df_mask */
    case 10002:  /* avx512dq_fpclassv4sf_mask */
    case 10000:  /* avx512dq_fpclassv8sf_mask */
    case 9998:  /* avx512dq_fpclassv16sf_mask */
    case 9996:  /* avx512dq_fpclassv8hf_mask */
    case 9994:  /* avx512dq_fpclassv16hf_mask */
    case 9992:  /* avx512dq_fpclassv32hf_mask */
    case 9662:  /* *vcvtps2ph */
    case 8160:  /* avx512vl_testnmv2di3_mask */
    case 8158:  /* avx512vl_testnmv4di3_mask */
    case 8156:  /* avx512f_testnmv8di3_mask */
    case 8154:  /* avx512vl_testnmv4si3_mask */
    case 8152:  /* avx512vl_testnmv8si3_mask */
    case 8150:  /* avx512f_testnmv16si3_mask */
    case 8148:  /* avx512vl_testnmv8hi3_mask */
    case 8146:  /* avx512vl_testnmv16hi3_mask */
    case 8144:  /* avx512bw_testnmv32hi3_mask */
    case 8142:  /* avx512vl_testnmv16qi3_mask */
    case 8140:  /* avx512vl_testnmv32qi3_mask */
    case 8138:  /* avx512bw_testnmv64qi3_mask */
    case 8136:  /* avx512vl_testmv2di3_mask */
    case 8134:  /* avx512vl_testmv4di3_mask */
    case 8132:  /* avx512f_testmv8di3_mask */
    case 8130:  /* avx512vl_testmv4si3_mask */
    case 8128:  /* avx512vl_testmv8si3_mask */
    case 8126:  /* avx512f_testmv16si3_mask */
    case 8124:  /* avx512vl_testmv8hi3_mask */
    case 8122:  /* avx512vl_testmv16hi3_mask */
    case 8120:  /* avx512bw_testmv32hi3_mask */
    case 8118:  /* avx512vl_testmv16qi3_mask */
    case 8116:  /* avx512vl_testmv32qi3_mask */
    case 8114:  /* avx512bw_testmv64qi3_mask */
    case 4353:  /* fma_v8hf_fadd_fcmul */
    case 4352:  /* fma_v16hf_fadd_fcmul */
    case 4351:  /* fma_v32hf_fadd_fcmul */
    case 4350:  /* fma_v8hf_fadd_fmul */
    case 4349:  /* fma_v16hf_fadd_fmul */
    case 4348:  /* fma_v32hf_fadd_fmul */
    case 3591:  /* *avx512vl_eqv2di3_mask_1 */
    case 3589:  /* *avx512vl_eqv2di3_mask_1 */
    case 3587:  /* *avx512vl_eqv4di3_mask_1 */
    case 3585:  /* *avx512vl_eqv4di3_mask_1 */
    case 3583:  /* *avx512f_eqv8di3_mask_1 */
    case 3581:  /* *avx512f_eqv8di3_mask_1 */
    case 3579:  /* *avx512vl_eqv4si3_mask_1 */
    case 3577:  /* *avx512vl_eqv4si3_mask_1 */
    case 3575:  /* *avx512vl_eqv8si3_mask_1 */
    case 3573:  /* *avx512vl_eqv8si3_mask_1 */
    case 3571:  /* *avx512f_eqv16si3_mask_1 */
    case 3569:  /* *avx512f_eqv16si3_mask_1 */
    case 3519:  /* *avx512vl_eqv8hi3_mask_1 */
    case 3517:  /* *avx512vl_eqv8hi3_mask_1 */
    case 3515:  /* *avx512vl_eqv16hi3_mask_1 */
    case 3513:  /* *avx512vl_eqv16hi3_mask_1 */
    case 3511:  /* *avx512bw_eqv32hi3_mask_1 */
    case 3509:  /* *avx512bw_eqv32hi3_mask_1 */
    case 3507:  /* *avx512vl_eqv32qi3_mask_1 */
    case 3505:  /* *avx512vl_eqv32qi3_mask_1 */
    case 3503:  /* *avx512vl_eqv16qi3_mask_1 */
    case 3501:  /* *avx512vl_eqv16qi3_mask_1 */
    case 3499:  /* *avx512bw_eqv64qi3_mask_1 */
    case 3497:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3639:  /* *avx512vl_ucmpv2di3_zero_extenddi_2 */
    case 3638:  /* *avx512vl_ucmpv4di3_zero_extenddi_2 */
    case 3637:  /* *avx512f_ucmpv8di3_zero_extenddi_2 */
    case 3636:  /* *avx512vl_ucmpv4si3_zero_extenddi_2 */
    case 3635:  /* *avx512vl_ucmpv8si3_zero_extenddi_2 */
    case 3634:  /* *avx512f_ucmpv16si3_zero_extenddi_2 */
    case 3633:  /* *avx512vl_ucmpv2di3_zero_extendsi_2 */
    case 3632:  /* *avx512vl_ucmpv4di3_zero_extendsi_2 */
    case 3631:  /* *avx512f_ucmpv8di3_zero_extendsi_2 */
    case 3630:  /* *avx512vl_ucmpv4si3_zero_extendsi_2 */
    case 3629:  /* *avx512vl_ucmpv8si3_zero_extendsi_2 */
    case 3628:  /* *avx512f_ucmpv16si3_zero_extendsi_2 */
    case 3627:  /* *avx512vl_ucmpv2di3_zero_extendhi_2 */
    case 3626:  /* *avx512vl_ucmpv4di3_zero_extendhi_2 */
    case 3625:  /* *avx512f_ucmpv8di3_zero_extendhi_2 */
    case 3624:  /* *avx512vl_ucmpv4si3_zero_extendhi_2 */
    case 3623:  /* *avx512vl_ucmpv8si3_zero_extendhi_2 */
    case 3622:  /* *avx512f_ucmpv16si3_zero_extendhi_2 */
    case 3567:  /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */
    case 3566:  /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */
    case 3565:  /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */
    case 3564:  /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */
    case 3563:  /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */
    case 3562:  /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */
    case 3561:  /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */
    case 3560:  /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */
    case 3559:  /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */
    case 3558:  /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */
    case 3557:  /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */
    case 3556:  /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */
    case 3555:  /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */
    case 3554:  /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */
    case 3553:  /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */
    case 3552:  /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */
    case 3551:  /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */
    case 3550:  /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */
    case 3483:  /* *avx512vl_cmpv8hi3_zero_extenddi_2 */
    case 3482:  /* *avx512vl_cmpv8hi3_zero_extendsi_2 */
    case 3481:  /* *avx512vl_cmpv8hi3_zero_extendhi_2 */
    case 3480:  /* *avx512vl_cmpv16hi3_zero_extenddi_2 */
    case 3479:  /* *avx512vl_cmpv16hi3_zero_extendsi_2 */
    case 3478:  /* *avx512vl_cmpv16hi3_zero_extendhi_2 */
    case 3477:  /* *avx512bw_cmpv32hi3_zero_extenddi_2 */
    case 3476:  /* *avx512bw_cmpv32hi3_zero_extendsi_2 */
    case 3475:  /* *avx512bw_cmpv32hi3_zero_extendhi_2 */
    case 3474:  /* *avx512vl_cmpv32qi3_zero_extenddi_2 */
    case 3473:  /* *avx512vl_cmpv32qi3_zero_extendsi_2 */
    case 3472:  /* *avx512vl_cmpv32qi3_zero_extendhi_2 */
    case 3471:  /* *avx512vl_cmpv16qi3_zero_extenddi_2 */
    case 3470:  /* *avx512vl_cmpv16qi3_zero_extendsi_2 */
    case 3469:  /* *avx512vl_cmpv16qi3_zero_extendhi_2 */
    case 3468:  /* *avx512bw_cmpv64qi3_zero_extenddi_2 */
    case 3467:  /* *avx512bw_cmpv64qi3_zero_extendsi_2 */
    case 3466:  /* *avx512bw_cmpv64qi3_zero_extendhi_2 */
    case 3420:  /* *avx512vl_cmpv2df3_zero_extenddi_2 */
    case 3419:  /* *avx512vl_cmpv2df3_zero_extendsi_2 */
    case 3418:  /* *avx512vl_cmpv2df3_zero_extendhi_2 */
    case 3417:  /* *avx512vl_cmpv4df3_zero_extenddi_2 */
    case 3416:  /* *avx512vl_cmpv4df3_zero_extendsi_2 */
    case 3415:  /* *avx512vl_cmpv4df3_zero_extendhi_2 */
    case 3414:  /* *avx512f_cmpv8df3_zero_extenddi_2 */
    case 3413:  /* *avx512f_cmpv8df3_zero_extendsi_2 */
    case 3412:  /* *avx512f_cmpv8df3_zero_extendhi_2 */
    case 3411:  /* *avx512vl_cmpv4sf3_zero_extenddi_2 */
    case 3410:  /* *avx512vl_cmpv4sf3_zero_extendsi_2 */
    case 3409:  /* *avx512vl_cmpv4sf3_zero_extendhi_2 */
    case 3408:  /* *avx512vl_cmpv8sf3_zero_extenddi_2 */
    case 3407:  /* *avx512vl_cmpv8sf3_zero_extendsi_2 */
    case 3406:  /* *avx512vl_cmpv8sf3_zero_extendhi_2 */
    case 3405:  /* *avx512f_cmpv16sf3_zero_extenddi_2 */
    case 3404:  /* *avx512f_cmpv16sf3_zero_extendsi_2 */
    case 3403:  /* *avx512f_cmpv16sf3_zero_extendhi_2 */
    case 3402:  /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */
    case 3401:  /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */
    case 3400:  /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */
    case 3399:  /* *avx512vl_cmpv16hf3_zero_extenddi_2 */
    case 3398:  /* *avx512vl_cmpv16hf3_zero_extendsi_2 */
    case 3397:  /* *avx512vl_cmpv16hf3_zero_extendhi_2 */
    case 3396:  /* *avx512bw_cmpv32hf3_zero_extenddi_2 */
    case 3395:  /* *avx512bw_cmpv32hf3_zero_extendsi_2 */
    case 3394:  /* *avx512bw_cmpv32hf3_zero_extendhi_2 */
    case 3393:  /* *avx512vl_cmpv2di3_zero_extenddi_2 */
    case 3392:  /* *avx512vl_cmpv2di3_zero_extendsi_2 */
    case 3391:  /* *avx512vl_cmpv2di3_zero_extendhi_2 */
    case 3390:  /* *avx512vl_cmpv4di3_zero_extenddi_2 */
    case 3389:  /* *avx512vl_cmpv4di3_zero_extendsi_2 */
    case 3388:  /* *avx512vl_cmpv4di3_zero_extendhi_2 */
    case 3387:  /* *avx512f_cmpv8di3_zero_extenddi_2 */
    case 3386:  /* *avx512f_cmpv8di3_zero_extendsi_2 */
    case 3385:  /* *avx512f_cmpv8di3_zero_extendhi_2 */
    case 3384:  /* *avx512vl_cmpv4si3_zero_extenddi_2 */
    case 3383:  /* *avx512vl_cmpv4si3_zero_extendsi_2 */
    case 3382:  /* *avx512vl_cmpv4si3_zero_extendhi_2 */
    case 3381:  /* *avx512vl_cmpv8si3_zero_extenddi_2 */
    case 3380:  /* *avx512vl_cmpv8si3_zero_extendsi_2 */
    case 3379:  /* *avx512vl_cmpv8si3_zero_extendhi_2 */
    case 3378:  /* *avx512f_cmpv16si3_zero_extenddi_2 */
    case 3377:  /* *avx512f_cmpv16si3_zero_extendsi_2 */
    case 3376:  /* *avx512f_cmpv16si3_zero_extendhi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3662:  /* avx512f_vmcmpv2df3 */
    case 3660:  /* avx512f_vmcmpv4sf3 */
    case 3658:  /* avx512f_vmcmpv8hf3 */
    case 3645:  /* *avx512vl_ucmpv2di3 */
    case 3644:  /* *avx512vl_ucmpv4di3 */
    case 3643:  /* *avx512f_ucmpv8di3 */
    case 3642:  /* *avx512vl_ucmpv4si3 */
    case 3641:  /* *avx512vl_ucmpv8si3 */
    case 3640:  /* *avx512f_ucmpv16si3 */
    case 3621:  /* *avx512vl_ucmpv2di3_zero_extenddi */
    case 3620:  /* *avx512vl_ucmpv4di3_zero_extenddi */
    case 3619:  /* *avx512f_ucmpv8di3_zero_extenddi */
    case 3618:  /* *avx512vl_ucmpv4si3_zero_extenddi */
    case 3617:  /* *avx512vl_ucmpv8si3_zero_extenddi */
    case 3616:  /* *avx512f_ucmpv16si3_zero_extenddi */
    case 3615:  /* *avx512vl_ucmpv2di3_zero_extendsi */
    case 3614:  /* *avx512vl_ucmpv4di3_zero_extendsi */
    case 3613:  /* *avx512f_ucmpv8di3_zero_extendsi */
    case 3612:  /* *avx512vl_ucmpv4si3_zero_extendsi */
    case 3611:  /* *avx512vl_ucmpv8si3_zero_extendsi */
    case 3610:  /* *avx512f_ucmpv16si3_zero_extendsi */
    case 3609:  /* *avx512vl_ucmpv2di3_zero_extendhi */
    case 3608:  /* *avx512vl_ucmpv4di3_zero_extendhi */
    case 3607:  /* *avx512f_ucmpv8di3_zero_extendhi */
    case 3606:  /* *avx512vl_ucmpv4si3_zero_extendhi */
    case 3605:  /* *avx512vl_ucmpv8si3_zero_extendhi */
    case 3604:  /* *avx512f_ucmpv16si3_zero_extendhi */
    case 3549:  /* *avx512vl_ucmpv8hi3_zero_extenddi */
    case 3548:  /* *avx512vl_ucmpv8hi3_zero_extendsi */
    case 3547:  /* *avx512vl_ucmpv8hi3_zero_extendhi */
    case 3546:  /* *avx512vl_ucmpv16hi3_zero_extenddi */
    case 3545:  /* *avx512vl_ucmpv16hi3_zero_extendsi */
    case 3544:  /* *avx512vl_ucmpv16hi3_zero_extendhi */
    case 3543:  /* *avx512bw_ucmpv32hi3_zero_extenddi */
    case 3542:  /* *avx512bw_ucmpv32hi3_zero_extendsi */
    case 3541:  /* *avx512bw_ucmpv32hi3_zero_extendhi */
    case 3540:  /* *avx512vl_ucmpv32qi3_zero_extenddi */
    case 3539:  /* *avx512vl_ucmpv32qi3_zero_extendsi */
    case 3538:  /* *avx512vl_ucmpv32qi3_zero_extendhi */
    case 3537:  /* *avx512vl_ucmpv16qi3_zero_extenddi */
    case 3536:  /* *avx512vl_ucmpv16qi3_zero_extendsi */
    case 3535:  /* *avx512vl_ucmpv16qi3_zero_extendhi */
    case 3534:  /* *avx512bw_ucmpv64qi3_zero_extenddi */
    case 3533:  /* *avx512bw_ucmpv64qi3_zero_extendsi */
    case 3532:  /* *avx512bw_ucmpv64qi3_zero_extendhi */
    case 3495:  /* *avx512vl_cmpv8hi3 */
    case 3494:  /* *avx512vl_cmpv8hi3 */
    case 3493:  /* *avx512vl_cmpv16hi3 */
    case 3492:  /* *avx512vl_cmpv16hi3 */
    case 3491:  /* *avx512bw_cmpv32hi3 */
    case 3490:  /* *avx512bw_cmpv32hi3 */
    case 3489:  /* *avx512vl_cmpv32qi3 */
    case 3488:  /* *avx512vl_cmpv32qi3 */
    case 3487:  /* *avx512vl_cmpv16qi3 */
    case 3486:  /* *avx512vl_cmpv16qi3 */
    case 3485:  /* *avx512bw_cmpv64qi3 */
    case 3484:  /* *avx512bw_cmpv64qi3 */
    case 3465:  /* *avx512vl_cmpv8hi3_zero_extenddi */
    case 3464:  /* *avx512vl_cmpv8hi3_zero_extendsi */
    case 3463:  /* *avx512vl_cmpv8hi3_zero_extendhi */
    case 3462:  /* *avx512vl_cmpv16hi3_zero_extenddi */
    case 3461:  /* *avx512vl_cmpv16hi3_zero_extendsi */
    case 3460:  /* *avx512vl_cmpv16hi3_zero_extendhi */
    case 3459:  /* *avx512bw_cmpv32hi3_zero_extenddi */
    case 3458:  /* *avx512bw_cmpv32hi3_zero_extendsi */
    case 3457:  /* *avx512bw_cmpv32hi3_zero_extendhi */
    case 3456:  /* *avx512vl_cmpv32qi3_zero_extenddi */
    case 3455:  /* *avx512vl_cmpv32qi3_zero_extendsi */
    case 3454:  /* *avx512vl_cmpv32qi3_zero_extendhi */
    case 3453:  /* *avx512vl_cmpv16qi3_zero_extenddi */
    case 3452:  /* *avx512vl_cmpv16qi3_zero_extendsi */
    case 3451:  /* *avx512vl_cmpv16qi3_zero_extendhi */
    case 3450:  /* *avx512bw_cmpv64qi3_zero_extenddi */
    case 3449:  /* *avx512bw_cmpv64qi3_zero_extendsi */
    case 3448:  /* *avx512bw_cmpv64qi3_zero_extendhi */
    case 3435:  /* *avx512vl_cmpv2df3 */
    case 3434:  /* *avx512vl_cmpv4df3 */
    case 3433:  /* *avx512f_cmpv8df3 */
    case 3432:  /* *avx512vl_cmpv4sf3 */
    case 3431:  /* *avx512vl_cmpv8sf3 */
    case 3430:  /* *avx512f_cmpv16sf3 */
    case 3429:  /* *avx512fp16_cmpv8hf3 */
    case 3428:  /* *avx512vl_cmpv16hf3 */
    case 3427:  /* *avx512bw_cmpv32hf3 */
    case 3426:  /* *avx512vl_cmpv2di3 */
    case 3425:  /* *avx512vl_cmpv4di3 */
    case 3424:  /* *avx512f_cmpv8di3 */
    case 3423:  /* *avx512vl_cmpv4si3 */
    case 3422:  /* *avx512vl_cmpv8si3 */
    case 3421:  /* *avx512f_cmpv16si3 */
    case 3375:  /* *avx512vl_cmpv2df3_zero_extenddi */
    case 3374:  /* *avx512vl_cmpv2df3_zero_extendsi */
    case 3373:  /* *avx512vl_cmpv2df3_zero_extendhi */
    case 3372:  /* *avx512vl_cmpv4df3_zero_extenddi */
    case 3371:  /* *avx512vl_cmpv4df3_zero_extendsi */
    case 3370:  /* *avx512vl_cmpv4df3_zero_extendhi */
    case 3369:  /* *avx512f_cmpv8df3_zero_extenddi */
    case 3368:  /* *avx512f_cmpv8df3_zero_extendsi */
    case 3367:  /* *avx512f_cmpv8df3_zero_extendhi */
    case 3366:  /* *avx512vl_cmpv4sf3_zero_extenddi */
    case 3365:  /* *avx512vl_cmpv4sf3_zero_extendsi */
    case 3364:  /* *avx512vl_cmpv4sf3_zero_extendhi */
    case 3363:  /* *avx512vl_cmpv8sf3_zero_extenddi */
    case 3362:  /* *avx512vl_cmpv8sf3_zero_extendsi */
    case 3361:  /* *avx512vl_cmpv8sf3_zero_extendhi */
    case 3360:  /* *avx512f_cmpv16sf3_zero_extenddi */
    case 3359:  /* *avx512f_cmpv16sf3_zero_extendsi */
    case 3358:  /* *avx512f_cmpv16sf3_zero_extendhi */
    case 3357:  /* *avx512fp16_cmpv8hf3_zero_extenddi */
    case 3356:  /* *avx512fp16_cmpv8hf3_zero_extendsi */
    case 3355:  /* *avx512fp16_cmpv8hf3_zero_extendhi */
    case 3354:  /* *avx512vl_cmpv16hf3_zero_extenddi */
    case 3353:  /* *avx512vl_cmpv16hf3_zero_extendsi */
    case 3352:  /* *avx512vl_cmpv16hf3_zero_extendhi */
    case 3351:  /* *avx512bw_cmpv32hf3_zero_extenddi */
    case 3350:  /* *avx512bw_cmpv32hf3_zero_extendsi */
    case 3349:  /* *avx512bw_cmpv32hf3_zero_extendhi */
    case 3348:  /* *avx512vl_cmpv2di3_zero_extenddi */
    case 3347:  /* *avx512vl_cmpv2di3_zero_extendsi */
    case 3346:  /* *avx512vl_cmpv2di3_zero_extendhi */
    case 3345:  /* *avx512vl_cmpv4di3_zero_extenddi */
    case 3344:  /* *avx512vl_cmpv4di3_zero_extendsi */
    case 3343:  /* *avx512vl_cmpv4di3_zero_extendhi */
    case 3342:  /* *avx512f_cmpv8di3_zero_extenddi */
    case 3341:  /* *avx512f_cmpv8di3_zero_extendsi */
    case 3340:  /* *avx512f_cmpv8di3_zero_extendhi */
    case 3339:  /* *avx512vl_cmpv4si3_zero_extenddi */
    case 3338:  /* *avx512vl_cmpv4si3_zero_extendsi */
    case 3337:  /* *avx512vl_cmpv4si3_zero_extendhi */
    case 3336:  /* *avx512vl_cmpv8si3_zero_extenddi */
    case 3335:  /* *avx512vl_cmpv8si3_zero_extendsi */
    case 3334:  /* *avx512vl_cmpv8si3_zero_extendhi */
    case 3333:  /* *avx512f_cmpv16si3_zero_extenddi */
    case 3332:  /* *avx512f_cmpv16si3_zero_extendsi */
    case 3331:  /* *avx512f_cmpv16si3_zero_extendhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 3328:  /* avx512vl_cmpv4df3_mask_round */
    case 3324:  /* avx512f_cmpv8df3_mask_round */
    case 3318:  /* avx512vl_cmpv8sf3_mask_round */
    case 3314:  /* avx512f_cmpv16sf3_mask_round */
    case 3308:  /* avx512vl_cmpv16hf3_mask_round */
    case 3304:  /* avx512bw_cmpv32hf3_mask_round */
    case 3298:  /* avx512vl_cmpv4di3_mask_round */
    case 3294:  /* avx512f_cmpv8di3_mask_round */
    case 3288:  /* avx512vl_cmpv8si3_mask_round */
    case 3284:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10734:  /* avx10_2_cmpbf16_v8bf_mask */
    case 10732:  /* avx10_2_cmpbf16_v16bf_mask */
    case 10730:  /* avx10_2_cmpbf16_v32bf_mask */
    case 4359:  /* fma_fcmaddc_v8hf_fma_zero */
    case 4358:  /* fma_fmaddc_v8hf_fma_zero */
    case 4357:  /* fma_fcmaddc_v16hf_fma_zero */
    case 4356:  /* fma_fmaddc_v16hf_fma_zero */
    case 4355:  /* fma_fcmaddc_v32hf_fma_zero */
    case 4354:  /* fma_fmaddc_v32hf_fma_zero */
    case 3603:  /* avx512vl_ucmpv2di3_mask */
    case 3601:  /* avx512vl_ucmpv4di3_mask */
    case 3599:  /* avx512f_ucmpv8di3_mask */
    case 3597:  /* avx512vl_ucmpv4si3_mask */
    case 3595:  /* avx512vl_ucmpv8si3_mask */
    case 3593:  /* avx512f_ucmpv16si3_mask */
    case 3531:  /* avx512vl_ucmpv8hi3_mask */
    case 3529:  /* avx512vl_ucmpv16hi3_mask */
    case 3527:  /* avx512bw_ucmpv32hi3_mask */
    case 3525:  /* avx512vl_ucmpv32qi3_mask */
    case 3523:  /* avx512vl_ucmpv16qi3_mask */
    case 3521:  /* avx512bw_ucmpv64qi3_mask */
    case 3447:  /* avx512vl_cmpv8hi3_mask */
    case 3445:  /* avx512vl_cmpv16hi3_mask */
    case 3443:  /* avx512bw_cmpv32hi3_mask */
    case 3441:  /* avx512vl_cmpv32qi3_mask */
    case 3439:  /* avx512vl_cmpv16qi3_mask */
    case 3437:  /* avx512bw_cmpv64qi3_mask */
    case 3330:  /* avx512vl_cmpv2df3_mask */
    case 3327:  /* avx512vl_cmpv4df3_mask */
    case 3323:  /* avx512f_cmpv8df3_mask */
    case 3320:  /* avx512vl_cmpv4sf3_mask */
    case 3317:  /* avx512vl_cmpv8sf3_mask */
    case 3313:  /* avx512f_cmpv16sf3_mask */
    case 3310:  /* avx512fp16_cmpv8hf3_mask */
    case 3307:  /* avx512vl_cmpv16hf3_mask */
    case 3303:  /* avx512bw_cmpv32hf3_mask */
    case 3300:  /* avx512vl_cmpv2di3_mask */
    case 3297:  /* avx512vl_cmpv4di3_mask */
    case 3293:  /* avx512f_cmpv8di3_mask */
    case 3290:  /* avx512vl_cmpv4si3_mask */
    case 3287:  /* avx512vl_cmpv8si3_mask */
    case 3283:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10974:  /* avx10_2_minmaxpv2df_round */
    case 10970:  /* avx10_2_minmaxpv4df_round */
    case 10966:  /* avx10_2_minmaxpv8df_round */
    case 10962:  /* avx10_2_minmaxpv4sf_round */
    case 10958:  /* avx10_2_minmaxpv8sf_round */
    case 10954:  /* avx10_2_minmaxpv16sf_round */
    case 10950:  /* avx10_2_minmaxpv8hf_round */
    case 10946:  /* avx10_2_minmaxpv16hf_round */
    case 10942:  /* avx10_2_minmaxpv32hf_round */
    case 9978:  /* avx512dq_rangepv4df_round */
    case 9974:  /* avx512dq_rangepv8df_round */
    case 9968:  /* avx512dq_rangepv8sf_round */
    case 9964:  /* avx512dq_rangepv16sf_round */
    case 4341:  /* fma_fcmaddc_v16hf_round */
    case 4337:  /* fma_fmaddc_v16hf_round */
    case 4333:  /* fma_fcmaddc_v32hf_round */
    case 4329:  /* fma_fmaddc_v32hf_round */
    case 4120:  /* *fma_fmaddsub_v4df_round */
    case 4116:  /* *fma_fmaddsub_v8df_round */
    case 4110:  /* *fma_fmaddsub_v8sf_round */
    case 4106:  /* *fma_fmaddsub_v16sf_round */
    case 4100:  /* *fma_fmaddsub_v16hf_round */
    case 4096:  /* *fma_fmaddsub_v32hf_round */
    case 3326:  /* avx512vl_cmpv4df3_round */
    case 3322:  /* avx512f_cmpv8df3_round */
    case 3316:  /* avx512vl_cmpv8sf3_round */
    case 3312:  /* avx512f_cmpv16sf3_round */
    case 3306:  /* avx512vl_cmpv16hf3_round */
    case 3302:  /* avx512bw_cmpv32hf3_round */
    case 3296:  /* avx512vl_cmpv4di3_round */
    case 3292:  /* avx512f_cmpv8di3_round */
    case 3286:  /* avx512vl_cmpv8si3_round */
    case 3282:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3280:  /* sse2_vmmaskcmpv2df3 */
    case 3279:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7913:  /* *avx2_pcmpv16qi3_4 */
    case 7912:  /* *avx2_pcmpv32qi3_4 */
    case 3268:  /* *avx_cmpv4di3_ltint_not */
    case 3267:  /* *avx_cmpv8si3_ltint_not */
    case 3266:  /* *avx_cmpv2di3_ltint_not */
    case 3265:  /* *avx_cmpv4si3_ltint_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 7909:  /* *avx2_pcmpv4di3_2 */
    case 7908:  /* *avx2_pcmpv8si3_2 */
    case 7907:  /* *avx2_pcmpv16hi3_2 */
    case 7906:  /* *avx2_pcmpv32qi3_2 */
    case 7905:  /* *avx2_pcmpv2di3_2 */
    case 7904:  /* *avx2_pcmpv4si3_2 */
    case 7903:  /* *avx2_pcmpv8hi3_2 */
    case 7902:  /* *avx2_pcmpv16qi3_2 */
    case 3256:  /* *avx_cmpv2df3_4 */
    case 3255:  /* *avx_cmpv4df3_4 */
    case 3254:  /* *avx_cmpv4sf3_4 */
    case 3253:  /* *avx_cmpv8sf3_4 */
    case 3248:  /* *avx_cmpv2df3_2 */
    case 3247:  /* *avx_cmpv4df3_2 */
    case 3246:  /* *avx_cmpv4sf3_2 */
    case 3245:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 10988:  /* avx10_2_minmaxsv2df_mask_round */
    case 10984:  /* avx10_2_minmaxsv4sf_mask_round */
    case 10980:  /* avx10_2_minmaxsv8hf_mask_round */
    case 10056:  /* avx512f_vgetmantv2df_mask_round */
    case 10052:  /* avx512f_vgetmantv4sf_mask_round */
    case 10048:  /* avx512f_vgetmantv8hf_mask_round */
    case 9990:  /* avx512dq_rangesv2df_mask_round */
    case 9986:  /* avx512dq_rangesv4sf_mask_round */
    case 3236:  /* reducesv2df_mask_round */
    case 3232:  /* reducesv4sf_mask_round */
    case 3228:  /* reducesv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10987:  /* avx10_2_minmaxsv2df_round */
    case 10983:  /* avx10_2_minmaxsv4sf_round */
    case 10979:  /* avx10_2_minmaxsv8hf_round */
    case 10055:  /* avx512f_vgetmantv2df_round */
    case 10051:  /* avx512f_vgetmantv4sf_round */
    case 10047:  /* avx512f_vgetmantv8hf_round */
    case 9989:  /* avx512dq_rangesv2df_round */
    case 9985:  /* avx512dq_rangesv4sf_round */
    case 3235:  /* reducesv2df_round */
    case 3231:  /* reducesv4sf_round */
    case 3227:  /* reducesv8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10986:  /* avx10_2_minmaxsv2df_mask */
    case 10982:  /* avx10_2_minmaxsv4sf_mask */
    case 10978:  /* avx10_2_minmaxsv8hf_mask */
    case 10054:  /* avx512f_vgetmantv2df_mask */
    case 10050:  /* avx512f_vgetmantv4sf_mask */
    case 10046:  /* avx512f_vgetmantv8hf_mask */
    case 9988:  /* avx512dq_rangesv2df_mask */
    case 9984:  /* avx512dq_rangesv4sf_mask */
    case 3234:  /* reducesv2df_mask */
    case 3230:  /* reducesv4sf_mask */
    case 3226:  /* reducesv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10985:  /* avx10_2_minmaxsv2df */
    case 10981:  /* avx10_2_minmaxsv4sf */
    case 10977:  /* avx10_2_minmaxsv8hf */
    case 10053:  /* avx512f_vgetmantv2df */
    case 10049:  /* avx512f_vgetmantv4sf */
    case 10045:  /* avx512f_vgetmantv8hf */
    case 9987:  /* avx512dq_rangesv2df */
    case 9983:  /* avx512dq_rangesv4sf */
    case 3270:  /* avx_vmcmpv2df3 */
    case 3269:  /* avx_vmcmpv4sf3 */
    case 3233:  /* reducesv2df */
    case 3229:  /* reducesv4sf */
    case 3225:  /* reducesv8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3194:  /* sse3_hsubv4sf3 */
    case 3193:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3192:  /* avx_hsubv8sf3 */
    case 3191:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3186:  /* avx_hsubv4df3 */
    case 3185:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3184:  /* vec_addsubv2df3 */
    case 3183:  /* vec_addsubv4df3 */
    case 3182:  /* vec_addsubv4sf3 */
    case 3181:  /* vec_addsubv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 7082:  /* avx512f_sgetexpv2df_mask_round */
    case 7078:  /* avx512f_sgetexpv4sf_mask_round */
    case 7074:  /* avx512f_sgetexpv8hf_mask_round */
    case 5432:  /* avx512f_vmscalefv2df_mask_round */
    case 5428:  /* avx512f_vmscalefv4sf_mask_round */
    case 5424:  /* avx512f_vmscalefv8hf_mask_round */
    case 3180:  /* sse2_ieee_vmminv2df3_mask_round */
    case 3176:  /* sse2_ieee_vmmaxv2df3_mask_round */
    case 3172:  /* sse_ieee_vmminv4sf3_mask_round */
    case 3168:  /* sse_ieee_vmmaxv4sf3_mask_round */
    case 3164:  /* avx512fp16_ieee_vmminv8hf3_mask_round */
    case 3160:  /* avx512fp16_ieee_vmmaxv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7081:  /* avx512f_sgetexpv2df_round */
    case 7077:  /* avx512f_sgetexpv4sf_round */
    case 7073:  /* avx512f_sgetexpv8hf_round */
    case 5430:  /* avx512f_vmscalefv2df_round */
    case 5426:  /* avx512f_vmscalefv4sf_round */
    case 5422:  /* avx512f_vmscalefv8hf_round */
    case 4419:  /* avx512fp16_fcmulcsh_v8hf_round */
    case 4415:  /* avx512fp16_fmulcsh_v8hf_round */
    case 3179:  /* sse2_ieee_vmminv2df3_round */
    case 3175:  /* sse2_ieee_vmmaxv2df3_round */
    case 3171:  /* sse_ieee_vmminv4sf3_round */
    case 3167:  /* sse_ieee_vmmaxv4sf3_round */
    case 3163:  /* avx512fp16_ieee_vmminv8hf3_round */
    case 3159:  /* avx512fp16_ieee_vmmaxv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7080:  /* avx512f_sgetexpv2df_mask */
    case 7076:  /* avx512f_sgetexpv4sf_mask */
    case 7072:  /* avx512f_sgetexpv8hf_mask */
    case 5431:  /* avx512f_vmscalefv2df_mask */
    case 5427:  /* avx512f_vmscalefv4sf_mask */
    case 5423:  /* avx512f_vmscalefv8hf_mask */
    case 3178:  /* sse2_ieee_vmminv2df3_mask */
    case 3174:  /* sse2_ieee_vmmaxv2df3_mask */
    case 3170:  /* sse_ieee_vmminv4sf3_mask */
    case 3166:  /* sse_ieee_vmmaxv4sf3_mask */
    case 3162:  /* avx512fp16_ieee_vmminv8hf3_mask */
    case 3158:  /* avx512fp16_ieee_vmmaxv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7079:  /* avx512f_sgetexpv2df */
    case 7075:  /* avx512f_sgetexpv4sf */
    case 7071:  /* avx512f_sgetexpv8hf */
    case 5429:  /* avx512f_vmscalefv2df */
    case 5425:  /* avx512f_vmscalefv4sf */
    case 5421:  /* avx512f_vmscalefv8hf */
    case 4418:  /* avx512fp16_fcmulcsh_v8hf */
    case 4414:  /* avx512fp16_fmulcsh_v8hf */
    case 3177:  /* sse2_ieee_vmminv2df3 */
    case 3173:  /* sse2_ieee_vmmaxv2df3 */
    case 3169:  /* sse_ieee_vmminv4sf3 */
    case 3165:  /* sse_ieee_vmmaxv4sf3 */
    case 3161:  /* avx512fp16_ieee_vmminv8hf3 */
    case 3157:  /* avx512fp16_ieee_vmmaxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3132:  /* *ieee_minv2df3 */
    case 3131:  /* *ieee_maxv2df3 */
    case 3130:  /* *ieee_minv4sf3 */
    case 3129:  /* *ieee_maxv4sf3 */
    case 3128:  /* *ieee_minv8hf3 */
    case 3127:  /* *ieee_maxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 10042:  /* avx512vl_getmantv4df_mask_round */
    case 10038:  /* avx512f_getmantv8df_mask_round */
    case 10032:  /* avx512vl_getmantv8sf_mask_round */
    case 10028:  /* avx512f_getmantv16sf_mask_round */
    case 10022:  /* avx512vl_getmantv16hf_mask_round */
    case 10018:  /* avx512bw_getmantv32hf_mask_round */
    case 9672:  /* avx512f_vcvtps2ph512_mask_round */
    case 7172:  /* avx512vl_rndscalev4df_mask_round */
    case 7168:  /* avx512f_rndscalev8df_mask_round */
    case 7162:  /* avx512vl_rndscalev8sf_mask_round */
    case 7158:  /* avx512f_rndscalev16sf_mask_round */
    case 7152:  /* avx512vl_rndscalev16hf_mask_round */
    case 7148:  /* avx512bw_rndscalev32hf_mask_round */
    case 5460:  /* avx512vl_scalefv4df_mask_round */
    case 5456:  /* avx512f_scalefv8df_mask_round */
    case 5450:  /* avx512vl_scalefv8sf_mask_round */
    case 5446:  /* avx512f_scalefv16sf_mask_round */
    case 5440:  /* avx512vl_scalefv16hf_mask_round */
    case 5436:  /* avx512bw_scalefv32hf_mask_round */
    case 3222:  /* reducepv4df_mask_round */
    case 3218:  /* reducepv8df_mask_round */
    case 3212:  /* reducepv8sf_mask_round */
    case 3208:  /* reducepv16sf_mask_round */
    case 3202:  /* reducepv16hf_mask_round */
    case 3198:  /* reducepv32hf_mask_round */
    case 3122:  /* ieee_minv4df3_mask_round */
    case 3118:  /* ieee_maxv4df3_mask_round */
    case 3114:  /* ieee_minv8df3_mask_round */
    case 3110:  /* ieee_maxv8df3_mask_round */
    case 3102:  /* ieee_minv8sf3_mask_round */
    case 3098:  /* ieee_maxv8sf3_mask_round */
    case 3094:  /* ieee_minv16sf3_mask_round */
    case 3090:  /* ieee_maxv16sf3_mask_round */
    case 3082:  /* ieee_minv16hf3_mask_round */
    case 3078:  /* ieee_maxv16hf3_mask_round */
    case 3074:  /* ieee_minv32hf3_mask_round */
    case 3070:  /* ieee_maxv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10722:  /* avx10_2_getmantbf16_v8bf_mask */
    case 10720:  /* avx10_2_reducebf16_v8bf_mask */
    case 10718:  /* avx10_2_rndscalebf16_v8bf_mask */
    case 10716:  /* avx10_2_getmantbf16_v16bf_mask */
    case 10714:  /* avx10_2_reducebf16_v16bf_mask */
    case 10712:  /* avx10_2_rndscalebf16_v16bf_mask */
    case 10710:  /* avx10_2_getmantbf16_v32bf_mask */
    case 10708:  /* avx10_2_reducebf16_v32bf_mask */
    case 10706:  /* avx10_2_rndscalebf16_v32bf_mask */
    case 10596:  /* avx10_2_scalefbf16_v8bf_mask */
    case 10594:  /* avx10_2_scalefbf16_v16bf_mask */
    case 10592:  /* avx10_2_scalefbf16_v32bf_mask */
    case 10497:  /* vcvtbiasph2hf8sv16hf_mask */
    case 10495:  /* vcvtbiasph2hf8v16hf_mask */
    case 10493:  /* vcvtbiasph2bf8sv16hf_mask */
    case 10491:  /* vcvtbiasph2bf8v16hf_mask */
    case 10489:  /* vcvtbiasph2hf8sv32hf_mask */
    case 10487:  /* vcvtbiasph2hf8v32hf_mask */
    case 10485:  /* vcvtbiasph2bf8sv32hf_mask */
    case 10483:  /* vcvtbiasph2bf8v32hf_mask */
    case 10473:  /* vcvt2ph2hf8sv8hf_mask */
    case 10471:  /* vcvt2ph2hf8v8hf_mask */
    case 10469:  /* vcvt2ph2bf8sv8hf_mask */
    case 10467:  /* vcvt2ph2bf8v8hf_mask */
    case 10465:  /* vcvt2ph2hf8sv16hf_mask */
    case 10463:  /* vcvt2ph2hf8v16hf_mask */
    case 10461:  /* vcvt2ph2bf8sv16hf_mask */
    case 10459:  /* vcvt2ph2bf8v16hf_mask */
    case 10457:  /* vcvt2ph2hf8sv32hf_mask */
    case 10455:  /* vcvt2ph2hf8v32hf_mask */
    case 10453:  /* vcvt2ph2bf8sv32hf_mask */
    case 10451:  /* vcvt2ph2bf8v32hf_mask */
    case 10185:  /* vgf2p8mulb_v16qi_mask */
    case 10183:  /* vgf2p8mulb_v32qi_mask */
    case 10181:  /* vgf2p8mulb_v64qi_mask */
    case 10135:  /* vpmultishiftqbv32qi_mask */
    case 10133:  /* vpmultishiftqbv16qi_mask */
    case 10131:  /* vpmultishiftqbv64qi_mask */
    case 10044:  /* avx512vl_getmantv2df_mask */
    case 10041:  /* avx512vl_getmantv4df_mask */
    case 10037:  /* avx512f_getmantv8df_mask */
    case 10034:  /* avx512vl_getmantv4sf_mask */
    case 10031:  /* avx512vl_getmantv8sf_mask */
    case 10027:  /* avx512f_getmantv16sf_mask */
    case 10024:  /* avx512fp16_getmantv8hf_mask */
    case 10021:  /* avx512vl_getmantv16hf_mask */
    case 10017:  /* avx512bw_getmantv32hf_mask */
    case 9671:  /* avx512f_vcvtps2ph512_mask */
    case 9666:  /* vcvtps2ph256_mask */
    case 9366:  /* avx_vpermilvarv2df3_mask */
    case 9364:  /* avx_vpermilvarv4df3_mask */
    case 9362:  /* avx512f_vpermilvarv8df3_mask */
    case 9360:  /* avx_vpermilvarv4sf3_mask */
    case 9358:  /* avx_vpermilvarv8sf3_mask */
    case 9356:  /* avx512f_vpermilvarv16sf3_mask */
    case 9157:  /* avx512bw_permvarv32bf_mask */
    case 9155:  /* avx512vl_permvarv16bf_mask */
    case 9153:  /* avx512vl_permvarv8bf_mask */
    case 9151:  /* avx512bw_permvarv32hf_mask */
    case 9149:  /* avx512vl_permvarv16hf_mask */
    case 9147:  /* avx512fp16_permvarv8hf_mask */
    case 9145:  /* avx512bw_permvarv32hi_mask */
    case 9143:  /* avx512vl_permvarv16hi_mask */
    case 9141:  /* avx512vl_permvarv8hi_mask */
    case 9139:  /* avx512vl_permvarv32qi_mask */
    case 9137:  /* avx512vl_permvarv16qi_mask */
    case 9135:  /* avx512bw_permvarv64qi_mask */
    case 9133:  /* avx2_permvarv4df_mask */
    case 9131:  /* avx2_permvarv4di_mask */
    case 9129:  /* avx512f_permvarv8df_mask */
    case 9127:  /* avx512f_permvarv8di_mask */
    case 9125:  /* avx512f_permvarv16sf_mask */
    case 9123:  /* avx512f_permvarv16si_mask */
    case 9121:  /* avx2_permvarv8sf_mask */
    case 9119:  /* avx2_permvarv8si_mask */
    case 8737:  /* sse4_1_packusdw_mask */
    case 8735:  /* avx2_packusdw_mask */
    case 8733:  /* avx512bw_packusdw_mask */
    case 8633:  /* ssse3_pshufbv16qi3_mask */
    case 8631:  /* avx2_pshufbv32qi3_mask */
    case 8629:  /* avx512bw_pshufbv64qi3_mask */
    case 8615:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 8613:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 8611:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 8454:  /* avx512bw_pshufhwv32hi_mask */
    case 8448:  /* avx512bw_pshuflwv32hi_mask */
    case 8322:  /* sse2_packuswb_mask */
    case 8320:  /* avx2_packuswb_mask */
    case 8318:  /* avx512bw_packuswb_mask */
    case 7597:  /* avx512bw_pmaddwd512v8hi_mask */
    case 7595:  /* avx512bw_pmaddwd512v16hi_mask */
    case 7593:  /* avx512bw_pmaddwd512v32hi_mask */
    case 7174:  /* avx512vl_rndscalev2df_mask */
    case 7171:  /* avx512vl_rndscalev4df_mask */
    case 7167:  /* avx512f_rndscalev8df_mask */
    case 7164:  /* avx512vl_rndscalev4sf_mask */
    case 7161:  /* avx512vl_rndscalev8sf_mask */
    case 7157:  /* avx512f_rndscalev16sf_mask */
    case 7154:  /* avx512fp16_rndscalev8hf_mask */
    case 7151:  /* avx512vl_rndscalev16hf_mask */
    case 7147:  /* avx512bw_rndscalev32hf_mask */
    case 5462:  /* avx512vl_scalefv2df_mask */
    case 5459:  /* avx512vl_scalefv4df_mask */
    case 5455:  /* avx512f_scalefv8df_mask */
    case 5452:  /* avx512vl_scalefv4sf_mask */
    case 5449:  /* avx512vl_scalefv8sf_mask */
    case 5445:  /* avx512f_scalefv16sf_mask */
    case 5442:  /* avx512fp16_scalefv8hf_mask */
    case 5439:  /* avx512vl_scalefv16hf_mask */
    case 5435:  /* avx512bw_scalefv32hf_mask */
    case 3224:  /* reducepv2df_mask */
    case 3221:  /* reducepv4df_mask */
    case 3217:  /* reducepv8df_mask */
    case 3214:  /* reducepv4sf_mask */
    case 3211:  /* reducepv8sf_mask */
    case 3207:  /* reducepv16sf_mask */
    case 3204:  /* reducepv8hf_mask */
    case 3201:  /* reducepv16hf_mask */
    case 3197:  /* reducepv32hf_mask */
    case 3126:  /* ieee_minv2df3_mask */
    case 3124:  /* ieee_maxv2df3_mask */
    case 3121:  /* ieee_minv4df3_mask */
    case 3117:  /* ieee_maxv4df3_mask */
    case 3113:  /* ieee_minv8df3_mask */
    case 3109:  /* ieee_maxv8df3_mask */
    case 3106:  /* ieee_minv4sf3_mask */
    case 3104:  /* ieee_maxv4sf3_mask */
    case 3101:  /* ieee_minv8sf3_mask */
    case 3097:  /* ieee_maxv8sf3_mask */
    case 3093:  /* ieee_minv16sf3_mask */
    case 3089:  /* ieee_maxv16sf3_mask */
    case 3086:  /* ieee_minv8hf3_mask */
    case 3084:  /* ieee_maxv8hf3_mask */
    case 3081:  /* ieee_minv16hf3_mask */
    case 3077:  /* ieee_maxv16hf3_mask */
    case 3073:  /* ieee_minv32hf3_mask */
    case 3069:  /* ieee_maxv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 10040:  /* avx512vl_getmantv4df_round */
    case 10036:  /* avx512f_getmantv8df_round */
    case 10030:  /* avx512vl_getmantv8sf_round */
    case 10026:  /* avx512f_getmantv16sf_round */
    case 10020:  /* avx512vl_getmantv16hf_round */
    case 10016:  /* avx512bw_getmantv32hf_round */
    case 9670:  /* *avx512f_vcvtps2ph512_round */
    case 7170:  /* avx512vl_rndscalev4df_round */
    case 7166:  /* avx512f_rndscalev8df_round */
    case 7160:  /* avx512vl_rndscalev8sf_round */
    case 7156:  /* avx512f_rndscalev16sf_round */
    case 7150:  /* avx512vl_rndscalev16hf_round */
    case 7146:  /* avx512bw_rndscalev32hf_round */
    case 5458:  /* avx512vl_scalefv4df_round */
    case 5454:  /* avx512f_scalefv8df_round */
    case 5448:  /* avx512vl_scalefv8sf_round */
    case 5444:  /* avx512f_scalefv16sf_round */
    case 5438:  /* avx512vl_scalefv16hf_round */
    case 5434:  /* avx512bw_scalefv32hf_round */
    case 4396:  /* avx512vl_fcmulc_v16hf_round */
    case 4392:  /* avx512vl_fmulc_v16hf_round */
    case 4388:  /* avx512bw_fcmulc_v32hf_round */
    case 4384:  /* avx512bw_fmulc_v32hf_round */
    case 3220:  /* *reducepv4df_round */
    case 3216:  /* *reducepv8df_round */
    case 3210:  /* *reducepv8sf_round */
    case 3206:  /* *reducepv16sf_round */
    case 3200:  /* *reducepv16hf_round */
    case 3196:  /* *reducepv32hf_round */
    case 3120:  /* ieee_minv4df3_round */
    case 3116:  /* ieee_maxv4df3_round */
    case 3112:  /* ieee_minv8df3_round */
    case 3108:  /* ieee_maxv8df3_round */
    case 3100:  /* ieee_minv8sf3_round */
    case 3096:  /* ieee_maxv8sf3_round */
    case 3092:  /* ieee_minv16sf3_round */
    case 3088:  /* ieee_maxv16sf3_round */
    case 3080:  /* ieee_minv16hf3_round */
    case 3076:  /* ieee_maxv16hf3_round */
    case 3072:  /* ieee_minv32hf3_round */
    case 3068:  /* ieee_maxv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7947:  /* *avx2_pcmpv4di3_8 */
    case 7946:  /* *avx2_pcmpv8si3_8 */
    case 7945:  /* *avx2_pcmpv16hi3_8 */
    case 7944:  /* *avx2_pcmpv32qi3_8 */
    case 7943:  /* *avx2_pcmpv2di3_8 */
    case 7942:  /* *avx2_pcmpv4si3_8 */
    case 7941:  /* *avx2_pcmpv8hi3_8 */
    case 7940:  /* *avx2_pcmpv16qi3_8 */
    case 7939:  /* *avx2_pcmpv4di3_7 */
    case 7938:  /* *avx2_pcmpv8si3_7 */
    case 7937:  /* *avx2_pcmpv16hi3_7 */
    case 7936:  /* *avx2_pcmpv32qi3_7 */
    case 7935:  /* *avx2_pcmpv2di3_7 */
    case 7934:  /* *avx2_pcmpv4si3_7 */
    case 7933:  /* *avx2_pcmpv8hi3_7 */
    case 7932:  /* *avx2_pcmpv16qi3_7 */
    case 7931:  /* *avx2_pcmpv4di3_6 */
    case 7930:  /* *avx2_pcmpv4di3_6 */
    case 7929:  /* *avx2_pcmpv8si3_6 */
    case 7928:  /* *avx2_pcmpv8si3_6 */
    case 7927:  /* *avx2_pcmpv16hi3_6 */
    case 7926:  /* *avx2_pcmpv16hi3_6 */
    case 7925:  /* *avx2_pcmpv32qi3_6 */
    case 7924:  /* *avx2_pcmpv32qi3_6 */
    case 7923:  /* *avx2_pcmpv2di3_6 */
    case 7922:  /* *avx2_pcmpv2di3_6 */
    case 7921:  /* *avx2_pcmpv4si3_6 */
    case 7920:  /* *avx2_pcmpv4si3_6 */
    case 7919:  /* *avx2_pcmpv8hi3_6 */
    case 7918:  /* *avx2_pcmpv8hi3_6 */
    case 7917:  /* *avx2_pcmpv16qi3_6 */
    case 7916:  /* *avx2_pcmpv16qi3_6 */
    case 7911:  /* *avx2_pcmpv16qi3_3 */
    case 7910:  /* *avx2_pcmpv32qi3_3 */
    case 7901:  /* *avx2_pcmpv4di3_1 */
    case 7900:  /* *avx2_pcmpv8si3_1 */
    case 7899:  /* *avx2_pcmpv16hi3_1 */
    case 7898:  /* *avx2_pcmpv32qi3_1 */
    case 7897:  /* *avx2_pcmpv2di3_1 */
    case 7896:  /* *avx2_pcmpv4si3_1 */
    case 7895:  /* *avx2_pcmpv8hi3_1 */
    case 7894:  /* *avx2_pcmpv16qi3_1 */
    case 3264:  /* *avx_cmpv4di3_ltint */
    case 3263:  /* *avx_cmpv8si3_ltint */
    case 3262:  /* *avx_cmpv2di3_ltint */
    case 3261:  /* *avx_cmpv4si3_ltint */
    case 3260:  /* *avx_cmpv2df3_lt */
    case 3259:  /* *avx_cmpv4df3_lt */
    case 3258:  /* *avx_cmpv4sf3_lt */
    case 3257:  /* *avx_cmpv8sf3_lt */
    case 3252:  /* *avx_cmpv2df3_3 */
    case 3251:  /* *avx_cmpv4df3_3 */
    case 3250:  /* *avx_cmpv4sf3_3 */
    case 3249:  /* *avx_cmpv8sf3_3 */
    case 3244:  /* *avx_cmpv2df3_1 */
    case 3243:  /* *avx_cmpv4df3_1 */
    case 3242:  /* *avx_cmpv4sf3_1 */
    case 3241:  /* *avx_cmpv8sf3_1 */
    case 3062:  /* *minmaxv2df3_1 */
    case 3061:  /* *minmaxv4df3_1 */
    case 3060:  /* *minmaxv8df3_1 */
    case 3059:  /* *minmaxv4sf3_1 */
    case 3058:  /* *minmaxv8sf3_1 */
    case 3057:  /* *minmaxv16sf3_1 */
    case 3056:  /* *minmaxv8hf3_1 */
    case 3055:  /* *minmaxv16hf3_1 */
    case 3054:  /* *minmaxv32hf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 2993:  /* *avx512fp16_vmrsqrtv8hf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2963:  /* *sse2_vmsqrtv2df2_mask_round */
    case 2959:  /* *sse_vmsqrtv4sf2_mask_round */
    case 2955:  /* *avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4785:  /* avx512fp16_vcvtsd2sh_mask_mem */
    case 4783:  /* avx512fp16_vcvtss2sh_mask_mem */
    case 4773:  /* avx512fp16_vcvtsh2ss_mask_mem */
    case 4771:  /* avx512fp16_vcvtsh2sd_mask_mem */
    case 2962:  /* *sse2_vmsqrtv2df2_mask */
    case 2958:  /* *sse_vmsqrtv4sf2_mask */
    case 2954:  /* *avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2961:  /* *sse2_vmsqrtv2df2_round */
    case 2957:  /* *sse_vmsqrtv4sf2_round */
    case 2953:  /* *avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2951:  /* sse2_vmsqrtv2df2_mask_round */
    case 2947:  /* sse_vmsqrtv4sf2_mask_round */
    case 2943:  /* avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2950:  /* sse2_vmsqrtv2df2_mask */
    case 2946:  /* sse_vmsqrtv4sf2_mask */
    case 2942:  /* avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2949:  /* sse2_vmsqrtv2df2_round */
    case 2945:  /* sse_vmsqrtv4sf2_round */
    case 2941:  /* avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5197:  /* avx_cvtps2pd256_mask_round */
    case 5193:  /* avx512f_cvtps2pd512_mask_round */
    case 5185:  /* avx_cvtpd2ps256_mask_round */
    case 5181:  /* avx512f_cvtpd2ps512_mask_round */
    case 5096:  /* fixuns_truncv4dfv4di2_mask_round */
    case 5092:  /* fix_truncv4dfv4di2_mask_round */
    case 5088:  /* fixuns_truncv8dfv8di2_mask_round */
    case 5084:  /* fix_truncv8dfv8di2_mask_round */
    case 5043:  /* fixuns_truncv8dfv8si2_mask_round */
    case 5039:  /* fix_truncv8dfv8si2_mask_round */
    case 4988:  /* floatunsv4div4sf2_mask_round */
    case 4984:  /* floatv4div4sf2_mask_round */
    case 4980:  /* floatunsv8div8sf2_mask_round */
    case 4976:  /* floatv8div8sf2_mask_round */
    case 4968:  /* floatunsv4div4df2_mask_round */
    case 4964:  /* floatv4div4df2_mask_round */
    case 4960:  /* floatunsv8div8df2_mask_round */
    case 4956:  /* floatv8div8df2_mask_round */
    case 4890:  /* fixuns_truncv16sfv16si2_mask_round */
    case 4886:  /* fix_truncv16sfv16si2_mask_round */
    case 4832:  /* floatunsv8siv8sf2_mask_round */
    case 4828:  /* floatunsv16siv16sf2_mask_round */
    case 4822:  /* floatv8siv8sf2_mask_round */
    case 4818:  /* floatv16siv16sf2_mask_round */
    case 4751:  /* avx512fp16_vcvtps2ph_v8sf_mask_round */
    case 4747:  /* avx512fp16_vcvtps2ph_v16sf_mask_round */
    case 4743:  /* avx512fp16_vcvtpd2ph_v8df_mask_round */
    case 4725:  /* avx512fp16_float_extend_phv8sf2_mask_round */
    case 4721:  /* avx512fp16_float_extend_phv16sf2_mask_round */
    case 4717:  /* avx512fp16_float_extend_phv8df2_mask_round */
    case 4653:  /* avx512fp16_fixuns_truncv8di2_mask_round */
    case 4649:  /* avx512fp16_fix_truncv8di2_mask_round */
    case 4645:  /* avx512fp16_fixuns_truncv16si2_mask_round */
    case 4641:  /* avx512fp16_fix_truncv16si2_mask_round */
    case 4637:  /* avx512fp16_fixuns_truncv8si2_mask_round */
    case 4633:  /* avx512fp16_fix_truncv8si2_mask_round */
    case 4629:  /* avx512fp16_fixuns_truncv32hi2_mask_round */
    case 4625:  /* avx512fp16_fix_truncv32hi2_mask_round */
    case 4621:  /* avx512fp16_fixuns_truncv16hi2_mask_round */
    case 4617:  /* avx512fp16_fix_truncv16hi2_mask_round */
    case 4525:  /* avx512fp16_vcvtuqq2ph_v8di_mask_round */
    case 4521:  /* avx512fp16_vcvtqq2ph_v8di_mask_round */
    case 4517:  /* avx512fp16_vcvtudq2ph_v16si_mask_round */
    case 4513:  /* avx512fp16_vcvtdq2ph_v16si_mask_round */
    case 4509:  /* avx512fp16_vcvtudq2ph_v8si_mask_round */
    case 4505:  /* avx512fp16_vcvtdq2ph_v8si_mask_round */
    case 4501:  /* avx512fp16_vcvtuw2ph_v32hi_mask_round */
    case 4497:  /* avx512fp16_vcvtw2ph_v32hi_mask_round */
    case 4493:  /* avx512fp16_vcvtuw2ph_v16hi_mask_round */
    case 4489:  /* avx512fp16_vcvtw2ph_v16hi_mask_round */
    case 3973:  /* *fma_fnmadd_v4df_round */
    case 3969:  /* *fma_fnmadd_v8df_round */
    case 3962:  /* *fma_fnmadd_v8sf_round */
    case 3958:  /* *fma_fnmadd_v16sf_round */
    case 3950:  /* *fma_fnmadd_v16hf_round */
    case 3946:  /* *fma_fnmadd_v32hf_round */
    case 2937:  /* avx_sqrtv4df2_mask_round */
    case 2933:  /* avx512f_sqrtv8df2_mask_round */
    case 2927:  /* avx_sqrtv8sf2_mask_round */
    case 2923:  /* avx512f_sqrtv16sf2_mask_round */
    case 2917:  /* avx512fp16_sqrtv16hf2_mask_round */
    case 2913:  /* avx512fp16_sqrtv32hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10692:  /* avx10_2_sqrtbf16_v8bf_mask */
    case 10690:  /* avx10_2_sqrtbf16_v16bf_mask */
    case 10688:  /* avx10_2_sqrtbf16_v32bf_mask */
    case 10649:  /* avx10_2_fnmaddbf16_v8bf */
    case 10647:  /* avx10_2_fnmaddbf16_v16bf */
    case 10645:  /* avx10_2_fnmaddbf16_v32bf */
    case 10353:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 10351:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 10167:  /* vpopcountv8hi_mask */
    case 10165:  /* vpopcountv16hi_mask */
    case 10163:  /* vpopcountv32hi_mask */
    case 10161:  /* vpopcountv32qi_mask */
    case 10159:  /* vpopcountv16qi_mask */
    case 10157:  /* vpopcountv64qi_mask */
    case 10147:  /* vpopcountv2di_mask */
    case 10145:  /* vpopcountv4di_mask */
    case 10143:  /* vpopcountv8di_mask */
    case 10141:  /* vpopcountv4si_mask */
    case 10139:  /* vpopcountv8si_mask */
    case 10137:  /* vpopcountv16si_mask */
    case 10074:  /* clzv2di2_mask */
    case 10072:  /* clzv4di2_mask */
    case 10070:  /* clzv8di2_mask */
    case 10068:  /* clzv4si2_mask */
    case 10066:  /* clzv8si2_mask */
    case 10064:  /* clzv16si2_mask */
    case 9348:  /* avx512dq_broadcastv4df_mask_1 */
    case 9346:  /* avx512dq_broadcastv4di_mask_1 */
    case 9344:  /* avx512dq_broadcastv8df_mask_1 */
    case 9342:  /* avx512dq_broadcastv8di_mask_1 */
    case 9340:  /* avx512dq_broadcastv16si_mask_1 */
    case 9338:  /* avx512dq_broadcastv16sf_mask_1 */
    case 9336:  /* avx512vl_broadcastv8sf_mask_1 */
    case 9334:  /* avx512vl_broadcastv8si_mask_1 */
    case 9292:  /* avx512vl_vec_dup_gprv2df_mask */
    case 9290:  /* avx512vl_vec_dup_gprv4df_mask */
    case 9288:  /* avx512f_vec_dup_gprv8df_mask */
    case 9286:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 9284:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 9282:  /* avx512f_vec_dup_gprv16sf_mask */
    case 9280:  /* avx512vl_vec_dup_gprv2di_mask */
    case 9278:  /* avx512vl_vec_dup_gprv4di_mask */
    case 9276:  /* avx512f_vec_dup_gprv8di_mask */
    case 9274:  /* avx512vl_vec_dup_gprv4si_mask */
    case 9272:  /* avx512vl_vec_dup_gprv8si_mask */
    case 9270:  /* avx512f_vec_dup_gprv16si_mask */
    case 9268:  /* avx512vl_vec_dup_gprv8bf_mask */
    case 9266:  /* avx512vl_vec_dup_gprv16bf_mask */
    case 9264:  /* avx512bw_vec_dup_gprv32bf_mask */
    case 9262:  /* avx512fp16_vec_dup_gprv8hf_mask */
    case 9260:  /* avx512vl_vec_dup_gprv16hf_mask */
    case 9258:  /* avx512bw_vec_dup_gprv32hf_mask */
    case 9256:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 9254:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 9252:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 9250:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 9248:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 9246:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 9244:  /* avx512f_broadcastv8di_mask */
    case 9242:  /* avx512f_broadcastv8df_mask */
    case 9240:  /* avx512f_broadcastv16si_mask */
    case 9238:  /* avx512f_broadcastv16sf_mask */
    case 8931:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 8929:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 8921:  /* avx2_zero_extendv4siv4di2_mask */
    case 8919:  /* avx2_sign_extendv4siv4di2_mask */
    case 8915:  /* avx512f_zero_extendv8siv8di2_mask */
    case 8913:  /* avx512f_sign_extendv8siv8di2_mask */
    case 8907:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 8905:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 8895:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 8893:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 8887:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 8885:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 8880:  /* *sse4_1_zero_extendv2qiv2di2_mask_1 */
    case 8878:  /* *sse4_1_sign_extendv2qiv2di2_mask_1 */
    case 8868:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 8866:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 8856:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 8854:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 8840:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 8838:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 8828:  /* avx2_zero_extendv8hiv8si2_mask */
    case 8826:  /* avx2_sign_extendv8hiv8si2_mask */
    case 8820:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 8818:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 8812:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 8810:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 8800:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 8798:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 8792:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 8790:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 8780:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 8778:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 8768:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 8766:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 8760:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 8758:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 8674:  /* absv8hi2_mask */
    case 8673:  /* absv16hi2_mask */
    case 8672:  /* absv32hi2_mask */
    case 8671:  /* absv32qi2_mask */
    case 8670:  /* absv16qi2_mask */
    case 8669:  /* absv64qi2_mask */
    case 8668:  /* absv2di2_mask */
    case 8667:  /* absv4di2_mask */
    case 8666:  /* absv8di2_mask */
    case 8665:  /* absv4si2_mask */
    case 8664:  /* absv8si2_mask */
    case 8663:  /* absv16si2_mask */
    case 8392:  /* *avx512f_vinserti32x4_0 */
    case 8391:  /* *avx512f_vinsertf32x4_0 */
    case 8390:  /* *avx512dq_vinserti64x2_0 */
    case 8389:  /* *avx512dq_vinsertf64x2_0 */
    case 7282:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 7281:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 7280:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 7279:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 7278:  /* avx512vl_truncatev8siv8hi2_mask */
    case 7277:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 7276:  /* avx512vl_us_truncatev4div4si2_mask */
    case 7275:  /* avx512vl_truncatev4div4si2_mask */
    case 7274:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 7262:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 7261:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 7260:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 7255:  /* avx512f_us_truncatev8div8hi2_mask */
    case 7254:  /* avx512f_truncatev8div8hi2_mask */
    case 7253:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 7252:  /* avx512f_us_truncatev8div8si2_mask */
    case 7251:  /* avx512f_truncatev8div8si2_mask */
    case 7250:  /* avx512f_ss_truncatev8div8si2_mask */
    case 7249:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 7248:  /* avx512f_truncatev16siv16hi2_mask */
    case 7247:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 7246:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 7245:  /* avx512f_truncatev16siv16qi2_mask */
    case 7244:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 7223:  /* vec_dupv2df_mask */
    case 5378:  /* vec_extract_hi_v8sf_mask */
    case 5377:  /* vec_extract_hi_v8si_mask */
    case 5374:  /* vec_extract_lo_v8sf_mask */
    case 5373:  /* vec_extract_lo_v8si_mask */
    case 5370:  /* vec_extract_hi_v4df_mask */
    case 5369:  /* vec_extract_hi_v4di_mask */
    case 5366:  /* vec_extract_lo_v4df_mask */
    case 5365:  /* vec_extract_lo_v4di_mask */
    case 5362:  /* vec_extract_lo_v16si_mask */
    case 5361:  /* vec_extract_lo_v16sf_mask */
    case 5358:  /* vec_extract_hi_v16si_mask */
    case 5357:  /* vec_extract_hi_v16sf_mask */
    case 5354:  /* vec_extract_hi_v8di_mask */
    case 5353:  /* vec_extract_hi_v8df_mask */
    case 5350:  /* vec_extract_lo_v8di_mask */
    case 5349:  /* vec_extract_lo_v8df_mask */
    case 5245:  /* sse2_cvtps2pd_mask_1 */
    case 5196:  /* avx_cvtps2pd256_mask */
    case 5192:  /* avx512f_cvtps2pd512_mask */
    case 5184:  /* avx_cvtpd2ps256_mask */
    case 5180:  /* avx512f_cvtpd2ps512_mask */
    case 5162:  /* fixuns_truncv4sfv4si2_mask */
    case 5160:  /* fixuns_truncv8sfv8si2_mask */
    case 5144:  /* fixuns_truncv4sfv4di2_mask */
    case 5142:  /* fix_truncv4sfv4di2_mask */
    case 5140:  /* fixuns_truncv8sfv8di2_mask */
    case 5138:  /* fix_truncv8sfv8di2_mask */
    case 5100:  /* fixuns_truncv2dfv2di2_mask */
    case 5098:  /* fix_truncv2dfv2di2_mask */
    case 5095:  /* fixuns_truncv4dfv4di2_mask */
    case 5091:  /* fix_truncv4dfv4di2_mask */
    case 5087:  /* fixuns_truncv8dfv8di2_mask */
    case 5083:  /* fix_truncv8dfv8di2_mask */
    case 5060:  /* fixuns_truncv4dfv4si2_mask */
    case 5054:  /* fix_truncv4dfv4si2_mask */
    case 5042:  /* fixuns_truncv8dfv8si2_mask */
    case 5038:  /* fix_truncv8dfv8si2_mask */
    case 4998:  /* floatunsv4siv4df2_mask */
    case 4996:  /* floatunsv8siv8df2_mask */
    case 4987:  /* floatunsv4div4sf2_mask */
    case 4983:  /* floatv4div4sf2_mask */
    case 4979:  /* floatunsv8div8sf2_mask */
    case 4975:  /* floatv8div8sf2_mask */
    case 4972:  /* floatunsv2div2df2_mask */
    case 4970:  /* floatv2div2df2_mask */
    case 4967:  /* floatunsv4div4df2_mask */
    case 4963:  /* floatv4div4df2_mask */
    case 4959:  /* floatunsv8div8df2_mask */
    case 4955:  /* floatv8div8df2_mask */
    case 4952:  /* floatv4siv4df2_mask */
    case 4950:  /* floatv8siv8df2_mask */
    case 4900:  /* fix_truncv4sfv4si2_mask */
    case 4896:  /* fix_truncv8sfv8si2_mask */
    case 4889:  /* fixuns_truncv16sfv16si2_mask */
    case 4885:  /* fix_truncv16sfv16si2_mask */
    case 4834:  /* floatunsv4siv4sf2_mask */
    case 4831:  /* floatunsv8siv8sf2_mask */
    case 4827:  /* floatunsv16siv16sf2_mask */
    case 4824:  /* floatv4siv4sf2_mask */
    case 4821:  /* floatv8siv8sf2_mask */
    case 4817:  /* floatv16siv16sf2_mask */
    case 4750:  /* avx512fp16_vcvtps2ph_v8sf_mask */
    case 4746:  /* avx512fp16_vcvtps2ph_v16sf_mask */
    case 4742:  /* avx512fp16_vcvtpd2ph_v8df_mask */
    case 4739:  /* *avx512fp16_float_extend_phv2df2_load_mask */
    case 4735:  /* *avx512fp16_float_extend_phv4sf2_load_mask */
    case 4733:  /* *avx512fp16_float_extend_phv4df2_load_mask */
    case 4724:  /* avx512fp16_float_extend_phv8sf2_mask */
    case 4720:  /* avx512fp16_float_extend_phv16sf2_mask */
    case 4716:  /* avx512fp16_float_extend_phv8df2_mask */
    case 4693:  /* *avx512fp16_fixuns_truncv2di2_load_mask */
    case 4691:  /* *avx512fp16_fix_truncv2di2_load_mask */
    case 4681:  /* *avx512fp16_fixuns_truncv4di2_load_mask */
    case 4679:  /* *avx512fp16_fix_truncv4di2_load_mask */
    case 4677:  /* *avx512fp16_fixuns_truncv4si2_load_mask */
    case 4675:  /* *avx512fp16_fix_truncv4si2_load_mask */
    case 4652:  /* avx512fp16_fixuns_truncv8di2_mask */
    case 4648:  /* avx512fp16_fix_truncv8di2_mask */
    case 4644:  /* avx512fp16_fixuns_truncv16si2_mask */
    case 4640:  /* avx512fp16_fix_truncv16si2_mask */
    case 4636:  /* avx512fp16_fixuns_truncv8si2_mask */
    case 4632:  /* avx512fp16_fix_truncv8si2_mask */
    case 4628:  /* avx512fp16_fixuns_truncv32hi2_mask */
    case 4624:  /* avx512fp16_fix_truncv32hi2_mask */
    case 4620:  /* avx512fp16_fixuns_truncv16hi2_mask */
    case 4616:  /* avx512fp16_fix_truncv16hi2_mask */
    case 4613:  /* avx512fp16_fixuns_truncv8hi2_mask */
    case 4611:  /* avx512fp16_fix_truncv8hi2_mask */
    case 4524:  /* avx512fp16_vcvtuqq2ph_v8di_mask */
    case 4520:  /* avx512fp16_vcvtqq2ph_v8di_mask */
    case 4516:  /* avx512fp16_vcvtudq2ph_v16si_mask */
    case 4512:  /* avx512fp16_vcvtdq2ph_v16si_mask */
    case 4508:  /* avx512fp16_vcvtudq2ph_v8si_mask */
    case 4504:  /* avx512fp16_vcvtdq2ph_v8si_mask */
    case 4500:  /* avx512fp16_vcvtuw2ph_v32hi_mask */
    case 4496:  /* avx512fp16_vcvtw2ph_v32hi_mask */
    case 4492:  /* avx512fp16_vcvtuw2ph_v16hi_mask */
    case 4488:  /* avx512fp16_vcvtw2ph_v16hi_mask */
    case 4485:  /* avx512fp16_vcvtuw2ph_v8hi_mask */
    case 4483:  /* avx512fp16_vcvtw2ph_v8hi_mask */
    case 3975:  /* *fma_fnmadd_v2df */
    case 3971:  /* *fma_fnmadd_v4df */
    case 3967:  /* *fma_fnmadd_v8df */
    case 3966:  /* *fma_fnmadd_df */
    case 3964:  /* *fma_fnmadd_v4sf */
    case 3960:  /* *fma_fnmadd_v8sf */
    case 3956:  /* *fma_fnmadd_v16sf */
    case 3955:  /* *fma_fnmadd_sf */
    case 3954:  /* *fma_fnmadd_hf */
    case 3952:  /* *fma_fnmadd_v8hf */
    case 3948:  /* *fma_fnmadd_v16hf */
    case 3944:  /* *fma_fnmadd_v32hf */
    case 3943:  /* *fma_fnmadd_v4df */
    case 3942:  /* *fma_fnmadd_v8sf */
    case 3941:  /* *fma_fnmadd_v2df */
    case 3940:  /* *fma_fnmadd_v4sf */
    case 3939:  /* *fma_fnmadd_df */
    case 3938:  /* *fma_fnmadd_sf */
    case 2939:  /* sse2_sqrtv2df2_mask */
    case 2936:  /* avx_sqrtv4df2_mask */
    case 2932:  /* avx512f_sqrtv8df2_mask */
    case 2929:  /* sse_sqrtv4sf2_mask */
    case 2926:  /* avx_sqrtv8sf2_mask */
    case 2922:  /* avx512f_sqrtv16sf2_mask */
    case 2919:  /* avx512fp16_sqrtv8hf2_mask */
    case 2916:  /* avx512fp16_sqrtv16hf2_mask */
    case 2912:  /* avx512fp16_sqrtv32hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5195:  /* avx_cvtps2pd256_round */
    case 5191:  /* avx512f_cvtps2pd512_round */
    case 5183:  /* avx_cvtpd2ps256_round */
    case 5179:  /* *avx512f_cvtpd2ps512_round */
    case 5094:  /* fixuns_truncv4dfv4di2_round */
    case 5090:  /* fix_truncv4dfv4di2_round */
    case 5086:  /* fixuns_truncv8dfv8di2_round */
    case 5082:  /* fix_truncv8dfv8di2_round */
    case 5041:  /* fixuns_truncv8dfv8si2_round */
    case 5037:  /* fix_truncv8dfv8si2_round */
    case 4986:  /* floatunsv4div4sf2_round */
    case 4982:  /* floatv4div4sf2_round */
    case 4978:  /* floatunsv8div8sf2_round */
    case 4974:  /* floatv8div8sf2_round */
    case 4966:  /* floatunsv4div4df2_round */
    case 4962:  /* floatv4div4df2_round */
    case 4958:  /* floatunsv8div8df2_round */
    case 4954:  /* floatv8div8df2_round */
    case 4888:  /* fixuns_truncv16sfv16si2_round */
    case 4884:  /* fix_truncv16sfv16si2_round */
    case 4830:  /* *floatunsv8siv8sf2_round */
    case 4826:  /* *floatunsv16siv16sf2_round */
    case 4820:  /* floatv8siv8sf2_round */
    case 4816:  /* floatv16siv16sf2_round */
    case 4749:  /* avx512fp16_vcvtps2ph_v8sf_round */
    case 4745:  /* avx512fp16_vcvtps2ph_v16sf_round */
    case 4741:  /* avx512fp16_vcvtpd2ph_v8df_round */
    case 4723:  /* avx512fp16_float_extend_phv8sf2_round */
    case 4719:  /* avx512fp16_float_extend_phv16sf2_round */
    case 4715:  /* avx512fp16_float_extend_phv8df2_round */
    case 4651:  /* avx512fp16_fixuns_truncv8di2_round */
    case 4647:  /* avx512fp16_fix_truncv8di2_round */
    case 4643:  /* avx512fp16_fixuns_truncv16si2_round */
    case 4639:  /* avx512fp16_fix_truncv16si2_round */
    case 4635:  /* avx512fp16_fixuns_truncv8si2_round */
    case 4631:  /* avx512fp16_fix_truncv8si2_round */
    case 4627:  /* avx512fp16_fixuns_truncv32hi2_round */
    case 4623:  /* avx512fp16_fix_truncv32hi2_round */
    case 4619:  /* avx512fp16_fixuns_truncv16hi2_round */
    case 4615:  /* avx512fp16_fix_truncv16hi2_round */
    case 4523:  /* avx512fp16_vcvtuqq2ph_v8di_round */
    case 4519:  /* avx512fp16_vcvtqq2ph_v8di_round */
    case 4515:  /* avx512fp16_vcvtudq2ph_v16si_round */
    case 4511:  /* avx512fp16_vcvtdq2ph_v16si_round */
    case 4507:  /* avx512fp16_vcvtudq2ph_v8si_round */
    case 4503:  /* avx512fp16_vcvtdq2ph_v8si_round */
    case 4499:  /* avx512fp16_vcvtuw2ph_v32hi_round */
    case 4495:  /* avx512fp16_vcvtw2ph_v32hi_round */
    case 4491:  /* avx512fp16_vcvtuw2ph_v16hi_round */
    case 4487:  /* avx512fp16_vcvtw2ph_v16hi_round */
    case 2935:  /* avx_sqrtv4df2_round */
    case 2931:  /* avx512f_sqrtv8df2_round */
    case 2925:  /* avx_sqrtv8sf2_round */
    case 2921:  /* avx512f_sqrtv16sf2_round */
    case 2915:  /* avx512fp16_sqrtv16hf2_round */
    case 2911:  /* avx512fp16_sqrtv32hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2991:  /* avx512fp16_vmrsqrtv8hf2_mask */
    case 2987:  /* rsqrt14_v2df_mask */
    case 2986:  /* rsqrt14_v4sf_mask */
    case 2909:  /* srcp14v2df_mask */
    case 2908:  /* srcp14v4sf_mask */
    case 2892:  /* avx512fp16_vmrcpv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2992:  /* *avx512fp16_vmrsqrtv8hf2 */
    case 2989:  /* *sse_vmrsqrtv4sf2 */
    case 2893:  /* *avx512fp16_vmrcpv8hf2 */
    case 2884:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 10501:  /* *vcvtph2hf8sv8hf */
    case 10500:  /* *vcvtph2hf8v8hf */
    case 10499:  /* *vcvtph2bf8sv8hf */
    case 10498:  /* *vcvtph2bf8v8hf */
    case 9064:  /* *xop_vmfrczv2df2 */
    case 9063:  /* *xop_vmfrczv4sf2 */
    case 5013:  /* *avx_cvtpd2dq256_2 */
    case 2990:  /* avx512fp16_vmrsqrtv8hf2 */
    case 2988:  /* sse_vmrsqrtv4sf2 */
    case 2985:  /* rsqrt14v2df */
    case 2984:  /* rsqrt14v4sf */
    case 2907:  /* srcp14v2df */
    case 2906:  /* srcp14v4sf */
    case 2891:  /* avx512fp16_vmrcpv8hf2 */
    case 2883:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3156:  /* *sse2_vmsminv2df3_mask_round */
    case 3152:  /* *sse2_vmsmaxv2df3_mask_round */
    case 3148:  /* *sse_vmsminv4sf3_mask_round */
    case 3144:  /* *sse_vmsmaxv4sf3_mask_round */
    case 3140:  /* *avx512fp16_vmsminv8hf3_mask_round */
    case 3136:  /* *avx512fp16_vmsmaxv8hf3_mask_round */
    case 2850:  /* sse2_vmdivv2df3_mask_round */
    case 2846:  /* sse2_vmmulv2df3_mask_round */
    case 2842:  /* sse_vmdivv4sf3_mask_round */
    case 2838:  /* sse_vmmulv4sf3_mask_round */
    case 2834:  /* avx512fp16_vmdivv8hf3_mask_round */
    case 2830:  /* avx512fp16_vmmulv8hf3_mask_round */
    case 2784:  /* sse2_vmsubv2df3_mask_round */
    case 2780:  /* sse2_vmaddv2df3_mask_round */
    case 2776:  /* sse_vmsubv4sf3_mask_round */
    case 2772:  /* sse_vmaddv4sf3_mask_round */
    case 2768:  /* avx512fp16_vmsubv8hf3_mask_round */
    case 2764:  /* avx512fp16_vmaddv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3154:  /* *sse2_vmsminv2df3_mask */
    case 3150:  /* *sse2_vmsmaxv2df3_mask */
    case 3146:  /* *sse_vmsminv4sf3_mask */
    case 3142:  /* *sse_vmsmaxv4sf3_mask */
    case 3138:  /* *avx512fp16_vmsminv8hf3_mask */
    case 3134:  /* *avx512fp16_vmsmaxv8hf3_mask */
    case 2849:  /* sse2_vmdivv2df3_mask */
    case 2845:  /* sse2_vmmulv2df3_mask */
    case 2841:  /* sse_vmdivv4sf3_mask */
    case 2837:  /* sse_vmmulv4sf3_mask */
    case 2833:  /* avx512fp16_vmdivv8hf3_mask */
    case 2829:  /* avx512fp16_vmmulv8hf3_mask */
    case 2783:  /* sse2_vmsubv2df3_mask */
    case 2779:  /* sse2_vmaddv2df3_mask */
    case 2775:  /* sse_vmsubv4sf3_mask */
    case 2771:  /* sse_vmaddv4sf3_mask */
    case 2767:  /* avx512fp16_vmsubv8hf3_mask */
    case 2763:  /* avx512fp16_vmaddv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3155:  /* *sse2_vmsminv2df3_round */
    case 3151:  /* *sse2_vmsmaxv2df3_round */
    case 3147:  /* *sse_vmsminv4sf3_round */
    case 3143:  /* *sse_vmsmaxv4sf3_round */
    case 3139:  /* *avx512fp16_vmsminv8hf3_round */
    case 3135:  /* *avx512fp16_vmsmaxv8hf3_round */
    case 2848:  /* sse2_vmdivv2df3_round */
    case 2844:  /* sse2_vmmulv2df3_round */
    case 2840:  /* sse_vmdivv4sf3_round */
    case 2836:  /* sse_vmmulv4sf3_round */
    case 2832:  /* avx512fp16_vmdivv8hf3_round */
    case 2828:  /* avx512fp16_vmmulv8hf3_round */
    case 2782:  /* sse2_vmsubv2df3_round */
    case 2778:  /* sse2_vmaddv2df3_round */
    case 2774:  /* sse_vmsubv4sf3_round */
    case 2770:  /* sse_vmaddv4sf3_round */
    case 2766:  /* avx512fp16_vmsubv8hf3_round */
    case 2762:  /* avx512fp16_vmaddv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3153:  /* *sse2_vmsminv2df3 */
    case 3149:  /* *sse2_vmsmaxv2df3 */
    case 3145:  /* *sse_vmsminv4sf3 */
    case 3141:  /* *sse_vmsmaxv4sf3 */
    case 3137:  /* *avx512fp16_vmsminv8hf3 */
    case 3133:  /* *avx512fp16_vmsmaxv8hf3 */
    case 2847:  /* sse2_vmdivv2df3 */
    case 2843:  /* sse2_vmmulv2df3 */
    case 2839:  /* sse_vmdivv4sf3 */
    case 2835:  /* sse_vmmulv4sf3 */
    case 2831:  /* avx512fp16_vmdivv8hf3 */
    case 2827:  /* avx512fp16_vmmulv8hf3 */
    case 2781:  /* sse2_vmsubv2df3 */
    case 2777:  /* sse2_vmaddv2df3 */
    case 2773:  /* sse_vmsubv4sf3 */
    case 2769:  /* sse_vmaddv4sf3 */
    case 2765:  /* avx512fp16_vmsubv8hf3 */
    case 2761:  /* avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2826:  /* *sse2_vmdivv2df3 */
    case 2825:  /* *sse2_vmmulv2df3 */
    case 2824:  /* *sse_vmdivv4sf3 */
    case 2823:  /* *sse_vmmulv4sf3 */
    case 2822:  /* *avx512fp16_vmdivv8hf3 */
    case 2821:  /* *avx512fp16_vmmulv8hf3 */
    case 2760:  /* *sse2_vmsubv2df3 */
    case 2759:  /* *sse2_vmaddv2df3 */
    case 2758:  /* *sse_vmsubv4sf3 */
    case 2757:  /* *sse_vmaddv4sf3 */
    case 2756:  /* *avx512fp16_vmsubv8hf3 */
    case 2755:  /* *avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3049:  /* *sminv4df3_mask_round */
    case 3045:  /* *smaxv4df3_mask_round */
    case 3041:  /* *sminv8df3_mask_round */
    case 3037:  /* *smaxv8df3_mask_round */
    case 3029:  /* *sminv8sf3_mask_round */
    case 3025:  /* *smaxv8sf3_mask_round */
    case 3021:  /* *sminv16sf3_mask_round */
    case 3017:  /* *smaxv16sf3_mask_round */
    case 3009:  /* *sminv16hf3_mask_round */
    case 3005:  /* *smaxv16hf3_mask_round */
    case 3001:  /* *sminv32hf3_mask_round */
    case 2997:  /* *smaxv32hf3_mask_round */
    case 2878:  /* avx_divv4df3_mask_round */
    case 2874:  /* avx512f_divv8df3_mask_round */
    case 2868:  /* avx_divv8sf3_mask_round */
    case 2864:  /* avx512f_divv16sf3_mask_round */
    case 2858:  /* avx512fp16_divv16hf3_mask_round */
    case 2854:  /* avx512fp16_divv32hf3_mask_round */
    case 2820:  /* *mulv2df3_mask_round */
    case 2816:  /* *mulv4df3_mask_round */
    case 2812:  /* *mulv8df3_mask_round */
    case 2808:  /* *mulv4sf3_mask_round */
    case 2804:  /* *mulv8sf3_mask_round */
    case 2800:  /* *mulv16sf3_mask_round */
    case 2796:  /* *mulv8hf3_mask_round */
    case 2792:  /* *mulv16hf3_mask_round */
    case 2788:  /* *mulv32hf3_mask_round */
    case 2754:  /* *subv2df3_mask_round */
    case 2750:  /* *addv2df3_mask_round */
    case 2746:  /* *subv4df3_mask_round */
    case 2742:  /* *addv4df3_mask_round */
    case 2738:  /* *subv8df3_mask_round */
    case 2734:  /* *addv8df3_mask_round */
    case 2730:  /* *subv4sf3_mask_round */
    case 2726:  /* *addv4sf3_mask_round */
    case 2722:  /* *subv8sf3_mask_round */
    case 2718:  /* *addv8sf3_mask_round */
    case 2714:  /* *subv16sf3_mask_round */
    case 2710:  /* *addv16sf3_mask_round */
    case 2706:  /* *subv8hf3_mask_round */
    case 2702:  /* *addv8hf3_mask_round */
    case 2698:  /* *subv16hf3_mask_round */
    case 2694:  /* *addv16hf3_mask_round */
    case 2690:  /* *subv32hf3_mask_round */
    case 2686:  /* *addv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 10632:  /* avx10_2_divbf16_v8bf_mask */
    case 10630:  /* avx10_2_mulbf16_v8bf_mask */
    case 10628:  /* avx10_2_subbf16_v8bf_mask */
    case 10626:  /* avx10_2_addbf16_v8bf_mask */
    case 10624:  /* avx10_2_divbf16_v16bf_mask */
    case 10622:  /* avx10_2_mulbf16_v16bf_mask */
    case 10620:  /* avx10_2_subbf16_v16bf_mask */
    case 10618:  /* avx10_2_addbf16_v16bf_mask */
    case 10616:  /* avx10_2_divbf16_v32bf_mask */
    case 10614:  /* avx10_2_mulbf16_v32bf_mask */
    case 10612:  /* avx10_2_subbf16_v32bf_mask */
    case 10610:  /* avx10_2_addbf16_v32bf_mask */
    case 10608:  /* avx10_2_sminbf16_v8bf_mask */
    case 10606:  /* avx10_2_smaxbf16_v8bf_mask */
    case 10604:  /* avx10_2_sminbf16_v16bf_mask */
    case 10602:  /* avx10_2_smaxbf16_v16bf_mask */
    case 10600:  /* avx10_2_sminbf16_v32bf_mask */
    case 10598:  /* avx10_2_smaxbf16_v32bf_mask */
    case 9609:  /* avx512bw_lshrvv32hi_mask */
    case 9607:  /* avx512bw_ashlvv32hi_mask */
    case 9605:  /* avx512vl_lshrvv16hi_mask */
    case 9603:  /* avx512vl_ashlvv16hi_mask */
    case 9601:  /* avx512vl_lshrvv8hi_mask */
    case 9599:  /* avx512vl_ashlvv8hi_mask */
    case 9597:  /* avx2_lshrvv2di_mask */
    case 9595:  /* avx2_ashlvv2di_mask */
    case 9593:  /* avx2_lshrvv4di_mask */
    case 9591:  /* avx2_ashlvv4di_mask */
    case 9589:  /* avx512f_lshrvv8di_mask */
    case 9587:  /* avx512f_ashlvv8di_mask */
    case 9585:  /* avx2_lshrvv4si_mask */
    case 9583:  /* avx2_ashlvv4si_mask */
    case 9581:  /* avx2_lshrvv8si_mask */
    case 9579:  /* avx2_ashlvv8si_mask */
    case 9577:  /* avx512f_lshrvv16si_mask */
    case 9575:  /* avx512f_ashlvv16si_mask */
    case 9573:  /* avx512bw_ashrvv32hi_mask */
    case 9571:  /* avx512vl_ashrvv16hi_mask */
    case 9569:  /* avx512vl_ashrvv8hi_mask */
    case 9567:  /* avx512f_ashrvv8di_mask */
    case 9565:  /* avx2_ashrvv4di_mask */
    case 9563:  /* avx2_ashrvv2di_mask */
    case 9561:  /* avx512f_ashrvv16si_mask */
    case 9559:  /* avx2_ashrvv8si_mask */
    case 9557:  /* avx2_ashrvv4si_mask */
    case 8043:  /* *xorv2di3_mask */
    case 8041:  /* *iorv2di3_mask */
    case 8039:  /* *andv2di3_mask */
    case 8037:  /* *xorv4di3_mask */
    case 8035:  /* *iorv4di3_mask */
    case 8033:  /* *andv4di3_mask */
    case 8031:  /* *xorv8di3_mask */
    case 8029:  /* *iorv8di3_mask */
    case 8027:  /* *andv8di3_mask */
    case 8025:  /* *xorv4si3_mask */
    case 8023:  /* *iorv4si3_mask */
    case 8021:  /* *andv4si3_mask */
    case 8019:  /* *xorv8si3_mask */
    case 8017:  /* *iorv8si3_mask */
    case 8015:  /* *andv8si3_mask */
    case 8013:  /* *xorv16si3_mask */
    case 8011:  /* *iorv16si3_mask */
    case 8009:  /* *andv16si3_mask */
    case 7977:  /* one_cmplv2di2_mask */
    case 7975:  /* one_cmplv4di2_mask */
    case 7973:  /* one_cmplv4si2_mask */
    case 7971:  /* one_cmplv8si2_mask */
    case 7963:  /* one_cmplv8di2_mask */
    case 7961:  /* one_cmplv16si2_mask */
    case 7887:  /* *sse4_1_uminv4si3_mask */
    case 7885:  /* *sse4_1_umaxv4si3_mask */
    case 7883:  /* *sse4_1_uminv8hi3_mask */
    case 7881:  /* *sse4_1_umaxv8hi3_mask */
    case 7877:  /* *sse4_1_sminv4si3_mask */
    case 7875:  /* *sse4_1_smaxv4si3_mask */
    case 7873:  /* *sse4_1_sminv16qi3_mask */
    case 7871:  /* *sse4_1_smaxv16qi3_mask */
    case 7869:  /* *avx512bw_uminv8hi3_mask */
    case 7867:  /* *avx512bw_umaxv8hi3_mask */
    case 7865:  /* *avx512bw_sminv8hi3_mask */
    case 7863:  /* *avx512bw_smaxv8hi3_mask */
    case 7861:  /* *avx512bw_uminv16hi3_mask */
    case 7859:  /* *avx512bw_umaxv16hi3_mask */
    case 7857:  /* *avx512bw_sminv16hi3_mask */
    case 7855:  /* *avx512bw_smaxv16hi3_mask */
    case 7853:  /* *avx512bw_uminv32hi3_mask */
    case 7851:  /* *avx512bw_umaxv32hi3_mask */
    case 7849:  /* *avx512bw_sminv32hi3_mask */
    case 7847:  /* *avx512bw_smaxv32hi3_mask */
    case 7845:  /* *avx512bw_uminv32qi3_mask */
    case 7843:  /* *avx512bw_umaxv32qi3_mask */
    case 7841:  /* *avx512bw_sminv32qi3_mask */
    case 7839:  /* *avx512bw_smaxv32qi3_mask */
    case 7837:  /* *avx512bw_uminv16qi3_mask */
    case 7835:  /* *avx512bw_umaxv16qi3_mask */
    case 7833:  /* *avx512bw_sminv16qi3_mask */
    case 7831:  /* *avx512bw_smaxv16qi3_mask */
    case 7829:  /* *avx512bw_uminv64qi3_mask */
    case 7827:  /* *avx512bw_umaxv64qi3_mask */
    case 7825:  /* *avx512bw_sminv64qi3_mask */
    case 7823:  /* *avx512bw_smaxv64qi3_mask */
    case 7821:  /* *avx512f_uminv2di3_mask */
    case 7819:  /* *avx512f_umaxv2di3_mask */
    case 7817:  /* *avx512f_sminv2di3_mask */
    case 7815:  /* *avx512f_smaxv2di3_mask */
    case 7813:  /* *avx512f_uminv4di3_mask */
    case 7811:  /* *avx512f_umaxv4di3_mask */
    case 7809:  /* *avx512f_sminv4di3_mask */
    case 7807:  /* *avx512f_smaxv4di3_mask */
    case 7805:  /* *avx512f_uminv8di3_mask */
    case 7803:  /* *avx512f_umaxv8di3_mask */
    case 7801:  /* *avx512f_sminv8di3_mask */
    case 7799:  /* *avx512f_smaxv8di3_mask */
    case 7797:  /* *avx512f_uminv4si3_mask */
    case 7795:  /* *avx512f_umaxv4si3_mask */
    case 7793:  /* *avx512f_sminv4si3_mask */
    case 7791:  /* *avx512f_smaxv4si3_mask */
    case 7789:  /* *avx512f_uminv8si3_mask */
    case 7787:  /* *avx512f_umaxv8si3_mask */
    case 7785:  /* *avx512f_sminv8si3_mask */
    case 7783:  /* *avx512f_smaxv8si3_mask */
    case 7781:  /* *avx512f_uminv16si3_mask */
    case 7779:  /* *avx512f_umaxv16si3_mask */
    case 7777:  /* *avx512f_sminv16si3_mask */
    case 7775:  /* *avx512f_smaxv16si3_mask */
    case 7761:  /* avx512vl_rorv2di_mask */
    case 7759:  /* avx512vl_rolv2di_mask */
    case 7757:  /* avx512vl_rorv4di_mask */
    case 7755:  /* avx512vl_rolv4di_mask */
    case 7753:  /* avx512f_rorv8di_mask */
    case 7751:  /* avx512f_rolv8di_mask */
    case 7749:  /* avx512vl_rorv4si_mask */
    case 7747:  /* avx512vl_rolv4si_mask */
    case 7745:  /* avx512vl_rorv8si_mask */
    case 7743:  /* avx512vl_rolv8si_mask */
    case 7741:  /* avx512f_rorv16si_mask */
    case 7739:  /* avx512f_rolv16si_mask */
    case 7737:  /* avx512vl_rorvv2di_mask */
    case 7735:  /* avx512vl_rolvv2di_mask */
    case 7733:  /* avx512vl_rorvv4di_mask */
    case 7731:  /* avx512vl_rolvv4di_mask */
    case 7729:  /* avx512f_rorvv8di_mask */
    case 7727:  /* avx512f_rolvv8di_mask */
    case 7725:  /* avx512vl_rorvv4si_mask */
    case 7723:  /* avx512vl_rolvv4si_mask */
    case 7721:  /* avx512vl_rorvv8si_mask */
    case 7719:  /* avx512vl_rolvv8si_mask */
    case 7717:  /* avx512f_rorvv16si_mask */
    case 7715:  /* avx512f_rolvv16si_mask */
    case 7698:  /* lshrv8di3_mask */
    case 7696:  /* ashlv8di3_mask */
    case 7694:  /* lshrv16si3_mask */
    case 7692:  /* ashlv16si3_mask */
    case 7690:  /* lshrv32hi3_mask */
    case 7688:  /* ashlv32hi3_mask */
    case 7670:  /* lshrv2di3_mask */
    case 7668:  /* ashlv2di3_mask */
    case 7666:  /* lshrv4di3_mask */
    case 7664:  /* ashlv4di3_mask */
    case 7662:  /* lshrv4si3_mask */
    case 7660:  /* ashlv4si3_mask */
    case 7658:  /* lshrv8si3_mask */
    case 7656:  /* ashlv8si3_mask */
    case 7654:  /* lshrv8hi3_mask */
    case 7652:  /* ashlv8hi3_mask */
    case 7650:  /* lshrv16hi3_mask */
    case 7648:  /* ashlv16hi3_mask */
    case 7637:  /* ashrv8di3_mask */
    case 7635:  /* ashrv16si3_mask */
    case 7633:  /* ashrv4di3_mask */
    case 7631:  /* ashrv32hi3_mask */
    case 7621:  /* ashrv2di3_mask */
    case 7619:  /* ashrv4si3_mask */
    case 7617:  /* ashrv8si3_mask */
    case 7615:  /* ashrv8hi3_mask */
    case 7613:  /* ashrv16hi3_mask */
    case 7611:  /* *sse4_1_mulv4si3_mask */
    case 7609:  /* *avx2_mulv8si3_mask */
    case 7607:  /* *avx512f_mulv16si3_mask */
    case 7605:  /* *avx512dq_mulv2di3_mask */
    case 7603:  /* *avx512dq_mulv4di3_mask */
    case 7601:  /* *avx512dq_mulv8di3_mask */
    case 7567:  /* *mulv8hi3_mask */
    case 7565:  /* *mulv16hi3_mask */
    case 7563:  /* *mulv32hi3_mask */
    case 7561:  /* *sse2_ussubv8hi3_mask */
    case 7559:  /* *sse2_sssubv8hi3_mask */
    case 7557:  /* *sse2_usaddv8hi3_mask */
    case 7555:  /* *sse2_ssaddv8hi3_mask */
    case 7553:  /* *avx2_ussubv16hi3_mask */
    case 7551:  /* *avx2_sssubv16hi3_mask */
    case 7549:  /* *avx2_usaddv16hi3_mask */
    case 7547:  /* *avx2_ssaddv16hi3_mask */
    case 7545:  /* *avx512bw_ussubv32hi3_mask */
    case 7543:  /* *avx512bw_sssubv32hi3_mask */
    case 7541:  /* *avx512bw_usaddv32hi3_mask */
    case 7539:  /* *avx512bw_ssaddv32hi3_mask */
    case 7537:  /* *sse2_ussubv16qi3_mask */
    case 7535:  /* *sse2_sssubv16qi3_mask */
    case 7533:  /* *sse2_usaddv16qi3_mask */
    case 7531:  /* *sse2_ssaddv16qi3_mask */
    case 7529:  /* *avx2_ussubv32qi3_mask */
    case 7527:  /* *avx2_sssubv32qi3_mask */
    case 7525:  /* *avx2_usaddv32qi3_mask */
    case 7523:  /* *avx2_ssaddv32qi3_mask */
    case 7521:  /* *avx512bw_ussubv64qi3_mask */
    case 7519:  /* *avx512bw_sssubv64qi3_mask */
    case 7517:  /* *avx512bw_usaddv64qi3_mask */
    case 7515:  /* *avx512bw_ssaddv64qi3_mask */
    case 7513:  /* *subv8hi3_mask */
    case 7512:  /* *addv8hi3_mask */
    case 7511:  /* *subv16hi3_mask */
    case 7510:  /* *addv16hi3_mask */
    case 7509:  /* *subv32hi3_mask */
    case 7508:  /* *addv32hi3_mask */
    case 7507:  /* *subv32qi3_mask */
    case 7506:  /* *addv32qi3_mask */
    case 7505:  /* *subv16qi3_mask */
    case 7504:  /* *addv16qi3_mask */
    case 7503:  /* *subv64qi3_mask */
    case 7502:  /* *addv64qi3_mask */
    case 7501:  /* *subv2di3_mask */
    case 7500:  /* *addv2di3_mask */
    case 7499:  /* *subv4di3_mask */
    case 7498:  /* *addv4di3_mask */
    case 7497:  /* *subv8di3_mask */
    case 7496:  /* *addv8di3_mask */
    case 7495:  /* *subv4si3_mask */
    case 7494:  /* *addv4si3_mask */
    case 7493:  /* *subv8si3_mask */
    case 7492:  /* *addv8si3_mask */
    case 7491:  /* *subv16si3_mask */
    case 7490:  /* *addv16si3_mask */
    case 3766:  /* *xorv8df3_mask */
    case 3764:  /* *iorv8df3_mask */
    case 3762:  /* *andv8df3_mask */
    case 3760:  /* *xorv16sf3_mask */
    case 3758:  /* *iorv16sf3_mask */
    case 3756:  /* *andv16sf3_mask */
    case 3748:  /* *xorv2df3_mask */
    case 3746:  /* *iorv2df3_mask */
    case 3744:  /* *andv2df3_mask */
    case 3742:  /* *xorv4df3_mask */
    case 3740:  /* *iorv4df3_mask */
    case 3738:  /* *andv4df3_mask */
    case 3736:  /* *xorv4sf3_mask */
    case 3734:  /* *iorv4sf3_mask */
    case 3732:  /* *andv4sf3_mask */
    case 3730:  /* *xorv8sf3_mask */
    case 3728:  /* *iorv8sf3_mask */
    case 3726:  /* *andv8sf3_mask */
    case 3053:  /* *sminv2df3_mask */
    case 3051:  /* *smaxv2df3_mask */
    case 3048:  /* *sminv4df3_mask */
    case 3044:  /* *smaxv4df3_mask */
    case 3040:  /* *sminv8df3_mask */
    case 3036:  /* *smaxv8df3_mask */
    case 3033:  /* *sminv4sf3_mask */
    case 3031:  /* *smaxv4sf3_mask */
    case 3028:  /* *sminv8sf3_mask */
    case 3024:  /* *smaxv8sf3_mask */
    case 3020:  /* *sminv16sf3_mask */
    case 3016:  /* *smaxv16sf3_mask */
    case 3013:  /* *sminv8hf3_mask */
    case 3011:  /* *smaxv8hf3_mask */
    case 3008:  /* *sminv16hf3_mask */
    case 3004:  /* *smaxv16hf3_mask */
    case 3000:  /* *sminv32hf3_mask */
    case 2996:  /* *smaxv32hf3_mask */
    case 2880:  /* sse2_divv2df3_mask */
    case 2877:  /* avx_divv4df3_mask */
    case 2873:  /* avx512f_divv8df3_mask */
    case 2870:  /* sse_divv4sf3_mask */
    case 2867:  /* avx_divv8sf3_mask */
    case 2863:  /* avx512f_divv16sf3_mask */
    case 2860:  /* avx512fp16_divv8hf3_mask */
    case 2857:  /* avx512fp16_divv16hf3_mask */
    case 2853:  /* avx512fp16_divv32hf3_mask */
    case 2819:  /* *mulv2df3_mask */
    case 2815:  /* *mulv4df3_mask */
    case 2811:  /* *mulv8df3_mask */
    case 2807:  /* *mulv4sf3_mask */
    case 2803:  /* *mulv8sf3_mask */
    case 2799:  /* *mulv16sf3_mask */
    case 2795:  /* *mulv8hf3_mask */
    case 2791:  /* *mulv16hf3_mask */
    case 2787:  /* *mulv32hf3_mask */
    case 2753:  /* *subv2df3_mask */
    case 2749:  /* *addv2df3_mask */
    case 2745:  /* *subv4df3_mask */
    case 2741:  /* *addv4df3_mask */
    case 2737:  /* *subv8df3_mask */
    case 2733:  /* *addv8df3_mask */
    case 2729:  /* *subv4sf3_mask */
    case 2725:  /* *addv4sf3_mask */
    case 2721:  /* *subv8sf3_mask */
    case 2717:  /* *addv8sf3_mask */
    case 2713:  /* *subv16sf3_mask */
    case 2709:  /* *addv16sf3_mask */
    case 2705:  /* *subv8hf3_mask */
    case 2701:  /* *addv8hf3_mask */
    case 2697:  /* *subv16hf3_mask */
    case 2693:  /* *addv16hf3_mask */
    case 2689:  /* *subv32hf3_mask */
    case 2685:  /* *addv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3047:  /* *sminv4df3_round */
    case 3043:  /* *smaxv4df3_round */
    case 3039:  /* *sminv8df3_round */
    case 3035:  /* *smaxv8df3_round */
    case 3027:  /* *sminv8sf3_round */
    case 3023:  /* *smaxv8sf3_round */
    case 3019:  /* *sminv16sf3_round */
    case 3015:  /* *smaxv16sf3_round */
    case 3007:  /* *sminv16hf3_round */
    case 3003:  /* *smaxv16hf3_round */
    case 2999:  /* *sminv32hf3_round */
    case 2995:  /* *smaxv32hf3_round */
    case 2876:  /* avx_divv4df3_round */
    case 2872:  /* avx512f_divv8df3_round */
    case 2866:  /* avx_divv8sf3_round */
    case 2862:  /* avx512f_divv16sf3_round */
    case 2856:  /* avx512fp16_divv16hf3_round */
    case 2852:  /* avx512fp16_divv32hf3_round */
    case 2818:  /* *mulv2df3_round */
    case 2814:  /* *mulv4df3_round */
    case 2810:  /* *mulv8df3_round */
    case 2806:  /* *mulv4sf3_round */
    case 2802:  /* *mulv8sf3_round */
    case 2798:  /* *mulv16sf3_round */
    case 2794:  /* *mulv8hf3_round */
    case 2790:  /* *mulv16hf3_round */
    case 2786:  /* *mulv32hf3_round */
    case 2752:  /* *subv2df3_round */
    case 2748:  /* *addv2df3_round */
    case 2744:  /* *subv4df3_round */
    case 2740:  /* *addv4df3_round */
    case 2736:  /* *subv8df3_round */
    case 2732:  /* *addv8df3_round */
    case 2728:  /* *subv4sf3_round */
    case 2724:  /* *addv4sf3_round */
    case 2720:  /* *subv8sf3_round */
    case 2716:  /* *addv8sf3_round */
    case 2712:  /* *subv16sf3_round */
    case 2708:  /* *addv16sf3_round */
    case 2704:  /* *subv8hf3_round */
    case 2700:  /* *addv8hf3_round */
    case 2696:  /* *subv16hf3_round */
    case 2692:  /* *addv16hf3_round */
    case 2688:  /* *subv32hf3_round */
    case 2684:  /* *addv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2652:  /* kunpckdi */
    case 2651:  /* kunpcksi */
    case 2650:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 2649:  /* *kortest_cmpdi_movdicc */
    case 2648:  /* *kortest_cmpdi_movsicc */
    case 2647:  /* *kortest_cmpdi_movhicc */
    case 2646:  /* *kortest_cmpsi_movdicc */
    case 2645:  /* *kortest_cmpsi_movsicc */
    case 2644:  /* *kortest_cmpsi_movhicc */
    case 2643:  /* *kortest_cmphi_movdicc */
    case 2642:  /* *kortest_cmphi_movsicc */
    case 2641:  /* *kortest_cmphi_movhicc */
    case 2640:  /* *kortest_cmpqi_movdicc */
    case 2639:  /* *kortest_cmpqi_movsicc */
    case 2638:  /* *kortest_cmpqi_movhicc */
    case 2637:  /* *kortest_cmpdi_movqicc */
    case 2636:  /* *kortest_cmpsi_movqicc */
    case 2635:  /* *kortest_cmphi_movqicc */
    case 2634:  /* *kortest_cmpqi_movqicc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 2633:  /* *kortest_cmpdi_jcc */
    case 2632:  /* *kortest_cmpsi_jcc */
    case 2631:  /* *kortest_cmphi_jcc */
    case 2630:  /* *kortest_cmpqi_jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 2629:  /* *kortest_cmpdi_setcc */
    case 2628:  /* *kortest_cmpsi_setcc */
    case 2627:  /* *kortest_cmphi_setcc */
    case 2626:  /* *kortest_cmpqi_setcc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 2553:  /* *avx512vl_storev8bf_mask */
    case 2552:  /* *avx512vl_storev16bf_mask */
    case 2551:  /* *avx512bw_storev32bf_mask */
    case 2550:  /* *avx512fp16_storev8hf_mask */
    case 2549:  /* *avx512vl_storev16hf_mask */
    case 2548:  /* *avx512bw_storev32hf_mask */
    case 2547:  /* *avx512vl_storev8hi_mask */
    case 2546:  /* *avx512vl_storev16hi_mask */
    case 2545:  /* *avx512bw_storev32hi_mask */
    case 2544:  /* *avx512vl_storev32qi_mask */
    case 2543:  /* *avx512vl_storev16qi_mask */
    case 2542:  /* *avx512bw_storev64qi_mask */
    case 2541:  /* *avx512vl_storev2df_mask */
    case 2540:  /* *avx512vl_storev4df_mask */
    case 2539:  /* *avx512f_storev8df_mask */
    case 2538:  /* *avx512vl_storev4sf_mask */
    case 2537:  /* *avx512vl_storev8sf_mask */
    case 2536:  /* *avx512f_storev16sf_mask */
    case 2535:  /* *avx512vl_storev2di_mask */
    case 2534:  /* *avx512vl_storev4di_mask */
    case 2533:  /* *avx512f_storev8di_mask */
    case 2532:  /* *avx512vl_storev4si_mask */
    case 2531:  /* *avx512vl_storev8si_mask */
    case 2530:  /* *avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 2505:  /* avx512f_storedf_mask */
    case 2504:  /* avx512f_storesf_mask */
    case 2503:  /* avx512f_storehf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4325:  /* *fma4i_vmfnmadd_v2df */
    case 4324:  /* *fma4i_vmfnmadd_v4sf */
    case 2502:  /* *avx512f_loaddf_mask */
    case 2501:  /* *avx512f_loadsf_mask */
    case 2500:  /* *avx512f_loadhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2499:  /* avx512f_movdf_mask */
    case 2498:  /* avx512f_movsf_mask */
    case 2497:  /* avx512f_movhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 11012:  /* avx10_2_vmovrsqv2di_mask */
    case 11010:  /* avx10_2_vmovrsqv4di_mask */
    case 11008:  /* avx10_2_vmovrsqv8di_mask */
    case 11006:  /* avx10_2_vmovrsdv4si_mask */
    case 11004:  /* avx10_2_vmovrsdv8si_mask */
    case 11002:  /* avx10_2_vmovrsdv16si_mask */
    case 11000:  /* avx10_2_vmovrswv8hi_mask */
    case 10998:  /* avx10_2_vmovrswv16hi_mask */
    case 10996:  /* avx10_2_vmovrswv32hi_mask */
    case 10994:  /* avx10_2_vmovrsbv16qi_mask */
    case 10992:  /* avx10_2_vmovrsbv32qi_mask */
    case 10990:  /* avx10_2_vmovrsbv64qi_mask */
    case 10918:  /* avx10_2_vcvttps2uqqsv2di_mask */
    case 10916:  /* avx10_2_vcvttps2qqsv2di_mask */
    case 10913:  /* avx10_2_vcvttps2uqqsv4di_mask */
    case 10909:  /* avx10_2_vcvttps2qqsv4di_mask */
    case 10905:  /* avx10_2_vcvttps2uqqsv8di_mask */
    case 10901:  /* avx10_2_vcvttps2qqsv8di_mask */
    case 10898:  /* avx10_2_vcvttpd2uqqsv2df_mask */
    case 10896:  /* avx10_2_vcvttpd2qqsv2df_mask */
    case 10893:  /* avx10_2_vcvttpd2uqqsv4df_mask */
    case 10889:  /* avx10_2_vcvttpd2qqsv4df_mask */
    case 10885:  /* avx10_2_vcvttpd2uqqsv8df_mask */
    case 10881:  /* avx10_2_vcvttpd2qqsv8df_mask */
    case 10878:  /* avx10_2_vcvttpd2udqsv2df_mask */
    case 10876:  /* avx10_2_vcvttpd2dqsv2df_mask */
    case 10873:  /* avx10_2_vcvttpd2udqsv4df_mask */
    case 10869:  /* avx10_2_vcvttpd2dqsv4df_mask */
    case 10865:  /* avx10_2_vcvttpd2udqsv8df_mask */
    case 10861:  /* avx10_2_vcvttpd2dqsv8df_mask */
    case 10858:  /* avx10_2_vcvttps2udqsv4sf_mask */
    case 10856:  /* avx10_2_vcvttps2dqsv4sf_mask */
    case 10853:  /* avx10_2_vcvttps2udqsv8sf_mask */
    case 10849:  /* avx10_2_vcvttps2dqsv8sf_mask */
    case 10845:  /* avx10_2_vcvttps2udqsv16sf_mask */
    case 10841:  /* avx10_2_vcvttps2dqsv16sf_mask */
    case 10838:  /* avx10_2_cvttps2iubsv4sf_mask */
    case 10836:  /* avx10_2_cvttps2ibsv4sf_mask */
    case 10833:  /* avx10_2_cvttps2iubsv8sf_mask */
    case 10829:  /* avx10_2_cvttps2ibsv8sf_mask */
    case 10825:  /* avx10_2_cvttps2iubsv16sf_mask */
    case 10821:  /* avx10_2_cvttps2ibsv16sf_mask */
    case 10818:  /* avx10_2_cvtps2iubsv4sf_mask */
    case 10816:  /* avx10_2_cvtps2ibsv4sf_mask */
    case 10813:  /* avx10_2_cvtps2iubsv8sf_mask */
    case 10809:  /* avx10_2_cvtps2ibsv8sf_mask */
    case 10805:  /* avx10_2_cvtps2iubsv16sf_mask */
    case 10801:  /* avx10_2_cvtps2ibsv16sf_mask */
    case 10798:  /* avx10_2_cvttph2iubsv8hf_mask */
    case 10796:  /* avx10_2_cvttph2ibsv8hf_mask */
    case 10793:  /* avx10_2_cvttph2iubsv16hf_mask */
    case 10789:  /* avx10_2_cvttph2ibsv16hf_mask */
    case 10785:  /* avx10_2_cvttph2iubsv32hf_mask */
    case 10781:  /* avx10_2_cvttph2ibsv32hf_mask */
    case 10778:  /* avx10_2_cvtph2iubsv8hf_mask */
    case 10776:  /* avx10_2_cvtph2ibsv8hf_mask */
    case 10773:  /* avx10_2_cvtph2iubsv16hf_mask */
    case 10769:  /* avx10_2_cvtph2ibsv16hf_mask */
    case 10765:  /* avx10_2_cvtph2iubsv32hf_mask */
    case 10761:  /* avx10_2_cvtph2ibsv32hf_mask */
    case 10758:  /* avx10_2_cvttbf162iubsv8bf_mask */
    case 10756:  /* avx10_2_cvttbf162ibsv8bf_mask */
    case 10754:  /* avx10_2_cvtbf162iubsv8bf_mask */
    case 10752:  /* avx10_2_cvtbf162ibsv8bf_mask */
    case 10750:  /* avx10_2_cvttbf162iubsv16bf_mask */
    case 10748:  /* avx10_2_cvttbf162ibsv16bf_mask */
    case 10746:  /* avx10_2_cvtbf162iubsv16bf_mask */
    case 10744:  /* avx10_2_cvtbf162ibsv16bf_mask */
    case 10742:  /* avx10_2_cvttbf162iubsv32bf_mask */
    case 10740:  /* avx10_2_cvttbf162ibsv32bf_mask */
    case 10738:  /* avx10_2_cvtbf162iubsv32bf_mask */
    case 10736:  /* avx10_2_cvtbf162ibsv32bf_mask */
    case 10704:  /* avx10_2_getexpbf16_v8bf_mask */
    case 10702:  /* avx10_2_getexpbf16_v16bf_mask */
    case 10700:  /* avx10_2_getexpbf16_v32bf_mask */
    case 10698:  /* avx10_2_rcpbf16_v8bf_mask */
    case 10696:  /* avx10_2_rcpbf16_v16bf_mask */
    case 10694:  /* avx10_2_rcpbf16_v32bf_mask */
    case 10686:  /* avx10_2_rsqrtbf16_v8bf_mask */
    case 10684:  /* avx10_2_rsqrtbf16_v16bf_mask */
    case 10682:  /* avx10_2_rsqrtbf16_v32bf_mask */
    case 10527:  /* vcvthf82phv8hf_mask */
    case 10525:  /* vcvthf82phv16hf_mask */
    case 10523:  /* vcvthf82phv32hf_mask */
    case 10521:  /* vcvtph2hf8sv32hf_mask */
    case 10519:  /* vcvtph2hf8v32hf_mask */
    case 10517:  /* vcvtph2bf8sv32hf_mask */
    case 10515:  /* vcvtph2bf8v32hf_mask */
    case 10513:  /* vcvtph2hf8sv16hf_mask */
    case 10511:  /* vcvtph2hf8v16hf_mask */
    case 10509:  /* vcvtph2bf8sv16hf_mask */
    case 10507:  /* vcvtph2bf8v16hf_mask */
    case 10086:  /* conflictv2di_mask */
    case 10084:  /* conflictv4di_mask */
    case 10082:  /* conflictv8di_mask */
    case 10080:  /* conflictv4si_mask */
    case 10078:  /* conflictv8si_mask */
    case 10076:  /* conflictv16si_mask */
    case 9660:  /* avx512f_vcvtph2ps512_mask */
    case 9656:  /* vcvtph2ps256_mask */
    case 9653:  /* *vcvtph2ps_load_mask */
    case 7070:  /* avx512vl_getexpv2df_mask */
    case 7067:  /* avx512vl_getexpv4df_mask */
    case 7063:  /* avx512f_getexpv8df_mask */
    case 7060:  /* avx512vl_getexpv4sf_mask */
    case 7057:  /* avx512vl_getexpv8sf_mask */
    case 7053:  /* avx512f_getexpv16sf_mask */
    case 7050:  /* avx512fp16_getexpv8hf_mask */
    case 7047:  /* avx512vl_getexpv16hf_mask */
    case 7043:  /* avx512bw_getexpv32hf_mask */
    case 5164:  /* unspec_sse2_cvttpd2dq_mask */
    case 5158:  /* unspec_fixuns_truncv4sfv4si2_mask */
    case 5155:  /* unspec_fixuns_truncv8sfv8si2_mask */
    case 5148:  /* unspec_avx512dq_fixuns_truncv2sfv2di2_mask */
    case 5146:  /* unspec_avx512dq_fix_truncv2sfv2di2_mask */
    case 5135:  /* unspec_fixuns_truncv4sfv4di2_mask */
    case 5131:  /* unspec_fix_truncv4sfv4di2_mask */
    case 5127:  /* unspec_fixuns_truncv8sfv8di2_mask */
    case 5123:  /* unspec_fix_truncv8sfv8di2_mask */
    case 5120:  /* fixuns_notruncv2dfv2di2_mask */
    case 5117:  /* fixuns_notruncv4dfv4di2_mask */
    case 5113:  /* fixuns_notruncv8dfv8di2_mask */
    case 5110:  /* fix_notruncv2dfv2di2_mask */
    case 5107:  /* fix_notruncv4dfv4di2_mask */
    case 5103:  /* fix_notruncv8dfv8di2_mask */
    case 5080:  /* unspec_fixuns_truncv2dfv2di2_mask */
    case 5078:  /* unspec_fix_truncv2dfv2di2_mask */
    case 5075:  /* unspec_fixuns_truncv4dfv4di2_mask */
    case 5071:  /* unspec_fix_truncv4dfv4di2_mask */
    case 5067:  /* unspec_fixuns_truncv8dfv8di2_mask */
    case 5063:  /* unspec_fix_truncv8dfv8di2_mask */
    case 5057:  /* unspec_fixuns_truncv4dfv4si2_mask */
    case 5051:  /* unspec_fix_truncv4dfv4si2_mask */
    case 5034:  /* unspec_fixuns_truncv8dfv8si2_mask */
    case 5030:  /* unspec_fix_truncv8dfv8si2_mask */
    case 5023:  /* fixuns_notruncv4dfv4si2_mask */
    case 5019:  /* fixuns_notruncv8dfv8si2_mask */
    case 5011:  /* avx_cvtpd2dq256_mask */
    case 5007:  /* avx512f_cvtpd2dq512_mask */
    case 4898:  /* unspec_fix_truncv4sfv4si2_mask */
    case 4893:  /* unspec_fix_truncv8sfv8si2_mask */
    case 4881:  /* unspec_fixuns_truncv16sfv16si2_mask */
    case 4877:  /* unspec_fix_truncv16sfv16si2_mask */
    case 4871:  /* avx512dq_cvtps2uqqv4di_mask */
    case 4867:  /* avx512dq_cvtps2uqqv8di_mask */
    case 4861:  /* avx512dq_cvtps2qqv4di_mask */
    case 4857:  /* avx512dq_cvtps2qqv8di_mask */
    case 4854:  /* avx512vl_fixuns_notruncv4sfv4si_mask */
    case 4851:  /* avx512vl_fixuns_notruncv8sfv8si_mask */
    case 4847:  /* avx512f_fixuns_notruncv16sfv16si_mask */
    case 4843:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 4840:  /* sse2_fix_notruncv4sfv4si_mask */
    case 4837:  /* avx_fix_notruncv8sfv8si_mask */
    case 4685:  /* unspec_avx512fp16_fixuns_truncv2di2_mask */
    case 4683:  /* unspec_avx512fp16_fix_truncv2di2_mask */
    case 4664:  /* unspec_avx512fp16_fixuns_truncv4di2_mask */
    case 4660:  /* unspec_avx512fp16_fix_truncv4di2_mask */
    case 4657:  /* unspec_avx512fp16_fixuns_truncv4si2_mask */
    case 4655:  /* unspec_avx512fp16_fix_truncv4si2_mask */
    case 4608:  /* unspec_avx512fp16_fixuns_truncv8di2_mask */
    case 4604:  /* unspec_avx512fp16_fix_truncv8di2_mask */
    case 4600:  /* unspec_avx512fp16_fixuns_truncv16si2_mask */
    case 4596:  /* unspec_avx512fp16_fix_truncv16si2_mask */
    case 4592:  /* unspec_avx512fp16_fixuns_truncv8si2_mask */
    case 4588:  /* unspec_avx512fp16_fix_truncv8si2_mask */
    case 4584:  /* unspec_avx512fp16_fixuns_truncv32hi2_mask */
    case 4580:  /* unspec_avx512fp16_fix_truncv32hi2_mask */
    case 4576:  /* unspec_avx512fp16_fixuns_truncv16hi2_mask */
    case 4572:  /* unspec_avx512fp16_fix_truncv16hi2_mask */
    case 4569:  /* unspec_avx512fp16_fixuns_truncv8hi2_mask */
    case 4567:  /* unspec_avx512fp16_fix_truncv8hi2_mask */
    case 4481:  /* avx512fp16_vcvtph2qq_v2di_mask */
    case 4479:  /* avx512fp16_vcvtph2uqq_v2di_mask */
    case 4477:  /* avx512fp16_vcvtph2dq_v4si_mask */
    case 4475:  /* avx512fp16_vcvtph2udq_v4si_mask */
    case 4473:  /* avx512fp16_vcvtph2w_v8hi_mask */
    case 4471:  /* avx512fp16_vcvtph2uw_v8hi_mask */
    case 4468:  /* avx512fp16_vcvtph2qq_v4di_mask */
    case 4464:  /* avx512fp16_vcvtph2uqq_v4di_mask */
    case 4460:  /* avx512fp16_vcvtph2dq_v8si_mask */
    case 4456:  /* avx512fp16_vcvtph2udq_v8si_mask */
    case 4452:  /* avx512fp16_vcvtph2w_v16hi_mask */
    case 4448:  /* avx512fp16_vcvtph2uw_v16hi_mask */
    case 4444:  /* avx512fp16_vcvtph2qq_v8di_mask */
    case 4440:  /* avx512fp16_vcvtph2uqq_v8di_mask */
    case 4436:  /* avx512fp16_vcvtph2dq_v16si_mask */
    case 4432:  /* avx512fp16_vcvtph2udq_v16si_mask */
    case 4428:  /* avx512fp16_vcvtph2w_v32hi_mask */
    case 4424:  /* avx512fp16_vcvtph2uw_v32hi_mask */
    case 2983:  /* rsqrt14v2df_mask */
    case 2981:  /* rsqrt14v4df_mask */
    case 2979:  /* rsqrt14v8df_mask */
    case 2977:  /* rsqrt14v4sf_mask */
    case 2975:  /* rsqrt14v8sf_mask */
    case 2973:  /* rsqrt14v16sf_mask */
    case 2971:  /* avx512fp16_rsqrtv8hf2_mask */
    case 2969:  /* avx512fp16_rsqrtv16hf2_mask */
    case 2967:  /* avx512fp16_rsqrtv32hf2_mask */
    case 2905:  /* rcp14v2df_mask */
    case 2903:  /* rcp14v4df_mask */
    case 2901:  /* rcp14v8df_mask */
    case 2899:  /* rcp14v4sf_mask */
    case 2897:  /* rcp14v8sf_mask */
    case 2895:  /* rcp14v16sf_mask */
    case 2890:  /* avx512fp16_rcpv8hf2_mask */
    case 2888:  /* avx512fp16_rcpv16hf2_mask */
    case 2886:  /* avx512fp16_rcpv32hf2_mask */
    case 2484:  /* *avx512vl_loadv8bf_mask */
    case 2483:  /* *avx512vl_loadv16bf_mask */
    case 2482:  /* *avx512bw_loadv32bf_mask */
    case 2481:  /* *avx512fp16_loadv8hf_mask */
    case 2480:  /* *avx512vl_loadv16hf_mask */
    case 2479:  /* *avx512bw_loadv32hf_mask */
    case 2478:  /* *avx512vl_loadv8hi_mask */
    case 2477:  /* *avx512vl_loadv16hi_mask */
    case 2476:  /* *avx512bw_loadv32hi_mask */
    case 2475:  /* *avx512vl_loadv32qi_mask */
    case 2474:  /* *avx512vl_loadv16qi_mask */
    case 2473:  /* *avx512bw_loadv64qi_mask */
    case 2460:  /* *avx512vl_loadv2df_mask */
    case 2459:  /* *avx512vl_loadv4df_mask */
    case 2458:  /* *avx512f_loadv8df_mask */
    case 2457:  /* *avx512vl_loadv4sf_mask */
    case 2456:  /* *avx512vl_loadv8sf_mask */
    case 2455:  /* *avx512f_loadv16sf_mask */
    case 2454:  /* *avx512vl_loadv2di_mask */
    case 2453:  /* *avx512vl_loadv4di_mask */
    case 2452:  /* *avx512f_loadv8di_mask */
    case 2451:  /* *avx512vl_loadv4si_mask */
    case 2450:  /* *avx512vl_loadv8si_mask */
    case 2449:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2448:  /* *vmovv2df_constm1_pternlog_false_dep */
    case 2447:  /* *vmovv4df_constm1_pternlog_false_dep */
    case 2446:  /* *vmovv8df_constm1_pternlog_false_dep */
    case 2445:  /* *vmovv4sf_constm1_pternlog_false_dep */
    case 2444:  /* *vmovv8sf_constm1_pternlog_false_dep */
    case 2443:  /* *vmovv16sf_constm1_pternlog_false_dep */
    case 2442:  /* *vmovv8bf_constm1_pternlog_false_dep */
    case 2441:  /* *vmovv16bf_constm1_pternlog_false_dep */
    case 2440:  /* *vmovv32bf_constm1_pternlog_false_dep */
    case 2439:  /* *vmovv8hf_constm1_pternlog_false_dep */
    case 2438:  /* *vmovv16hf_constm1_pternlog_false_dep */
    case 2437:  /* *vmovv32hf_constm1_pternlog_false_dep */
    case 2436:  /* *vmovv1ti_constm1_pternlog_false_dep */
    case 2435:  /* *vmovv2ti_constm1_pternlog_false_dep */
    case 2434:  /* *vmovv4ti_constm1_pternlog_false_dep */
    case 2433:  /* *vmovv2di_constm1_pternlog_false_dep */
    case 2432:  /* *vmovv4di_constm1_pternlog_false_dep */
    case 2431:  /* *vmovv8di_constm1_pternlog_false_dep */
    case 2430:  /* *vmovv4si_constm1_pternlog_false_dep */
    case 2429:  /* *vmovv8si_constm1_pternlog_false_dep */
    case 2428:  /* *vmovv16si_constm1_pternlog_false_dep */
    case 2427:  /* *vmovv8hi_constm1_pternlog_false_dep */
    case 2426:  /* *vmovv16hi_constm1_pternlog_false_dep */
    case 2425:  /* *vmovv32hi_constm1_pternlog_false_dep */
    case 2424:  /* *vmovv16qi_constm1_pternlog_false_dep */
    case 2423:  /* *vmovv32qi_constm1_pternlog_false_dep */
    case 2422:  /* *vmovv64qi_constm1_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 8584:  /* *sse2_maskmovdqu */
    case 8583:  /* *sse2_maskmovdqu */
    case 2386:  /* *mmx_maskmovq */
    case 2385:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 7213:  /* sse2_shufpd_v2df */
    case 7212:  /* sse2_shufpd_v2di */
    case 2370:  /* *punpckwd */
    case 2369:  /* *punpckwd */
    case 2368:  /* *punpckwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 5344:  /* *avx512dq_vextracti64x2_1 */
    case 5343:  /* *avx512dq_vextractf64x2_1 */
    case 2373:  /* *pshufwv2hi_1 */
    case 2372:  /* *pshufwv2bf_1 */
    case 2371:  /* *pshufwv2hf_1 */
    case 2335:  /* *mmx_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 9175:  /* avx2_permv4df_1 */
    case 9173:  /* avx2_permv4di_1 */
    case 8451:  /* sse2_pshuflw_1 */
    case 8445:  /* sse2_pshufd_1 */
    case 5348:  /* *avx512f_vextracti32x4_1 */
    case 5347:  /* *avx512f_vextractf32x4_1 */
    case 2334:  /* mmx_pshufwv4hi_1 */
    case 2333:  /* mmx_pshufwv4bf_1 */
    case 2332:  /* mmx_pshufwv4hf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 8479:  /* *vec_extractv4si_zext_mem */
    case 8477:  /* *vec_extractv4si_zext */
    case 8468:  /* *vec_extractv16qi_zext */
    case 8467:  /* *vec_extractv8hi_zext */
    case 8466:  /* *vec_extractv8hi_zext */
    case 8465:  /* *vec_extractv16qi_zext */
    case 8464:  /* *vec_extractv16qi_zext */
    case 2367:  /* *pextrb_zext */
    case 2366:  /* *pextrb_zext */
    case 2365:  /* *pextrb_zext */
    case 2363:  /* *pextrw_zext */
    case 2362:  /* *pextrw_zext */
    case 2354:  /* *vec_extractv2si_zext_mem */
    case 2329:  /* *mmx_pextrb_zext */
    case 2328:  /* *mmx_pextrb_zext */
    case 2327:  /* *mmx_pextrb_zext */
    case 2325:  /* *mmx_pextrw_zext */
    case 2324:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 8482:  /* *vec_extractv4ti */
    case 8481:  /* *vec_extractv2ti */
    case 8478:  /* *vec_extractv4si_mem */
    case 8476:  /* *vec_extractv4si */
    case 8470:  /* *vec_extractv8hi_mem */
    case 8469:  /* *vec_extractv16qi_mem */
    case 8463:  /* *vec_extractv8hi */
    case 8462:  /* *vec_extractv16qi */
    case 7102:  /* *vec_extractv4dfdf_valign */
    case 7101:  /* *vec_extractv8dfdf_valign */
    case 7100:  /* *vec_extractv8sfsf_valign */
    case 7099:  /* *vec_extractv16sfsf_valign */
    case 7098:  /* *vec_extractv4didi_valign */
    case 7097:  /* *vec_extractv8didi_valign */
    case 7096:  /* *vec_extractv8sisi_valign */
    case 7095:  /* *vec_extractv16sisi_valign */
    case 5404:  /* *vec_extractbf */
    case 5403:  /* *vec_extracthf */
    case 5340:  /* *vec_extractv4sf_mem */
    case 5339:  /* *sse4_1_extractps */
    case 2364:  /* *pextrb */
    case 2361:  /* *pextrwv2bf */
    case 2360:  /* *pextrwv2hf */
    case 2359:  /* *pextrw */
    case 2326:  /* *mmx_pextrb */
    case 2323:  /* *mmx_pextrwv4bf */
    case 2322:  /* *mmx_pextrwv4hf */
    case 2321:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8388:  /* sse4_1_pinsrq */
    case 8387:  /* sse4_1_pinsrd */
    case 8386:  /* sse2_pinsrbf */
    case 8385:  /* sse2_pinsrph */
    case 8384:  /* sse2_pinsrw */
    case 8383:  /* sse4_1_pinsrb */
    case 5326:  /* *vec_setv4sf_sse4_1 */
    case 2358:  /* *pinsrb */
    case 2357:  /* *pinsrw */
    case 2356:  /* *pinsrw */
    case 2355:  /* *pinsrw */
    case 2320:  /* *mmx_pinsrb */
    case 2319:  /* *mmx_pinsrw */
    case 2318:  /* *mmx_pinsrw */
    case 2317:  /* *mmx_pinsrw */
    case 2316:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9016:  /* xop_pcmov_v2df */
    case 9015:  /* xop_pcmov_v4df256 */
    case 9014:  /* xop_pcmov_v4sf */
    case 9013:  /* xop_pcmov_v8sf256 */
    case 9012:  /* xop_pcmov_v8hf */
    case 9011:  /* xop_pcmov_v16hf256 */
    case 9010:  /* xop_pcmov_v1ti */
    case 9009:  /* xop_pcmov_v2ti256 */
    case 9008:  /* xop_pcmov_v2di */
    case 9007:  /* xop_pcmov_v4di256 */
    case 9006:  /* xop_pcmov_v4si */
    case 9005:  /* xop_pcmov_v8si256 */
    case 9004:  /* xop_pcmov_v8hi */
    case 9003:  /* xop_pcmov_v16hi256 */
    case 9002:  /* xop_pcmov_v16qi */
    case 9001:  /* xop_pcmov_v32qi256 */
    case 2262:  /* *xop_pcmov_v2bf */
    case 2261:  /* *xop_pcmov_v2hf */
    case 2260:  /* *xop_pcmov_v2hi */
    case 2259:  /* *xop_pcmov_v2qi */
    case 2258:  /* *xop_pcmov_v4qi */
    case 2257:  /* *xop_pcmov_v4bf */
    case 2256:  /* *xop_pcmov_v4hf */
    case 2255:  /* *xop_pcmov_v2sf */
    case 2254:  /* *xop_pcmov_v2si */
    case 2253:  /* *xop_pcmov_v4hi */
    case 2252:  /* *xop_pcmov_v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 2251:  /* *mmx_pblendvb_v4qi_2 */
    case 2244:  /* *mmx_pblendvb_v8qi_2 */
    case 2243:  /* *mmx_pblendvb_v8qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 2250:  /* *mmx_pblendvb_v2hi_1 */
    case 2249:  /* *mmx_pblendvb_v2qi_1 */
    case 2248:  /* *mmx_pblendvb_v4qi_1 */
    case 2242:  /* *mmx_pblendvb_v8qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 9072:  /* xop_maskcmp_unsv2di3 */
    case 9071:  /* xop_maskcmp_unsv4si3 */
    case 9070:  /* xop_maskcmp_unsv8hi3 */
    case 9069:  /* xop_maskcmp_unsv16qi3 */
    case 9068:  /* xop_maskcmpv2di3 */
    case 9067:  /* xop_maskcmpv4si3 */
    case 9066:  /* xop_maskcmpv8hi3 */
    case 9065:  /* xop_maskcmpv16qi3 */
    case 2240:  /* *xop_maskcmp_unsv2hi3 */
    case 2239:  /* *xop_maskcmp_unsv2qi3 */
    case 2238:  /* *xop_maskcmp_unsv4qi3 */
    case 2237:  /* *xop_maskcmp_unsv2si3 */
    case 2236:  /* *xop_maskcmp_unsv4hi3 */
    case 2235:  /* *xop_maskcmp_unsv8qi3 */
    case 2234:  /* *xop_maskcmpv2hi3 */
    case 2233:  /* *xop_maskcmpv2qi3 */
    case 2232:  /* *xop_maskcmpv4qi3 */
    case 2231:  /* *xop_maskcmpv2si3 */
    case 2230:  /* *xop_maskcmpv4hi3 */
    case 2229:  /* *xop_maskcmpv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7590:  /* *sse4_1_mulv2siv2di3 */
    case 7588:  /* *vec_widen_smult_even_v8si */
    case 7586:  /* *vec_widen_smult_even_v16si */
    case 7584:  /* *vec_widen_umult_even_v4si */
    case 7582:  /* *vec_widen_umult_even_v8si */
    case 7580:  /* *vec_widen_umult_even_v16si */
    case 2167:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 2382:  /* uavgv2hi3_ceil */
    case 2381:  /* uavgv2qi3_ceil */
    case 2380:  /* uavgv4qi3_ceil */
    case 2379:  /* *mmx_uavgv4hi3 */
    case 2378:  /* *mmx_uavgv8qi3 */
    case 2166:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 8619:  /* ssse3_pmaddubsw */
    case 8618:  /* ssse3_pmaddubsw128 */
    case 8609:  /* avx2_pmaddubsw256 */
    case 7599:  /* *sse2_pmaddwd */
    case 7598:  /* *avx2_pmaddwd */
    case 2165:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7578:  /* *umulv8hi3_highpart */
    case 7576:  /* *smulv8hi3_highpart */
    case 7574:  /* *umulv16hi3_highpart */
    case 7572:  /* *smulv16hi3_highpart */
    case 7570:  /* *umulv32hi3_highpart */
    case 7568:  /* *smulv32hi3_highpart */
    case 2164:  /* umulv2hi3_highpart */
    case 2163:  /* smulv2hi3_highpart */
    case 2162:  /* *mmx_umulv4hi3_highpart */
    case 2161:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 7221:  /* sse2_movsd_v2df */
    case 7220:  /* sse2_movsd_v2di */
    case 5325:  /* avx512fp16_movv8bf */
    case 5324:  /* avx512fp16_movv8hf */
    case 5323:  /* avx512fp16_movv8hi */
    case 5285:  /* sse_movss_v4sf */
    case 5284:  /* sse_movss_v4si */
    case 2091:  /* *mmx_movss_v2si */
    case 2090:  /* *mmx_movss_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7432:  /* *avx512f_pshufd_truncv2div2si_1 */
    case 2083:  /* mmx_pi2fw */
    case 2082:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 8755:  /* avx2_pblenddv4si */
    case 8754:  /* avx2_pblenddv8si */
    case 8753:  /* *avx2_pblendbf */
    case 8752:  /* *avx2_pblendph */
    case 8751:  /* *avx2_pblendw */
    case 8750:  /* sse4_1_pblendbf */
    case 8749:  /* sse4_1_pblendph */
    case 8748:  /* sse4_1_pblendw */
    case 8686:  /* sse4_1_blendpd */
    case 8685:  /* avx_blendpd256 */
    case 8684:  /* sse4_1_blendps */
    case 8683:  /* avx_blendps256 */
    case 2529:  /* avx512vl_blendmv8bf */
    case 2528:  /* avx512vl_blendmv16bf */
    case 2527:  /* avx512bw_blendmv32bf */
    case 2526:  /* avx512fp16_blendmv8hf */
    case 2525:  /* avx512vl_blendmv16hf */
    case 2524:  /* avx512bw_blendmv32hf */
    case 2523:  /* avx512vl_blendmv8hi */
    case 2522:  /* avx512vl_blendmv16hi */
    case 2521:  /* avx512bw_blendmv32hi */
    case 2520:  /* avx512vl_blendmv32qi */
    case 2519:  /* avx512vl_blendmv16qi */
    case 2518:  /* avx512bw_blendmv64qi */
    case 2517:  /* avx512vl_blendmv2df */
    case 2516:  /* avx512vl_blendmv4df */
    case 2515:  /* avx512f_blendmv8df */
    case 2514:  /* avx512vl_blendmv4sf */
    case 2513:  /* avx512vl_blendmv8sf */
    case 2512:  /* avx512f_blendmv16sf */
    case 2511:  /* avx512vl_blendmv2di */
    case 2510:  /* avx512vl_blendmv4di */
    case 2509:  /* avx512f_blendmv8di */
    case 2508:  /* avx512vl_blendmv4si */
    case 2507:  /* avx512vl_blendmv8si */
    case 2506:  /* avx512f_blendmv16si */
    case 2341:  /* *mmx_pblendw32 */
    case 2340:  /* *mmx_pblendw32 */
    case 2339:  /* *mmx_pblendw32 */
    case 2338:  /* *mmx_pblendw64 */
    case 2337:  /* *mmx_pblendw64 */
    case 2336:  /* *mmx_pblendw64 */
    case 2074:  /* *mmx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5336:  /* sse4_1_insertps_v4sf */
    case 5335:  /* sse4_1_insertps_v4si */
    case 2073:  /* sse4_1_insertps_v2si */
    case 2072:  /* sse4_1_insertps_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2068:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3190:  /* *sse3_hsubv2df3_low */
    case 2067:  /* *mmx_hsubv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3188:  /* sse3_hsubv2df3 */
    case 2066:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3189:  /* *sse3_haddv2df3_low */
    case 2065:  /* *mmx_haddv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3187:  /* *sse3_haddv2df3 */
    case 2064:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 8956:  /* ptesttf2 */
    case 8955:  /* *avx_ptestv4df */
    case 8954:  /* *avx_ptestv8sf */
    case 8953:  /* *avx_ptestv2ti */
    case 8952:  /* *avx_ptestv4di */
    case 8951:  /* *avx_ptestv8si */
    case 8950:  /* *avx_ptestv16hi */
    case 8949:  /* *avx_ptestv32qi */
    case 8948:  /* *sse4_1_ptestv2df */
    case 8947:  /* *sse4_1_ptestv4sf */
    case 8946:  /* *sse4_1_ptestv1ti */
    case 8945:  /* *sse4_1_ptestv2di */
    case 8944:  /* *sse4_1_ptestv4si */
    case 8943:  /* *sse4_1_ptestv8hi */
    case 8942:  /* *sse4_1_ptestv16qi */
    case 8941:  /* avx_vtestpd */
    case 8940:  /* avx_vtestpd256 */
    case 8939:  /* avx_vtestps */
    case 8938:  /* avx_vtestps256 */
    case 2625:  /* kortestdi_ccz */
    case 2624:  /* kortestsi_ccz */
    case 2623:  /* kortesthi_ccz */
    case 2622:  /* kortestqi_ccz */
    case 2621:  /* kortestdi_ccc */
    case 2620:  /* kortestsi_ccc */
    case 2619:  /* kortesthi_ccc */
    case 2618:  /* kortestqi_ccc */
    case 2617:  /* *kortestdi */
    case 2616:  /* *kortestsi */
    case 2615:  /* *kortesthi */
    case 2614:  /* *kortestqi */
    case 2613:  /* ktestdi */
    case 2612:  /* ktestsi */
    case 2611:  /* ktesthi */
    case 2610:  /* ktestqi */
    case 2004:  /* tpause */
    case 2000:  /* umwait */
    case 1995:  /* enqcmds_di */
    case 1994:  /* enqcmd_di */
    case 1993:  /* enqcmds_si */
    case 1992:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1989:  /* movdir64b_di */
    case 1988:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1980:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1969:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2005:  /* tpause_rex64 */
    case 2001:  /* umwait_rex64 */
    case 1938:  /* lwp_lwpinsdi */
    case 1937:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1928:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 8590:  /* sse3_monitor_di */
    case 8589:  /* sse3_monitor_si */
    case 1981:  /* *wrpkru */
    case 1977:  /* monitorx_di */
    case 1976:  /* monitorx_si */
    case 1975:  /* mwaitx */
    case 1936:  /* lwp_lwpvaldi */
    case 1935:  /* lwp_lwpvalsi */
    case 1924:  /* xsetbv_rex64 */
    case 1922:  /* xrstors64 */
    case 1921:  /* xrstor64 */
    case 1920:  /* xrstors_rex64 */
    case 1919:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1900:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1899:  /* rdtscp */
    case 1898:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 10013:  /* avx512dq_vmfpclassv2df */
    case 10011:  /* avx512dq_vmfpclassv4sf */
    case 10009:  /* avx512dq_vmfpclassv8hf */
    case 8268:  /* *avx512vl_testnmv2di3_zext */
    case 8267:  /* *avx512vl_testnmv2di3_zext */
    case 8266:  /* *avx512vl_testnmv2di3_zext */
    case 8265:  /* *avx512vl_testnmv4di3_zext */
    case 8264:  /* *avx512vl_testnmv4di3_zext */
    case 8263:  /* *avx512vl_testnmv4di3_zext */
    case 8262:  /* *avx512f_testnmv8di3_zext */
    case 8261:  /* *avx512f_testnmv8di3_zext */
    case 8260:  /* *avx512f_testnmv8di3_zext */
    case 8259:  /* *avx512vl_testnmv4si3_zext */
    case 8258:  /* *avx512vl_testnmv4si3_zext */
    case 8257:  /* *avx512vl_testnmv4si3_zext */
    case 8256:  /* *avx512vl_testnmv8si3_zext */
    case 8255:  /* *avx512vl_testnmv8si3_zext */
    case 8254:  /* *avx512vl_testnmv8si3_zext */
    case 8253:  /* *avx512f_testnmv16si3_zext */
    case 8252:  /* *avx512f_testnmv16si3_zext */
    case 8251:  /* *avx512f_testnmv16si3_zext */
    case 8250:  /* *avx512vl_testnmv8hi3_zext */
    case 8249:  /* *avx512vl_testnmv8hi3_zext */
    case 8248:  /* *avx512vl_testnmv8hi3_zext */
    case 8247:  /* *avx512vl_testnmv16hi3_zext */
    case 8246:  /* *avx512vl_testnmv16hi3_zext */
    case 8245:  /* *avx512vl_testnmv16hi3_zext */
    case 8244:  /* *avx512bw_testnmv32hi3_zext */
    case 8243:  /* *avx512bw_testnmv32hi3_zext */
    case 8242:  /* *avx512bw_testnmv32hi3_zext */
    case 8241:  /* *avx512vl_testnmv16qi3_zext */
    case 8240:  /* *avx512vl_testnmv16qi3_zext */
    case 8239:  /* *avx512vl_testnmv16qi3_zext */
    case 8238:  /* *avx512vl_testnmv32qi3_zext */
    case 8237:  /* *avx512vl_testnmv32qi3_zext */
    case 8236:  /* *avx512vl_testnmv32qi3_zext */
    case 8235:  /* *avx512bw_testnmv64qi3_zext */
    case 8234:  /* *avx512bw_testnmv64qi3_zext */
    case 8233:  /* *avx512bw_testnmv64qi3_zext */
    case 8196:  /* *avx512vl_testmv2di3_zext */
    case 8195:  /* *avx512vl_testmv2di3_zext */
    case 8194:  /* *avx512vl_testmv2di3_zext */
    case 8193:  /* *avx512vl_testmv4di3_zext */
    case 8192:  /* *avx512vl_testmv4di3_zext */
    case 8191:  /* *avx512vl_testmv4di3_zext */
    case 8190:  /* *avx512f_testmv8di3_zext */
    case 8189:  /* *avx512f_testmv8di3_zext */
    case 8188:  /* *avx512f_testmv8di3_zext */
    case 8187:  /* *avx512vl_testmv4si3_zext */
    case 8186:  /* *avx512vl_testmv4si3_zext */
    case 8185:  /* *avx512vl_testmv4si3_zext */
    case 8184:  /* *avx512vl_testmv8si3_zext */
    case 8183:  /* *avx512vl_testmv8si3_zext */
    case 8182:  /* *avx512vl_testmv8si3_zext */
    case 8181:  /* *avx512f_testmv16si3_zext */
    case 8180:  /* *avx512f_testmv16si3_zext */
    case 8179:  /* *avx512f_testmv16si3_zext */
    case 8178:  /* *avx512vl_testmv8hi3_zext */
    case 8177:  /* *avx512vl_testmv8hi3_zext */
    case 8176:  /* *avx512vl_testmv8hi3_zext */
    case 8175:  /* *avx512vl_testmv16hi3_zext */
    case 8174:  /* *avx512vl_testmv16hi3_zext */
    case 8173:  /* *avx512vl_testmv16hi3_zext */
    case 8172:  /* *avx512bw_testmv32hi3_zext */
    case 8171:  /* *avx512bw_testmv32hi3_zext */
    case 8170:  /* *avx512bw_testmv32hi3_zext */
    case 8169:  /* *avx512vl_testmv16qi3_zext */
    case 8168:  /* *avx512vl_testmv16qi3_zext */
    case 8167:  /* *avx512vl_testmv16qi3_zext */
    case 8166:  /* *avx512vl_testmv32qi3_zext */
    case 8165:  /* *avx512vl_testmv32qi3_zext */
    case 8164:  /* *avx512vl_testmv32qi3_zext */
    case 8163:  /* *avx512bw_testmv64qi3_zext */
    case 8162:  /* *avx512bw_testmv64qi3_zext */
    case 8161:  /* *avx512bw_testmv64qi3_zext */
    case 7273:  /* *avx512f_permvar_truncv4div4si_1 */
    case 7272:  /* *avx512f_permvar_truncv16hiv16qi_1 */
    case 7259:  /* *avx512f_permvar_truncv32hiv32qi_1 */
    case 7243:  /* *avx512f_vpermvar_truncv8div8si_1 */
    case 7241:  /* *avx512f_permvar_truncv8siv8hi_1 */
    case 7239:  /* *avx512bw_permvar_truncv16siv16hi_1 */
    case 1894:  /* sse4_2_crc32di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1887:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1882:  /* *stack_protect_set_4s_di_di */
    case 1881:  /* *stack_protect_set_4s_si_di */
    case 1880:  /* *stack_protect_set_4z_di_di */
    case 1879:  /* *stack_protect_set_4z_si_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1878:  /* *stack_protect_set_3_di_di */
    case 1877:  /* *stack_protect_set_3_di_si */
    case 1876:  /* *stack_protect_set_3_si_di */
    case 1875:  /* *stack_protect_set_3_si_si */
    case 1874:  /* *stack_protect_set_2_di_di */
    case 1873:  /* *stack_protect_set_2_si_di */
    case 1872:  /* *stack_protect_set_2_di_si */
    case 1871:  /* *stack_protect_set_2_si_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1864:  /* adjust_stack_and_probe_di */
    case 1863:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 8743:  /* *sse4_1_pblendvb_gt */
    case 8742:  /* *avx2_pblendvb_gt */
    case 8741:  /* *sse4_1_pblendvb_lt */
    case 8740:  /* *avx2_pblendvb_lt */
    case 8700:  /* *sse4_1_blendvpd_gt */
    case 8699:  /* *avx_blendvpd256_gt */
    case 8698:  /* *sse4_1_blendvps_gt */
    case 8697:  /* *avx_blendvps256_gt */
    case 8696:  /* *sse4_1_blendvpd_lt */
    case 8695:  /* *avx_blendvpd256_lt */
    case 8694:  /* *sse4_1_blendvps_lt */
    case 8693:  /* *avx_blendvps256_lt */
    case 3066:  /* *minmaxv2df3_2 */
    case 3065:  /* *minmaxv4df3_2 */
    case 3064:  /* *minmaxv4sf3_2 */
    case 3063:  /* *minmaxv8sf3_2 */
    case 1830:  /* *ieee_mindf3_1 */
    case 1829:  /* *ieee_minsf3_1 */
    case 1828:  /* *ieee_maxdf3_1 */
    case 1827:  /* *ieee_maxsf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 1807:  /* *movsicc_noc_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1806:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 10637:  /* avx10_2_fmaddbf16_v8bf */
    case 10635:  /* avx10_2_fmaddbf16_v16bf */
    case 10633:  /* avx10_2_fmaddbf16_v32bf */
    case 3837:  /* *fma_fmadd_v2df */
    case 3833:  /* *fma_fmadd_v4df */
    case 3829:  /* *fma_fmadd_v8df */
    case 3828:  /* *fma_fmadd_df */
    case 3826:  /* *fma_fmadd_v4sf */
    case 3822:  /* *fma_fmadd_v8sf */
    case 3818:  /* *fma_fmadd_v16sf */
    case 3817:  /* *fma_fmadd_sf */
    case 3816:  /* *fma_fmadd_hf */
    case 3814:  /* *fma_fmadd_v8hf */
    case 3810:  /* *fma_fmadd_v16hf */
    case 3806:  /* *fma_fmadd_v32hf */
    case 3805:  /* *fma_fmadd_v4df */
    case 3804:  /* *fma_fmadd_v8sf */
    case 3803:  /* *fma_fmadd_v2df */
    case 3802:  /* *fma_fmadd_v4sf */
    case 3801:  /* *fma_fmadd_df */
    case 3800:  /* *fma_fmadd_sf */
    case 1814:  /* *xop_pcmov_df */
    case 1813:  /* *xop_pcmov_sf */
    case 1812:  /* *movsfcc_1_387 */
    case 1811:  /* *movdfcc_1 */
    case 1810:  /* *movxfcc_1 */
    case 1808:  /* *movqicc_noc */
    case 1805:  /* *movdicc_noc */
    case 1804:  /* *movsicc_noc */
    case 1803:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1794:  /* *strlenqi_1 */
    case 1793:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1792:  /* *cmpstrnqi_1 */
    case 1791:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1790:  /* *cmpstrnqi_nz_1 */
    case 1789:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1788:  /* *rep_stosqi */
    case 1787:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1786:  /* *rep_stossi */
    case 1785:  /* *rep_stossi */
    case 1784:  /* *rep_stosdi_rex64 */
    case 1783:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1782:  /* *strsetqi_1 */
    case 1781:  /* *strsetqi_1 */
    case 1780:  /* *strsethi_1 */
    case 1779:  /* *strsethi_1 */
    case 1778:  /* *strsetsi_1 */
    case 1777:  /* *strsetsi_1 */
    case 1776:  /* *strsetdi_rex_1 */
    case 1775:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1774:  /* *rep_movqi */
    case 1773:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 1772:  /* *rep_movsi */
    case 1771:  /* *rep_movsi */
    case 1770:  /* *rep_movdi_rex64 */
    case 1769:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 1768:  /* *strmovqi_1 */
    case 1767:  /* *strmovqi_1 */
    case 1766:  /* *strmovhi_1 */
    case 1765:  /* *strmovhi_1 */
    case 1764:  /* *strmovsi_1 */
    case 1763:  /* *strmovsi_1 */
    case 1762:  /* *strmovdi_rex_1 */
    case 1761:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1751:  /* fistdi2_ceil */
    case 1750:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 11022:  /* atomic_storedi_fpu */
    case 11017:  /* atomic_loaddi_fpu */
    case 1755:  /* fistsi2_ceil */
    case 1754:  /* fistsi2_floor */
    case 1753:  /* fisthi2_ceil */
    case 1752:  /* fisthi2_floor */
    case 1743:  /* frndintxf2_trunc_i387 */
    case 1742:  /* frndintxf2_ceil_i387 */
    case 1741:  /* frndintxf2_floor_i387 */
    case 1740:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1726:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1884:  /* stack_protect_test_1_di */
    case 1883:  /* stack_protect_test_1_si */
    case 1723:  /* fyl2xp1xf3_i387 */
    case 1722:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1721:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1720:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1926:  /* xgetbv_rex64 */
    case 1896:  /* rdpmc_rex64 */
    case 1724:  /* fxtractxf3_i387 */
    case 1719:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1716:  /* fprem1xf4_i387 */
    case 1715:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 1705:  /* *fop_df_6_i387 */
    case 1704:  /* *fop_xf_6_i387 */
    case 1703:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1702:  /* *fop_df_5_i387 */
    case 1701:  /* *fop_xf_5_i387 */
    case 1700:  /* *fop_xf_5_i387 */
    case 1696:  /* *fop_xf_3_i387 */
    case 1695:  /* *fop_df_3_i387 */
    case 1694:  /* *fop_sf_3_i387 */
    case 1693:  /* *fop_xf_3_i387 */
    case 1692:  /* *fop_df_3_i387 */
    case 1691:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1699:  /* *fop_df_4_i387 */
    case 1698:  /* *fop_xf_4_i387 */
    case 1697:  /* *fop_xf_4_i387 */
    case 1690:  /* *fop_xf_2_i387 */
    case 1689:  /* *fop_df_2_i387 */
    case 1688:  /* *fop_sf_2_i387 */
    case 1687:  /* *fop_xf_2_i387 */
    case 1686:  /* *fop_df_2_i387 */
    case 1685:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1672:  /* *tls_dynamic_gnu2_combine_64_di */
    case 1671:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1666:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1665:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1664:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1663:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1662:  /* *add_tp_di */
    case 1661:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1657:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1656:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1653:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1652:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1651:  /* *tls_global_dynamic_64_di */
    case 1650:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1649:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1647:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1646:  /* bswaphisi2_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1623:  /* *tbm_tzmsk_di */
    case 1622:  /* *tbm_tzmsk_si */
    case 1621:  /* *tbm_t1mskc_di */
    case 1620:  /* *tbm_t1mskc_si */
    case 1619:  /* *tbm_blsic_di */
    case 1618:  /* *tbm_blsic_si */
    case 1611:  /* *tbm_blcic_di */
    case 1610:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1609:  /* *tbm_blci_di */
    case 1608:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1605:  /* tbm_bextri_di */
    case 1604:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 1599:  /* *bmi2_bzhi_zero_extendsidi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1598:  /* *bmi2_bzhi_zero_extendsidi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1593:  /* *bmi2_bzhi_di3_1_ccz */
    case 1592:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1591:  /* *bmi2_bzhi_di3 */
    case 1590:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1581:  /* *bmi_blsmsk_di_falsedep */
    case 1580:  /* *bmi_blsmsk_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1589:  /* *bmi_blsr_di_ccz */
    case 1588:  /* *bmi_blsr_si_ccz */
    case 1577:  /* *bmi_blsi_di_ccno */
    case 1576:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1587:  /* *bmi_blsr_di_cmp_falsedep */
    case 1586:  /* *bmi_blsr_si_cmp_falsedep */
    case 1575:  /* *bmi_blsi_di_falsedep */
    case 1574:  /* *bmi_blsi_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1585:  /* *bmi_blsr_di_cmp */
    case 1584:  /* *bmi_blsr_si_cmp */
    case 1573:  /* *bmi_blsi_di_cmp */
    case 1572:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1617:  /* *tbm_blsfill_di */
    case 1616:  /* *tbm_blsfill_si */
    case 1615:  /* *tbm_blcs_di */
    case 1614:  /* *tbm_blcs_si */
    case 1613:  /* *tbm_blcmsk_di */
    case 1612:  /* *tbm_blcmsk_si */
    case 1607:  /* *tbm_blcfill_di */
    case 1606:  /* *tbm_blcfill_si */
    case 1583:  /* *bmi_blsr_di */
    case 1582:  /* *bmi_blsr_si */
    case 1579:  /* *bmi_blsmsk_di */
    case 1578:  /* *bmi_blsmsk_si */
    case 1571:  /* *bmi_blsi_di */
    case 1570:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1569:  /* *bmi_bextr_di_ccz */
    case 1568:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1561:  /* *lzcnt_di_falsedep */
    case 1560:  /* *tzcnt_di_falsedep */
    case 1559:  /* *lzcnt_si_falsedep */
    case 1558:  /* *tzcnt_si_falsedep */
    case 1557:  /* *lzcnt_di_falsedep_nf */
    case 1556:  /* *tzcnt_di_falsedep_nf */
    case 1555:  /* *lzcnt_si_falsedep_nf */
    case 1554:  /* *tzcnt_si_falsedep_nf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1862:  /* probe_stack_1_di */
    case 1861:  /* probe_stack_1_si */
    case 1860:  /* allocate_stack_worker_probe_di */
    case 1859:  /* allocate_stack_worker_probe_si */
    case 1749:  /* *fistdi2_ceil_1 */
    case 1748:  /* *fistdi2_floor_1 */
    case 1747:  /* *fistsi2_ceil_1 */
    case 1746:  /* *fistsi2_floor_1 */
    case 1745:  /* *fisthi2_ceil_1 */
    case 1744:  /* *fisthi2_floor_1 */
    case 1739:  /* frndintxf2_trunc */
    case 1738:  /* frndintxf2_ceil */
    case 1737:  /* frndintxf2_floor */
    case 1736:  /* frndintxf2_roundeven */
    case 1565:  /* lzcnt_hi */
    case 1563:  /* tzcnt_hi */
    case 1553:  /* lzcnt_di */
    case 1552:  /* tzcnt_di */
    case 1551:  /* lzcnt_si */
    case 1550:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1531:  /* *bsr_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      break;

    case 1530:  /* *bsr_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0), 0));
      break;

    case 1529:  /* bsr_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 1526:  /* bsr_rex64_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 1528:  /* bsr_1 */
    case 1525:  /* bsr_rex64_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1527:  /* bsr */
    case 1524:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1635:  /* *popcountsi2_zext_2_falsedep */
    case 1545:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1544:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1523:  /* *ctzsidi2_uext_falsedep */
    case 1522:  /* *ctzsidi2_sext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1633:  /* *popcountsi2_zext_falsedep */
    case 1542:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1541:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1519:  /* *ctzsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1632:  /* *popcountsi2_zext */
    case 1540:  /* *clzsi2_lzcnt_zext */
    case 1518:  /* *ctzsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 1631:  /* *popcountdi2_falsedep */
    case 1630:  /* *popcountsi2_falsedep */
    case 1629:  /* *popcountdi2_falsedep_nf */
    case 1628:  /* *popcountsi2_falsedep_nf */
    case 1539:  /* *clzdi2_lzcnt_falsedep */
    case 1538:  /* *clzsi2_lzcnt_falsedep */
    case 1537:  /* *clzdi2_lzcnt_falsedep_nf */
    case 1536:  /* *clzsi2_lzcnt_falsedep_nf */
    case 1517:  /* *ctzdi2_falsedep */
    case 1516:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1511:  /* *tzcntdi_1_falsedep */
    case 1510:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1513:  /* *bsfdi_1 */
    case 1512:  /* *bsfsi_1 */
    case 1509:  /* *tzcntdi_1 */
    case 1508:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 10933:  /* avx10_2_vcvttss2usisdi */
    case 10931:  /* avx10_2_vcvttss2sisdi */
    case 10929:  /* avx10_2_vcvttss2usissi */
    case 10927:  /* avx10_2_vcvttss2sissi */
    case 10925:  /* avx10_2_vcvttsd2usisdi */
    case 10923:  /* avx10_2_vcvttsd2sisdi */
    case 10921:  /* avx10_2_vcvttsd2usissi */
    case 10919:  /* avx10_2_vcvttsd2sissi */
    case 8678:  /* sse4a_vmmovntv2df */
    case 8677:  /* sse4a_vmmovntv4sf */
    case 4937:  /* sse2_cvtsd2siq */
    case 4935:  /* sse2_cvtsd2si */
    case 4925:  /* avx512f_vcvtsd2usiq */
    case 4923:  /* avx512f_vcvtsd2usi */
    case 4913:  /* avx512f_vcvtss2usiq */
    case 4911:  /* avx512f_vcvtss2usi */
    case 4873:  /* *avx512dq_cvtps2uqqv2di */
    case 4863:  /* *avx512dq_cvtps2qqv2di */
    case 4796:  /* sse_cvtss2siq */
    case 4794:  /* sse_cvtss2si */
    case 4552:  /* avx512fp16_vcvtsh2siq */
    case 4550:  /* avx512fp16_vcvtsh2usiq */
    case 4548:  /* avx512fp16_vcvtsh2si */
    case 4546:  /* avx512fp16_vcvtsh2usi */
    case 1502:  /* set_got_offset_rex64 */
    case 1501:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1499:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1954:  /* rdseeddi */
    case 1953:  /* rdseedsi */
    case 1952:  /* rdseedhi */
    case 1951:  /* rdranddi */
    case 1950:  /* rdrandsi */
    case 1949:  /* rdrandhi */
    case 1927:  /* fnstenv */
    case 1498:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 8588:  /* sse3_mwait */
    case 2012:  /* uwrmsr */
    case 2009:  /* patchable_area */
    case 1965:  /* wrussdi */
    case 1964:  /* wrusssi */
    case 1963:  /* wrssdi */
    case 1962:  /* wrsssi */
    case 1923:  /* xsetbv */
    case 1918:  /* xrstors */
    case 1917:  /* xrstor */
    case 1889:  /* prefetchi */
    case 1497:  /* max_skip_align */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1494:  /* *simple_return_indirect_internaldi */
    case 1493:  /* *simple_return_indirect_internalsi */
    case 1492:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8587:  /* sse2_clflush */
    case 8585:  /* sse_ldmxcsr */
    case 2013:  /* ldtilecfg */
    case 2010:  /* hreset */
    case 2006:  /* cldemote */
    case 2003:  /* umonitor_di */
    case 2002:  /* umonitor_si */
    case 1999:  /* senduipi */
    case 1979:  /* clzero_di */
    case 1978:  /* clzero_si */
    case 1974:  /* clflushopt */
    case 1973:  /* clwb */
    case 1971:  /* xabort */
    case 1967:  /* clrssbsy */
    case 1961:  /* rstorssp */
    case 1959:  /* incsspdi */
    case 1958:  /* incsspsi */
    case 1948:  /* ptwritedi */
    case 1947:  /* ptwritesi */
    case 1946:  /* wrgsbasedi */
    case 1945:  /* wrfsbasedi */
    case 1944:  /* wrgsbasesi */
    case 1943:  /* wrfsbasesi */
    case 1932:  /* lwp_llwpcbdi */
    case 1931:  /* lwp_llwpcbsi */
    case 1904:  /* fxrstor64 */
    case 1903:  /* fxrstor */
    case 1506:  /* split_stack_return */
    case 1496:  /* nops */
    case 1488:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 11015:  /* mfence_sse2 */
    case 11014:  /* *sse_sfence */
    case 11013:  /* *sse2_lfence */
    case 1955:  /* *pause */
    case 1487:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1485:  /* *sibcall_value_pop_memory */
    case 1484:  /* *sibcall_value_pop */
    case 1483:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1478:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5333:  /* *vec_setv2di_0_zero_extendsi */
    case 5332:  /* *vec_setv4di_0_zero_extendsi */
    case 5331:  /* *vec_setv8di_0_zero_extendsi */
    case 5321:  /* *vec_setv2di_0_zero_extendhi */
    case 5320:  /* *vec_setv4di_0_zero_extendhi */
    case 5319:  /* *vec_setv8di_0_zero_extendhi */
    case 5318:  /* *vec_setv4si_0_zero_extendhi */
    case 5317:  /* *vec_setv8si_0_zero_extendhi */
    case 5316:  /* *vec_setv16si_0_zero_extendhi */
    case 4784:  /* avx512fp16_vcvtsd2sh_mem */
    case 4782:  /* avx512fp16_vcvtss2sh_mem */
    case 4772:  /* avx512fp16_vcvtsh2ss_mem */
    case 4770:  /* avx512fp16_vcvtsh2sd_mem */
    case 2960:  /* *sse2_vmsqrtv2df2 */
    case 2956:  /* *sse_vmsqrtv4sf2 */
    case 2952:  /* *avx512fp16_vmsqrtv8hf2 */
    case 1477:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1474:  /* *sibcall_pop_memory */
    case 1473:  /* *sibcall_pop */
    case 1472:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1467:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 1466:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 1463:  /* *tablejump_1 */
    case 1462:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 1461:  /* *indirect_jump */
    case 1460:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 1459:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1458:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 10973:  /* avx10_2_minmaxpv2df */
    case 10969:  /* avx10_2_minmaxpv4df */
    case 10965:  /* avx10_2_minmaxpv8df */
    case 10961:  /* avx10_2_minmaxpv4sf */
    case 10957:  /* avx10_2_minmaxpv8sf */
    case 10953:  /* avx10_2_minmaxpv16sf */
    case 10949:  /* avx10_2_minmaxpv8hf */
    case 10945:  /* avx10_2_minmaxpv16hf */
    case 10941:  /* avx10_2_minmaxpv32hf */
    case 10939:  /* avx10_2_minmaxbf16_v8bf */
    case 10937:  /* avx10_2_minmaxbf16_v16bf */
    case 10935:  /* avx10_2_minmaxbf16_v32bf */
    case 10733:  /* avx10_2_cmpbf16_v8bf */
    case 10731:  /* avx10_2_cmpbf16_v16bf */
    case 10729:  /* avx10_2_cmpbf16_v32bf */
    case 10584:  /* vdpphps_v4sf */
    case 10583:  /* vdpphps_v8sf */
    case 10582:  /* vdpphps_v16sf */
    case 10545:  /* vpdpwuuds_v16si */
    case 10544:  /* vpdpwuud_v16si */
    case 10543:  /* vpdpwsuds_v16si */
    case 10542:  /* vpdpwsud_v16si */
    case 10541:  /* vpdpwusds_v16si */
    case 10540:  /* vpdpwusd_v16si */
    case 10539:  /* vpdpwuuds_v4si */
    case 10538:  /* vpdpwuud_v4si */
    case 10537:  /* vpdpwsuds_v4si */
    case 10536:  /* vpdpwsud_v4si */
    case 10535:  /* vpdpwusds_v4si */
    case 10534:  /* vpdpwusd_v4si */
    case 10533:  /* vpdpwuuds_v8si */
    case 10532:  /* vpdpwuud_v8si */
    case 10531:  /* vpdpwsuds_v8si */
    case 10530:  /* vpdpwsud_v8si */
    case 10529:  /* vpdpwusds_v8si */
    case 10528:  /* vpdpwusd_v8si */
    case 10391:  /* vpdpbuuds_v16si */
    case 10390:  /* vpdpbuud_v16si */
    case 10389:  /* vpdpbsuds_v16si */
    case 10388:  /* vpdpbsud_v16si */
    case 10387:  /* vpdpbssds_v16si */
    case 10386:  /* vpdpbssd_v16si */
    case 10385:  /* vpdpbuuds_v4si */
    case 10384:  /* vpdpbuud_v4si */
    case 10383:  /* vpdpbsuds_v4si */
    case 10382:  /* vpdpbsud_v4si */
    case 10381:  /* vpdpbssds_v4si */
    case 10380:  /* vpdpbssd_v4si */
    case 10379:  /* vpdpbuuds_v8si */
    case 10378:  /* vpdpbuud_v8si */
    case 10377:  /* vpdpbsuds_v8si */
    case 10376:  /* vpdpbsud_v8si */
    case 10375:  /* vpdpbssds_v8si */
    case 10374:  /* vpdpbssd_v8si */
    case 10358:  /* avx512f_dpbf16ps_v4sf */
    case 10356:  /* avx512f_dpbf16ps_v8sf */
    case 10354:  /* avx512f_dpbf16ps_v16sf */
    case 10326:  /* vpclmulqdq_v2di */
    case 10325:  /* vpclmulqdq_v4di */
    case 10324:  /* vpclmulqdq_v8di */
    case 10305:  /* vpdpwssds_v4si */
    case 10304:  /* vpdpwssds_v8si */
    case 10303:  /* vpdpwssds_v16si */
    case 10296:  /* vpdpwssd_v4si */
    case 10295:  /* vpdpwssd_v8si */
    case 10294:  /* vpdpwssd_v16si */
    case 10287:  /* vpdpbusds_v4si */
    case 10286:  /* vpdpbusds_v8si */
    case 10285:  /* vpdpbusds_v16si */
    case 10278:  /* vpdpbusd_v4si */
    case 10277:  /* vpdpbusd_v8si */
    case 10276:  /* vpdpbusd_v16si */
    case 10257:  /* vpshldv_v2di */
    case 10256:  /* vpshldv_v4si */
    case 10255:  /* vpshldv_v8hi */
    case 10254:  /* vpshldv_v4di */
    case 10253:  /* vpshldv_v8si */
    case 10252:  /* vpshldv_v16hi */
    case 10251:  /* vpshldv_v8di */
    case 10250:  /* vpshldv_v16si */
    case 10249:  /* vpshldv_v32hi */
    case 10230:  /* vpshrdv_v2di */
    case 10229:  /* vpshrdv_v4si */
    case 10228:  /* vpshrdv_v8hi */
    case 10227:  /* vpshrdv_v4di */
    case 10226:  /* vpshrdv_v8si */
    case 10225:  /* vpshrdv_v16hi */
    case 10224:  /* vpshrdv_v8di */
    case 10223:  /* vpshrdv_v16si */
    case 10222:  /* vpshrdv_v32hi */
    case 10220:  /* vpshld_v2di */
    case 10218:  /* vpshld_v4si */
    case 10216:  /* vpshld_v8hi */
    case 10214:  /* vpshld_v4di */
    case 10212:  /* vpshld_v8si */
    case 10210:  /* vpshld_v16hi */
    case 10208:  /* vpshld_v8di */
    case 10206:  /* vpshld_v16si */
    case 10204:  /* vpshld_v32hi */
    case 10202:  /* vpshrd_v2di */
    case 10200:  /* vpshrd_v4si */
    case 10198:  /* vpshrd_v8hi */
    case 10196:  /* vpshrd_v4di */
    case 10194:  /* vpshrd_v8si */
    case 10192:  /* vpshrd_v16hi */
    case 10190:  /* vpshrd_v8di */
    case 10188:  /* vpshrd_v16si */
    case 10186:  /* vpshrd_v32hi */
    case 10178:  /* vgf2p8affineqb_v16qi */
    case 10176:  /* vgf2p8affineqb_v32qi */
    case 10174:  /* vgf2p8affineqb_v64qi */
    case 10172:  /* vgf2p8affineinvqb_v16qi */
    case 10170:  /* vgf2p8affineinvqb_v32qi */
    case 10168:  /* vgf2p8affineinvqb_v64qi */
    case 10117:  /* vpmadd52huqv2di */
    case 10116:  /* vpmadd52luqv2di */
    case 10115:  /* vpmadd52huqv4di */
    case 10114:  /* vpmadd52luqv4di */
    case 10113:  /* vpmadd52huqv8di */
    case 10112:  /* vpmadd52luqv8di */
    case 10099:  /* vsha512rnds2 */
    case 10095:  /* vsm3msg2 */
    case 10094:  /* vsm3msg1 */
    case 10093:  /* sha256rnds2 */
    case 10090:  /* sha1rnds4 */
    case 10061:  /* *avx512bw_dbpsadbwv32hi */
    case 10059:  /* *avx512bw_dbpsadbwv16hi */
    case 10057:  /* *avx512bw_dbpsadbwv8hi */
    case 9981:  /* avx512dq_rangepv2df */
    case 9977:  /* avx512dq_rangepv4df */
    case 9973:  /* avx512dq_rangepv8df */
    case 9971:  /* avx512dq_rangepv4sf */
    case 9967:  /* avx512dq_rangepv8sf */
    case 9963:  /* avx512dq_rangepv16sf */
    case 9962:  /* *expandv8hi_mask */
    case 9961:  /* *expandv16hi_mask */
    case 9960:  /* *expandv32hi_mask */
    case 9959:  /* *expandv32qi_mask */
    case 9958:  /* *expandv16qi_mask */
    case 9957:  /* *expandv64qi_mask */
    case 9956:  /* *expandv2df_mask */
    case 9955:  /* *expandv2di_mask */
    case 9954:  /* *expandv4sf_mask */
    case 9953:  /* *expandv4si_mask */
    case 9952:  /* *expandv4df_mask */
    case 9951:  /* *expandv4di_mask */
    case 9950:  /* *expandv8sf_mask */
    case 9949:  /* *expandv8si_mask */
    case 9948:  /* *expandv8df_mask */
    case 9947:  /* *expandv8di_mask */
    case 9946:  /* *expandv16sf_mask */
    case 9945:  /* *expandv16si_mask */
    case 9944:  /* expandv8hi_mask */
    case 9943:  /* expandv16hi_mask */
    case 9942:  /* expandv32hi_mask */
    case 9941:  /* expandv32qi_mask */
    case 9940:  /* expandv16qi_mask */
    case 9939:  /* expandv64qi_mask */
    case 9938:  /* expandv2df_mask */
    case 9937:  /* expandv2di_mask */
    case 9936:  /* expandv4sf_mask */
    case 9935:  /* expandv4si_mask */
    case 9934:  /* expandv4df_mask */
    case 9933:  /* expandv4di_mask */
    case 9932:  /* expandv8sf_mask */
    case 9931:  /* expandv8si_mask */
    case 9930:  /* expandv8df_mask */
    case 9929:  /* expandv8di_mask */
    case 9928:  /* expandv16sf_mask */
    case 9927:  /* expandv16si_mask */
    case 9908:  /* compressv8hi_mask */
    case 9907:  /* compressv16hi_mask */
    case 9906:  /* compressv32hi_mask */
    case 9905:  /* compressv32qi_mask */
    case 9904:  /* compressv16qi_mask */
    case 9903:  /* compressv64qi_mask */
    case 9902:  /* avx512vl_compressv2df_mask */
    case 9901:  /* avx512vl_compressv2di_mask */
    case 9900:  /* avx512vl_compressv4sf_mask */
    case 9899:  /* avx512vl_compressv4si_mask */
    case 9898:  /* avx512vl_compressv4df_mask */
    case 9897:  /* avx512vl_compressv4di_mask */
    case 9896:  /* avx512vl_compressv8sf_mask */
    case 9895:  /* avx512vl_compressv8si_mask */
    case 9894:  /* avx512f_compressv8df_mask */
    case 9893:  /* avx512f_compressv8di_mask */
    case 9892:  /* avx512f_compressv16sf_mask */
    case 9891:  /* avx512f_compressv16si_mask */
    case 9453:  /* *avx_vperm2f128v4df_full */
    case 9452:  /* *avx_vperm2f128v8sf_full */
    case 9451:  /* *avx_vperm2f128v8si_full */
    case 9431:  /* avx512vl_vpermt2varv8bf3 */
    case 9429:  /* avx512vl_vpermt2varv16bf3 */
    case 9427:  /* avx512bw_vpermt2varv32bf3 */
    case 9425:  /* avx512fp16_vpermt2varv8hf3 */
    case 9423:  /* avx512vl_vpermt2varv16hf3 */
    case 9421:  /* avx512bw_vpermt2varv32hf3 */
    case 9419:  /* avx512vl_vpermt2varv16qi3 */
    case 9417:  /* avx512vl_vpermt2varv32qi3 */
    case 9415:  /* avx512bw_vpermt2varv64qi3 */
    case 9413:  /* avx512vl_vpermt2varv8hi3 */
    case 9411:  /* avx512vl_vpermt2varv16hi3 */
    case 9409:  /* avx512bw_vpermt2varv32hi3 */
    case 9407:  /* avx512vl_vpermt2varv2df3 */
    case 9405:  /* avx512vl_vpermt2varv2di3 */
    case 9403:  /* avx512vl_vpermt2varv4sf3 */
    case 9401:  /* avx512vl_vpermt2varv4si3 */
    case 9399:  /* avx512vl_vpermt2varv4df3 */
    case 9397:  /* avx512vl_vpermt2varv4di3 */
    case 9395:  /* avx512vl_vpermt2varv8sf3 */
    case 9393:  /* avx512vl_vpermt2varv8si3 */
    case 9391:  /* avx512f_vpermt2varv8df3 */
    case 9389:  /* avx512f_vpermt2varv8di3 */
    case 9387:  /* avx512f_vpermt2varv16sf3 */
    case 9385:  /* avx512f_vpermt2varv16si3 */
    case 9181:  /* avx2_permv2ti */
    case 9091:  /* pclmulqdq */
    case 9080:  /* xop_pcom_tfv2di3 */
    case 9079:  /* xop_pcom_tfv4si3 */
    case 9078:  /* xop_pcom_tfv8hi3 */
    case 9077:  /* xop_pcom_tfv16qi3 */
    case 9032:  /* xop_pperm */
    case 8739:  /* sse4_1_pblendvb */
    case 8738:  /* avx2_pblendvb */
    case 8730:  /* *sse4_1_mpsadbw */
    case 8728:  /* *avx2_mpsadbw */
    case 8726:  /* avx10_2_mpsadbw */
    case 8725:  /* sse4_1_mpsadbw */
    case 8724:  /* avx2_mpsadbw */
    case 8720:  /* sse4_1_dppd */
    case 8719:  /* avx_dppd256 */
    case 8718:  /* sse4_1_dpps */
    case 8717:  /* avx_dpps256 */
    case 8692:  /* sse4_1_blendvsd */
    case 8691:  /* sse4_1_blendvss */
    case 8690:  /* sse4_1_blendvpd */
    case 8689:  /* avx_blendvpd256 */
    case 8688:  /* sse4_1_blendvps */
    case 8687:  /* avx_blendvps256 */
    case 8679:  /* sse4a_extrqi */
    case 8650:  /* ssse3_palignrdi */
    case 8649:  /* ssse3_palignrv1ti */
    case 8648:  /* avx2_palignrv2ti */
    case 8647:  /* avx512bw_palignrv4ti */
    case 7093:  /* *avx512vl_alignv2di */
    case 7091:  /* *avx512vl_alignv4di */
    case 7089:  /* *avx512f_alignv8di */
    case 7087:  /* *avx512vl_alignv4si */
    case 7085:  /* *avx512vl_alignv8si */
    case 7083:  /* *avx512f_alignv16si */
    case 4365:  /* fma_fcmaddc_v4sf_pair */
    case 4364:  /* fma_fmaddc_v4sf_pair */
    case 4363:  /* fma_fcmaddc_v8sf_pair */
    case 4362:  /* fma_fmaddc_v8sf_pair */
    case 4361:  /* fma_fcmaddc_v16sf_pair */
    case 4360:  /* fma_fmaddc_v16sf_pair */
    case 4346:  /* fma_fcmaddc_v8hf */
    case 4344:  /* fma_fmaddc_v8hf */
    case 4340:  /* fma_fcmaddc_v16hf */
    case 4336:  /* fma_fmaddc_v16hf */
    case 4332:  /* fma_fcmaddc_v32hf */
    case 4328:  /* fma_fmaddc_v32hf */
    case 4122:  /* *fma_fmaddsub_v2df */
    case 4118:  /* *fma_fmaddsub_v4df */
    case 4114:  /* *fma_fmaddsub_v8df */
    case 4112:  /* *fma_fmaddsub_v4sf */
    case 4108:  /* *fma_fmaddsub_v8sf */
    case 4104:  /* *fma_fmaddsub_v16sf */
    case 4102:  /* *fma_fmaddsub_v8hf */
    case 4098:  /* *fma_fmaddsub_v16hf */
    case 4094:  /* *fma_fmaddsub_v32hf */
    case 4093:  /* *fma_fmaddsub_v2df */
    case 4092:  /* *fma_fmaddsub_v4df */
    case 4091:  /* *fma_fmaddsub_v4sf */
    case 4090:  /* *fma_fmaddsub_v8sf */
    case 3602:  /* avx512vl_ucmpv2di3 */
    case 3600:  /* avx512vl_ucmpv4di3 */
    case 3598:  /* avx512f_ucmpv8di3 */
    case 3596:  /* avx512vl_ucmpv4si3 */
    case 3594:  /* avx512vl_ucmpv8si3 */
    case 3592:  /* avx512f_ucmpv16si3 */
    case 3530:  /* avx512vl_ucmpv8hi3 */
    case 3528:  /* avx512vl_ucmpv16hi3 */
    case 3526:  /* avx512bw_ucmpv32hi3 */
    case 3524:  /* avx512vl_ucmpv32qi3 */
    case 3522:  /* avx512vl_ucmpv16qi3 */
    case 3520:  /* avx512bw_ucmpv64qi3 */
    case 3446:  /* avx512vl_cmpv8hi3 */
    case 3444:  /* avx512vl_cmpv16hi3 */
    case 3442:  /* avx512bw_cmpv32hi3 */
    case 3440:  /* avx512vl_cmpv32qi3 */
    case 3438:  /* avx512vl_cmpv16qi3 */
    case 3436:  /* avx512bw_cmpv64qi3 */
    case 3329:  /* avx512vl_cmpv2df3 */
    case 3325:  /* avx512vl_cmpv4df3 */
    case 3321:  /* avx512f_cmpv8df3 */
    case 3319:  /* avx512vl_cmpv4sf3 */
    case 3315:  /* avx512vl_cmpv8sf3 */
    case 3311:  /* avx512f_cmpv16sf3 */
    case 3309:  /* avx512fp16_cmpv8hf3 */
    case 3305:  /* avx512vl_cmpv16hf3 */
    case 3301:  /* avx512bw_cmpv32hf3 */
    case 3299:  /* avx512vl_cmpv2di3 */
    case 3295:  /* avx512vl_cmpv4di3 */
    case 3291:  /* avx512f_cmpv8di3 */
    case 3289:  /* avx512vl_cmpv4si3 */
    case 3285:  /* avx512vl_cmpv8si3 */
    case 3281:  /* avx512f_cmpv16si3 */
    case 3240:  /* avx_cmpv2df3 */
    case 3239:  /* avx_cmpv4df3 */
    case 3238:  /* avx_cmpv4sf3 */
    case 3237:  /* avx_cmpv8sf3 */
    case 2264:  /* mmx_ppermv32 */
    case 2263:  /* mmx_ppermv64 */
    case 2247:  /* mmx_pblendvb_v2hi */
    case 2246:  /* mmx_pblendvb_v2qi */
    case 2245:  /* mmx_pblendvb_v4qi */
    case 2241:  /* mmx_pblendvb_v8qi */
    case 2075:  /* mmx_blendvps */
    case 1809:  /* movhf_mask */
    case 1457:  /* setcc_hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3278:  /* sse2_maskcmpv2df3 */
    case 3277:  /* avx_maskcmpv4df3 */
    case 3276:  /* sse_maskcmpv4sf3 */
    case 3275:  /* avx_maskcmpv8sf3 */
    case 3274:  /* *sse2_maskcmpv2df3_comm */
    case 3273:  /* *avx_maskcmpv4df3_comm */
    case 3272:  /* *sse_maskcmpv4sf3_comm */
    case 3271:  /* *avx_maskcmpv8sf3_comm */
    case 1684:  /* *fop_df_1 */
    case 1683:  /* *fop_sf_1 */
    case 1682:  /* *fop_xf_1_i387 */
    case 1675:  /* *fop_df_comm */
    case 1674:  /* *fop_sf_comm */
    case 1673:  /* *fop_xf_comm_i387 */
    case 1456:  /* setcc_df_sse */
    case 1455:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1443:  /* *btdi_setcdi_mask */
    case 1442:  /* *btsi_setcsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 1));
      break;

    case 1441:  /* *btdi_setncqi_2 */
    case 1440:  /* *btsi_setncqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 1439:  /* *btdi_setncdi */
    case 1438:  /* *btsi_setncsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 1437:  /* *btdi_setncqi */
    case 1436:  /* *btsi_setncqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1435:  /* *btdi_setcqi */
    case 1434:  /* *btsi_setcqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 1433:  /* *jcc_btdi_mask_1 */
    case 1432:  /* *jcc_btsi_mask_1 */
    case 1431:  /* *jcc_btdi_mask_1 */
    case 1430:  /* *jcc_btsi_mask_1 */
    case 1429:  /* *jcc_btdi_mask_1 */
    case 1428:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1427:  /* *jcc_btdi_mask */
    case 1426:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1425:  /* *jcc_btdi */
    case 1424:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1423:  /* *btdi_mask */
    case 1422:  /* *btsi_mask */
    case 1421:  /* *btdi_mask */
    case 1420:  /* *btsi_mask */
    case 1419:  /* *btdi_mask */
    case 1418:  /* *btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0), 1));
      break;

    case 1417:  /* *btdi */
    case 1416:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      break;

    case 1415:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 1414:  /* *btrq_imm */
    case 1413:  /* *btsq_imm */
    case 1412:  /* *btrhi_2 */
    case 1411:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 1597:  /* *bmi2_bzhi_di3_3 */
    case 1596:  /* *bmi2_bzhi_si3_3 */
    case 1595:  /* *bmi2_bzhi_di3_2 */
    case 1594:  /* *bmi2_bzhi_si3_2 */
    case 1410:  /* *btrhi_1 */
    case 1409:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 1408:  /* *btrdi_mask_1 */
    case 1407:  /* *btrsi_mask_1 */
    case 1402:  /* *btcdi_mask_1 */
    case 1401:  /* *btsdi_mask_1 */
    case 1400:  /* *btcsi_mask_1 */
    case 1399:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1406:  /* *btrdi_mask */
    case 1405:  /* *btrsi_mask */
    case 1398:  /* *btcdi_mask */
    case 1397:  /* *btsdi_mask */
    case 1396:  /* *btcsi_mask */
    case 1395:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1404:  /* *btrdi */
    case 1403:  /* *btrsi */
    case 1394:  /* *btcdi */
    case 1393:  /* *btsdi */
    case 1392:  /* *btcsi */
    case 1391:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1390:  /* ashrdi3_carry */
    case 1389:  /* lshrdi3_carry */
    case 1388:  /* ashrsi3_carry */
    case 1387:  /* lshrsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1335:  /* ix86_rotrti3_doubleword */
    case 1334:  /* ix86_rotrdi3_doubleword */
    case 1333:  /* ix86_rotlti3_doubleword */
    case 1332:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1281:  /* *extendti2_doubleword_highpart */
    case 1280:  /* *extenddi2_doubleword_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1331:  /* *rotrdi3_sub_1 */
    case 1330:  /* *rotldi3_sub_1 */
    case 1329:  /* *rotrsi3_sub_1 */
    case 1328:  /* *rotlsi3_sub_1 */
    case 1327:  /* *rotrhi3_sub_1 */
    case 1326:  /* *rotlhi3_sub_1 */
    case 1325:  /* *rotrqi3_sub_1 */
    case 1324:  /* *rotlqi3_sub_1 */
    case 1279:  /* *ashrdi3_sub_1 */
    case 1278:  /* *lshrdi3_sub_1 */
    case 1277:  /* *ashldi3_sub_1 */
    case 1276:  /* *ashrsi3_sub_1 */
    case 1275:  /* *lshrsi3_sub_1 */
    case 1274:  /* *ashlsi3_sub_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1323:  /* *rotrdi3_sub */
    case 1322:  /* *rotldi3_sub */
    case 1321:  /* *rotrsi3_sub */
    case 1320:  /* *rotlsi3_sub */
    case 1319:  /* *rotrhi3_sub */
    case 1318:  /* *rotlhi3_sub */
    case 1317:  /* *rotrqi3_sub */
    case 1316:  /* *rotlqi3_sub */
    case 1273:  /* *ashrdi3_sub */
    case 1272:  /* *lshrdi3_sub */
    case 1271:  /* *ashldi3_sub */
    case 1270:  /* *ashrsi3_sub */
    case 1269:  /* *lshrsi3_sub */
    case 1268:  /* *ashlsi3_sub */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      break;

    case 1153:  /* *x86_64_shrd_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 1165:  /* *x86_shrd_ndd_2 */
    case 1085:  /* *x86_shld_ndd_2 */
    case 1073:  /* *x86_64_shld_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1164:  /* *x86_shrd_2 */
    case 1152:  /* *x86_64_shrd_2 */
    case 1084:  /* *x86_shld_2 */
    case 1072:  /* *x86_64_shld_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1163:  /* *x86_shrd_shld_1_nozext */
    case 1151:  /* *x86_64_shrd_shld_1_nozext */
    case 1083:  /* *x86_shld_shrd_1_nozext */
    case 1071:  /* *x86_64_shld_shrd_1_nozext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1162:  /* *x86_shrd_shld_1_nozext_nf */
    case 1150:  /* *x86_64_shrd_shld_1_nozext_nf */
    case 1082:  /* *x86_shld_shrd_1_nozext_nf */
    case 1070:  /* *x86_64_shld_shrd_1_nozext_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1161:  /* x86_shrd_ndd_1 */
    case 1149:  /* x86_64_shrd_ndd_1 */
    case 1081:  /* x86_shld_ndd_1 */
    case 1069:  /* x86_64_shld_ndd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 1160:  /* x86_shrd_ndd_1_nf */
    case 1148:  /* x86_64_shrd_ndd_1_nf */
    case 1080:  /* x86_shld_ndd_1_nf */
    case 1068:  /* x86_64_shld_ndd_1_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1159:  /* x86_shrd_1 */
    case 1147:  /* x86_64_shrd_1 */
    case 1079:  /* x86_shld_1 */
    case 1067:  /* x86_64_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1158:  /* x86_shrd_1_nf */
    case 1146:  /* x86_64_shrd_1_nf */
    case 1078:  /* x86_shld_1_nf */
    case 1066:  /* x86_64_shld_1_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1157:  /* x86_shrd_ndd */
    case 1145:  /* x86_64_shrd_ndd */
    case 1077:  /* x86_shld_ndd */
    case 1065:  /* x86_64_shld_ndd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 1156:  /* x86_shrd_ndd_nf */
    case 1144:  /* x86_64_shrd_ndd_nf */
    case 1076:  /* x86_shld_ndd_nf */
    case 1064:  /* x86_64_shld_ndd_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 1155:  /* x86_shrd */
    case 1143:  /* x86_64_shrd */
    case 1075:  /* x86_shld */
    case 1063:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1154:  /* x86_shrd_nf */
    case 1142:  /* x86_64_shrd_nf */
    case 1074:  /* x86_shld_nf */
    case 1062:  /* x86_64_shld_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1315:  /* *rotrdi3_add_1 */
    case 1314:  /* *rotldi3_add_1 */
    case 1313:  /* *rotrsi3_add_1 */
    case 1312:  /* *rotlsi3_add_1 */
    case 1311:  /* *rotrhi3_add_1 */
    case 1310:  /* *rotlhi3_add_1 */
    case 1309:  /* *rotrqi3_add_1 */
    case 1308:  /* *rotlqi3_add_1 */
    case 1299:  /* *rotrdi3_mask_1 */
    case 1298:  /* *rotldi3_mask_1 */
    case 1297:  /* *rotrsi3_mask_1 */
    case 1296:  /* *rotlsi3_mask_1 */
    case 1295:  /* *rotrhi3_mask_1 */
    case 1294:  /* *rotlhi3_mask_1 */
    case 1293:  /* *rotrqi3_mask_1 */
    case 1292:  /* *rotlqi3_mask_1 */
    case 1267:  /* *ashrdi3_add_1 */
    case 1266:  /* *lshrdi3_add_1 */
    case 1265:  /* *ashldi3_add_1 */
    case 1264:  /* *ashrsi3_add_1 */
    case 1263:  /* *lshrsi3_add_1 */
    case 1262:  /* *ashlsi3_add_1 */
    case 1255:  /* *ashrdi3_mask_1 */
    case 1254:  /* *lshrdi3_mask_1 */
    case 1253:  /* *ashldi3_mask_1 */
    case 1252:  /* *ashrsi3_mask_1 */
    case 1251:  /* *lshrsi3_mask_1 */
    case 1250:  /* *ashlsi3_mask_1 */
    case 1129:  /* *ashrti3_doubleword_mask_1 */
    case 1128:  /* *lshrti3_doubleword_mask_1 */
    case 1127:  /* *ashrdi3_doubleword_mask_1 */
    case 1126:  /* *lshrdi3_doubleword_mask_1 */
    case 1055:  /* *ashlti3_doubleword_mask_1 */
    case 1054:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 1307:  /* *rotrdi3_add */
    case 1306:  /* *rotldi3_add */
    case 1305:  /* *rotrsi3_add */
    case 1304:  /* *rotlsi3_add */
    case 1303:  /* *rotrhi3_add */
    case 1302:  /* *rotlhi3_add */
    case 1301:  /* *rotrqi3_add */
    case 1300:  /* *rotlqi3_add */
    case 1291:  /* *rotrdi3_mask */
    case 1290:  /* *rotldi3_mask */
    case 1289:  /* *rotrsi3_mask */
    case 1288:  /* *rotlsi3_mask */
    case 1287:  /* *rotrhi3_mask */
    case 1286:  /* *rotlhi3_mask */
    case 1285:  /* *rotrqi3_mask */
    case 1284:  /* *rotlqi3_mask */
    case 1261:  /* *ashrdi3_add */
    case 1260:  /* *lshrdi3_add */
    case 1259:  /* *ashldi3_add */
    case 1258:  /* *ashrsi3_add */
    case 1257:  /* *lshrsi3_add */
    case 1256:  /* *ashlsi3_add */
    case 1249:  /* *ashrdi3_mask */
    case 1248:  /* *lshrdi3_mask */
    case 1247:  /* *ashldi3_mask */
    case 1246:  /* *ashrsi3_mask */
    case 1245:  /* *lshrsi3_mask */
    case 1244:  /* *ashlsi3_mask */
    case 1125:  /* *ashrti3_doubleword_mask */
    case 1124:  /* *lshrti3_doubleword_mask */
    case 1123:  /* *ashrdi3_doubleword_mask */
    case 1122:  /* *lshrdi3_doubleword_mask */
    case 1053:  /* *ashlti3_doubleword_mask */
    case 1052:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 1051:  /* *one_cmplqi_extdi_1 */
    case 1050:  /* *one_cmplqi_extsi_1 */
    case 1049:  /* *one_cmplqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 2682:  /* *nabsv2df2 */
    case 2681:  /* *nabsv4df2 */
    case 2680:  /* *nabsv8df2 */
    case 2679:  /* *nabsv4sf2 */
    case 2678:  /* *nabsv8sf2 */
    case 2677:  /* *nabsv16sf2 */
    case 2106:  /* *mmx_nabsv4hf2 */
    case 2105:  /* *mmx_nabsv2hf2 */
    case 2104:  /* *mmx_nabsv4bf2 */
    case 2103:  /* *mmx_nabsv2bf2 */
    case 2051:  /* *mmx_nabsv2sf2 */
    case 1023:  /* *nabsdf2_1 */
    case 1022:  /* *nabssf2_1 */
    case 1009:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 994:  /* *negvdi3 */
    case 993:  /* *negvsi3 */
    case 992:  /* *negvhi3 */
    case 991:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 990:  /* *negqi_extdi_1 */
    case 989:  /* *negqi_extsi_1 */
    case 988:  /* *negqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 987:  /* *negdi_ccc_2 */
    case 986:  /* *negsi_ccc_2 */
    case 985:  /* *neghi_ccc_2 */
    case 984:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 983:  /* *negdi_ccc_1 */
    case 982:  /* *negsi_ccc_1 */
    case 981:  /* *neghi_ccc_1 */
    case 980:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1048:  /* *one_cmplsi2_2_zext */
    case 979:  /* *negsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1047:  /* *one_cmpldi2_2 */
    case 1046:  /* *one_cmplsi2_2 */
    case 1045:  /* *one_cmplhi2_2 */
    case 1044:  /* *one_cmplqi2_2 */
    case 978:  /* *negdi_2 */
    case 977:  /* *negsi_2 */
    case 976:  /* *neghi_2 */
    case 975:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1179:  /* *highpartdisi2 */
    case 974:  /* *neghi_1_slp */
    case 973:  /* *negqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 9354:  /* avx512cd_maskw_vec_dupv4si */
    case 9353:  /* avx512cd_maskw_vec_dupv8si */
    case 9352:  /* avx512cd_maskw_vec_dupv16si */
    case 9351:  /* avx512cd_maskb_vec_dupv2di */
    case 9350:  /* avx512cd_maskb_vec_dupv4di */
    case 9349:  /* avx512cd_maskb_vec_dupv8di */
    case 2596:  /* *knotsi_1_zext */
    case 1637:  /* *popcounthi2_2 */
    case 1636:  /* *popcounthi2_1 */
    case 1634:  /* *popcountsi2_zext_2 */
    case 1543:  /* *clzsi2_lzcnt_zext_2 */
    case 1521:  /* *ctzsidi2_uext */
    case 1520:  /* *ctzsidi2_sext */
    case 1386:  /* rcrdi2 */
    case 1385:  /* rcrsi2 */
    case 1006:  /* *nabsdi2_1 */
    case 1005:  /* *nabssi2_1 */
    case 1004:  /* *nabshi2_1 */
    case 1003:  /* *nabsqi2_1 */
    case 998:  /* *nabsti2_doubleword */
    case 997:  /* *nabsdi2_doubleword */
    case 972:  /* *negsi_1_zext */
    case 971:  /* *neghi_1_zextdi */
    case 969:  /* *neghi_1_zextsi */
    case 967:  /* *negqi_1_zextdi */
    case 965:  /* *negqi_1_zextsi */
    case 963:  /* *negqi_1_zexthi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 10347:  /* *vcvtneps2bf16_v4sf */
    case 9488:  /* vec_set_hi_v32qi */
    case 9486:  /* vec_set_hi_v16bf */
    case 9485:  /* vec_set_hi_v16hf */
    case 9484:  /* vec_set_hi_v16hi */
    case 9479:  /* vec_set_hi_v8sf */
    case 9477:  /* vec_set_hi_v8si */
    case 9471:  /* vec_set_hi_v4df */
    case 9469:  /* vec_set_hi_v4di */
    case 8415:  /* vec_set_hi_v8di */
    case 8413:  /* vec_set_hi_v8df */
    case 8407:  /* vec_set_hi_v16si */
    case 8405:  /* vec_set_hi_v16sf */
    case 8076:  /* *iornotv2di3 */
    case 8075:  /* *iornotv4di3 */
    case 8074:  /* *iornotv4si3 */
    case 8073:  /* *iornotv8si3 */
    case 8072:  /* *iornotv8hi3 */
    case 8071:  /* *iornotv16hi3 */
    case 8070:  /* *iornotv32hi3 */
    case 8069:  /* *iornotv16qi3 */
    case 8068:  /* *iornotv32qi3 */
    case 8067:  /* *iornotv64qi3 */
    case 8066:  /* *iornotv8di3 */
    case 8065:  /* *iornotv16si3 */
    case 8001:  /* *andnotv2di3 */
    case 8000:  /* *andnotv4di3 */
    case 7999:  /* *andnotv4si3 */
    case 7998:  /* *andnotv8si3 */
    case 7997:  /* *andnotv8hi3 */
    case 7996:  /* *andnotv16hi3 */
    case 7995:  /* *andnotv32hi3 */
    case 7994:  /* *andnotv16qi3 */
    case 7993:  /* *andnotv32qi3 */
    case 7992:  /* *andnotv64qi3 */
    case 7991:  /* *andnotv8di3 */
    case 7990:  /* *andnotv16si3 */
    case 7431:  /* avx512vl_us_truncatev2div2si2 */
    case 7430:  /* avx512vl_truncatev2div2si2 */
    case 7429:  /* avx512vl_ss_truncatev2div2si2 */
    case 7382:  /* avx512vl_us_truncatev4siv4hi2 */
    case 7381:  /* avx512vl_truncatev4siv4hi2 */
    case 7380:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 7379:  /* avx512vl_us_truncatev2div2hi2 */
    case 7378:  /* avx512vl_truncatev2div2hi2 */
    case 7377:  /* avx512vl_ss_truncatev2div2hi2 */
    case 7376:  /* avx512vl_us_truncatev4div4hi2 */
    case 7375:  /* avx512vl_truncatev4div4hi2 */
    case 7374:  /* avx512vl_ss_truncatev4div4hi2 */
    case 7297:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 7296:  /* avx512vl_truncatev8hiv8qi2 */
    case 7295:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 7294:  /* avx512vl_us_truncatev4siv4qi2 */
    case 7293:  /* avx512vl_truncatev4siv4qi2 */
    case 7292:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 7291:  /* avx512vl_us_truncatev8siv8qi2 */
    case 7290:  /* avx512vl_truncatev8siv8qi2 */
    case 7289:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 7288:  /* avx512vl_us_truncatev2div2qi2 */
    case 7287:  /* avx512vl_truncatev2div2qi2 */
    case 7286:  /* avx512vl_ss_truncatev2div2qi2 */
    case 7285:  /* avx512vl_us_truncatev4div4qi2 */
    case 7284:  /* avx512vl_truncatev4div4qi2 */
    case 7283:  /* avx512vl_ss_truncatev4div4qi2 */
    case 7218:  /* sse2_loadhpd */
    case 5281:  /* sse_loadhps */
    case 5186:  /* *sse2_cvtpd2ps */
    case 4990:  /* *avx512dq_floatunsv2div2sf2 */
    case 4989:  /* *avx512dq_floatv2div2sf2 */
    case 4759:  /* *avx512fp16_vcvtpd2ph_v2df */
    case 4753:  /* *avx512fp16_vcvtps2ph_v4sf */
    case 4752:  /* *avx512fp16_vcvtpd2ph_v4df */
    case 4541:  /* *avx512fp16_vcvtuqq2ph_v2di */
    case 4540:  /* *avx512fp16_vcvtqq2ph_v2di */
    case 4529:  /* *avx512fp16_vcvtuqq2ph_v4di */
    case 4528:  /* *avx512fp16_vcvtqq2ph_v4di */
    case 4527:  /* *avx512fp16_vcvtudq2ph_v4si */
    case 4526:  /* *avx512fp16_vcvtdq2ph_v4si */
    case 3784:  /* *andnotv1ti3 */
    case 3783:  /* *andnottf3 */
    case 3782:  /* *andnotdf3 */
    case 3781:  /* *andnotsf3 */
    case 3780:  /* *andnothf3 */
    case 3779:  /* *andnotbf3 */
    case 3711:  /* avx512f_andnotv8df3 */
    case 3709:  /* avx512f_andnotv16sf3 */
    case 3708:  /* avx512fp16_andnotv32hf3 */
    case 3707:  /* avx512bf16_andnotv32bf3 */
    case 3705:  /* sse2_andnotv2df3 */
    case 3703:  /* avx_andnotv4df3 */
    case 3701:  /* sse_andnotv4sf3 */
    case 3699:  /* avx_andnotv8sf3 */
    case 3698:  /* avx512fp16_andnotv8hf3 */
    case 3697:  /* avx512fp16_andnotv16hf3 */
    case 3696:  /* avx512bf16_andnotv8bf3 */
    case 3695:  /* avx512bf16_andnotv16bf3 */
    case 2948:  /* sse2_vmsqrtv2df2 */
    case 2944:  /* sse_vmsqrtv4sf2 */
    case 2940:  /* avx512fp16_vmsqrtv8hf2 */
    case 2555:  /* *sse2_movq128_v2df */
    case 2554:  /* *sse2_movq128_v2di */
    case 2270:  /* mmx_andnotv2si3 */
    case 2269:  /* mmx_andnotv4hi3 */
    case 2268:  /* mmx_andnotv8qi3 */
    case 2110:  /* *mmx_andnotv4hf3 */
    case 2109:  /* *mmx_andnotv2hf3 */
    case 2108:  /* *mmx_andnotv4bf3 */
    case 2107:  /* *mmx_andnotv2bf3 */
    case 2076:  /* *mmx_andnotv2sf3 */
    case 1480:  /* *sibcall_value */
    case 1479:  /* *sibcall_value */
    case 1476:  /* *call_value */
    case 1475:  /* *call_value */
    case 951:  /* *concatditi3_7 */
    case 950:  /* *concatditi3_7 */
    case 949:  /* *concatditi3_7 */
    case 948:  /* *concatsidi3_7 */
    case 947:  /* *concatsidi3_7 */
    case 946:  /* *concatsidi3_7 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 945:  /* *concatditi3_6 */
    case 944:  /* *concatditi3_6 */
    case 943:  /* *concatditi3_6 */
    case 942:  /* *concatditi3_6 */
    case 941:  /* *concatditi3_6 */
    case 940:  /* *concatditi3_6 */
    case 939:  /* *concatsidi3_6 */
    case 938:  /* *concatsidi3_6 */
    case 937:  /* *concatsidi3_6 */
    case 936:  /* *concatsidi3_6 */
    case 935:  /* *concatsidi3_6 */
    case 934:  /* *concatsidi3_6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 927:  /* *concatditi3_4 */
    case 926:  /* *concatditi3_4 */
    case 925:  /* *concatditi3_4 */
    case 924:  /* *concatditi3_4 */
    case 923:  /* *concatditi3_4 */
    case 922:  /* *concatditi3_4 */
    case 921:  /* *concatsidi3_4 */
    case 920:  /* *concatsidi3_4 */
    case 919:  /* *concatsidi3_4 */
    case 918:  /* *concatsidi3_4 */
    case 917:  /* *concatsidi3_4 */
    case 916:  /* *concatsidi3_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 915:  /* *concatditi3_3 */
    case 914:  /* *concatditi3_3 */
    case 913:  /* *concatditi3_3 */
    case 912:  /* *concatditi3_3 */
    case 911:  /* *concatditi3_3 */
    case 910:  /* *concatditi3_3 */
    case 909:  /* *concatsidi3_3 */
    case 908:  /* *concatsidi3_3 */
    case 907:  /* *concatsidi3_3 */
    case 906:  /* *concatsidi3_3 */
    case 905:  /* *concatsidi3_3 */
    case 904:  /* *concatsidi3_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 903:  /* *concatditi3_2 */
    case 902:  /* *concatditi3_2 */
    case 901:  /* *concatditi3_2 */
    case 900:  /* *concatsidi3_2 */
    case 899:  /* *concatsidi3_2 */
    case 898:  /* *concatsidi3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 897:  /* *concatditi3_1 */
    case 896:  /* *concatditi3_1 */
    case 895:  /* *concatditi3_1 */
    case 894:  /* *concatsidi3_1 */
    case 893:  /* *concatsidi3_1 */
    case 892:  /* *concatsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 883:  /* *xorsi_2_zext_imm */
    case 882:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 842:  /* *xor2andn */
    case 841:  /* *xor2andn */
    case 840:  /* *xor2andn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 818:  /* *andn_di_ccno */
    case 817:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 2587:  /* kandndi */
    case 2586:  /* kandnsi */
    case 2585:  /* kandnhi */
    case 2584:  /* kandnqi */
    case 2273:  /* *andnotv2hi3 */
    case 2272:  /* *andnotv2qi3 */
    case 2271:  /* *andnotv4qi3 */
    case 1655:  /* *tls_local_dynamic_base_64_di */
    case 1654:  /* *tls_local_dynamic_base_64_si */
    case 1482:  /* *sibcall_value_memory */
    case 1481:  /* *sibcall_value_memory */
    case 1061:  /* *ashlti3_doubleword_highpart */
    case 1060:  /* *ashlti3_doubleword_highpart */
    case 1059:  /* *ashldi3_doubleword_highpart */
    case 1058:  /* *ashldi3_doubleword_highpart */
    case 866:  /* *xorsi_1_zext_imm */
    case 865:  /* *iorsi_1_zext_imm */
    case 816:  /* *andnhi_1 */
    case 815:  /* *andnqi_1 */
    case 814:  /* *andndi_1 */
    case 813:  /* *andnsi_1 */
    case 812:  /* *andnti3_doubleword */
    case 811:  /* *andndi3_doubleword */
    case 810:  /* *andnti3_doubleword_bmi */
    case 809:  /* *andndi3_doubleword_bmi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 808:  /* *xorqi_extdi_3 */
    case 807:  /* *iorqi_extdi_3 */
    case 806:  /* *andqi_extdi_3 */
    case 805:  /* *xorqi_extsi_3 */
    case 804:  /* *iorqi_extsi_3 */
    case 803:  /* *andqi_extsi_3 */
    case 802:  /* *xorqi_exthi_3 */
    case 801:  /* *iorqi_exthi_3 */
    case 800:  /* *andqi_exthi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 790:  /* *xorqi_extdi_1_cc */
    case 789:  /* *iorqi_extdi_1_cc */
    case 788:  /* *andqi_extdi_1_cc */
    case 787:  /* *xorqi_extsi_1_cc */
    case 786:  /* *iorqi_extsi_1_cc */
    case 785:  /* *andqi_extsi_1_cc */
    case 784:  /* *xorqi_exthi_1_cc */
    case 783:  /* *iorqi_exthi_1_cc */
    case 782:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 702:  /* *testti_not_doubleword */
    case 701:  /* *testdi_not_doubleword */
    case 700:  /* *testdi_not */
    case 699:  /* *testsi_not */
    case 698:  /* *testhi_not */
    case 697:  /* *testqi_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 696:  /* *testqi_ext_3 */
    case 695:  /* *testqi_ext_3 */
    case 694:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 692:  /* *testqi_extdi_2 */
    case 691:  /* *testqi_extsi_2 */
    case 690:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 689:  /* *testqi_extdi_1 */
    case 688:  /* *testqi_extsi_1 */
    case 687:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 681:  /* udivmodhiqi3 */
    case 679:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 680:  /* udivmodhiqi3_nf */
    case 678:  /* divmodhiqi3_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 676:  /* *udivmodsi4_noext_zext_2 */
    case 675:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 674:  /* *udivmodsi4_noext_zext_1 */
    case 673:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 672:  /* *udivmoddi4_noext */
    case 671:  /* *divmoddi4_noext */
    case 670:  /* *udivmodsi4_noext */
    case 669:  /* *divmodsi4_noext */
    case 668:  /* *udivmodhi4_noext */
    case 667:  /* *divmodhi4_noext */
    case 666:  /* *udivmoddi4_noext_nf */
    case 665:  /* *divmoddi4_noext_nf */
    case 664:  /* *udivmodsi4_noext_nf */
    case 663:  /* *divmodsi4_noext_nf */
    case 662:  /* *udivmodhi4_noext_nf */
    case 661:  /* *divmodhi4_noext_nf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 660:  /* *udivmodsi4_pow2_zext_2 */
    case 659:  /* *udivmodsi4_zext_2 */
    case 658:  /* *divmodsi4_zext_2 */
    case 646:  /* udivmodsi4_zext_2 */
    case 645:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 657:  /* *udivmodsi4_pow2_zext_1 */
    case 656:  /* *udivmodsi4_zext_1 */
    case 655:  /* *divmodsi4_zext_1 */
    case 644:  /* udivmodsi4_zext_1 */
    case 643:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 636:  /* *umulsi3_highpart_zext */
    case 635:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 638:  /* *umulsi3_highpart_1 */
    case 637:  /* *smulsi3_highpart_1 */
    case 634:  /* *umuldi3_highpart_1 */
    case 633:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 632:  /* *umulsi3_highpart_zext */
    case 631:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 630:  /* umuldi3_highpart */
    case 629:  /* smuldi3_highpart */
    case 628:  /* umulsi3_highpart */
    case 627:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8311:  /* sse2_packssdw */
    case 8305:  /* sse2_packsswb */
    case 8112:  /* *nandv2di3 */
    case 8111:  /* *norv2di3 */
    case 8110:  /* *nandv4di3 */
    case 8109:  /* *norv4di3 */
    case 8108:  /* *nandv4si3 */
    case 8107:  /* *norv4si3 */
    case 8106:  /* *nandv8si3 */
    case 8105:  /* *norv8si3 */
    case 8104:  /* *nandv8hi3 */
    case 8103:  /* *norv8hi3 */
    case 8102:  /* *nandv16hi3 */
    case 8101:  /* *norv16hi3 */
    case 8100:  /* *nandv32hi3 */
    case 8099:  /* *norv32hi3 */
    case 8098:  /* *nandv16qi3 */
    case 8097:  /* *norv16qi3 */
    case 8096:  /* *nandv32qi3 */
    case 8095:  /* *norv32qi3 */
    case 8094:  /* *nandv64qi3 */
    case 8093:  /* *norv64qi3 */
    case 8092:  /* *nandv8di3 */
    case 8091:  /* *norv8di3 */
    case 8090:  /* *nandv16si3 */
    case 8089:  /* *norv16si3 */
    case 2294:  /* mmx_packssdw */
    case 2292:  /* mmx_packsswb */
    case 625:  /* *umulqihi3_1_nf */
    case 623:  /* *mulqihi3_1_nf */
    case 621:  /* *mulditi3_1_nf */
    case 619:  /* *mulsidi3_1_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 626:  /* *umulqihi3_1 */
    case 624:  /* *mulqihi3_1 */
    case 622:  /* *mulditi3_1 */
    case 620:  /* *mulsidi3_1 */
    case 618:  /* *umulditi3_1 */
    case 617:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 677:  /* *divmodsi4_const */
    case 654:  /* *udivmoddi4_pow2 */
    case 653:  /* *udivmodsi4_pow2 */
    case 652:  /* *udivmoddi4 */
    case 651:  /* *udivmodsi4 */
    case 650:  /* *udivmodhi4 */
    case 649:  /* *divmoddi4 */
    case 648:  /* *divmodsi4 */
    case 647:  /* *divmodhi4 */
    case 642:  /* udivmoddi4_1 */
    case 641:  /* udivmodsi4_1 */
    case 640:  /* divmoddi4_1 */
    case 639:  /* divmodsi4_1 */
    case 616:  /* *bmi2_umulditi3_1 */
    case 615:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 612:  /* *umulvdi4 */
    case 611:  /* *umulvsi4 */
    case 610:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 581:  /* *subdi3_eq_1 */
    case 580:  /* *subsi3_eq_1 */
    case 579:  /* *subhi3_eq_1 */
    case 578:  /* *subqi3_eq_1 */
    case 577:  /* *subdi3_ne */
    case 576:  /* *subsi3_ne */
    case 575:  /* *subhi3_ne */
    case 574:  /* *subqi3_ne */
    case 573:  /* *subdi3_eq */
    case 572:  /* *subsi3_eq */
    case 571:  /* *subhi3_eq */
    case 570:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 561:  /* *adddi3_ne */
    case 560:  /* *addsi3_ne */
    case 559:  /* *addhi3_ne */
    case 558:  /* *addqi3_ne */
    case 557:  /* *adddi3_eq */
    case 556:  /* *addsi3_eq */
    case 555:  /* *addhi3_eq */
    case 554:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 551:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 550:  /* *adddi3_cc_overflow_2 */
    case 549:  /* *addsi3_cc_overflow_2 */
    case 548:  /* *addhi3_cc_overflow_2 */
    case 547:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 546:  /* *adddi3_cconly_overflow_2 */
    case 545:  /* *addsi3_cconly_overflow_2 */
    case 544:  /* *addhi3_cconly_overflow_2 */
    case 543:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 542:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 553:  /* *addti3_doubleword_cc_overflow_1 */
    case 552:  /* *adddi3_doubleword_cc_overflow_1 */
    case 541:  /* adddi3_cc_overflow_1 */
    case 540:  /* addsi3_cc_overflow_1 */
    case 539:  /* addhi3_cc_overflow_1 */
    case 538:  /* addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 537:  /* *adddi3_cconly_overflow_1 */
    case 536:  /* *addsi3_cconly_overflow_1 */
    case 535:  /* *addhi3_cconly_overflow_1 */
    case 534:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 526:  /* *subborrowdi_1 */
    case 525:  /* *subborrowsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 524:  /* subborrowdi */
    case 523:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 522:  /* subdi3_carry_ccgz */
    case 521:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 520:  /* *subdi3_carry_ccc_1 */
    case 519:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 518:  /* subdi3_carry_ccc */
    case 517:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 504:  /* *subsi3_carry_zext */
    case 503:  /* *subhi3_carry_zextdi */
    case 502:  /* *subhi3_carry_zextsi */
    case 501:  /* *subqi3_carry_zextdi */
    case 500:  /* *subqi3_carry_zextsi */
    case 499:  /* *subqi3_carry_zexthi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 490:  /* subdi3_carry */
    case 489:  /* subsi3_carry */
    case 488:  /* subhi3_carry */
    case 487:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 486:  /* *addcarrydi_1 */
    case 485:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 484:  /* addcarrydi */
    case 483:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 482:  /* *addsi3_carry_zext_0r */
    case 481:  /* *addhi3_carry_zextdi_0r */
    case 480:  /* *addhi3_carry_zextsi_0r */
    case 479:  /* *addqi3_carry_zextdi_0r */
    case 478:  /* *addqi3_carry_zextsi_0r */
    case 477:  /* *addqi3_carry_zexthi_0r */
    case 476:  /* *addsi3_carry_zext_0 */
    case 475:  /* *addhi3_carry_zextdi_0 */
    case 474:  /* *addhi3_carry_zextsi_0 */
    case 473:  /* *addqi3_carry_zextdi_0 */
    case 472:  /* *addqi3_carry_zextsi_0 */
    case 471:  /* *addqi3_carry_zexthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 470:  /* *addsi3_carry_zext */
    case 469:  /* *addhi3_carry_zextdi */
    case 468:  /* *addhi3_carry_zextsi */
    case 467:  /* *addqi3_carry_zextdi */
    case 466:  /* *addqi3_carry_zextsi */
    case 465:  /* *addqi3_carry_zexthi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 464:  /* *adddi3_carry_0r */
    case 463:  /* *addsi3_carry_0r */
    case 462:  /* *addhi3_carry_0r */
    case 461:  /* *addqi3_carry_0r */
    case 460:  /* *adddi3_carry_0 */
    case 459:  /* *addsi3_carry_0 */
    case 458:  /* *addhi3_carry_0 */
    case 457:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 456:  /* adddi3_carry */
    case 455:  /* addsi3_carry */
    case 454:  /* addhi3_carry */
    case 453:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 452:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 451:  /* *dec_cmovdi */
    case 450:  /* *dec_cmovsi */
    case 449:  /* *dec_cmovhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 448:  /* *subdi_3 */
    case 447:  /* *subsi_3 */
    case 446:  /* *subhi_3 */
    case 445:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 444:  /* *subvdi4_overflow_2 */
    case 443:  /* *subvsi4_overflow_2 */
    case 442:  /* *subvhi4_overflow_2 */
    case 441:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 440:  /* *subvdi4_overflow_1 */
    case 439:  /* *subvsi4_overflow_1 */
    case 438:  /* *subvhi4_overflow_1 */
    case 437:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 418:  /* *subqi_extdi_0 */
    case 417:  /* *subqi_extsi_0 */
    case 416:  /* *subqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 407:  /* *subqi_extdi_1_slp */
    case 406:  /* *subqi_extsi_1_slp */
    case 405:  /* *subqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 589:  /* *subdi3_ne_0 */
    case 588:  /* *subsi3_ne_0 */
    case 587:  /* *subhi3_ne_0 */
    case 586:  /* *subqi3_ne_0 */
    case 585:  /* *subdi3_eq_0 */
    case 584:  /* *subsi3_eq_0 */
    case 583:  /* *subhi3_eq_0 */
    case 582:  /* *subqi3_eq_0 */
    case 383:  /* *subti3_doubleword_zext */
    case 382:  /* *subdi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 6818:  /* *avx512vl_vpternlogv2df_2 */
    case 6817:  /* *avx512vl_vpternlogv2df_2 */
    case 6816:  /* *avx512vl_vpternlogv2df_2 */
    case 6815:  /* *avx512vl_vpternlogv2df_2 */
    case 6814:  /* *avx512vl_vpternlogv2df_2 */
    case 6813:  /* *avx512vl_vpternlogv2df_2 */
    case 6812:  /* *avx512vl_vpternlogv2df_2 */
    case 6811:  /* *avx512vl_vpternlogv2df_2 */
    case 6810:  /* *avx512vl_vpternlogv2df_2 */
    case 6809:  /* *avx512vl_vpternlogv2df_2 */
    case 6808:  /* *avx512vl_vpternlogv2df_2 */
    case 6807:  /* *avx512vl_vpternlogv2df_2 */
    case 6806:  /* *avx512vl_vpternlogv2df_2 */
    case 6805:  /* *avx512vl_vpternlogv2df_2 */
    case 6804:  /* *avx512vl_vpternlogv2df_2 */
    case 6803:  /* *avx512vl_vpternlogv2df_2 */
    case 6802:  /* *avx512vl_vpternlogv2df_2 */
    case 6801:  /* *avx512vl_vpternlogv2df_2 */
    case 6800:  /* *avx512vl_vpternlogv2df_2 */
    case 6799:  /* *avx512vl_vpternlogv2df_2 */
    case 6798:  /* *avx512vl_vpternlogv2df_2 */
    case 6797:  /* *avx512vl_vpternlogv2df_2 */
    case 6796:  /* *avx512vl_vpternlogv2df_2 */
    case 6795:  /* *avx512vl_vpternlogv2df_2 */
    case 6794:  /* *avx512vl_vpternlogv2df_2 */
    case 6793:  /* *avx512vl_vpternlogv2df_2 */
    case 6792:  /* *avx512vl_vpternlogv2df_2 */
    case 6791:  /* *avx512vl_vpternlogv4df_2 */
    case 6790:  /* *avx512vl_vpternlogv4df_2 */
    case 6789:  /* *avx512vl_vpternlogv4df_2 */
    case 6788:  /* *avx512vl_vpternlogv4df_2 */
    case 6787:  /* *avx512vl_vpternlogv4df_2 */
    case 6786:  /* *avx512vl_vpternlogv4df_2 */
    case 6785:  /* *avx512vl_vpternlogv4df_2 */
    case 6784:  /* *avx512vl_vpternlogv4df_2 */
    case 6783:  /* *avx512vl_vpternlogv4df_2 */
    case 6782:  /* *avx512vl_vpternlogv4df_2 */
    case 6781:  /* *avx512vl_vpternlogv4df_2 */
    case 6780:  /* *avx512vl_vpternlogv4df_2 */
    case 6779:  /* *avx512vl_vpternlogv4df_2 */
    case 6778:  /* *avx512vl_vpternlogv4df_2 */
    case 6777:  /* *avx512vl_vpternlogv4df_2 */
    case 6776:  /* *avx512vl_vpternlogv4df_2 */
    case 6775:  /* *avx512vl_vpternlogv4df_2 */
    case 6774:  /* *avx512vl_vpternlogv4df_2 */
    case 6773:  /* *avx512vl_vpternlogv4df_2 */
    case 6772:  /* *avx512vl_vpternlogv4df_2 */
    case 6771:  /* *avx512vl_vpternlogv4df_2 */
    case 6770:  /* *avx512vl_vpternlogv4df_2 */
    case 6769:  /* *avx512vl_vpternlogv4df_2 */
    case 6768:  /* *avx512vl_vpternlogv4df_2 */
    case 6767:  /* *avx512vl_vpternlogv4df_2 */
    case 6766:  /* *avx512vl_vpternlogv4df_2 */
    case 6765:  /* *avx512vl_vpternlogv4df_2 */
    case 6764:  /* *avx512f_vpternlogv8df_2 */
    case 6763:  /* *avx512f_vpternlogv8df_2 */
    case 6762:  /* *avx512f_vpternlogv8df_2 */
    case 6761:  /* *avx512f_vpternlogv8df_2 */
    case 6760:  /* *avx512f_vpternlogv8df_2 */
    case 6759:  /* *avx512f_vpternlogv8df_2 */
    case 6758:  /* *avx512f_vpternlogv8df_2 */
    case 6757:  /* *avx512f_vpternlogv8df_2 */
    case 6756:  /* *avx512f_vpternlogv8df_2 */
    case 6755:  /* *avx512f_vpternlogv8df_2 */
    case 6754:  /* *avx512f_vpternlogv8df_2 */
    case 6753:  /* *avx512f_vpternlogv8df_2 */
    case 6752:  /* *avx512f_vpternlogv8df_2 */
    case 6751:  /* *avx512f_vpternlogv8df_2 */
    case 6750:  /* *avx512f_vpternlogv8df_2 */
    case 6749:  /* *avx512f_vpternlogv8df_2 */
    case 6748:  /* *avx512f_vpternlogv8df_2 */
    case 6747:  /* *avx512f_vpternlogv8df_2 */
    case 6746:  /* *avx512f_vpternlogv8df_2 */
    case 6745:  /* *avx512f_vpternlogv8df_2 */
    case 6744:  /* *avx512f_vpternlogv8df_2 */
    case 6743:  /* *avx512f_vpternlogv8df_2 */
    case 6742:  /* *avx512f_vpternlogv8df_2 */
    case 6741:  /* *avx512f_vpternlogv8df_2 */
    case 6740:  /* *avx512f_vpternlogv8df_2 */
    case 6739:  /* *avx512f_vpternlogv8df_2 */
    case 6738:  /* *avx512f_vpternlogv8df_2 */
    case 6737:  /* *avx512vl_vpternlogv4sf_2 */
    case 6736:  /* *avx512vl_vpternlogv4sf_2 */
    case 6735:  /* *avx512vl_vpternlogv4sf_2 */
    case 6734:  /* *avx512vl_vpternlogv4sf_2 */
    case 6733:  /* *avx512vl_vpternlogv4sf_2 */
    case 6732:  /* *avx512vl_vpternlogv4sf_2 */
    case 6731:  /* *avx512vl_vpternlogv4sf_2 */
    case 6730:  /* *avx512vl_vpternlogv4sf_2 */
    case 6729:  /* *avx512vl_vpternlogv4sf_2 */
    case 6728:  /* *avx512vl_vpternlogv4sf_2 */
    case 6727:  /* *avx512vl_vpternlogv4sf_2 */
    case 6726:  /* *avx512vl_vpternlogv4sf_2 */
    case 6725:  /* *avx512vl_vpternlogv4sf_2 */
    case 6724:  /* *avx512vl_vpternlogv4sf_2 */
    case 6723:  /* *avx512vl_vpternlogv4sf_2 */
    case 6722:  /* *avx512vl_vpternlogv4sf_2 */
    case 6721:  /* *avx512vl_vpternlogv4sf_2 */
    case 6720:  /* *avx512vl_vpternlogv4sf_2 */
    case 6719:  /* *avx512vl_vpternlogv4sf_2 */
    case 6718:  /* *avx512vl_vpternlogv4sf_2 */
    case 6717:  /* *avx512vl_vpternlogv4sf_2 */
    case 6716:  /* *avx512vl_vpternlogv4sf_2 */
    case 6715:  /* *avx512vl_vpternlogv4sf_2 */
    case 6714:  /* *avx512vl_vpternlogv4sf_2 */
    case 6713:  /* *avx512vl_vpternlogv4sf_2 */
    case 6712:  /* *avx512vl_vpternlogv4sf_2 */
    case 6711:  /* *avx512vl_vpternlogv4sf_2 */
    case 6710:  /* *avx512vl_vpternlogv8sf_2 */
    case 6709:  /* *avx512vl_vpternlogv8sf_2 */
    case 6708:  /* *avx512vl_vpternlogv8sf_2 */
    case 6707:  /* *avx512vl_vpternlogv8sf_2 */
    case 6706:  /* *avx512vl_vpternlogv8sf_2 */
    case 6705:  /* *avx512vl_vpternlogv8sf_2 */
    case 6704:  /* *avx512vl_vpternlogv8sf_2 */
    case 6703:  /* *avx512vl_vpternlogv8sf_2 */
    case 6702:  /* *avx512vl_vpternlogv8sf_2 */
    case 6701:  /* *avx512vl_vpternlogv8sf_2 */
    case 6700:  /* *avx512vl_vpternlogv8sf_2 */
    case 6699:  /* *avx512vl_vpternlogv8sf_2 */
    case 6698:  /* *avx512vl_vpternlogv8sf_2 */
    case 6697:  /* *avx512vl_vpternlogv8sf_2 */
    case 6696:  /* *avx512vl_vpternlogv8sf_2 */
    case 6695:  /* *avx512vl_vpternlogv8sf_2 */
    case 6694:  /* *avx512vl_vpternlogv8sf_2 */
    case 6693:  /* *avx512vl_vpternlogv8sf_2 */
    case 6692:  /* *avx512vl_vpternlogv8sf_2 */
    case 6691:  /* *avx512vl_vpternlogv8sf_2 */
    case 6690:  /* *avx512vl_vpternlogv8sf_2 */
    case 6689:  /* *avx512vl_vpternlogv8sf_2 */
    case 6688:  /* *avx512vl_vpternlogv8sf_2 */
    case 6687:  /* *avx512vl_vpternlogv8sf_2 */
    case 6686:  /* *avx512vl_vpternlogv8sf_2 */
    case 6685:  /* *avx512vl_vpternlogv8sf_2 */
    case 6684:  /* *avx512vl_vpternlogv8sf_2 */
    case 6683:  /* *avx512f_vpternlogv16sf_2 */
    case 6682:  /* *avx512f_vpternlogv16sf_2 */
    case 6681:  /* *avx512f_vpternlogv16sf_2 */
    case 6680:  /* *avx512f_vpternlogv16sf_2 */
    case 6679:  /* *avx512f_vpternlogv16sf_2 */
    case 6678:  /* *avx512f_vpternlogv16sf_2 */
    case 6677:  /* *avx512f_vpternlogv16sf_2 */
    case 6676:  /* *avx512f_vpternlogv16sf_2 */
    case 6675:  /* *avx512f_vpternlogv16sf_2 */
    case 6674:  /* *avx512f_vpternlogv16sf_2 */
    case 6673:  /* *avx512f_vpternlogv16sf_2 */
    case 6672:  /* *avx512f_vpternlogv16sf_2 */
    case 6671:  /* *avx512f_vpternlogv16sf_2 */
    case 6670:  /* *avx512f_vpternlogv16sf_2 */
    case 6669:  /* *avx512f_vpternlogv16sf_2 */
    case 6668:  /* *avx512f_vpternlogv16sf_2 */
    case 6667:  /* *avx512f_vpternlogv16sf_2 */
    case 6666:  /* *avx512f_vpternlogv16sf_2 */
    case 6665:  /* *avx512f_vpternlogv16sf_2 */
    case 6664:  /* *avx512f_vpternlogv16sf_2 */
    case 6663:  /* *avx512f_vpternlogv16sf_2 */
    case 6662:  /* *avx512f_vpternlogv16sf_2 */
    case 6661:  /* *avx512f_vpternlogv16sf_2 */
    case 6660:  /* *avx512f_vpternlogv16sf_2 */
    case 6659:  /* *avx512f_vpternlogv16sf_2 */
    case 6658:  /* *avx512f_vpternlogv16sf_2 */
    case 6657:  /* *avx512f_vpternlogv16sf_2 */
    case 6656:  /* *avx512vl_vpternlogv8bf_2 */
    case 6655:  /* *avx512vl_vpternlogv8bf_2 */
    case 6654:  /* *avx512vl_vpternlogv8bf_2 */
    case 6653:  /* *avx512vl_vpternlogv8bf_2 */
    case 6652:  /* *avx512vl_vpternlogv8bf_2 */
    case 6651:  /* *avx512vl_vpternlogv8bf_2 */
    case 6650:  /* *avx512vl_vpternlogv8bf_2 */
    case 6649:  /* *avx512vl_vpternlogv8bf_2 */
    case 6648:  /* *avx512vl_vpternlogv8bf_2 */
    case 6647:  /* *avx512vl_vpternlogv8bf_2 */
    case 6646:  /* *avx512vl_vpternlogv8bf_2 */
    case 6645:  /* *avx512vl_vpternlogv8bf_2 */
    case 6644:  /* *avx512vl_vpternlogv8bf_2 */
    case 6643:  /* *avx512vl_vpternlogv8bf_2 */
    case 6642:  /* *avx512vl_vpternlogv8bf_2 */
    case 6641:  /* *avx512vl_vpternlogv8bf_2 */
    case 6640:  /* *avx512vl_vpternlogv8bf_2 */
    case 6639:  /* *avx512vl_vpternlogv8bf_2 */
    case 6638:  /* *avx512vl_vpternlogv8bf_2 */
    case 6637:  /* *avx512vl_vpternlogv8bf_2 */
    case 6636:  /* *avx512vl_vpternlogv8bf_2 */
    case 6635:  /* *avx512vl_vpternlogv8bf_2 */
    case 6634:  /* *avx512vl_vpternlogv8bf_2 */
    case 6633:  /* *avx512vl_vpternlogv8bf_2 */
    case 6632:  /* *avx512vl_vpternlogv8bf_2 */
    case 6631:  /* *avx512vl_vpternlogv8bf_2 */
    case 6630:  /* *avx512vl_vpternlogv8bf_2 */
    case 6629:  /* *avx512vl_vpternlogv16bf_2 */
    case 6628:  /* *avx512vl_vpternlogv16bf_2 */
    case 6627:  /* *avx512vl_vpternlogv16bf_2 */
    case 6626:  /* *avx512vl_vpternlogv16bf_2 */
    case 6625:  /* *avx512vl_vpternlogv16bf_2 */
    case 6624:  /* *avx512vl_vpternlogv16bf_2 */
    case 6623:  /* *avx512vl_vpternlogv16bf_2 */
    case 6622:  /* *avx512vl_vpternlogv16bf_2 */
    case 6621:  /* *avx512vl_vpternlogv16bf_2 */
    case 6620:  /* *avx512vl_vpternlogv16bf_2 */
    case 6619:  /* *avx512vl_vpternlogv16bf_2 */
    case 6618:  /* *avx512vl_vpternlogv16bf_2 */
    case 6617:  /* *avx512vl_vpternlogv16bf_2 */
    case 6616:  /* *avx512vl_vpternlogv16bf_2 */
    case 6615:  /* *avx512vl_vpternlogv16bf_2 */
    case 6614:  /* *avx512vl_vpternlogv16bf_2 */
    case 6613:  /* *avx512vl_vpternlogv16bf_2 */
    case 6612:  /* *avx512vl_vpternlogv16bf_2 */
    case 6611:  /* *avx512vl_vpternlogv16bf_2 */
    case 6610:  /* *avx512vl_vpternlogv16bf_2 */
    case 6609:  /* *avx512vl_vpternlogv16bf_2 */
    case 6608:  /* *avx512vl_vpternlogv16bf_2 */
    case 6607:  /* *avx512vl_vpternlogv16bf_2 */
    case 6606:  /* *avx512vl_vpternlogv16bf_2 */
    case 6605:  /* *avx512vl_vpternlogv16bf_2 */
    case 6604:  /* *avx512vl_vpternlogv16bf_2 */
    case 6603:  /* *avx512vl_vpternlogv16bf_2 */
    case 6602:  /* *avx512bw_vpternlogv32bf_2 */
    case 6601:  /* *avx512bw_vpternlogv32bf_2 */
    case 6600:  /* *avx512bw_vpternlogv32bf_2 */
    case 6599:  /* *avx512bw_vpternlogv32bf_2 */
    case 6598:  /* *avx512bw_vpternlogv32bf_2 */
    case 6597:  /* *avx512bw_vpternlogv32bf_2 */
    case 6596:  /* *avx512bw_vpternlogv32bf_2 */
    case 6595:  /* *avx512bw_vpternlogv32bf_2 */
    case 6594:  /* *avx512bw_vpternlogv32bf_2 */
    case 6593:  /* *avx512bw_vpternlogv32bf_2 */
    case 6592:  /* *avx512bw_vpternlogv32bf_2 */
    case 6591:  /* *avx512bw_vpternlogv32bf_2 */
    case 6590:  /* *avx512bw_vpternlogv32bf_2 */
    case 6589:  /* *avx512bw_vpternlogv32bf_2 */
    case 6588:  /* *avx512bw_vpternlogv32bf_2 */
    case 6587:  /* *avx512bw_vpternlogv32bf_2 */
    case 6586:  /* *avx512bw_vpternlogv32bf_2 */
    case 6585:  /* *avx512bw_vpternlogv32bf_2 */
    case 6584:  /* *avx512bw_vpternlogv32bf_2 */
    case 6583:  /* *avx512bw_vpternlogv32bf_2 */
    case 6582:  /* *avx512bw_vpternlogv32bf_2 */
    case 6581:  /* *avx512bw_vpternlogv32bf_2 */
    case 6580:  /* *avx512bw_vpternlogv32bf_2 */
    case 6579:  /* *avx512bw_vpternlogv32bf_2 */
    case 6578:  /* *avx512bw_vpternlogv32bf_2 */
    case 6577:  /* *avx512bw_vpternlogv32bf_2 */
    case 6576:  /* *avx512bw_vpternlogv32bf_2 */
    case 6575:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6574:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6573:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6572:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6571:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6570:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6569:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6568:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6567:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6566:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6565:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6564:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6563:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6562:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6561:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6560:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6559:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6558:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6557:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6556:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6555:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6554:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6553:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6552:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6551:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6550:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6549:  /* *avx512fp16_vpternlogv8hf_2 */
    case 6548:  /* *avx512vl_vpternlogv16hf_2 */
    case 6547:  /* *avx512vl_vpternlogv16hf_2 */
    case 6546:  /* *avx512vl_vpternlogv16hf_2 */
    case 6545:  /* *avx512vl_vpternlogv16hf_2 */
    case 6544:  /* *avx512vl_vpternlogv16hf_2 */
    case 6543:  /* *avx512vl_vpternlogv16hf_2 */
    case 6542:  /* *avx512vl_vpternlogv16hf_2 */
    case 6541:  /* *avx512vl_vpternlogv16hf_2 */
    case 6540:  /* *avx512vl_vpternlogv16hf_2 */
    case 6539:  /* *avx512vl_vpternlogv16hf_2 */
    case 6538:  /* *avx512vl_vpternlogv16hf_2 */
    case 6537:  /* *avx512vl_vpternlogv16hf_2 */
    case 6536:  /* *avx512vl_vpternlogv16hf_2 */
    case 6535:  /* *avx512vl_vpternlogv16hf_2 */
    case 6534:  /* *avx512vl_vpternlogv16hf_2 */
    case 6533:  /* *avx512vl_vpternlogv16hf_2 */
    case 6532:  /* *avx512vl_vpternlogv16hf_2 */
    case 6531:  /* *avx512vl_vpternlogv16hf_2 */
    case 6530:  /* *avx512vl_vpternlogv16hf_2 */
    case 6529:  /* *avx512vl_vpternlogv16hf_2 */
    case 6528:  /* *avx512vl_vpternlogv16hf_2 */
    case 6527:  /* *avx512vl_vpternlogv16hf_2 */
    case 6526:  /* *avx512vl_vpternlogv16hf_2 */
    case 6525:  /* *avx512vl_vpternlogv16hf_2 */
    case 6524:  /* *avx512vl_vpternlogv16hf_2 */
    case 6523:  /* *avx512vl_vpternlogv16hf_2 */
    case 6522:  /* *avx512vl_vpternlogv16hf_2 */
    case 6521:  /* *avx512bw_vpternlogv32hf_2 */
    case 6520:  /* *avx512bw_vpternlogv32hf_2 */
    case 6519:  /* *avx512bw_vpternlogv32hf_2 */
    case 6518:  /* *avx512bw_vpternlogv32hf_2 */
    case 6517:  /* *avx512bw_vpternlogv32hf_2 */
    case 6516:  /* *avx512bw_vpternlogv32hf_2 */
    case 6515:  /* *avx512bw_vpternlogv32hf_2 */
    case 6514:  /* *avx512bw_vpternlogv32hf_2 */
    case 6513:  /* *avx512bw_vpternlogv32hf_2 */
    case 6512:  /* *avx512bw_vpternlogv32hf_2 */
    case 6511:  /* *avx512bw_vpternlogv32hf_2 */
    case 6510:  /* *avx512bw_vpternlogv32hf_2 */
    case 6509:  /* *avx512bw_vpternlogv32hf_2 */
    case 6508:  /* *avx512bw_vpternlogv32hf_2 */
    case 6507:  /* *avx512bw_vpternlogv32hf_2 */
    case 6506:  /* *avx512bw_vpternlogv32hf_2 */
    case 6505:  /* *avx512bw_vpternlogv32hf_2 */
    case 6504:  /* *avx512bw_vpternlogv32hf_2 */
    case 6503:  /* *avx512bw_vpternlogv32hf_2 */
    case 6502:  /* *avx512bw_vpternlogv32hf_2 */
    case 6501:  /* *avx512bw_vpternlogv32hf_2 */
    case 6500:  /* *avx512bw_vpternlogv32hf_2 */
    case 6499:  /* *avx512bw_vpternlogv32hf_2 */
    case 6498:  /* *avx512bw_vpternlogv32hf_2 */
    case 6497:  /* *avx512bw_vpternlogv32hf_2 */
    case 6496:  /* *avx512bw_vpternlogv32hf_2 */
    case 6495:  /* *avx512bw_vpternlogv32hf_2 */
    case 6494:  /* *avx512vl_vpternlogv2di_2 */
    case 6493:  /* *avx512vl_vpternlogv2di_2 */
    case 6492:  /* *avx512vl_vpternlogv2di_2 */
    case 6491:  /* *avx512vl_vpternlogv2di_2 */
    case 6490:  /* *avx512vl_vpternlogv2di_2 */
    case 6489:  /* *avx512vl_vpternlogv2di_2 */
    case 6488:  /* *avx512vl_vpternlogv2di_2 */
    case 6487:  /* *avx512vl_vpternlogv2di_2 */
    case 6486:  /* *avx512vl_vpternlogv2di_2 */
    case 6485:  /* *avx512vl_vpternlogv2di_2 */
    case 6484:  /* *avx512vl_vpternlogv2di_2 */
    case 6483:  /* *avx512vl_vpternlogv2di_2 */
    case 6482:  /* *avx512vl_vpternlogv2di_2 */
    case 6481:  /* *avx512vl_vpternlogv2di_2 */
    case 6480:  /* *avx512vl_vpternlogv2di_2 */
    case 6479:  /* *avx512vl_vpternlogv2di_2 */
    case 6478:  /* *avx512vl_vpternlogv2di_2 */
    case 6477:  /* *avx512vl_vpternlogv2di_2 */
    case 6476:  /* *avx512vl_vpternlogv2di_2 */
    case 6475:  /* *avx512vl_vpternlogv2di_2 */
    case 6474:  /* *avx512vl_vpternlogv2di_2 */
    case 6473:  /* *avx512vl_vpternlogv2di_2 */
    case 6472:  /* *avx512vl_vpternlogv2di_2 */
    case 6471:  /* *avx512vl_vpternlogv2di_2 */
    case 6470:  /* *avx512vl_vpternlogv2di_2 */
    case 6469:  /* *avx512vl_vpternlogv2di_2 */
    case 6468:  /* *avx512vl_vpternlogv2di_2 */
    case 6467:  /* *avx512vl_vpternlogv4di_2 */
    case 6466:  /* *avx512vl_vpternlogv4di_2 */
    case 6465:  /* *avx512vl_vpternlogv4di_2 */
    case 6464:  /* *avx512vl_vpternlogv4di_2 */
    case 6463:  /* *avx512vl_vpternlogv4di_2 */
    case 6462:  /* *avx512vl_vpternlogv4di_2 */
    case 6461:  /* *avx512vl_vpternlogv4di_2 */
    case 6460:  /* *avx512vl_vpternlogv4di_2 */
    case 6459:  /* *avx512vl_vpternlogv4di_2 */
    case 6458:  /* *avx512vl_vpternlogv4di_2 */
    case 6457:  /* *avx512vl_vpternlogv4di_2 */
    case 6456:  /* *avx512vl_vpternlogv4di_2 */
    case 6455:  /* *avx512vl_vpternlogv4di_2 */
    case 6454:  /* *avx512vl_vpternlogv4di_2 */
    case 6453:  /* *avx512vl_vpternlogv4di_2 */
    case 6452:  /* *avx512vl_vpternlogv4di_2 */
    case 6451:  /* *avx512vl_vpternlogv4di_2 */
    case 6450:  /* *avx512vl_vpternlogv4di_2 */
    case 6449:  /* *avx512vl_vpternlogv4di_2 */
    case 6448:  /* *avx512vl_vpternlogv4di_2 */
    case 6447:  /* *avx512vl_vpternlogv4di_2 */
    case 6446:  /* *avx512vl_vpternlogv4di_2 */
    case 6445:  /* *avx512vl_vpternlogv4di_2 */
    case 6444:  /* *avx512vl_vpternlogv4di_2 */
    case 6443:  /* *avx512vl_vpternlogv4di_2 */
    case 6442:  /* *avx512vl_vpternlogv4di_2 */
    case 6441:  /* *avx512vl_vpternlogv4di_2 */
    case 6440:  /* *avx512f_vpternlogv8di_2 */
    case 6439:  /* *avx512f_vpternlogv8di_2 */
    case 6438:  /* *avx512f_vpternlogv8di_2 */
    case 6437:  /* *avx512f_vpternlogv8di_2 */
    case 6436:  /* *avx512f_vpternlogv8di_2 */
    case 6435:  /* *avx512f_vpternlogv8di_2 */
    case 6434:  /* *avx512f_vpternlogv8di_2 */
    case 6433:  /* *avx512f_vpternlogv8di_2 */
    case 6432:  /* *avx512f_vpternlogv8di_2 */
    case 6431:  /* *avx512f_vpternlogv8di_2 */
    case 6430:  /* *avx512f_vpternlogv8di_2 */
    case 6429:  /* *avx512f_vpternlogv8di_2 */
    case 6428:  /* *avx512f_vpternlogv8di_2 */
    case 6427:  /* *avx512f_vpternlogv8di_2 */
    case 6426:  /* *avx512f_vpternlogv8di_2 */
    case 6425:  /* *avx512f_vpternlogv8di_2 */
    case 6424:  /* *avx512f_vpternlogv8di_2 */
    case 6423:  /* *avx512f_vpternlogv8di_2 */
    case 6422:  /* *avx512f_vpternlogv8di_2 */
    case 6421:  /* *avx512f_vpternlogv8di_2 */
    case 6420:  /* *avx512f_vpternlogv8di_2 */
    case 6419:  /* *avx512f_vpternlogv8di_2 */
    case 6418:  /* *avx512f_vpternlogv8di_2 */
    case 6417:  /* *avx512f_vpternlogv8di_2 */
    case 6416:  /* *avx512f_vpternlogv8di_2 */
    case 6415:  /* *avx512f_vpternlogv8di_2 */
    case 6414:  /* *avx512f_vpternlogv8di_2 */
    case 6413:  /* *avx512vl_vpternlogv4si_2 */
    case 6412:  /* *avx512vl_vpternlogv4si_2 */
    case 6411:  /* *avx512vl_vpternlogv4si_2 */
    case 6410:  /* *avx512vl_vpternlogv4si_2 */
    case 6409:  /* *avx512vl_vpternlogv4si_2 */
    case 6408:  /* *avx512vl_vpternlogv4si_2 */
    case 6407:  /* *avx512vl_vpternlogv4si_2 */
    case 6406:  /* *avx512vl_vpternlogv4si_2 */
    case 6405:  /* *avx512vl_vpternlogv4si_2 */
    case 6404:  /* *avx512vl_vpternlogv4si_2 */
    case 6403:  /* *avx512vl_vpternlogv4si_2 */
    case 6402:  /* *avx512vl_vpternlogv4si_2 */
    case 6401:  /* *avx512vl_vpternlogv4si_2 */
    case 6400:  /* *avx512vl_vpternlogv4si_2 */
    case 6399:  /* *avx512vl_vpternlogv4si_2 */
    case 6398:  /* *avx512vl_vpternlogv4si_2 */
    case 6397:  /* *avx512vl_vpternlogv4si_2 */
    case 6396:  /* *avx512vl_vpternlogv4si_2 */
    case 6395:  /* *avx512vl_vpternlogv4si_2 */
    case 6394:  /* *avx512vl_vpternlogv4si_2 */
    case 6393:  /* *avx512vl_vpternlogv4si_2 */
    case 6392:  /* *avx512vl_vpternlogv4si_2 */
    case 6391:  /* *avx512vl_vpternlogv4si_2 */
    case 6390:  /* *avx512vl_vpternlogv4si_2 */
    case 6389:  /* *avx512vl_vpternlogv4si_2 */
    case 6388:  /* *avx512vl_vpternlogv4si_2 */
    case 6387:  /* *avx512vl_vpternlogv4si_2 */
    case 6386:  /* *avx512vl_vpternlogv8si_2 */
    case 6385:  /* *avx512vl_vpternlogv8si_2 */
    case 6384:  /* *avx512vl_vpternlogv8si_2 */
    case 6383:  /* *avx512vl_vpternlogv8si_2 */
    case 6382:  /* *avx512vl_vpternlogv8si_2 */
    case 6381:  /* *avx512vl_vpternlogv8si_2 */
    case 6380:  /* *avx512vl_vpternlogv8si_2 */
    case 6379:  /* *avx512vl_vpternlogv8si_2 */
    case 6378:  /* *avx512vl_vpternlogv8si_2 */
    case 6377:  /* *avx512vl_vpternlogv8si_2 */
    case 6376:  /* *avx512vl_vpternlogv8si_2 */
    case 6375:  /* *avx512vl_vpternlogv8si_2 */
    case 6374:  /* *avx512vl_vpternlogv8si_2 */
    case 6373:  /* *avx512vl_vpternlogv8si_2 */
    case 6372:  /* *avx512vl_vpternlogv8si_2 */
    case 6371:  /* *avx512vl_vpternlogv8si_2 */
    case 6370:  /* *avx512vl_vpternlogv8si_2 */
    case 6369:  /* *avx512vl_vpternlogv8si_2 */
    case 6368:  /* *avx512vl_vpternlogv8si_2 */
    case 6367:  /* *avx512vl_vpternlogv8si_2 */
    case 6366:  /* *avx512vl_vpternlogv8si_2 */
    case 6365:  /* *avx512vl_vpternlogv8si_2 */
    case 6364:  /* *avx512vl_vpternlogv8si_2 */
    case 6363:  /* *avx512vl_vpternlogv8si_2 */
    case 6362:  /* *avx512vl_vpternlogv8si_2 */
    case 6361:  /* *avx512vl_vpternlogv8si_2 */
    case 6360:  /* *avx512vl_vpternlogv8si_2 */
    case 6359:  /* *avx512f_vpternlogv16si_2 */
    case 6358:  /* *avx512f_vpternlogv16si_2 */
    case 6357:  /* *avx512f_vpternlogv16si_2 */
    case 6356:  /* *avx512f_vpternlogv16si_2 */
    case 6355:  /* *avx512f_vpternlogv16si_2 */
    case 6354:  /* *avx512f_vpternlogv16si_2 */
    case 6353:  /* *avx512f_vpternlogv16si_2 */
    case 6352:  /* *avx512f_vpternlogv16si_2 */
    case 6351:  /* *avx512f_vpternlogv16si_2 */
    case 6350:  /* *avx512f_vpternlogv16si_2 */
    case 6349:  /* *avx512f_vpternlogv16si_2 */
    case 6348:  /* *avx512f_vpternlogv16si_2 */
    case 6347:  /* *avx512f_vpternlogv16si_2 */
    case 6346:  /* *avx512f_vpternlogv16si_2 */
    case 6345:  /* *avx512f_vpternlogv16si_2 */
    case 6344:  /* *avx512f_vpternlogv16si_2 */
    case 6343:  /* *avx512f_vpternlogv16si_2 */
    case 6342:  /* *avx512f_vpternlogv16si_2 */
    case 6341:  /* *avx512f_vpternlogv16si_2 */
    case 6340:  /* *avx512f_vpternlogv16si_2 */
    case 6339:  /* *avx512f_vpternlogv16si_2 */
    case 6338:  /* *avx512f_vpternlogv16si_2 */
    case 6337:  /* *avx512f_vpternlogv16si_2 */
    case 6336:  /* *avx512f_vpternlogv16si_2 */
    case 6335:  /* *avx512f_vpternlogv16si_2 */
    case 6334:  /* *avx512f_vpternlogv16si_2 */
    case 6333:  /* *avx512f_vpternlogv16si_2 */
    case 6332:  /* *avx512vl_vpternlogv8hi_2 */
    case 6331:  /* *avx512vl_vpternlogv8hi_2 */
    case 6330:  /* *avx512vl_vpternlogv8hi_2 */
    case 6329:  /* *avx512vl_vpternlogv8hi_2 */
    case 6328:  /* *avx512vl_vpternlogv8hi_2 */
    case 6327:  /* *avx512vl_vpternlogv8hi_2 */
    case 6326:  /* *avx512vl_vpternlogv8hi_2 */
    case 6325:  /* *avx512vl_vpternlogv8hi_2 */
    case 6324:  /* *avx512vl_vpternlogv8hi_2 */
    case 6323:  /* *avx512vl_vpternlogv8hi_2 */
    case 6322:  /* *avx512vl_vpternlogv8hi_2 */
    case 6321:  /* *avx512vl_vpternlogv8hi_2 */
    case 6320:  /* *avx512vl_vpternlogv8hi_2 */
    case 6319:  /* *avx512vl_vpternlogv8hi_2 */
    case 6318:  /* *avx512vl_vpternlogv8hi_2 */
    case 6317:  /* *avx512vl_vpternlogv8hi_2 */
    case 6316:  /* *avx512vl_vpternlogv8hi_2 */
    case 6315:  /* *avx512vl_vpternlogv8hi_2 */
    case 6314:  /* *avx512vl_vpternlogv8hi_2 */
    case 6313:  /* *avx512vl_vpternlogv8hi_2 */
    case 6312:  /* *avx512vl_vpternlogv8hi_2 */
    case 6311:  /* *avx512vl_vpternlogv8hi_2 */
    case 6310:  /* *avx512vl_vpternlogv8hi_2 */
    case 6309:  /* *avx512vl_vpternlogv8hi_2 */
    case 6308:  /* *avx512vl_vpternlogv8hi_2 */
    case 6307:  /* *avx512vl_vpternlogv8hi_2 */
    case 6306:  /* *avx512vl_vpternlogv8hi_2 */
    case 6305:  /* *avx512vl_vpternlogv16hi_2 */
    case 6304:  /* *avx512vl_vpternlogv16hi_2 */
    case 6303:  /* *avx512vl_vpternlogv16hi_2 */
    case 6302:  /* *avx512vl_vpternlogv16hi_2 */
    case 6301:  /* *avx512vl_vpternlogv16hi_2 */
    case 6300:  /* *avx512vl_vpternlogv16hi_2 */
    case 6299:  /* *avx512vl_vpternlogv16hi_2 */
    case 6298:  /* *avx512vl_vpternlogv16hi_2 */
    case 6297:  /* *avx512vl_vpternlogv16hi_2 */
    case 6296:  /* *avx512vl_vpternlogv16hi_2 */
    case 6295:  /* *avx512vl_vpternlogv16hi_2 */
    case 6294:  /* *avx512vl_vpternlogv16hi_2 */
    case 6293:  /* *avx512vl_vpternlogv16hi_2 */
    case 6292:  /* *avx512vl_vpternlogv16hi_2 */
    case 6291:  /* *avx512vl_vpternlogv16hi_2 */
    case 6290:  /* *avx512vl_vpternlogv16hi_2 */
    case 6289:  /* *avx512vl_vpternlogv16hi_2 */
    case 6288:  /* *avx512vl_vpternlogv16hi_2 */
    case 6287:  /* *avx512vl_vpternlogv16hi_2 */
    case 6286:  /* *avx512vl_vpternlogv16hi_2 */
    case 6285:  /* *avx512vl_vpternlogv16hi_2 */
    case 6284:  /* *avx512vl_vpternlogv16hi_2 */
    case 6283:  /* *avx512vl_vpternlogv16hi_2 */
    case 6282:  /* *avx512vl_vpternlogv16hi_2 */
    case 6281:  /* *avx512vl_vpternlogv16hi_2 */
    case 6280:  /* *avx512vl_vpternlogv16hi_2 */
    case 6279:  /* *avx512vl_vpternlogv16hi_2 */
    case 6278:  /* *avx512bw_vpternlogv32hi_2 */
    case 6277:  /* *avx512bw_vpternlogv32hi_2 */
    case 6276:  /* *avx512bw_vpternlogv32hi_2 */
    case 6275:  /* *avx512bw_vpternlogv32hi_2 */
    case 6274:  /* *avx512bw_vpternlogv32hi_2 */
    case 6273:  /* *avx512bw_vpternlogv32hi_2 */
    case 6272:  /* *avx512bw_vpternlogv32hi_2 */
    case 6271:  /* *avx512bw_vpternlogv32hi_2 */
    case 6270:  /* *avx512bw_vpternlogv32hi_2 */
    case 6269:  /* *avx512bw_vpternlogv32hi_2 */
    case 6268:  /* *avx512bw_vpternlogv32hi_2 */
    case 6267:  /* *avx512bw_vpternlogv32hi_2 */
    case 6266:  /* *avx512bw_vpternlogv32hi_2 */
    case 6265:  /* *avx512bw_vpternlogv32hi_2 */
    case 6264:  /* *avx512bw_vpternlogv32hi_2 */
    case 6263:  /* *avx512bw_vpternlogv32hi_2 */
    case 6262:  /* *avx512bw_vpternlogv32hi_2 */
    case 6261:  /* *avx512bw_vpternlogv32hi_2 */
    case 6260:  /* *avx512bw_vpternlogv32hi_2 */
    case 6259:  /* *avx512bw_vpternlogv32hi_2 */
    case 6258:  /* *avx512bw_vpternlogv32hi_2 */
    case 6257:  /* *avx512bw_vpternlogv32hi_2 */
    case 6256:  /* *avx512bw_vpternlogv32hi_2 */
    case 6255:  /* *avx512bw_vpternlogv32hi_2 */
    case 6254:  /* *avx512bw_vpternlogv32hi_2 */
    case 6253:  /* *avx512bw_vpternlogv32hi_2 */
    case 6252:  /* *avx512bw_vpternlogv32hi_2 */
    case 6251:  /* *avx512vl_vpternlogv16qi_2 */
    case 6250:  /* *avx512vl_vpternlogv16qi_2 */
    case 6249:  /* *avx512vl_vpternlogv16qi_2 */
    case 6248:  /* *avx512vl_vpternlogv16qi_2 */
    case 6247:  /* *avx512vl_vpternlogv16qi_2 */
    case 6246:  /* *avx512vl_vpternlogv16qi_2 */
    case 6245:  /* *avx512vl_vpternlogv16qi_2 */
    case 6244:  /* *avx512vl_vpternlogv16qi_2 */
    case 6243:  /* *avx512vl_vpternlogv16qi_2 */
    case 6242:  /* *avx512vl_vpternlogv16qi_2 */
    case 6241:  /* *avx512vl_vpternlogv16qi_2 */
    case 6240:  /* *avx512vl_vpternlogv16qi_2 */
    case 6239:  /* *avx512vl_vpternlogv16qi_2 */
    case 6238:  /* *avx512vl_vpternlogv16qi_2 */
    case 6237:  /* *avx512vl_vpternlogv16qi_2 */
    case 6236:  /* *avx512vl_vpternlogv16qi_2 */
    case 6235:  /* *avx512vl_vpternlogv16qi_2 */
    case 6234:  /* *avx512vl_vpternlogv16qi_2 */
    case 6233:  /* *avx512vl_vpternlogv16qi_2 */
    case 6232:  /* *avx512vl_vpternlogv16qi_2 */
    case 6231:  /* *avx512vl_vpternlogv16qi_2 */
    case 6230:  /* *avx512vl_vpternlogv16qi_2 */
    case 6229:  /* *avx512vl_vpternlogv16qi_2 */
    case 6228:  /* *avx512vl_vpternlogv16qi_2 */
    case 6227:  /* *avx512vl_vpternlogv16qi_2 */
    case 6226:  /* *avx512vl_vpternlogv16qi_2 */
    case 6225:  /* *avx512vl_vpternlogv16qi_2 */
    case 6224:  /* *avx512vl_vpternlogv32qi_2 */
    case 6223:  /* *avx512vl_vpternlogv32qi_2 */
    case 6222:  /* *avx512vl_vpternlogv32qi_2 */
    case 6221:  /* *avx512vl_vpternlogv32qi_2 */
    case 6220:  /* *avx512vl_vpternlogv32qi_2 */
    case 6219:  /* *avx512vl_vpternlogv32qi_2 */
    case 6218:  /* *avx512vl_vpternlogv32qi_2 */
    case 6217:  /* *avx512vl_vpternlogv32qi_2 */
    case 6216:  /* *avx512vl_vpternlogv32qi_2 */
    case 6215:  /* *avx512vl_vpternlogv32qi_2 */
    case 6214:  /* *avx512vl_vpternlogv32qi_2 */
    case 6213:  /* *avx512vl_vpternlogv32qi_2 */
    case 6212:  /* *avx512vl_vpternlogv32qi_2 */
    case 6211:  /* *avx512vl_vpternlogv32qi_2 */
    case 6210:  /* *avx512vl_vpternlogv32qi_2 */
    case 6209:  /* *avx512vl_vpternlogv32qi_2 */
    case 6208:  /* *avx512vl_vpternlogv32qi_2 */
    case 6207:  /* *avx512vl_vpternlogv32qi_2 */
    case 6206:  /* *avx512vl_vpternlogv32qi_2 */
    case 6205:  /* *avx512vl_vpternlogv32qi_2 */
    case 6204:  /* *avx512vl_vpternlogv32qi_2 */
    case 6203:  /* *avx512vl_vpternlogv32qi_2 */
    case 6202:  /* *avx512vl_vpternlogv32qi_2 */
    case 6201:  /* *avx512vl_vpternlogv32qi_2 */
    case 6200:  /* *avx512vl_vpternlogv32qi_2 */
    case 6199:  /* *avx512vl_vpternlogv32qi_2 */
    case 6198:  /* *avx512vl_vpternlogv32qi_2 */
    case 6197:  /* *avx512bw_vpternlogv64qi_2 */
    case 6196:  /* *avx512bw_vpternlogv64qi_2 */
    case 6195:  /* *avx512bw_vpternlogv64qi_2 */
    case 6194:  /* *avx512bw_vpternlogv64qi_2 */
    case 6193:  /* *avx512bw_vpternlogv64qi_2 */
    case 6192:  /* *avx512bw_vpternlogv64qi_2 */
    case 6191:  /* *avx512bw_vpternlogv64qi_2 */
    case 6190:  /* *avx512bw_vpternlogv64qi_2 */
    case 6189:  /* *avx512bw_vpternlogv64qi_2 */
    case 6188:  /* *avx512bw_vpternlogv64qi_2 */
    case 6187:  /* *avx512bw_vpternlogv64qi_2 */
    case 6186:  /* *avx512bw_vpternlogv64qi_2 */
    case 6185:  /* *avx512bw_vpternlogv64qi_2 */
    case 6184:  /* *avx512bw_vpternlogv64qi_2 */
    case 6183:  /* *avx512bw_vpternlogv64qi_2 */
    case 6182:  /* *avx512bw_vpternlogv64qi_2 */
    case 6181:  /* *avx512bw_vpternlogv64qi_2 */
    case 6180:  /* *avx512bw_vpternlogv64qi_2 */
    case 6179:  /* *avx512bw_vpternlogv64qi_2 */
    case 6178:  /* *avx512bw_vpternlogv64qi_2 */
    case 6177:  /* *avx512bw_vpternlogv64qi_2 */
    case 6176:  /* *avx512bw_vpternlogv64qi_2 */
    case 6175:  /* *avx512bw_vpternlogv64qi_2 */
    case 6174:  /* *avx512bw_vpternlogv64qi_2 */
    case 6173:  /* *avx512bw_vpternlogv64qi_2 */
    case 6172:  /* *avx512bw_vpternlogv64qi_2 */
    case 6171:  /* *avx512bw_vpternlogv64qi_2 */
    case 371:  /* *leahi_general_3b */
    case 370:  /* *leaqi_general_3b */
    case 369:  /* *leahi_general_3 */
    case 368:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8992:  /* xop_pmacssdd */
    case 8991:  /* xop_pmacsdd */
    case 8990:  /* xop_pmacssww */
    case 8989:  /* xop_pmacsww */
    case 7686:  /* *avx2_lshrv2di3_2 */
    case 7685:  /* *avx2_lshrv4di3_2 */
    case 7684:  /* *avx2_lshrv2di3_1 */
    case 7683:  /* *avx2_lshrv4di3_1 */
    case 7034:  /* *avx512vl_vpternlogv2df_3 */
    case 7033:  /* *avx512vl_vpternlogv2df_3 */
    case 7032:  /* *avx512vl_vpternlogv2df_3 */
    case 7031:  /* *avx512vl_vpternlogv2df_3 */
    case 7030:  /* *avx512vl_vpternlogv2df_3 */
    case 7029:  /* *avx512vl_vpternlogv2df_3 */
    case 7028:  /* *avx512vl_vpternlogv2df_3 */
    case 7027:  /* *avx512vl_vpternlogv2df_3 */
    case 7026:  /* *avx512vl_vpternlogv2df_3 */
    case 7025:  /* *avx512vl_vpternlogv4df_3 */
    case 7024:  /* *avx512vl_vpternlogv4df_3 */
    case 7023:  /* *avx512vl_vpternlogv4df_3 */
    case 7022:  /* *avx512vl_vpternlogv4df_3 */
    case 7021:  /* *avx512vl_vpternlogv4df_3 */
    case 7020:  /* *avx512vl_vpternlogv4df_3 */
    case 7019:  /* *avx512vl_vpternlogv4df_3 */
    case 7018:  /* *avx512vl_vpternlogv4df_3 */
    case 7017:  /* *avx512vl_vpternlogv4df_3 */
    case 7016:  /* *avx512f_vpternlogv8df_3 */
    case 7015:  /* *avx512f_vpternlogv8df_3 */
    case 7014:  /* *avx512f_vpternlogv8df_3 */
    case 7013:  /* *avx512f_vpternlogv8df_3 */
    case 7012:  /* *avx512f_vpternlogv8df_3 */
    case 7011:  /* *avx512f_vpternlogv8df_3 */
    case 7010:  /* *avx512f_vpternlogv8df_3 */
    case 7009:  /* *avx512f_vpternlogv8df_3 */
    case 7008:  /* *avx512f_vpternlogv8df_3 */
    case 7007:  /* *avx512vl_vpternlogv4sf_3 */
    case 7006:  /* *avx512vl_vpternlogv4sf_3 */
    case 7005:  /* *avx512vl_vpternlogv4sf_3 */
    case 7004:  /* *avx512vl_vpternlogv4sf_3 */
    case 7003:  /* *avx512vl_vpternlogv4sf_3 */
    case 7002:  /* *avx512vl_vpternlogv4sf_3 */
    case 7001:  /* *avx512vl_vpternlogv4sf_3 */
    case 7000:  /* *avx512vl_vpternlogv4sf_3 */
    case 6999:  /* *avx512vl_vpternlogv4sf_3 */
    case 6998:  /* *avx512vl_vpternlogv8sf_3 */
    case 6997:  /* *avx512vl_vpternlogv8sf_3 */
    case 6996:  /* *avx512vl_vpternlogv8sf_3 */
    case 6995:  /* *avx512vl_vpternlogv8sf_3 */
    case 6994:  /* *avx512vl_vpternlogv8sf_3 */
    case 6993:  /* *avx512vl_vpternlogv8sf_3 */
    case 6992:  /* *avx512vl_vpternlogv8sf_3 */
    case 6991:  /* *avx512vl_vpternlogv8sf_3 */
    case 6990:  /* *avx512vl_vpternlogv8sf_3 */
    case 6989:  /* *avx512f_vpternlogv16sf_3 */
    case 6988:  /* *avx512f_vpternlogv16sf_3 */
    case 6987:  /* *avx512f_vpternlogv16sf_3 */
    case 6986:  /* *avx512f_vpternlogv16sf_3 */
    case 6985:  /* *avx512f_vpternlogv16sf_3 */
    case 6984:  /* *avx512f_vpternlogv16sf_3 */
    case 6983:  /* *avx512f_vpternlogv16sf_3 */
    case 6982:  /* *avx512f_vpternlogv16sf_3 */
    case 6981:  /* *avx512f_vpternlogv16sf_3 */
    case 6980:  /* *avx512vl_vpternlogv8bf_3 */
    case 6979:  /* *avx512vl_vpternlogv8bf_3 */
    case 6978:  /* *avx512vl_vpternlogv8bf_3 */
    case 6977:  /* *avx512vl_vpternlogv8bf_3 */
    case 6976:  /* *avx512vl_vpternlogv8bf_3 */
    case 6975:  /* *avx512vl_vpternlogv8bf_3 */
    case 6974:  /* *avx512vl_vpternlogv8bf_3 */
    case 6973:  /* *avx512vl_vpternlogv8bf_3 */
    case 6972:  /* *avx512vl_vpternlogv8bf_3 */
    case 6971:  /* *avx512vl_vpternlogv16bf_3 */
    case 6970:  /* *avx512vl_vpternlogv16bf_3 */
    case 6969:  /* *avx512vl_vpternlogv16bf_3 */
    case 6968:  /* *avx512vl_vpternlogv16bf_3 */
    case 6967:  /* *avx512vl_vpternlogv16bf_3 */
    case 6966:  /* *avx512vl_vpternlogv16bf_3 */
    case 6965:  /* *avx512vl_vpternlogv16bf_3 */
    case 6964:  /* *avx512vl_vpternlogv16bf_3 */
    case 6963:  /* *avx512vl_vpternlogv16bf_3 */
    case 6962:  /* *avx512bw_vpternlogv32bf_3 */
    case 6961:  /* *avx512bw_vpternlogv32bf_3 */
    case 6960:  /* *avx512bw_vpternlogv32bf_3 */
    case 6959:  /* *avx512bw_vpternlogv32bf_3 */
    case 6958:  /* *avx512bw_vpternlogv32bf_3 */
    case 6957:  /* *avx512bw_vpternlogv32bf_3 */
    case 6956:  /* *avx512bw_vpternlogv32bf_3 */
    case 6955:  /* *avx512bw_vpternlogv32bf_3 */
    case 6954:  /* *avx512bw_vpternlogv32bf_3 */
    case 6953:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6952:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6951:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6950:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6949:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6948:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6947:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6946:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6945:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6944:  /* *avx512vl_vpternlogv16hf_3 */
    case 6943:  /* *avx512vl_vpternlogv16hf_3 */
    case 6942:  /* *avx512vl_vpternlogv16hf_3 */
    case 6941:  /* *avx512vl_vpternlogv16hf_3 */
    case 6940:  /* *avx512vl_vpternlogv16hf_3 */
    case 6939:  /* *avx512vl_vpternlogv16hf_3 */
    case 6938:  /* *avx512vl_vpternlogv16hf_3 */
    case 6937:  /* *avx512vl_vpternlogv16hf_3 */
    case 6936:  /* *avx512vl_vpternlogv16hf_3 */
    case 6935:  /* *avx512bw_vpternlogv32hf_3 */
    case 6934:  /* *avx512bw_vpternlogv32hf_3 */
    case 6933:  /* *avx512bw_vpternlogv32hf_3 */
    case 6932:  /* *avx512bw_vpternlogv32hf_3 */
    case 6931:  /* *avx512bw_vpternlogv32hf_3 */
    case 6930:  /* *avx512bw_vpternlogv32hf_3 */
    case 6929:  /* *avx512bw_vpternlogv32hf_3 */
    case 6928:  /* *avx512bw_vpternlogv32hf_3 */
    case 6927:  /* *avx512bw_vpternlogv32hf_3 */
    case 6926:  /* *avx512vl_vpternlogv2di_3 */
    case 6925:  /* *avx512vl_vpternlogv2di_3 */
    case 6924:  /* *avx512vl_vpternlogv2di_3 */
    case 6923:  /* *avx512vl_vpternlogv2di_3 */
    case 6922:  /* *avx512vl_vpternlogv2di_3 */
    case 6921:  /* *avx512vl_vpternlogv2di_3 */
    case 6920:  /* *avx512vl_vpternlogv2di_3 */
    case 6919:  /* *avx512vl_vpternlogv2di_3 */
    case 6918:  /* *avx512vl_vpternlogv2di_3 */
    case 6917:  /* *avx512vl_vpternlogv4di_3 */
    case 6916:  /* *avx512vl_vpternlogv4di_3 */
    case 6915:  /* *avx512vl_vpternlogv4di_3 */
    case 6914:  /* *avx512vl_vpternlogv4di_3 */
    case 6913:  /* *avx512vl_vpternlogv4di_3 */
    case 6912:  /* *avx512vl_vpternlogv4di_3 */
    case 6911:  /* *avx512vl_vpternlogv4di_3 */
    case 6910:  /* *avx512vl_vpternlogv4di_3 */
    case 6909:  /* *avx512vl_vpternlogv4di_3 */
    case 6908:  /* *avx512f_vpternlogv8di_3 */
    case 6907:  /* *avx512f_vpternlogv8di_3 */
    case 6906:  /* *avx512f_vpternlogv8di_3 */
    case 6905:  /* *avx512f_vpternlogv8di_3 */
    case 6904:  /* *avx512f_vpternlogv8di_3 */
    case 6903:  /* *avx512f_vpternlogv8di_3 */
    case 6902:  /* *avx512f_vpternlogv8di_3 */
    case 6901:  /* *avx512f_vpternlogv8di_3 */
    case 6900:  /* *avx512f_vpternlogv8di_3 */
    case 6899:  /* *avx512vl_vpternlogv4si_3 */
    case 6898:  /* *avx512vl_vpternlogv4si_3 */
    case 6897:  /* *avx512vl_vpternlogv4si_3 */
    case 6896:  /* *avx512vl_vpternlogv4si_3 */
    case 6895:  /* *avx512vl_vpternlogv4si_3 */
    case 6894:  /* *avx512vl_vpternlogv4si_3 */
    case 6893:  /* *avx512vl_vpternlogv4si_3 */
    case 6892:  /* *avx512vl_vpternlogv4si_3 */
    case 6891:  /* *avx512vl_vpternlogv4si_3 */
    case 6890:  /* *avx512vl_vpternlogv8si_3 */
    case 6889:  /* *avx512vl_vpternlogv8si_3 */
    case 6888:  /* *avx512vl_vpternlogv8si_3 */
    case 6887:  /* *avx512vl_vpternlogv8si_3 */
    case 6886:  /* *avx512vl_vpternlogv8si_3 */
    case 6885:  /* *avx512vl_vpternlogv8si_3 */
    case 6884:  /* *avx512vl_vpternlogv8si_3 */
    case 6883:  /* *avx512vl_vpternlogv8si_3 */
    case 6882:  /* *avx512vl_vpternlogv8si_3 */
    case 6881:  /* *avx512f_vpternlogv16si_3 */
    case 6880:  /* *avx512f_vpternlogv16si_3 */
    case 6879:  /* *avx512f_vpternlogv16si_3 */
    case 6878:  /* *avx512f_vpternlogv16si_3 */
    case 6877:  /* *avx512f_vpternlogv16si_3 */
    case 6876:  /* *avx512f_vpternlogv16si_3 */
    case 6875:  /* *avx512f_vpternlogv16si_3 */
    case 6874:  /* *avx512f_vpternlogv16si_3 */
    case 6873:  /* *avx512f_vpternlogv16si_3 */
    case 6872:  /* *avx512vl_vpternlogv8hi_3 */
    case 6871:  /* *avx512vl_vpternlogv8hi_3 */
    case 6870:  /* *avx512vl_vpternlogv8hi_3 */
    case 6869:  /* *avx512vl_vpternlogv8hi_3 */
    case 6868:  /* *avx512vl_vpternlogv8hi_3 */
    case 6867:  /* *avx512vl_vpternlogv8hi_3 */
    case 6866:  /* *avx512vl_vpternlogv8hi_3 */
    case 6865:  /* *avx512vl_vpternlogv8hi_3 */
    case 6864:  /* *avx512vl_vpternlogv8hi_3 */
    case 6863:  /* *avx512vl_vpternlogv16hi_3 */
    case 6862:  /* *avx512vl_vpternlogv16hi_3 */
    case 6861:  /* *avx512vl_vpternlogv16hi_3 */
    case 6860:  /* *avx512vl_vpternlogv16hi_3 */
    case 6859:  /* *avx512vl_vpternlogv16hi_3 */
    case 6858:  /* *avx512vl_vpternlogv16hi_3 */
    case 6857:  /* *avx512vl_vpternlogv16hi_3 */
    case 6856:  /* *avx512vl_vpternlogv16hi_3 */
    case 6855:  /* *avx512vl_vpternlogv16hi_3 */
    case 6854:  /* *avx512bw_vpternlogv32hi_3 */
    case 6853:  /* *avx512bw_vpternlogv32hi_3 */
    case 6852:  /* *avx512bw_vpternlogv32hi_3 */
    case 6851:  /* *avx512bw_vpternlogv32hi_3 */
    case 6850:  /* *avx512bw_vpternlogv32hi_3 */
    case 6849:  /* *avx512bw_vpternlogv32hi_3 */
    case 6848:  /* *avx512bw_vpternlogv32hi_3 */
    case 6847:  /* *avx512bw_vpternlogv32hi_3 */
    case 6846:  /* *avx512bw_vpternlogv32hi_3 */
    case 6845:  /* *avx512vl_vpternlogv16qi_3 */
    case 6844:  /* *avx512vl_vpternlogv16qi_3 */
    case 6843:  /* *avx512vl_vpternlogv16qi_3 */
    case 6842:  /* *avx512vl_vpternlogv16qi_3 */
    case 6841:  /* *avx512vl_vpternlogv16qi_3 */
    case 6840:  /* *avx512vl_vpternlogv16qi_3 */
    case 6839:  /* *avx512vl_vpternlogv16qi_3 */
    case 6838:  /* *avx512vl_vpternlogv16qi_3 */
    case 6837:  /* *avx512vl_vpternlogv16qi_3 */
    case 6836:  /* *avx512vl_vpternlogv32qi_3 */
    case 6835:  /* *avx512vl_vpternlogv32qi_3 */
    case 6834:  /* *avx512vl_vpternlogv32qi_3 */
    case 6833:  /* *avx512vl_vpternlogv32qi_3 */
    case 6832:  /* *avx512vl_vpternlogv32qi_3 */
    case 6831:  /* *avx512vl_vpternlogv32qi_3 */
    case 6830:  /* *avx512vl_vpternlogv32qi_3 */
    case 6829:  /* *avx512vl_vpternlogv32qi_3 */
    case 6828:  /* *avx512vl_vpternlogv32qi_3 */
    case 6827:  /* *avx512bw_vpternlogv64qi_3 */
    case 6826:  /* *avx512bw_vpternlogv64qi_3 */
    case 6825:  /* *avx512bw_vpternlogv64qi_3 */
    case 6824:  /* *avx512bw_vpternlogv64qi_3 */
    case 6823:  /* *avx512bw_vpternlogv64qi_3 */
    case 6822:  /* *avx512bw_vpternlogv64qi_3 */
    case 6821:  /* *avx512bw_vpternlogv64qi_3 */
    case 6820:  /* *avx512bw_vpternlogv64qi_3 */
    case 6819:  /* *avx512bw_vpternlogv64qi_3 */
    case 1283:  /* *extendv2di2_highpart_stv_noavx512vl */
    case 1282:  /* *extendv2di2_highpart_stv */
    case 933:  /* *concatditi3_5 */
    case 932:  /* *concatditi3_5 */
    case 931:  /* *concatditi3_5 */
    case 930:  /* *concatsidi3_5 */
    case 929:  /* *concatsidi3_5 */
    case 928:  /* *concatsidi3_5 */
    case 379:  /* *leadi_general_4 */
    case 378:  /* *leadi_general_4 */
    case 377:  /* *leasi_general_4 */
    case 376:  /* *leasi_general_4 */
    case 375:  /* *leahi_general_4 */
    case 374:  /* *leahi_general_4 */
    case 373:  /* *leaqi_general_4 */
    case 372:  /* *leaqi_general_4 */
    case 367:  /* *leahi_general_2b */
    case 366:  /* *leaqi_general_2b */
    case 365:  /* *leahi_general_2 */
    case 364:  /* *leaqi_general_2 */
    case 363:  /* *leahi_general_1 */
    case 362:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 361:  /* *addvdi4_overflow_2 */
    case 360:  /* *addvsi4_overflow_2 */
    case 359:  /* *addvhi4_overflow_2 */
    case 358:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 357:  /* *addvdi4_overflow_1 */
    case 356:  /* *addvsi4_overflow_1 */
    case 355:  /* *addvhi4_overflow_1 */
    case 354:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 609:  /* *mulvdi4_1 */
    case 608:  /* *mulvsi4_1 */
    case 607:  /* *mulvhi4_1 */
    case 436:  /* *subvti4_doubleword_1 */
    case 435:  /* *subvdi4_doubleword_1 */
    case 432:  /* subvdi4_1 */
    case 431:  /* subvsi4_1 */
    case 430:  /* subvhi4_1 */
    case 429:  /* subvqi4_1 */
    case 353:  /* *addvti4_doubleword_1 */
    case 352:  /* *addvdi4_doubleword_1 */
    case 349:  /* addvdi4_1 */
    case 348:  /* addvsi4_1 */
    case 347:  /* addvhi4_1 */
    case 346:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 614:  /* *umulvqi4 */
    case 613:  /* *mulvqi4 */
    case 606:  /* *mulvhi4 */
    case 605:  /* *mulvdi4 */
    case 604:  /* *mulvsi4 */
    case 434:  /* *subvti4_doubleword */
    case 433:  /* *subvdi4_doubleword */
    case 428:  /* *subvdi4 */
    case 427:  /* *subvsi4 */
    case 426:  /* *subvhi4 */
    case 425:  /* *subvqi4 */
    case 351:  /* *addvti4_doubleword */
    case 350:  /* *addvdi4_doubleword */
    case 345:  /* *addvdi4 */
    case 344:  /* *addvsi4 */
    case 343:  /* *addvhi4 */
    case 342:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 799:  /* *xorqi_extdi_2 */
    case 798:  /* *iorqi_extdi_2 */
    case 797:  /* *andqi_extdi_2 */
    case 796:  /* *xorqi_extsi_2 */
    case 795:  /* *iorqi_extsi_2 */
    case 794:  /* *andqi_extsi_2 */
    case 793:  /* *xorqi_exthi_2 */
    case 792:  /* *iorqi_exthi_2 */
    case 791:  /* *andqi_exthi_2 */
    case 341:  /* *subqi_extdi_2 */
    case 340:  /* *addqi_extdi_2 */
    case 339:  /* *subqi_extsi_2 */
    case 338:  /* *addqi_extsi_2 */
    case 337:  /* *subqi_exthi_2 */
    case 336:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 1243:  /* *ashrqi_extdi_1 */
    case 1242:  /* *lshrqi_extdi_1 */
    case 1241:  /* *ashrqi_extsi_1 */
    case 1240:  /* *lshrqi_extsi_1 */
    case 1239:  /* *ashrqi_exthi_1 */
    case 1238:  /* *lshrqi_exthi_1 */
    case 1121:  /* *ashlqi_extdi_1 */
    case 1120:  /* *ashlqi_extsi_1 */
    case 1119:  /* *ashlqi_exthi_1 */
    case 781:  /* *xorqi_extdi_1 */
    case 780:  /* *iorqi_extdi_1 */
    case 779:  /* *andqi_extdi_1 */
    case 778:  /* *xorqi_extsi_1 */
    case 777:  /* *iorqi_extsi_1 */
    case 776:  /* *andqi_extsi_1 */
    case 775:  /* *xorqi_exthi_1 */
    case 774:  /* *iorqi_exthi_1 */
    case 773:  /* *andqi_exthi_1 */
    case 424:  /* *subqi_extdi_1 */
    case 423:  /* *subqi_extsi_1 */
    case 422:  /* *subqi_exthi_1 */
    case 335:  /* *addqi_extdi_1 */
    case 334:  /* *addqi_extsi_1 */
    case 333:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 772:  /* *xorqi_ext2di_0 */
    case 771:  /* *iorqi_ext2di_0 */
    case 770:  /* *andqi_ext2di_0 */
    case 769:  /* *xorqi_ext2si_0 */
    case 768:  /* *iorqi_ext2si_0 */
    case 767:  /* *andqi_ext2si_0 */
    case 766:  /* *xorqi_ext2hi_0 */
    case 765:  /* *iorqi_ext2hi_0 */
    case 764:  /* *andqi_ext2hi_0 */
    case 421:  /* *subqi_ext2di_0 */
    case 420:  /* *subqi_ext2si_0 */
    case 419:  /* *subqi_ext2hi_0 */
    case 332:  /* *addqi_ext2di_0 */
    case 331:  /* *addqi_ext2si_0 */
    case 330:  /* *addqi_ext2hi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 763:  /* *xorqi_extdi_0 */
    case 762:  /* *iorqi_extdi_0 */
    case 761:  /* *andqi_extdi_0 */
    case 760:  /* *xorqi_extsi_0 */
    case 759:  /* *iorqi_extsi_0 */
    case 758:  /* *andqi_extsi_0 */
    case 757:  /* *xorqi_exthi_0 */
    case 756:  /* *iorqi_exthi_0 */
    case 755:  /* *andqi_exthi_0 */
    case 329:  /* *addqi_extdi_0 */
    case 328:  /* *addqi_extsi_0 */
    case 327:  /* *addqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1237:  /* *ashrdi3_cconly */
    case 1236:  /* *lshrdi3_cconly */
    case 1235:  /* *ashrsi3_cconly */
    case 1234:  /* *lshrsi3_cconly */
    case 1233:  /* *ashrhi3_cconly */
    case 1232:  /* *lshrhi3_cconly */
    case 1231:  /* *ashrqi3_cconly */
    case 1230:  /* *lshrqi3_cconly */
    case 1118:  /* *ashldi3_cconly */
    case 1117:  /* *ashlsi3_cconly */
    case 1116:  /* *ashlhi3_cconly */
    case 1115:  /* *ashlqi3_cconly */
    case 891:  /* *xordi_3 */
    case 890:  /* *iordi_3 */
    case 889:  /* *xorsi_3 */
    case 888:  /* *iorsi_3 */
    case 887:  /* *xorhi_3 */
    case 886:  /* *iorhi_3 */
    case 885:  /* *xorqi_3 */
    case 884:  /* *iorqi_3 */
    case 326:  /* *adddi_5 */
    case 325:  /* *addsi_5 */
    case 324:  /* *addhi_5 */
    case 323:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 322:  /* *addsi_4 */
    case 321:  /* *addhi_4 */
    case 320:  /* *addqi_4 */
    case 319:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 318:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 317:  /* *adddi_3 */
    case 316:  /* *addsi_3 */
    case 315:  /* *addhi_3 */
    case 314:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1229:  /* *ashrsi3_cmp_zext */
    case 1228:  /* *lshrsi3_cmp_zext */
    case 1114:  /* *ashlsi3_cmp_zext */
    case 881:  /* *xorsi_2_zext */
    case 880:  /* *iorsi_2_zext */
    case 750:  /* *andsi_2_zext */
    case 415:  /* *subsi_2_zext */
    case 313:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1227:  /* *ashrdi3_cmp */
    case 1226:  /* *lshrdi3_cmp */
    case 1225:  /* *ashrsi3_cmp */
    case 1224:  /* *lshrsi3_cmp */
    case 1223:  /* *ashrhi3_cmp */
    case 1222:  /* *lshrhi3_cmp */
    case 1221:  /* *ashrqi3_cmp */
    case 1220:  /* *lshrqi3_cmp */
    case 1113:  /* *ashldi3_cmp */
    case 1112:  /* *ashlsi3_cmp */
    case 1111:  /* *ashlhi3_cmp */
    case 1110:  /* *ashlqi3_cmp */
    case 879:  /* *xordi_2 */
    case 878:  /* *iordi_2 */
    case 877:  /* *xorsi_2 */
    case 876:  /* *iorsi_2 */
    case 875:  /* *xorhi_2 */
    case 874:  /* *iorhi_2 */
    case 873:  /* *xorqi_2 */
    case 872:  /* *iorqi_2 */
    case 754:  /* *andsi_2 */
    case 753:  /* *andhi_2 */
    case 752:  /* *andqi_2 */
    case 751:  /* *andqi_2_maybe_si */
    case 749:  /* *anddi_2 */
    case 414:  /* *subdi_2 */
    case 413:  /* *subsi_2 */
    case 412:  /* *subhi_2 */
    case 411:  /* *subqi_2 */
    case 312:  /* *adddi_2 */
    case 311:  /* *addsi_2 */
    case 310:  /* *addhi_2 */
    case 309:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 748:  /* *xorqi_extdi_2_slp */
    case 747:  /* *iorqi_extdi_2_slp */
    case 746:  /* *andqi_extdi_2_slp */
    case 745:  /* *xorqi_extsi_2_slp */
    case 744:  /* *iorqi_extsi_2_slp */
    case 743:  /* *andqi_extsi_2_slp */
    case 742:  /* *xorqi_exthi_2_slp */
    case 741:  /* *iorqi_exthi_2_slp */
    case 740:  /* *andqi_exthi_2_slp */
    case 410:  /* *subqi_extdi_2_slp */
    case 409:  /* *subqi_extsi_2_slp */
    case 408:  /* *subqi_exthi_2_slp */
    case 308:  /* *addqi_extdi_2_slp */
    case 307:  /* *addqi_extsi_2_slp */
    case 306:  /* *addqi_exthi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 739:  /* *xorqi_extdi_1_slp */
    case 738:  /* *iorqi_extdi_1_slp */
    case 737:  /* *andqi_extdi_1_slp */
    case 736:  /* *xorqi_extsi_1_slp */
    case 735:  /* *iorqi_extsi_1_slp */
    case 734:  /* *andqi_extsi_1_slp */
    case 733:  /* *xorqi_exthi_1_slp */
    case 732:  /* *iorqi_exthi_1_slp */
    case 731:  /* *andqi_exthi_1_slp */
    case 305:  /* *addqi_extdi_1_slp */
    case 304:  /* *addqi_extsi_1_slp */
    case 303:  /* *addqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1384:  /* *rotrhi3_1_slp */
    case 1383:  /* *rotlhi3_1_slp */
    case 1382:  /* *rotrqi3_1_slp */
    case 1381:  /* *rotlqi3_1_slp */
    case 1219:  /* *ashrhi3_1_slp */
    case 1218:  /* *lshrhi3_1_slp */
    case 1217:  /* *ashrqi3_1_slp */
    case 1216:  /* *lshrqi3_1_slp */
    case 1109:  /* *ashlhi3_1_slp */
    case 1108:  /* *ashlqi3_1_slp */
    case 730:  /* *xorhi_1_slp */
    case 729:  /* *iorhi_1_slp */
    case 728:  /* *andhi_1_slp */
    case 727:  /* *xorqi_1_slp */
    case 726:  /* *iorqi_1_slp */
    case 725:  /* *andqi_1_slp */
    case 404:  /* *subhi_1_slp */
    case 403:  /* *subqi_1_slp */
    case 302:  /* *addhi_1_slp */
    case 301:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 2609:  /* *klshrsi3_1_zext */
    case 2591:  /* kxnordi */
    case 2590:  /* kxnorsi */
    case 2589:  /* kxnorhi */
    case 2588:  /* kxnorqi */
    case 1372:  /* *rotrsi3_1_zext */
    case 1371:  /* *rotlsi3_1_zext */
    case 1370:  /* *rotrhi3_1_zextdi */
    case 1368:  /* *rotlhi3_1_zextdi */
    case 1366:  /* *rotrhi3_1_zextsi */
    case 1364:  /* *rotlhi3_1_zextsi */
    case 1362:  /* *rotrqi3_1_zextdi */
    case 1360:  /* *rotlqi3_1_zextdi */
    case 1358:  /* *rotrqi3_1_zextsi */
    case 1356:  /* *rotlqi3_1_zextsi */
    case 1354:  /* *rotrqi3_1_zexthi */
    case 1352:  /* *rotlqi3_1_zexthi */
    case 1207:  /* *ashrsi3_1_zext */
    case 1206:  /* *lshrsi3_1_zext */
    case 1205:  /* *ashrhi3_1_zextdi */
    case 1203:  /* *lshrhi3_1_zextdi */
    case 1201:  /* *ashrhi3_1_zextsi */
    case 1199:  /* *lshrhi3_1_zextsi */
    case 1197:  /* *ashrqi3_1_zextdi */
    case 1195:  /* *lshrqi3_1_zextdi */
    case 1193:  /* *ashrqi3_1_zextsi */
    case 1191:  /* *lshrqi3_1_zextsi */
    case 1189:  /* *ashrqi3_1_zexthi */
    case 1187:  /* *lshrqi3_1_zexthi */
    case 1170:  /* *ashrsi3_cvt_zext */
    case 1141:  /* ashrti3_doubleword_lowpart */
    case 1140:  /* lshrti3_doubleword_lowpart */
    case 1139:  /* ashrdi3_doubleword_lowpart */
    case 1138:  /* lshrdi3_doubleword_lowpart */
    case 1103:  /* *ashlsi3_1_zext */
    case 1102:  /* *ashlhi3_1_zextdi */
    case 1100:  /* *ashlhi3_1_zextsi */
    case 1098:  /* *ashlqi3_1_zextdi */
    case 1096:  /* *ashlqi3_1_zextsi */
    case 1094:  /* *ashlqi3_1_zexthi */
    case 871:  /* *notxorqi_1 */
    case 864:  /* *xorsi_1_zext */
    case 863:  /* *iorsi_1_zext */
    case 862:  /* *xorhi_1_zextdi */
    case 860:  /* *iorhi_1_zextdi */
    case 858:  /* *xorhi_1_zextsi */
    case 856:  /* *iorhi_1_zextsi */
    case 854:  /* *xorqi_1_zextdi */
    case 852:  /* *iorqi_1_zextdi */
    case 850:  /* *xorqi_1_zextsi */
    case 848:  /* *iorqi_1_zextsi */
    case 846:  /* *xorqi_1_zexthi */
    case 844:  /* *iorqi_1_zexthi */
    case 837:  /* *notxordi_1 */
    case 836:  /* *notxorsi_1 */
    case 835:  /* *notxorhi_1 */
    case 718:  /* *andsi_1_zext */
    case 717:  /* *andhi_1_zextdi */
    case 715:  /* *andhi_1_zextsi */
    case 713:  /* *andqi_1_zextdi */
    case 711:  /* *andqi_1_zextsi */
    case 709:  /* *andqi_1_zexthi */
    case 601:  /* *mulsi3_1_zext */
    case 599:  /* *imulhidizu */
    case 597:  /* *imulhisizu */
    case 516:  /* *subsi3_carry_zext_0r */
    case 515:  /* *subhi3_carry_zextdi_0r */
    case 514:  /* *subhi3_carry_zextsi_0r */
    case 513:  /* *subqi3_carry_zextdi_0r */
    case 512:  /* *subqi3_carry_zextsi_0r */
    case 511:  /* *subqi3_carry_zexthi_0r */
    case 510:  /* *subsi3_carry_zext_0 */
    case 509:  /* *subhi3_carry_zextdi_0 */
    case 508:  /* *subhi3_carry_zextsi_0 */
    case 507:  /* *subqi3_carry_zextdi_0 */
    case 506:  /* *subqi3_carry_zextsi_0 */
    case 505:  /* *subqi3_carry_zexthi_0 */
    case 402:  /* *subsi_1_zext */
    case 401:  /* *subhi_1_zextdi */
    case 399:  /* *subhi_1_zextsi */
    case 397:  /* *subqi_1_zextdi */
    case 395:  /* *subqi_1_zextsi */
    case 393:  /* *subqi_1_zexthi */
    case 296:  /* addsi_1_zext */
    case 295:  /* *addhi_1_zextdi */
    case 293:  /* *addhi_1_zextsi */
    case 291:  /* *addqi_1_zextdi */
    case 289:  /* *addqi_1_zextsi */
    case 287:  /* *addqi_1_zexthi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 8381:  /* vec_interleave_lowv4si */
    case 8379:  /* *avx512f_interleave_lowv16si */
    case 8377:  /* avx2_interleave_lowv8si */
    case 8375:  /* vec_interleave_highv4si */
    case 8373:  /* *avx512f_interleave_highv16si */
    case 8371:  /* avx2_interleave_highv8si */
    case 8369:  /* vec_interleave_lowv8bf */
    case 8367:  /* vec_interleave_lowv8hf */
    case 8365:  /* vec_interleave_lowv8hi */
    case 8363:  /* avx2_interleave_lowv16bf */
    case 8361:  /* avx2_interleave_lowv16hf */
    case 8359:  /* avx2_interleave_lowv16hi */
    case 8357:  /* *avx512bw_interleave_lowv32bf */
    case 8355:  /* *avx512bw_interleave_lowv32hf */
    case 8353:  /* *avx512bw_interleave_lowv32hi */
    case 8351:  /* vec_interleave_highv8bf */
    case 8349:  /* vec_interleave_highv8hf */
    case 8347:  /* vec_interleave_highv8hi */
    case 8345:  /* avx2_interleave_highv16bf */
    case 8343:  /* avx2_interleave_highv16hf */
    case 8341:  /* avx2_interleave_highv16hi */
    case 8339:  /* avx512bw_interleave_highv32bf */
    case 8337:  /* avx512bw_interleave_highv32hf */
    case 8335:  /* avx512bw_interleave_highv32hi */
    case 8333:  /* vec_interleave_lowv16qi */
    case 8331:  /* avx2_interleave_lowv32qi */
    case 8329:  /* avx512bw_interleave_lowv64qi */
    case 8327:  /* vec_interleave_highv16qi */
    case 8325:  /* avx2_interleave_highv32qi */
    case 8323:  /* avx512bw_interleave_highv64qi */
    case 8088:  /* *xnorv2di3 */
    case 8087:  /* *xnorv4di3 */
    case 8086:  /* *xnorv4si3 */
    case 8085:  /* *xnorv8si3 */
    case 8084:  /* *xnorv8hi3 */
    case 8083:  /* *xnorv16hi3 */
    case 8082:  /* *xnorv32hi3 */
    case 8081:  /* *xnorv16qi3 */
    case 8080:  /* *xnorv32qi3 */
    case 8079:  /* *xnorv64qi3 */
    case 8078:  /* *xnorv8di3 */
    case 8077:  /* *xnorv16si3 */
    case 7210:  /* vec_interleave_lowv2di */
    case 7208:  /* *avx512f_interleave_lowv8di */
    case 7206:  /* avx2_interleave_lowv4di */
    case 7204:  /* vec_interleave_highv2di */
    case 7202:  /* *avx512f_interleave_highv8di */
    case 7200:  /* avx2_interleave_highv4di */
    case 5420:  /* *vec_interleave_lowv2df */
    case 5417:  /* avx_unpcklpd256 */
    case 5413:  /* avx512f_unpcklpd512 */
    case 5410:  /* *vec_interleave_highv2df */
    case 5407:  /* avx_unpckhpd256 */
    case 5405:  /* *avx512f_unpckhpd512 */
    case 5262:  /* vec_interleave_lowv4sf */
    case 5259:  /* avx_unpcklps256 */
    case 5257:  /* *avx512f_unpcklps512 */
    case 5255:  /* vec_interleave_highv4sf */
    case 5253:  /* avx_unpckhps256 */
    case 5251:  /* *avx512f_unpckhps512 */
    case 5250:  /* sse_movlhps_v8bf */
    case 5249:  /* sse_movlhps_v8hf */
    case 5248:  /* sse_movlhps_v8hi */
    case 5247:  /* sse_movlhps */
    case 5246:  /* sse_movhlps */
    case 2303:  /* mmx_punpckldq */
    case 2302:  /* mmx_punpckhdq */
    case 2301:  /* mmx_punpcklwd */
    case 2300:  /* mmx_punpckhwd */
    case 2299:  /* mmx_punpcklbw_low */
    case 2298:  /* mmx_punpcklbw */
    case 2297:  /* mmx_punpckhbw_low */
    case 2296:  /* mmx_punpckhbw */
    case 2088:  /* *vec_interleave_highv2sf */
    case 2087:  /* *vec_interleave_lowv2sf */
    case 1369:  /* *rotrhi3_1_zextdi_nf */
    case 1367:  /* *rotlhi3_1_zextdi_nf */
    case 1365:  /* *rotrhi3_1_zextsi_nf */
    case 1363:  /* *rotlhi3_1_zextsi_nf */
    case 1361:  /* *rotrqi3_1_zextdi_nf */
    case 1359:  /* *rotlqi3_1_zextdi_nf */
    case 1357:  /* *rotrqi3_1_zextsi_nf */
    case 1355:  /* *rotlqi3_1_zextsi_nf */
    case 1353:  /* *rotrqi3_1_zexthi_nf */
    case 1351:  /* *rotlqi3_1_zexthi_nf */
    case 1350:  /* *bmi2_rorxsi3_1_zext */
    case 1204:  /* *ashrhi3_1_zextdi_nf */
    case 1202:  /* *lshrhi3_1_zextdi_nf */
    case 1200:  /* *ashrhi3_1_zextsi_nf */
    case 1198:  /* *lshrhi3_1_zextsi_nf */
    case 1196:  /* *ashrqi3_1_zextdi_nf */
    case 1194:  /* *lshrqi3_1_zextdi_nf */
    case 1192:  /* *ashrqi3_1_zextsi_nf */
    case 1190:  /* *lshrqi3_1_zextsi_nf */
    case 1188:  /* *ashrqi3_1_zexthi_nf */
    case 1186:  /* *lshrqi3_1_zexthi_nf */
    case 1185:  /* *bmi2_ashrsi3_1_zext */
    case 1184:  /* *bmi2_lshrsi3_1_zext */
    case 1137:  /* ashrti3_doubleword_lowpart_nf */
    case 1136:  /* lshrti3_doubleword_lowpart_nf */
    case 1135:  /* ashrdi3_doubleword_lowpart_nf */
    case 1134:  /* lshrdi3_doubleword_lowpart_nf */
    case 1101:  /* *ashlhi3_1_zextdi_nf */
    case 1099:  /* *ashlhi3_1_zextsi_nf */
    case 1097:  /* *ashlqi3_1_zextdi_nf */
    case 1095:  /* *ashlqi3_1_zextsi_nf */
    case 1093:  /* *ashlqi3_1_zexthi_nf */
    case 1092:  /* *bmi2_ashlsi3_1_zext */
    case 861:  /* *xorhi_1_zextdi_nf */
    case 859:  /* *iorhi_1_zextdi_nf */
    case 857:  /* *xorhi_1_zextsi_nf */
    case 855:  /* *iorhi_1_zextsi_nf */
    case 853:  /* *xorqi_1_zextdi_nf */
    case 851:  /* *iorqi_1_zextdi_nf */
    case 849:  /* *xorqi_1_zextsi_nf */
    case 847:  /* *iorqi_1_zextsi_nf */
    case 845:  /* *xorqi_1_zexthi_nf */
    case 843:  /* *iorqi_1_zexthi_nf */
    case 716:  /* *andhi_1_zextdi_nf */
    case 714:  /* *andhi_1_zextsi_nf */
    case 712:  /* *andqi_1_zextdi_nf */
    case 710:  /* *andqi_1_zextsi_nf */
    case 708:  /* *andqi_1_zexthi_nf */
    case 600:  /* *mulsi3_1_zext_nf */
    case 598:  /* *imulhidizu_nf */
    case 596:  /* *imulhisizu_nf */
    case 400:  /* *subhi_1_zextdi_nf */
    case 398:  /* *subhi_1_zextsi_nf */
    case 396:  /* *subqi_1_zextdi_nf */
    case 394:  /* *subqi_1_zextsi_nf */
    case 392:  /* *subqi_1_zexthi_nf */
    case 294:  /* *addhi_1_zextdi_nf */
    case 292:  /* *addhi_1_zextsi_nf */
    case 290:  /* *addqi_1_zextdi_nf */
    case 288:  /* *addqi_1_zextsi_nf */
    case 286:  /* *addqi_1_zexthi_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 10631:  /* avx10_2_divbf16_v8bf */
    case 10629:  /* avx10_2_mulbf16_v8bf */
    case 10627:  /* avx10_2_subbf16_v8bf */
    case 10625:  /* avx10_2_addbf16_v8bf */
    case 10623:  /* avx10_2_divbf16_v16bf */
    case 10621:  /* avx10_2_mulbf16_v16bf */
    case 10619:  /* avx10_2_subbf16_v16bf */
    case 10617:  /* avx10_2_addbf16_v16bf */
    case 10615:  /* avx10_2_divbf16_v32bf */
    case 10613:  /* avx10_2_mulbf16_v32bf */
    case 10611:  /* avx10_2_subbf16_v32bf */
    case 10609:  /* avx10_2_addbf16_v32bf */
    case 10607:  /* avx10_2_sminbf16_v8bf */
    case 10605:  /* avx10_2_smaxbf16_v8bf */
    case 10603:  /* avx10_2_sminbf16_v16bf */
    case 10601:  /* avx10_2_smaxbf16_v16bf */
    case 10599:  /* avx10_2_sminbf16_v32bf */
    case 10597:  /* avx10_2_smaxbf16_v32bf */
    case 9625:  /* avx_vec_concatv8df */
    case 9624:  /* avx_vec_concatv16sf */
    case 9623:  /* avx_vec_concatv8di */
    case 9622:  /* avx_vec_concatv16si */
    case 9621:  /* avx_vec_concatv32bf */
    case 9620:  /* avx_vec_concatv32hf */
    case 9619:  /* avx_vec_concatv32hi */
    case 9618:  /* avx_vec_concatv64qi */
    case 9617:  /* avx_vec_concatv4df */
    case 9616:  /* avx_vec_concatv8sf */
    case 9615:  /* avx_vec_concatv4di */
    case 9614:  /* avx_vec_concatv8si */
    case 9613:  /* avx_vec_concatv16bf */
    case 9612:  /* avx_vec_concatv16hf */
    case 9611:  /* avx_vec_concatv16hi */
    case 9610:  /* avx_vec_concatv32qi */
    case 9608:  /* avx512bw_lshrvv32hi */
    case 9606:  /* avx512bw_ashlvv32hi */
    case 9604:  /* avx512vl_lshrvv16hi */
    case 9602:  /* avx512vl_ashlvv16hi */
    case 9600:  /* avx512vl_lshrvv8hi */
    case 9598:  /* avx512vl_ashlvv8hi */
    case 9596:  /* avx2_lshrvv2di */
    case 9594:  /* avx2_ashlvv2di */
    case 9592:  /* avx2_lshrvv4di */
    case 9590:  /* avx2_ashlvv4di */
    case 9588:  /* avx512f_lshrvv8di */
    case 9586:  /* avx512f_ashlvv8di */
    case 9584:  /* avx2_lshrvv4si */
    case 9582:  /* avx2_ashlvv4si */
    case 9580:  /* avx2_lshrvv8si */
    case 9578:  /* avx2_ashlvv8si */
    case 9576:  /* avx512f_lshrvv16si */
    case 9574:  /* avx512f_ashlvv16si */
    case 9572:  /* avx512bw_ashrvv32hi */
    case 9570:  /* avx512vl_ashrvv16hi */
    case 9568:  /* avx512vl_ashrvv8hi */
    case 9566:  /* avx512f_ashrvv8di */
    case 9564:  /* avx2_ashrvv4di */
    case 9562:  /* avx2_ashrvv2di */
    case 9560:  /* avx512f_ashrvv16si */
    case 9558:  /* avx2_ashrvv8si */
    case 9556:  /* avx2_ashrvv4si */
    case 9056:  /* *ashrv2di3 */
    case 9043:  /* xop_rotrv2di3 */
    case 9042:  /* xop_rotrv4si3 */
    case 9041:  /* xop_rotrv8hi3 */
    case 9040:  /* xop_rotrv16qi3 */
    case 9039:  /* xop_rotlv2di3 */
    case 9038:  /* xop_rotlv4si3 */
    case 9037:  /* xop_rotlv8hi3 */
    case 9036:  /* xop_rotlv16qi3 */
    case 8494:  /* *vec_concatv2di_0 */
    case 8493:  /* vec_concatv2di */
    case 8492:  /* *vec_concatv4si_0 */
    case 8491:  /* *vec_concatv8hi_0 */
    case 8490:  /* *vec_concatv16qi_0 */
    case 8487:  /* *vec_concatv4si */
    case 8486:  /* *vec_concatv8hi */
    case 8485:  /* *vec_concatv16qi */
    case 8484:  /* *vec_concatv2si */
    case 8483:  /* *vec_concatv2si_sse4_1 */
    case 8064:  /* xorv1ti3 */
    case 8063:  /* iorv1ti3 */
    case 8062:  /* andv1ti3 */
    case 8061:  /* *xorv8hi3 */
    case 8060:  /* *iorv8hi3 */
    case 8059:  /* *andv8hi3 */
    case 8058:  /* *xorv16hi3 */
    case 8057:  /* *iorv16hi3 */
    case 8056:  /* *andv16hi3 */
    case 8055:  /* *xorv32hi3 */
    case 8054:  /* *iorv32hi3 */
    case 8053:  /* *andv32hi3 */
    case 8052:  /* *xorv16qi3 */
    case 8051:  /* *iorv16qi3 */
    case 8050:  /* *andv16qi3 */
    case 8049:  /* *xorv32qi3 */
    case 8048:  /* *iorv32qi3 */
    case 8047:  /* *andv32qi3 */
    case 8046:  /* *xorv64qi3 */
    case 8045:  /* *iorv64qi3 */
    case 8044:  /* *andv64qi3 */
    case 8042:  /* *xorv2di3 */
    case 8040:  /* *iorv2di3 */
    case 8038:  /* *andv2di3 */
    case 8036:  /* *xorv4di3 */
    case 8034:  /* *iorv4di3 */
    case 8032:  /* *andv4di3 */
    case 8030:  /* *xorv8di3 */
    case 8028:  /* *iorv8di3 */
    case 8026:  /* *andv8di3 */
    case 8024:  /* *xorv4si3 */
    case 8022:  /* *iorv4si3 */
    case 8020:  /* *andv4si3 */
    case 8018:  /* *xorv8si3 */
    case 8016:  /* *iorv8si3 */
    case 8014:  /* *andv8si3 */
    case 8012:  /* *xorv16si3 */
    case 8010:  /* *iorv16si3 */
    case 8008:  /* *andv16si3 */
    case 7976:  /* *one_cmplv2di2 */
    case 7974:  /* *one_cmplv4di2 */
    case 7972:  /* *one_cmplv4si2 */
    case 7970:  /* *one_cmplv8si2 */
    case 7969:  /* *one_cmplv8hi2 */
    case 7968:  /* *one_cmplv16hi2 */
    case 7967:  /* *one_cmplv32hi2 */
    case 7966:  /* *one_cmplv16qi2 */
    case 7965:  /* *one_cmplv32qi2 */
    case 7964:  /* *one_cmplv64qi2 */
    case 7962:  /* *one_cmplv8di2 */
    case 7960:  /* *one_cmplv16si2 */
    case 7959:  /* *sse2_gtv4si3 */
    case 7958:  /* *sse2_gtv8hi3 */
    case 7957:  /* *sse2_gtv16qi3 */
    case 7956:  /* avx2_gtv4di3 */
    case 7955:  /* avx2_gtv8si3 */
    case 7954:  /* avx2_gtv16hi3 */
    case 7953:  /* avx2_gtv32qi3 */
    case 7952:  /* sse4_2_gtv2di3 */
    case 7951:  /* *sse2_eqv4si3 */
    case 7950:  /* *sse2_eqv8hi3 */
    case 7949:  /* *sse2_eqv16qi3 */
    case 7948:  /* *sse4_1_eqv2di3 */
    case 7893:  /* *avx2_eqv4di3 */
    case 7892:  /* *avx2_eqv8si3 */
    case 7891:  /* *avx2_eqv16hi3 */
    case 7890:  /* *avx2_eqv32qi3 */
    case 7889:  /* *uminv16qi3 */
    case 7888:  /* *umaxv16qi3 */
    case 7886:  /* *sse4_1_uminv4si3 */
    case 7884:  /* *sse4_1_umaxv4si3 */
    case 7882:  /* *sse4_1_uminv8hi3 */
    case 7880:  /* *sse4_1_umaxv8hi3 */
    case 7879:  /* *sminv8hi3 */
    case 7878:  /* *smaxv8hi3 */
    case 7876:  /* *sse4_1_sminv4si3 */
    case 7874:  /* *sse4_1_smaxv4si3 */
    case 7872:  /* *sse4_1_sminv16qi3 */
    case 7870:  /* *sse4_1_smaxv16qi3 */
    case 7868:  /* *avx512bw_uminv8hi3 */
    case 7866:  /* *avx512bw_umaxv8hi3 */
    case 7864:  /* *avx512bw_sminv8hi3 */
    case 7862:  /* *avx512bw_smaxv8hi3 */
    case 7860:  /* *avx512bw_uminv16hi3 */
    case 7858:  /* *avx512bw_umaxv16hi3 */
    case 7856:  /* *avx512bw_sminv16hi3 */
    case 7854:  /* *avx512bw_smaxv16hi3 */
    case 7852:  /* *avx512bw_uminv32hi3 */
    case 7850:  /* *avx512bw_umaxv32hi3 */
    case 7848:  /* *avx512bw_sminv32hi3 */
    case 7846:  /* *avx512bw_smaxv32hi3 */
    case 7844:  /* *avx512bw_uminv32qi3 */
    case 7842:  /* *avx512bw_umaxv32qi3 */
    case 7840:  /* *avx512bw_sminv32qi3 */
    case 7838:  /* *avx512bw_smaxv32qi3 */
    case 7836:  /* *avx512bw_uminv16qi3 */
    case 7834:  /* *avx512bw_umaxv16qi3 */
    case 7832:  /* *avx512bw_sminv16qi3 */
    case 7830:  /* *avx512bw_smaxv16qi3 */
    case 7828:  /* *avx512bw_uminv64qi3 */
    case 7826:  /* *avx512bw_umaxv64qi3 */
    case 7824:  /* *avx512bw_sminv64qi3 */
    case 7822:  /* *avx512bw_smaxv64qi3 */
    case 7820:  /* *avx512f_uminv2di3 */
    case 7818:  /* *avx512f_umaxv2di3 */
    case 7816:  /* *avx512f_sminv2di3 */
    case 7814:  /* *avx512f_smaxv2di3 */
    case 7812:  /* *avx512f_uminv4di3 */
    case 7810:  /* *avx512f_umaxv4di3 */
    case 7808:  /* *avx512f_sminv4di3 */
    case 7806:  /* *avx512f_smaxv4di3 */
    case 7804:  /* *avx512f_uminv8di3 */
    case 7802:  /* *avx512f_umaxv8di3 */
    case 7800:  /* *avx512f_sminv8di3 */
    case 7798:  /* *avx512f_smaxv8di3 */
    case 7796:  /* *avx512f_uminv4si3 */
    case 7794:  /* *avx512f_umaxv4si3 */
    case 7792:  /* *avx512f_sminv4si3 */
    case 7790:  /* *avx512f_smaxv4si3 */
    case 7788:  /* *avx512f_uminv8si3 */
    case 7786:  /* *avx512f_umaxv8si3 */
    case 7784:  /* *avx512f_sminv8si3 */
    case 7782:  /* *avx512f_smaxv8si3 */
    case 7780:  /* *avx512f_uminv16si3 */
    case 7778:  /* *avx512f_umaxv16si3 */
    case 7776:  /* *avx512f_sminv16si3 */
    case 7774:  /* *avx512f_smaxv16si3 */
    case 7773:  /* *avx2_uminv8si3 */
    case 7772:  /* *avx2_umaxv8si3 */
    case 7771:  /* *avx2_sminv8si3 */
    case 7770:  /* *avx2_smaxv8si3 */
    case 7769:  /* *avx2_uminv16hi3 */
    case 7768:  /* *avx2_umaxv16hi3 */
    case 7767:  /* *avx2_sminv16hi3 */
    case 7766:  /* *avx2_smaxv16hi3 */
    case 7765:  /* *avx2_uminv32qi3 */
    case 7764:  /* *avx2_umaxv32qi3 */
    case 7763:  /* *avx2_sminv32qi3 */
    case 7762:  /* *avx2_smaxv32qi3 */
    case 7760:  /* avx512vl_rorv2di */
    case 7758:  /* avx512vl_rolv2di */
    case 7756:  /* avx512vl_rorv4di */
    case 7754:  /* avx512vl_rolv4di */
    case 7752:  /* avx512f_rorv8di */
    case 7750:  /* avx512f_rolv8di */
    case 7748:  /* avx512vl_rorv4si */
    case 7746:  /* avx512vl_rolv4si */
    case 7744:  /* avx512vl_rorv8si */
    case 7742:  /* avx512vl_rolv8si */
    case 7740:  /* avx512f_rorv16si */
    case 7738:  /* avx512f_rolv16si */
    case 7736:  /* avx512vl_rorvv2di */
    case 7734:  /* avx512vl_rolvv2di */
    case 7732:  /* avx512vl_rorvv4di */
    case 7730:  /* avx512vl_rolvv4di */
    case 7728:  /* avx512f_rorvv8di */
    case 7726:  /* avx512f_rolvv8di */
    case 7724:  /* avx512vl_rorvv4si */
    case 7722:  /* avx512vl_rolvv4si */
    case 7720:  /* avx512vl_rorvv8si */
    case 7718:  /* avx512vl_rolvv8si */
    case 7716:  /* avx512f_rorvv16si */
    case 7714:  /* avx512f_rolvv16si */
    case 7713:  /* sse2_lshrv1ti3 */
    case 7712:  /* sse2_ashlv1ti3 */
    case 7711:  /* avx2_lshrv2ti3 */
    case 7710:  /* avx2_ashlv2ti3 */
    case 7709:  /* avx512bw_lshrv1ti3 */
    case 7708:  /* avx512bw_ashlv1ti3 */
    case 7707:  /* avx512bw_lshrv2ti3 */
    case 7706:  /* avx512bw_ashlv2ti3 */
    case 7705:  /* avx512bw_lshrv4ti3 */
    case 7704:  /* avx512bw_ashlv4ti3 */
    case 7703:  /* *rotrv1ti3_internal */
    case 7702:  /* *rotlv1ti3_internal */
    case 7701:  /* *ashrv1ti3_internal */
    case 7700:  /* *lshrv1ti3_internal */
    case 7699:  /* *ashlv1ti3_internal */
    case 7697:  /* lshrv8di3 */
    case 7695:  /* ashlv8di3 */
    case 7693:  /* lshrv16si3 */
    case 7691:  /* ashlv16si3 */
    case 7689:  /* lshrv32hi3 */
    case 7687:  /* ashlv32hi3 */
    case 7682:  /* lshrv2di3 */
    case 7681:  /* ashlv2di3 */
    case 7680:  /* lshrv4di3 */
    case 7679:  /* ashlv4di3 */
    case 7678:  /* lshrv4si3 */
    case 7677:  /* ashlv4si3 */
    case 7676:  /* lshrv8si3 */
    case 7675:  /* ashlv8si3 */
    case 7674:  /* lshrv8hi3 */
    case 7673:  /* ashlv8hi3 */
    case 7672:  /* lshrv16hi3 */
    case 7671:  /* ashlv16hi3 */
    case 7669:  /* *lshrv2di3 */
    case 7667:  /* *ashlv2di3 */
    case 7665:  /* *lshrv4di3 */
    case 7663:  /* *ashlv4di3 */
    case 7661:  /* *lshrv4si3 */
    case 7659:  /* *ashlv4si3 */
    case 7657:  /* *lshrv8si3 */
    case 7655:  /* *ashlv8si3 */
    case 7653:  /* *lshrv8hi3 */
    case 7651:  /* *ashlv8hi3 */
    case 7649:  /* *lshrv16hi3 */
    case 7647:  /* *ashlv16hi3 */
    case 7636:  /* *ashrv8di3 */
    case 7634:  /* *ashrv16si3 */
    case 7632:  /* *ashrv4di3 */
    case 7630:  /* *ashrv32hi3 */
    case 7629:  /* *ashrv4si3_1 */
    case 7628:  /* *ashrv8si3_1 */
    case 7627:  /* *ashrv8hi3_1 */
    case 7626:  /* *ashrv16hi3_1 */
    case 7625:  /* ashrv4si3 */
    case 7624:  /* ashrv8si3 */
    case 7623:  /* ashrv8hi3 */
    case 7622:  /* ashrv16hi3 */
    case 7620:  /* *ashrv2di3 */
    case 7618:  /* *ashrv4si3 */
    case 7616:  /* *ashrv8si3 */
    case 7614:  /* *ashrv8hi3 */
    case 7612:  /* *ashrv16hi3 */
    case 7610:  /* *sse4_1_mulv4si3 */
    case 7608:  /* *avx2_mulv8si3 */
    case 7606:  /* *avx512f_mulv16si3 */
    case 7604:  /* *avx512dq_mulv2di3 */
    case 7602:  /* *avx512dq_mulv4di3 */
    case 7600:  /* *avx512dq_mulv8di3 */
    case 7566:  /* *mulv8hi3 */
    case 7564:  /* *mulv16hi3 */
    case 7562:  /* *mulv32hi3 */
    case 7560:  /* *sse2_ussubv8hi3 */
    case 7558:  /* *sse2_sssubv8hi3 */
    case 7556:  /* *sse2_usaddv8hi3 */
    case 7554:  /* *sse2_ssaddv8hi3 */
    case 7552:  /* *avx2_ussubv16hi3 */
    case 7550:  /* *avx2_sssubv16hi3 */
    case 7548:  /* *avx2_usaddv16hi3 */
    case 7546:  /* *avx2_ssaddv16hi3 */
    case 7544:  /* *avx512bw_ussubv32hi3 */
    case 7542:  /* *avx512bw_sssubv32hi3 */
    case 7540:  /* *avx512bw_usaddv32hi3 */
    case 7538:  /* *avx512bw_ssaddv32hi3 */
    case 7536:  /* *sse2_ussubv16qi3 */
    case 7534:  /* *sse2_sssubv16qi3 */
    case 7532:  /* *sse2_usaddv16qi3 */
    case 7530:  /* *sse2_ssaddv16qi3 */
    case 7528:  /* *avx2_ussubv32qi3 */
    case 7526:  /* *avx2_sssubv32qi3 */
    case 7524:  /* *avx2_usaddv32qi3 */
    case 7522:  /* *avx2_ssaddv32qi3 */
    case 7520:  /* *avx512bw_ussubv64qi3 */
    case 7518:  /* *avx512bw_sssubv64qi3 */
    case 7516:  /* *avx512bw_usaddv64qi3 */
    case 7514:  /* *avx512bw_ssaddv64qi3 */
    case 7489:  /* *subv2di3 */
    case 7488:  /* *addv2di3 */
    case 7487:  /* *subv4di3 */
    case 7486:  /* *addv4di3 */
    case 7485:  /* *subv8di3 */
    case 7484:  /* *addv8di3 */
    case 7483:  /* *subv4si3 */
    case 7482:  /* *addv4si3 */
    case 7481:  /* *subv8si3 */
    case 7480:  /* *addv8si3 */
    case 7479:  /* *subv16si3 */
    case 7478:  /* *addv16si3 */
    case 7477:  /* *subv8hi3 */
    case 7476:  /* *addv8hi3 */
    case 7475:  /* *subv16hi3 */
    case 7474:  /* *addv16hi3 */
    case 7473:  /* *subv32hi3 */
    case 7472:  /* *addv32hi3 */
    case 7471:  /* *subv16qi3 */
    case 7470:  /* *addv16qi3 */
    case 7469:  /* *subv32qi3 */
    case 7468:  /* *addv32qi3 */
    case 7467:  /* *subv64qi3 */
    case 7466:  /* *addv64qi3 */
    case 7224:  /* vec_concatv2df */
    case 5298:  /* *vec_concatv8bf_0 */
    case 5297:  /* *vec_concatv8hf_0 */
    case 5296:  /* *vec_concatv4sf_0 */
    case 5295:  /* *vec_concatv8bf */
    case 5294:  /* *vec_concatv8hf */
    case 5293:  /* *vec_concatv4sf */
    case 5292:  /* *vec_concatv2sf_sse */
    case 5291:  /* *vec_concatv2sf_sse4_1 */
    case 3799:  /* *xortf3 */
    case 3798:  /* *iortf3 */
    case 3797:  /* *andtf3 */
    case 3796:  /* xordf3 */
    case 3795:  /* iordf3 */
    case 3794:  /* anddf3 */
    case 3793:  /* xorsf3 */
    case 3792:  /* iorsf3 */
    case 3791:  /* andsf3 */
    case 3790:  /* xorhf3 */
    case 3789:  /* iorhf3 */
    case 3788:  /* andhf3 */
    case 3787:  /* xorbf3 */
    case 3786:  /* iorbf3 */
    case 3785:  /* andbf3 */
    case 3778:  /* *bit_and_float_vector_all_ones */
    case 3777:  /* *bit_and_float_vector_all_ones */
    case 3776:  /* *bit_and_float_vector_all_ones */
    case 3775:  /* *bit_and_float_vector_all_ones */
    case 3774:  /* *bit_and_float_vector_all_ones */
    case 3773:  /* *bit_and_float_vector_all_ones */
    case 3772:  /* *bit_and_float_vector_all_ones */
    case 3771:  /* *bit_and_float_vector_all_ones */
    case 3770:  /* *bit_and_float_vector_all_ones */
    case 3769:  /* *bit_and_float_vector_all_ones */
    case 3768:  /* *bit_and_float_vector_all_ones */
    case 3767:  /* *bit_and_float_vector_all_ones */
    case 3765:  /* *xorv8df3 */
    case 3763:  /* *iorv8df3 */
    case 3761:  /* *andv8df3 */
    case 3759:  /* *xorv16sf3 */
    case 3757:  /* *iorv16sf3 */
    case 3755:  /* *andv16sf3 */
    case 3754:  /* *xorv32hf3 */
    case 3753:  /* *iorv32hf3 */
    case 3752:  /* *andv32hf3 */
    case 3751:  /* *xorv32bf3 */
    case 3750:  /* *iorv32bf3 */
    case 3749:  /* *andv32bf3 */
    case 3747:  /* *xorv2df3 */
    case 3745:  /* *iorv2df3 */
    case 3743:  /* *andv2df3 */
    case 3741:  /* *xorv4df3 */
    case 3739:  /* *iorv4df3 */
    case 3737:  /* *andv4df3 */
    case 3735:  /* *xorv4sf3 */
    case 3733:  /* *iorv4sf3 */
    case 3731:  /* *andv4sf3 */
    case 3729:  /* *xorv8sf3 */
    case 3727:  /* *iorv8sf3 */
    case 3725:  /* *andv8sf3 */
    case 3724:  /* *xorv8hf3 */
    case 3723:  /* *iorv8hf3 */
    case 3722:  /* *andv8hf3 */
    case 3721:  /* *xorv16hf3 */
    case 3720:  /* *iorv16hf3 */
    case 3719:  /* *andv16hf3 */
    case 3718:  /* *xorv8bf3 */
    case 3717:  /* *iorv8bf3 */
    case 3716:  /* *andv8bf3 */
    case 3715:  /* *xorv16bf3 */
    case 3714:  /* *iorv16bf3 */
    case 3713:  /* *andv16bf3 */
    case 3052:  /* *sminv2df3 */
    case 3050:  /* *smaxv2df3 */
    case 3046:  /* *sminv4df3 */
    case 3042:  /* *smaxv4df3 */
    case 3038:  /* *sminv8df3 */
    case 3034:  /* *smaxv8df3 */
    case 3032:  /* *sminv4sf3 */
    case 3030:  /* *smaxv4sf3 */
    case 3026:  /* *sminv8sf3 */
    case 3022:  /* *smaxv8sf3 */
    case 3018:  /* *sminv16sf3 */
    case 3014:  /* *smaxv16sf3 */
    case 3012:  /* *sminv8hf3 */
    case 3010:  /* *smaxv8hf3 */
    case 3006:  /* *sminv16hf3 */
    case 3002:  /* *smaxv16hf3 */
    case 2998:  /* *sminv32hf3 */
    case 2994:  /* *smaxv32hf3 */
    case 2879:  /* sse2_divv2df3 */
    case 2875:  /* avx_divv4df3 */
    case 2871:  /* avx512f_divv8df3 */
    case 2869:  /* sse_divv4sf3 */
    case 2865:  /* avx_divv8sf3 */
    case 2861:  /* avx512f_divv16sf3 */
    case 2859:  /* avx512fp16_divv8hf3 */
    case 2855:  /* avx512fp16_divv16hf3 */
    case 2851:  /* avx512fp16_divv32hf3 */
    case 2817:  /* *mulv2df3 */
    case 2813:  /* *mulv4df3 */
    case 2809:  /* *mulv8df3 */
    case 2805:  /* *mulv4sf3 */
    case 2801:  /* *mulv8sf3 */
    case 2797:  /* *mulv16sf3 */
    case 2793:  /* *mulv8hf3 */
    case 2789:  /* *mulv16hf3 */
    case 2785:  /* *mulv32hf3 */
    case 2751:  /* *subv2df3 */
    case 2747:  /* *addv2df3 */
    case 2743:  /* *subv4df3 */
    case 2739:  /* *addv4df3 */
    case 2735:  /* *subv8df3 */
    case 2731:  /* *addv8df3 */
    case 2727:  /* *subv4sf3 */
    case 2723:  /* *addv4sf3 */
    case 2719:  /* *subv8sf3 */
    case 2715:  /* *addv8sf3 */
    case 2711:  /* *subv16sf3 */
    case 2707:  /* *addv16sf3 */
    case 2703:  /* *subv8hf3 */
    case 2699:  /* *addv8hf3 */
    case 2695:  /* *subv16hf3 */
    case 2691:  /* *addv16hf3 */
    case 2687:  /* *subv32hf3 */
    case 2683:  /* *addv32hf3 */
    case 2557:  /* *sse2_movq128_v2df_1 */
    case 2556:  /* *sse2_movq128_v2di_1 */
    case 2348:  /* *mmx_concatv2si */
    case 2282:  /* *mmx_xorv2si3 */
    case 2281:  /* *mmx_iorv2si3 */
    case 2280:  /* *mmx_andv2si3 */
    case 2279:  /* *mmx_xorv4hi3 */
    case 2278:  /* *mmx_iorv4hi3 */
    case 2277:  /* *mmx_andv4hi3 */
    case 2276:  /* *mmx_xorv8qi3 */
    case 2275:  /* *mmx_iorv8qi3 */
    case 2274:  /* *mmx_andv8qi3 */
    case 2228:  /* *gtv2hi3 */
    case 2227:  /* *gtv2qi3 */
    case 2226:  /* *gtv4qi3 */
    case 2225:  /* mmx_gtv2si3 */
    case 2224:  /* mmx_gtv4hi3 */
    case 2223:  /* mmx_gtv8qi3 */
    case 2222:  /* *eqv2hi3 */
    case 2221:  /* *eqv2qi3 */
    case 2220:  /* *eqv4qi3 */
    case 2219:  /* *mmx_eqv2si3 */
    case 2218:  /* *mmx_eqv4hi3 */
    case 2217:  /* *mmx_eqv8qi3 */
    case 2213:  /* *mmx_ashrv2hi3_1 */
    case 2212:  /* ashrv2hi3 */
    case 2211:  /* lshrv2hi3 */
    case 2210:  /* ashlv2hi3 */
    case 2209:  /* mmx_lshrv1si3 */
    case 2208:  /* mmx_ashlv1si3 */
    case 2207:  /* mmx_lshrv1di3 */
    case 2206:  /* mmx_ashlv1di3 */
    case 2205:  /* mmx_lshrv2si3 */
    case 2204:  /* mmx_ashlv2si3 */
    case 2203:  /* mmx_lshrv4hi3 */
    case 2202:  /* mmx_ashlv4hi3 */
    case 2201:  /* *mmx_ashrv2si3_1 */
    case 2200:  /* *mmx_ashrv4hi3_1 */
    case 2199:  /* mmx_ashrv2si3 */
    case 2198:  /* mmx_ashrv4hi3 */
    case 2191:  /* uminv2hi3 */
    case 2190:  /* umaxv2hi3 */
    case 2189:  /* uminv2qi3 */
    case 2188:  /* umaxv2qi3 */
    case 2187:  /* uminv4qi3 */
    case 2186:  /* umaxv4qi3 */
    case 2185:  /* *mmx_uminv8qi3 */
    case 2184:  /* *mmx_umaxv8qi3 */
    case 2183:  /* uminv2si3 */
    case 2182:  /* umaxv2si3 */
    case 2181:  /* uminv4hi3 */
    case 2180:  /* umaxv4hi3 */
    case 2179:  /* sminv2hi3 */
    case 2178:  /* smaxv2hi3 */
    case 2177:  /* sminv2qi3 */
    case 2176:  /* smaxv2qi3 */
    case 2175:  /* sminv4qi3 */
    case 2174:  /* smaxv4qi3 */
    case 2173:  /* *mmx_sminv4hi3 */
    case 2172:  /* *mmx_smaxv4hi3 */
    case 2171:  /* sminv2si3 */
    case 2170:  /* smaxv2si3 */
    case 2169:  /* sminv8qi3 */
    case 2168:  /* smaxv8qi3 */
    case 2160:  /* mulv2hi3 */
    case 2159:  /* *mmx_mulv4hi3 */
    case 2158:  /* mulv2si3 */
    case 2157:  /* ussubv2hi3 */
    case 2156:  /* sssubv2hi3 */
    case 2155:  /* usaddv2hi3 */
    case 2154:  /* ssaddv2hi3 */
    case 2153:  /* ussubv2qi3 */
    case 2152:  /* sssubv2qi3 */
    case 2151:  /* usaddv2qi3 */
    case 2150:  /* ssaddv2qi3 */
    case 2149:  /* ussubv4qi3 */
    case 2148:  /* sssubv4qi3 */
    case 2147:  /* usaddv4qi3 */
    case 2146:  /* ssaddv4qi3 */
    case 2145:  /* *mmx_ussubv4hi3 */
    case 2144:  /* *mmx_sssubv4hi3 */
    case 2143:  /* *mmx_usaddv4hi3 */
    case 2142:  /* *mmx_ssaddv4hi3 */
    case 2141:  /* *mmx_ussubv8qi3 */
    case 2140:  /* *mmx_sssubv8qi3 */
    case 2139:  /* *mmx_usaddv8qi3 */
    case 2138:  /* *mmx_ssaddv8qi3 */
    case 2135:  /* subv2hi3 */
    case 2134:  /* addv2hi3 */
    case 2133:  /* subv4qi3 */
    case 2132:  /* addv4qi3 */
    case 2131:  /* *mmx_subv1di3 */
    case 2130:  /* *mmx_addv1di3 */
    case 2129:  /* *mmx_subv2si3 */
    case 2128:  /* *mmx_addv2si3 */
    case 2127:  /* *mmx_subv4hi3 */
    case 2126:  /* *mmx_addv4hi3 */
    case 2125:  /* *mmx_subv8qi3 */
    case 2124:  /* *mmx_addv8qi3 */
    case 2122:  /* xorv4hf3 */
    case 2121:  /* iorv4hf3 */
    case 2120:  /* andv4hf3 */
    case 2119:  /* xorv2hf3 */
    case 2118:  /* iorv2hf3 */
    case 2117:  /* andv2hf3 */
    case 2116:  /* xorv4bf3 */
    case 2115:  /* iorv4bf3 */
    case 2114:  /* andv4bf3 */
    case 2113:  /* xorv2bf3 */
    case 2112:  /* iorv2bf3 */
    case 2111:  /* andv2bf3 */
    case 2092:  /* *mmx_concatv2sf */
    case 2079:  /* xorv2sf3 */
    case 2078:  /* iorv2sf3 */
    case 2077:  /* andv2sf3 */
    case 1820:  /* sminhf3 */
    case 1819:  /* smaxhf3 */
    case 1818:  /* smindf3 */
    case 1817:  /* smaxdf3 */
    case 1816:  /* sminsf3 */
    case 1815:  /* smaxsf3 */
    case 1679:  /* *divhf */
    case 1678:  /* *mulhf */
    case 1677:  /* *subhf */
    case 1676:  /* *addhf */
    case 1379:  /* *rotrhi3_1_nf */
    case 1377:  /* *rotlhi3_1_nf */
    case 1375:  /* *rotrqi3_1_nf */
    case 1373:  /* *rotlqi3_1_nf */
    case 1348:  /* *rotrdi3_1_nf */
    case 1346:  /* *rotldi3_1_nf */
    case 1344:  /* *rotrsi3_1_nf */
    case 1342:  /* *rotlsi3_1_nf */
    case 1341:  /* *bmi2_rorxdi3_1 */
    case 1340:  /* *bmi2_rorxsi3_1 */
    case 1214:  /* *lshrhi3_1_nf */
    case 1212:  /* *lshrqi3_1_nf */
    case 1210:  /* *ashrhi3_1_nf */
    case 1208:  /* *ashrqi3_1_nf */
    case 1182:  /* *lshrdi3_1_nf */
    case 1180:  /* *lshrsi3_1_nf */
    case 1177:  /* *ashrdi3_1_nf */
    case 1175:  /* *ashrsi3_1_nf */
    case 1174:  /* *bmi2_ashrdi3_1 */
    case 1173:  /* *bmi2_lshrdi3_1 */
    case 1172:  /* *bmi2_ashrsi3_1 */
    case 1171:  /* *bmi2_lshrsi3_1 */
    case 1168:  /* ashrdi3_cvt_nf */
    case 1166:  /* ashrsi3_cvt_nf */
    case 1106:  /* *ashlqi3_1_nf */
    case 1104:  /* *ashlhi3_1_nf */
    case 1090:  /* *ashldi3_1_nf */
    case 1088:  /* *ashlsi3_1_nf */
    case 1087:  /* *bmi2_ashldi3_1 */
    case 1086:  /* *bmi2_ashlsi3_1 */
    case 869:  /* *xorqi_1_nf */
    case 867:  /* *iorqi_1_nf */
    case 833:  /* *xordi_1_nf */
    case 831:  /* *iordi_1_nf */
    case 829:  /* *xorsi_1_nf */
    case 827:  /* *iorsi_1_nf */
    case 825:  /* *xorhi_1_nf */
    case 823:  /* *iorhi_1_nf */
    case 723:  /* *andqi_1_nf */
    case 721:  /* *andsi_1_nf */
    case 719:  /* *andhi_1_nf */
    case 705:  /* *anddi_1_nf */
    case 602:  /* *mulqi3_1_nf */
    case 594:  /* *muldi3_1_nf */
    case 592:  /* *mulsi3_1_nf */
    case 590:  /* *mulhi3_1_nf */
    case 390:  /* *subdi_1_nf */
    case 388:  /* *subsi_1_nf */
    case 386:  /* *subhi_1_nf */
    case 384:  /* *subqi_1_nf */
    case 299:  /* *addqi_1_nf */
    case 297:  /* *addhi_1_nf */
    case 284:  /* *adddi_1_nf */
    case 282:  /* *addsi_1_nf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 281:  /* *addti3_doubleword_concat_zext */
    case 280:  /* *addti3_doubleword_concat_zext */
    case 279:  /* *addti3_doubleword_concat_zext */
    case 278:  /* *adddi3_doubleword_concat_zext */
    case 277:  /* *adddi3_doubleword_concat_zext */
    case 276:  /* *adddi3_doubleword_concat_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 275:  /* *addti3_doubleword_concat */
    case 274:  /* *addti3_doubleword_concat */
    case 273:  /* *addti3_doubleword_concat */
    case 272:  /* *adddi3_doubleword_concat */
    case 271:  /* *adddi3_doubleword_concat */
    case 270:  /* *adddi3_doubleword_concat */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 569:  /* *adddi3_ne_0 */
    case 568:  /* *addsi3_ne_0 */
    case 567:  /* *addhi3_ne_0 */
    case 566:  /* *addqi3_ne_0 */
    case 565:  /* *adddi3_eq_0 */
    case 564:  /* *addsi3_eq_0 */
    case 563:  /* *addhi3_eq_0 */
    case 562:  /* *addqi3_eq_0 */
    case 269:  /* *addti3_doubleword_zext */
    case 268:  /* *adddi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 2608:  /* klshiftrtdi */
    case 2607:  /* kashiftdi */
    case 2606:  /* klshiftrtsi */
    case 2605:  /* kashiftsi */
    case 2604:  /* klshiftrthi */
    case 2603:  /* kashifthi */
    case 2602:  /* klshiftrtqi */
    case 2601:  /* kashiftqi */
    case 2600:  /* kadddi */
    case 2599:  /* kaddsi */
    case 2598:  /* kaddhi */
    case 2597:  /* kaddqi */
    case 2583:  /* kxordi */
    case 2582:  /* kiordi */
    case 2581:  /* kanddi */
    case 2580:  /* kxorsi */
    case 2579:  /* kiorsi */
    case 2578:  /* kandsi */
    case 2577:  /* kxorhi */
    case 2576:  /* kiorhi */
    case 2575:  /* kandhi */
    case 2574:  /* kxorqi */
    case 2573:  /* kiorqi */
    case 2572:  /* kandqi */
    case 2291:  /* *xorv2hi3 */
    case 2290:  /* *iorv2hi3 */
    case 2289:  /* *andv2hi3 */
    case 2288:  /* *xorv2qi3 */
    case 2287:  /* *iorv2qi3 */
    case 2286:  /* *andv2qi3 */
    case 2285:  /* *xorv4qi3 */
    case 2284:  /* *iorv4qi3 */
    case 2283:  /* *andv4qi3 */
    case 2216:  /* ashrv2qi3 */
    case 2215:  /* lshrv2qi3 */
    case 2214:  /* ashlv2qi3 */
    case 2137:  /* subv2qi3 */
    case 2136:  /* addv2qi3 */
    case 2071:  /* mmx_gev2sf3 */
    case 2070:  /* mmx_gtv2sf3 */
    case 2069:  /* *mmx_eqv2sf3 */
    case 2056:  /* *mmx_sminv2sf3 */
    case 2055:  /* *mmx_smaxv2sf3 */
    case 2054:  /* *mmx_mulv2sf3 */
    case 2053:  /* *mmx_subv2sf3 */
    case 2052:  /* *mmx_addv2sf3 */
    case 1858:  /* pro_epilogue_adjust_stack_sub_di */
    case 1857:  /* pro_epilogue_adjust_stack_sub_si */
    case 1856:  /* pro_epilogue_adjust_stack_add_di */
    case 1855:  /* pro_epilogue_adjust_stack_add_si */
    case 1854:  /* *umindi3_1 */
    case 1853:  /* *umaxdi3_1 */
    case 1852:  /* *smindi3_1 */
    case 1851:  /* *smaxdi3_1 */
    case 1850:  /* *uminsi3_1 */
    case 1849:  /* *umaxsi3_1 */
    case 1848:  /* *sminsi3_1 */
    case 1847:  /* *smaxsi3_1 */
    case 1846:  /* *uminhi3_1 */
    case 1845:  /* *umaxhi3_1 */
    case 1844:  /* *sminhi3_1 */
    case 1843:  /* *smaxhi3_1 */
    case 1842:  /* *uminqi3_1 */
    case 1841:  /* *umaxqi3_1 */
    case 1840:  /* *sminqi3_1 */
    case 1839:  /* *smaxqi3_1 */
    case 1838:  /* *uminti3_doubleword */
    case 1837:  /* *umaxti3_doubleword */
    case 1836:  /* *sminti3_doubleword */
    case 1835:  /* *smaxti3_doubleword */
    case 1834:  /* *umindi3_doubleword */
    case 1833:  /* *umaxdi3_doubleword */
    case 1832:  /* *smindi3_doubleword */
    case 1831:  /* *smaxdi3_doubleword */
    case 1380:  /* *rotrhi3_1 */
    case 1378:  /* *rotlhi3_1 */
    case 1376:  /* *rotrqi3_1 */
    case 1374:  /* *rotlqi3_1 */
    case 1349:  /* *rotrdi3_1 */
    case 1347:  /* *rotldi3_1 */
    case 1345:  /* *rotrsi3_1 */
    case 1343:  /* *rotlsi3_1 */
    case 1215:  /* *lshrhi3_1 */
    case 1213:  /* *lshrqi3_1 */
    case 1211:  /* *ashrhi3_1 */
    case 1209:  /* *ashrqi3_1 */
    case 1183:  /* *lshrdi3_1 */
    case 1181:  /* *lshrsi3_1 */
    case 1178:  /* *ashrdi3_1 */
    case 1176:  /* *ashrsi3_1 */
    case 1169:  /* ashrdi3_cvt */
    case 1167:  /* ashrsi3_cvt */
    case 1133:  /* ashrti3_doubleword */
    case 1132:  /* lshrti3_doubleword */
    case 1131:  /* ashrdi3_doubleword */
    case 1130:  /* lshrdi3_doubleword */
    case 1107:  /* *ashlqi3_1 */
    case 1105:  /* *ashlhi3_1 */
    case 1091:  /* *ashldi3_1 */
    case 1089:  /* *ashlsi3_1 */
    case 1057:  /* ashlti3_doubleword */
    case 1056:  /* ashldi3_doubleword */
    case 870:  /* *xorqi_1 */
    case 868:  /* *iorqi_1 */
    case 839:  /* *xordi_1_btc */
    case 838:  /* *iordi_1_bts */
    case 834:  /* *xordi_1 */
    case 832:  /* *iordi_1 */
    case 830:  /* *xorsi_1 */
    case 828:  /* *iorsi_1 */
    case 826:  /* *xorhi_1 */
    case 824:  /* *iorhi_1 */
    case 822:  /* *xorti3_doubleword */
    case 821:  /* *iorti3_doubleword */
    case 820:  /* *xordi3_doubleword */
    case 819:  /* *iordi3_doubleword */
    case 724:  /* *andqi_1 */
    case 722:  /* *andsi_1 */
    case 720:  /* *andhi_1 */
    case 707:  /* *anddi_1_btr */
    case 706:  /* *anddi_1 */
    case 704:  /* *andti3_doubleword */
    case 703:  /* *anddi3_doubleword */
    case 603:  /* *mulqi3_1 */
    case 595:  /* *muldi3_1 */
    case 593:  /* *mulsi3_1 */
    case 591:  /* *mulhi3_1 */
    case 498:  /* *subdi3_carry_0r */
    case 497:  /* *subsi3_carry_0r */
    case 496:  /* *subhi3_carry_0r */
    case 495:  /* *subqi3_carry_0r */
    case 494:  /* *subdi3_carry_0 */
    case 493:  /* *subsi3_carry_0 */
    case 492:  /* *subhi3_carry_0 */
    case 491:  /* *subqi3_carry_0 */
    case 391:  /* *subdi_1 */
    case 389:  /* *subsi_1 */
    case 387:  /* *subhi_1 */
    case 385:  /* *subqi_1 */
    case 381:  /* *subti3_doubleword */
    case 380:  /* *subdi3_doubleword */
    case 300:  /* *addqi_1 */
    case 298:  /* *addhi_1 */
    case 285:  /* *adddi_1 */
    case 283:  /* *addsi_1 */
    case 267:  /* *addti3_doubleword */
    case 266:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 8586:  /* sse_stmxcsr */
    case 2014:  /* sttilecfg */
    case 1983:  /* rdpid_rex64 */
    case 1982:  /* rdpid */
    case 1942:  /* rdgsbasedi */
    case 1941:  /* rdfsbasedi */
    case 1940:  /* rdgsbasesi */
    case 1939:  /* rdfsbasesi */
    case 1934:  /* lwp_slwpcbdi */
    case 1933:  /* lwp_slwpcbsi */
    case 1929:  /* fnstsw */
    case 1902:  /* fxsave64 */
    case 1901:  /* fxsave */
    case 1897:  /* rdtsc */
    case 1890:  /* *prefetch_rst2 */
    case 1714:  /* x86_fnstsw_1 */
    case 1660:  /* *load_tp_x32_zext */
    case 1659:  /* *load_tp_di */
    case 1658:  /* *load_tp_si */
    case 1500:  /* set_got_rex64 */
    case 238:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 263:  /* floatunssixf2_i387_with_xmm */
    case 262:  /* floatunssidf2_i387_with_xmm */
    case 261:  /* floatunssisf2_i387_with_xmm */
    case 237:  /* fix_truncsi_i387 */
    case 236:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 256:  /* floatdixf2_i387_with_xmm */
    case 255:  /* floatdidf2_i387_with_xmm */
    case 254:  /* floatdisf2_i387_with_xmm */
    case 235:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 2676:  /* *negv2df2 */
    case 2675:  /* *absv2df2 */
    case 2674:  /* *negv4df2 */
    case 2673:  /* *absv4df2 */
    case 2672:  /* *negv8df2 */
    case 2671:  /* *absv8df2 */
    case 2670:  /* *negv4sf2 */
    case 2669:  /* *absv4sf2 */
    case 2668:  /* *negv8sf2 */
    case 2667:  /* *absv8sf2 */
    case 2666:  /* *negv16sf2 */
    case 2665:  /* *absv16sf2 */
    case 2664:  /* *negv8hf2 */
    case 2663:  /* *absv8hf2 */
    case 2662:  /* *negv16hf2 */
    case 2661:  /* *absv16hf2 */
    case 2660:  /* *negv32hf2 */
    case 2659:  /* *absv32hf2 */
    case 2658:  /* *negv8bf2 */
    case 2657:  /* *absv8bf2 */
    case 2656:  /* *negv16bf2 */
    case 2655:  /* *absv16bf2 */
    case 2654:  /* *negv32bf2 */
    case 2653:  /* *absv32bf2 */
    case 2102:  /* *mmx_negv4hf */
    case 2101:  /* *mmx_absv4hf */
    case 2100:  /* *mmx_negv2hf */
    case 2099:  /* *mmx_absv2hf */
    case 2098:  /* *mmx_negv4bf */
    case 2097:  /* *mmx_absv4bf */
    case 2096:  /* *mmx_negv2bf */
    case 2095:  /* *mmx_absv2bf */
    case 2050:  /* *mmx_negv2sf2 */
    case 2049:  /* *mmx_absv2sf2 */
    case 1507:  /* ffssi2_no_cmove */
    case 1021:  /* *negdf2_1 */
    case 1020:  /* *absdf2_1 */
    case 1019:  /* *negsf2_1 */
    case 1018:  /* *abssf2_1 */
    case 1017:  /* *neghf2_1 */
    case 1016:  /* *abshf2_1 */
    case 1008:  /* *negtf2_1 */
    case 1007:  /* *abstf2_1 */
    case 231:  /* fix_truncdi_i387_fisttp */
    case 230:  /* fix_truncsi_i387_fisttp */
    case 229:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 224:  /* *fixuns_truncdf_1 */
    case 223:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 199:  /* *extendqisi_ext_1 */
    case 198:  /* *extendqisi_ext_1 */
    case 197:  /* *extendqisi_ext_1 */
    case 196:  /* *extendqihi_ext_1 */
    case 195:  /* *extendqihi_ext_1 */
    case 194:  /* *extendqihi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 10439:  /* vcvtneobf162ps_v16bf */
    case 10438:  /* vcvtneoph2ps_v16hf */
    case 10437:  /* vcvtneobf162ps_v8bf */
    case 10436:  /* vcvtneoph2ps_v8hf */
    case 10435:  /* vcvtneebf162ps_v16bf */
    case 10434:  /* vcvtneeph2ps_v16hf */
    case 10433:  /* vcvtneebf162ps_v8bf */
    case 10432:  /* vcvtneeph2ps_v8hf */
    case 10431:  /* vbcstnesh2ps_v4sf */
    case 10430:  /* vbcstnesh2ps_v8sf */
    case 10429:  /* vbcstnebf162ps_v4sf */
    case 10428:  /* vbcstnebf162ps_v8sf */
    case 10108:  /* avx512f_pd512_pd */
    case 10107:  /* avx512f_ps512_ps */
    case 10106:  /* avx512f_si512_si */
    case 9331:  /* *avx512dq_broadcastv8sf */
    case 9329:  /* *avx512dq_broadcastv16sf */
    case 9327:  /* *avx512dq_broadcastv4si */
    case 9325:  /* *avx512dq_broadcastv8si */
    case 9323:  /* *avx512dq_broadcastv16si */
    case 9235:  /* avx512vl_vec_dupv8bf */
    case 9233:  /* avx512vl_vec_dupv16bf */
    case 9231:  /* avx512bw_vec_dupv32bf */
    case 9229:  /* avx512fp16_vec_dupv8hf */
    case 9227:  /* avx512vl_vec_dupv16hf */
    case 9225:  /* avx512bw_vec_dupv32hf */
    case 9223:  /* avx512vl_vec_dupv8hi */
    case 9221:  /* avx512vl_vec_dupv16hi */
    case 9219:  /* avx512bw_vec_dupv32hi */
    case 9217:  /* avx512vl_vec_dupv32qi */
    case 9215:  /* avx512vl_vec_dupv16qi */
    case 9213:  /* avx512bw_vec_dupv64qi */
    case 9211:  /* avx512vl_vec_dupv2df */
    case 9209:  /* avx512vl_vec_dupv4df */
    case 9207:  /* avx512f_vec_dupv8df */
    case 9205:  /* avx512vl_vec_dupv4sf */
    case 9203:  /* avx512vl_vec_dupv8sf */
    case 9201:  /* avx512f_vec_dupv16sf */
    case 9199:  /* avx512vl_vec_dupv2di */
    case 9197:  /* avx512vl_vec_dupv4di */
    case 9195:  /* avx512f_vec_dupv8di */
    case 9193:  /* avx512vl_vec_dupv4si */
    case 9191:  /* avx512vl_vec_dupv8si */
    case 9189:  /* avx512f_vec_dupv16si */
    case 9188:  /* avx512bw_vec_dupv32bf_1 */
    case 9187:  /* avx512bw_vec_dupv32hf_1 */
    case 9186:  /* avx512bw_vec_dupv64qi_1 */
    case 9185:  /* avx512bw_vec_dupv32hi_1 */
    case 9184:  /* avx512f_vec_dupv8di_1 */
    case 9183:  /* avx512f_vec_dupv16si_1 */
    case 9182:  /* avx2_vec_dupv4df */
    case 9117:  /* avx2_pbroadcastv16bf_1 */
    case 9116:  /* avx2_pbroadcastv16hf_1 */
    case 9115:  /* avx2_pbroadcastv4di_1 */
    case 9114:  /* avx2_pbroadcastv8si_1 */
    case 9113:  /* avx2_pbroadcastv16hi_1 */
    case 9112:  /* avx2_pbroadcastv32qi_1 */
    case 9111:  /* avx2_pbroadcastv8bf */
    case 9110:  /* avx2_pbroadcastv16bf */
    case 9109:  /* avx2_pbroadcastv32bf */
    case 9108:  /* avx2_pbroadcastv8hf */
    case 9107:  /* avx2_pbroadcastv16hf */
    case 9106:  /* avx2_pbroadcastv32hf */
    case 9105:  /* avx2_pbroadcastv2di */
    case 9104:  /* avx2_pbroadcastv4di */
    case 9103:  /* avx2_pbroadcastv4si */
    case 9102:  /* avx2_pbroadcastv8si */
    case 9101:  /* avx2_pbroadcastv8hi */
    case 9100:  /* avx2_pbroadcastv16hi */
    case 9099:  /* avx2_pbroadcastv32hi */
    case 9098:  /* avx2_pbroadcastv16qi */
    case 9097:  /* avx2_pbroadcastv32qi */
    case 9096:  /* avx2_pbroadcastv64qi */
    case 9095:  /* avx2_pbroadcastv8di */
    case 9094:  /* avx2_pbroadcastv16si */
    case 8926:  /* sse4_1_zero_extendv2siv2di2 */
    case 8924:  /* sse4_1_sign_extendv2siv2di2 */
    case 8902:  /* sse4_1_zero_extendv2hiv2di2 */
    case 8900:  /* sse4_1_sign_extendv2hiv2di2 */
    case 8890:  /* avx2_zero_extendv4hiv4di2 */
    case 8888:  /* avx2_sign_extendv4hiv4di2 */
    case 8875:  /* sse4_1_zero_extendv2qiv2di2 */
    case 8873:  /* sse4_1_sign_extendv2qiv2di2 */
    case 8863:  /* avx2_zero_extendv4qiv4di2 */
    case 8861:  /* avx2_sign_extendv4qiv4di2 */
    case 8851:  /* avx512f_zero_extendv8qiv8di2 */
    case 8849:  /* avx512f_sign_extendv8qiv8di2 */
    case 8835:  /* sse4_1_zero_extendv4hiv4si2 */
    case 8833:  /* sse4_1_sign_extendv4hiv4si2 */
    case 8807:  /* sse4_1_zero_extendv4qiv4si2 */
    case 8805:  /* sse4_1_sign_extendv4qiv4si2 */
    case 8795:  /* avx2_zero_extendv8qiv8si2 */
    case 8793:  /* avx2_sign_extendv8qiv8si2 */
    case 8775:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 8773:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 8475:  /* *vec_extractv4si_0_zext */
    case 8474:  /* *vec_extractv4si_0_zext_sse4 */
    case 7456:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 7455:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 7454:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 7450:  /* avx512f_us_truncatev8div16qi2 */
    case 7449:  /* avx512f_truncatev8div16qi2 */
    case 7448:  /* avx512f_ss_truncatev8div16qi2 */
    case 7438:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 7437:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 7436:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 7419:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 7418:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 7417:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 7395:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 7394:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 7393:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 7392:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 7391:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 7390:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 7355:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 7354:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 7353:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 7352:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 7351:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 7350:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 7325:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 7324:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 7323:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 7322:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 7321:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 7320:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 7304:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 7303:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 7302:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 5334:  /* *vec_setv2di_0_zero_extendsi_1 */
    case 5322:  /* *vec_setv2di_0_zero_extendhi_1 */
    case 5290:  /* avx512f_vec_dupv8df_1 */
    case 5289:  /* avx512f_vec_dupv16sf_1 */
    case 5288:  /* avx2_vec_dupv8sf_1 */
    case 5287:  /* avx2_vec_dupv4sf */
    case 5286:  /* avx2_vec_dupv8sf */
    case 5242:  /* sse2_cvtps2pd */
    case 5199:  /* vec_unpacks_lo_v16sf */
    case 5198:  /* *avx_cvtps2pd256_2 */
    case 5165:  /* sse2_cvttpd2dq */
    case 5151:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 5149:  /* avx512dq_fix_truncv2sfv2di2 */
    case 5045:  /* *fixuns_truncv2dfv2si2 */
    case 5003:  /* sse2_cvtdq2pd */
    case 5002:  /* avx_cvtdq2pd256_2 */
    case 5001:  /* avx512f_cvtdq2pd512_2 */
    case 4999:  /* *floatunsv2siv2df2 */
    case 4947:  /* sse2_cvttsd2siq */
    case 4945:  /* sse2_cvttsd2si */
    case 4933:  /* avx512f_vcvttsd2usiq */
    case 4931:  /* avx512f_vcvttsd2usi */
    case 4921:  /* avx512f_vcvttss2usiq */
    case 4919:  /* avx512f_vcvttss2usi */
    case 4806:  /* sse_cvttss2siq */
    case 4804:  /* sse_cvttss2si */
    case 4789:  /* sse_cvttps2pi */
    case 4736:  /* avx512fp16_float_extend_phv2df2 */
    case 4730:  /* avx512fp16_float_extend_phv4sf2 */
    case 4726:  /* avx512fp16_float_extend_phv4df2 */
    case 4708:  /* avx512fp16_fixuns_truncdi2 */
    case 4706:  /* avx512fp16_fix_truncdi2 */
    case 4704:  /* avx512fp16_fixuns_truncsi2 */
    case 4702:  /* avx512fp16_fix_truncsi2 */
    case 4688:  /* avx512fp16_fixuns_truncv2di2 */
    case 4686:  /* avx512fp16_fix_truncv2di2 */
    case 4672:  /* avx512fp16_fixuns_truncv4di2 */
    case 4670:  /* avx512fp16_fix_truncv4di2 */
    case 4668:  /* avx512fp16_fixuns_truncv4si2 */
    case 4666:  /* avx512fp16_fix_truncv4si2 */
    case 2374:  /* *vec_dupv2hi */
    case 2353:  /* *vec_extractv2si_1_zext */
    case 2351:  /* *vec_extractv2si_0_zext */
    case 2350:  /* *vec_extractv2si_0_zext_sse4 */
    case 2343:  /* *vec_dupv4hi */
    case 2311:  /* sse4_1_zero_extendv2qiv2hi2 */
    case 2310:  /* sse4_1_sign_extendv2qiv2hi2 */
    case 2309:  /* sse4_1_zero_extendv2qiv2si2 */
    case 2308:  /* sse4_1_sign_extendv2qiv2si2 */
    case 2307:  /* sse4_1_zero_extendv2hiv2si2 */
    case 2306:  /* sse4_1_sign_extendv2hiv2si2 */
    case 2305:  /* sse4_1_zero_extendv4qiv4hi2 */
    case 2304:  /* sse4_1_sign_extendv4qiv4hi2 */
    case 1040:  /* *one_cmplsi2_1_zext */
    case 1039:  /* *one_cmplhi2_1_zextdi */
    case 1038:  /* *one_cmplhi2_1_zextsi */
    case 1037:  /* *one_cmplqi2_1_zextdi */
    case 1036:  /* *one_cmplqi2_1_zextsi */
    case 1035:  /* *one_cmplqi2_1_zexthi */
    case 970:  /* *neghi_1_zextdi_nf */
    case 968:  /* *neghi_1_zextsi_nf */
    case 966:  /* *negqi_1_zextdi_nf */
    case 964:  /* *negqi_1_zextsi_nf */
    case 962:  /* *negqi_1_zexthi_nf */
    case 222:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 221:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 220:  /* *fixuns_trunchfsi2zext */
    case 192:  /* *extendqisi2_zext */
    case 190:  /* *extendhisi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 186:  /* extendditi2 */
    case 185:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 2058:  /* mmx_ieee_minv2sf3 */
    case 2057:  /* mmx_ieee_maxv2sf3 */
    case 1866:  /* probe_stack_range_di */
    case 1865:  /* probe_stack_range_si */
    case 1670:  /* *tls_dynamic_gnu2_call_64_di */
    case 1669:  /* *tls_dynamic_gnu2_call_64_si */
    case 1567:  /* bmi_bextr_di */
    case 1566:  /* bmi_bextr_si */
    case 163:  /* push2p_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 2558:  /* movdi_to_sse */
    case 1870:  /* stack_protect_set_1_di_di */
    case 1869:  /* stack_protect_set_1_si_di */
    case 1868:  /* stack_protect_set_1_di_si */
    case 1867:  /* stack_protect_set_1_si_si */
    case 1733:  /* lrintxfdi2 */
    case 164:  /* pop2p_di */
    case 160:  /* pop2_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 11021:  /* atomic_storedi_1 */
    case 11020:  /* atomic_storesi_1 */
    case 11019:  /* atomic_storehi_1 */
    case 11018:  /* atomic_storeqi_1 */
    case 10727:  /* avx10_2_fpclassbf16_v8bf */
    case 10725:  /* avx10_2_fpclassbf16_v16bf */
    case 10723:  /* avx10_2_fpclassbf16_v32bf */
    case 10721:  /* avx10_2_getmantbf16_v8bf */
    case 10719:  /* avx10_2_reducebf16_v8bf */
    case 10717:  /* avx10_2_rndscalebf16_v8bf */
    case 10715:  /* avx10_2_getmantbf16_v16bf */
    case 10713:  /* avx10_2_reducebf16_v16bf */
    case 10711:  /* avx10_2_rndscalebf16_v16bf */
    case 10709:  /* avx10_2_getmantbf16_v32bf */
    case 10707:  /* avx10_2_reducebf16_v32bf */
    case 10705:  /* avx10_2_rndscalebf16_v32bf */
    case 10595:  /* avx10_2_scalefbf16_v8bf */
    case 10593:  /* avx10_2_scalefbf16_v16bf */
    case 10591:  /* avx10_2_scalefbf16_v32bf */
    case 10496:  /* vcvtbiasph2hf8sv16hf */
    case 10494:  /* vcvtbiasph2hf8v16hf */
    case 10492:  /* vcvtbiasph2bf8sv16hf */
    case 10490:  /* vcvtbiasph2bf8v16hf */
    case 10488:  /* vcvtbiasph2hf8sv32hf */
    case 10486:  /* vcvtbiasph2hf8v32hf */
    case 10484:  /* vcvtbiasph2bf8sv32hf */
    case 10482:  /* vcvtbiasph2bf8v32hf */
    case 10472:  /* vcvt2ph2hf8sv8hf */
    case 10470:  /* vcvt2ph2hf8v8hf */
    case 10468:  /* vcvt2ph2bf8sv8hf */
    case 10466:  /* vcvt2ph2bf8v8hf */
    case 10464:  /* vcvt2ph2hf8sv16hf */
    case 10462:  /* vcvt2ph2hf8v16hf */
    case 10460:  /* vcvt2ph2bf8sv16hf */
    case 10458:  /* vcvt2ph2bf8v16hf */
    case 10456:  /* vcvt2ph2hf8sv32hf */
    case 10454:  /* vcvt2ph2hf8v32hf */
    case 10452:  /* vcvt2ph2bf8sv32hf */
    case 10450:  /* vcvt2ph2bf8v32hf */
    case 10340:  /* avx512vp2intersect_2intersectv16si */
    case 10339:  /* avx512vp2intersect_2intersectv4si */
    case 10338:  /* avx512vp2intersect_2intersectv8si */
    case 10337:  /* avx512vp2intersect_2intersectv2di */
    case 10336:  /* avx512vp2intersect_2intersectv4di */
    case 10335:  /* avx512vp2intersect_2intersectv8di */
    case 10331:  /* avx512vl_vpshufbitqmbv32qi */
    case 10329:  /* avx512vl_vpshufbitqmbv16qi */
    case 10327:  /* avx512vl_vpshufbitqmbv64qi */
    case 10323:  /* vaesenclast_v64qi */
    case 10322:  /* vaesenclast_v16qi */
    case 10321:  /* vaesenclast_v32qi */
    case 10320:  /* vaesenc_v64qi */
    case 10319:  /* vaesenc_v16qi */
    case 10318:  /* vaesenc_v32qi */
    case 10317:  /* vaesdeclast_v64qi */
    case 10316:  /* vaesdeclast_v16qi */
    case 10315:  /* vaesdeclast_v32qi */
    case 10314:  /* vaesdec_v64qi */
    case 10313:  /* vaesdec_v16qi */
    case 10312:  /* vaesdec_v32qi */
    case 10184:  /* vgf2p8mulb_v16qi */
    case 10182:  /* vgf2p8mulb_v32qi */
    case 10180:  /* vgf2p8mulb_v64qi */
    case 10134:  /* vpmultishiftqbv32qi */
    case 10132:  /* vpmultishiftqbv16qi */
    case 10130:  /* vpmultishiftqbv64qi */
    case 10105:  /* vsm4rnds4_v4si */
    case 10104:  /* vsm4rnds4_v8si */
    case 10103:  /* vsm4rnds4_v16si */
    case 10102:  /* vsm4key4_v4si */
    case 10101:  /* vsm4key4_v8si */
    case 10100:  /* vsm4key4_v16si */
    case 10098:  /* vsha512msg2 */
    case 10097:  /* vsha512msg1 */
    case 10092:  /* sha256msg2 */
    case 10091:  /* sha256msg1 */
    case 10089:  /* sha1nexte */
    case 10088:  /* sha1msg2 */
    case 10087:  /* sha1msg1 */
    case 10043:  /* avx512vl_getmantv2df */
    case 10039:  /* avx512vl_getmantv4df */
    case 10035:  /* avx512f_getmantv8df */
    case 10033:  /* avx512vl_getmantv4sf */
    case 10029:  /* avx512vl_getmantv8sf */
    case 10025:  /* avx512f_getmantv16sf */
    case 10023:  /* avx512fp16_getmantv8hf */
    case 10019:  /* avx512vl_getmantv16hf */
    case 10015:  /* avx512bw_getmantv32hf */
    case 10007:  /* avx512dq_fpclassv2df */
    case 10005:  /* avx512dq_fpclassv4df */
    case 10003:  /* avx512dq_fpclassv8df */
    case 10001:  /* avx512dq_fpclassv4sf */
    case 9999:  /* avx512dq_fpclassv8sf */
    case 9997:  /* avx512dq_fpclassv16sf */
    case 9995:  /* avx512dq_fpclassv8hf */
    case 9993:  /* avx512dq_fpclassv16hf */
    case 9991:  /* avx512dq_fpclassv32hf */
    case 9673:  /* *avx512f_vcvtps2ph512 */
    case 9669:  /* *avx512f_vcvtps2ph512 */
    case 9667:  /* *vcvtps2ph256 */
    case 9665:  /* vcvtps2ph256 */
    case 9664:  /* *vcvtps2ph_store */
    case 9365:  /* avx_vpermilvarv2df3 */
    case 9363:  /* avx_vpermilvarv4df3 */
    case 9361:  /* avx512f_vpermilvarv8df3 */
    case 9359:  /* avx_vpermilvarv4sf3 */
    case 9357:  /* avx_vpermilvarv8sf3 */
    case 9355:  /* avx512f_vpermilvarv16sf3 */
    case 9156:  /* avx512bw_permvarv32bf */
    case 9154:  /* avx512vl_permvarv16bf */
    case 9152:  /* avx512vl_permvarv8bf */
    case 9150:  /* avx512bw_permvarv32hf */
    case 9148:  /* avx512vl_permvarv16hf */
    case 9146:  /* avx512fp16_permvarv8hf */
    case 9144:  /* avx512bw_permvarv32hi */
    case 9142:  /* avx512vl_permvarv16hi */
    case 9140:  /* avx512vl_permvarv8hi */
    case 9138:  /* avx512vl_permvarv32qi */
    case 9136:  /* avx512vl_permvarv16qi */
    case 9134:  /* avx512bw_permvarv64qi */
    case 9132:  /* avx2_permvarv4df */
    case 9130:  /* avx2_permvarv4di */
    case 9128:  /* avx512f_permvarv8df */
    case 9126:  /* avx512f_permvarv8di */
    case 9124:  /* avx512f_permvarv16sf */
    case 9122:  /* avx512f_permvarv16si */
    case 9120:  /* avx2_permvarv8sf */
    case 9118:  /* avx2_permvarv8si */
    case 9090:  /* aeskeygenassist */
    case 9088:  /* aesdeclast */
    case 9087:  /* aesdec */
    case 9086:  /* aesenclast */
    case 9085:  /* aesenc */
    case 8974:  /* sse4_1_roundpd */
    case 8973:  /* avx_roundpd256 */
    case 8972:  /* sse4_1_roundps */
    case 8971:  /* avx_roundps256 */
    case 8736:  /* sse4_1_packusdw */
    case 8734:  /* avx2_packusdw */
    case 8732:  /* avx512bw_packusdw */
    case 8682:  /* sse4a_insertq */
    case 8680:  /* sse4a_extrq */
    case 8643:  /* ssse3_psignv2si3 */
    case 8642:  /* ssse3_psignv4hi3 */
    case 8641:  /* ssse3_psignv8qi3 */
    case 8640:  /* ssse3_psignv4si3 */
    case 8639:  /* avx2_psignv8si3 */
    case 8638:  /* ssse3_psignv8hi3 */
    case 8637:  /* avx2_psignv16hi3 */
    case 8636:  /* ssse3_psignv16qi3 */
    case 8635:  /* avx2_psignv32qi3 */
    case 8632:  /* ssse3_pshufbv16qi3 */
    case 8630:  /* avx2_pshufbv32qi3 */
    case 8628:  /* avx512bw_pshufbv64qi3 */
    case 8614:  /* avx512bw_pmaddubsw512v32hi */
    case 8612:  /* avx512bw_pmaddubsw512v16hi */
    case 8610:  /* avx512bw_pmaddubsw512v8hi */
    case 8511:  /* *sse2_psadbw */
    case 8510:  /* *avx2_psadbw */
    case 8509:  /* *avx512f_psadbw */
    case 8453:  /* *avx512bw_pshufhwv32hi */
    case 8447:  /* *avx512bw_pshuflwv32hi */
    case 8321:  /* sse2_packuswb */
    case 8319:  /* avx2_packuswb */
    case 8317:  /* avx512bw_packuswb */
    case 8159:  /* avx512vl_testnmv2di3 */
    case 8157:  /* avx512vl_testnmv4di3 */
    case 8155:  /* avx512f_testnmv8di3 */
    case 8153:  /* avx512vl_testnmv4si3 */
    case 8151:  /* avx512vl_testnmv8si3 */
    case 8149:  /* avx512f_testnmv16si3 */
    case 8147:  /* avx512vl_testnmv8hi3 */
    case 8145:  /* avx512vl_testnmv16hi3 */
    case 8143:  /* avx512bw_testnmv32hi3 */
    case 8141:  /* avx512vl_testnmv16qi3 */
    case 8139:  /* avx512vl_testnmv32qi3 */
    case 8137:  /* avx512bw_testnmv64qi3 */
    case 8135:  /* avx512vl_testmv2di3 */
    case 8133:  /* avx512vl_testmv4di3 */
    case 8131:  /* avx512f_testmv8di3 */
    case 8129:  /* avx512vl_testmv4si3 */
    case 8127:  /* avx512vl_testmv8si3 */
    case 8125:  /* avx512f_testmv16si3 */
    case 8123:  /* avx512vl_testmv8hi3 */
    case 8121:  /* avx512vl_testmv16hi3 */
    case 8119:  /* avx512bw_testmv32hi3 */
    case 8117:  /* avx512vl_testmv16qi3 */
    case 8115:  /* avx512vl_testmv32qi3 */
    case 8113:  /* avx512bw_testmv64qi3 */
    case 7596:  /* avx512bw_pmaddwd512v8hi */
    case 7594:  /* avx512bw_pmaddwd512v16hi */
    case 7592:  /* avx512bw_pmaddwd512v32hi */
    case 7173:  /* avx512vl_rndscalev2df */
    case 7169:  /* avx512vl_rndscalev4df */
    case 7165:  /* avx512f_rndscalev8df */
    case 7163:  /* avx512vl_rndscalev4sf */
    case 7159:  /* avx512vl_rndscalev8sf */
    case 7155:  /* avx512f_rndscalev16sf */
    case 7153:  /* avx512fp16_rndscalev8hf */
    case 7149:  /* avx512vl_rndscalev16hf */
    case 7145:  /* avx512bw_rndscalev32hf */
    case 5461:  /* avx512vl_scalefv2df */
    case 5457:  /* avx512vl_scalefv4df */
    case 5453:  /* avx512f_scalefv8df */
    case 5451:  /* avx512vl_scalefv4sf */
    case 5447:  /* avx512vl_scalefv8sf */
    case 5443:  /* avx512f_scalefv16sf */
    case 5441:  /* avx512fp16_scalefv8hf */
    case 5437:  /* avx512vl_scalefv16hf */
    case 5433:  /* avx512bw_scalefv32hf */
    case 4400:  /* avx512fp16_fcmulc_v8hf */
    case 4398:  /* avx512fp16_fmulc_v8hf */
    case 4394:  /* avx512vl_fcmulc_v16hf */
    case 4390:  /* avx512vl_fmulc_v16hf */
    case 4386:  /* avx512bw_fcmulc_v32hf */
    case 4382:  /* avx512bw_fmulc_v32hf */
    case 3590:  /* *avx512vl_eqv2di3_1 */
    case 3588:  /* *avx512vl_eqv2di3_1 */
    case 3586:  /* *avx512vl_eqv4di3_1 */
    case 3584:  /* *avx512vl_eqv4di3_1 */
    case 3582:  /* *avx512f_eqv8di3_1 */
    case 3580:  /* *avx512f_eqv8di3_1 */
    case 3578:  /* *avx512vl_eqv4si3_1 */
    case 3576:  /* *avx512vl_eqv4si3_1 */
    case 3574:  /* *avx512vl_eqv8si3_1 */
    case 3572:  /* *avx512vl_eqv8si3_1 */
    case 3570:  /* *avx512f_eqv16si3_1 */
    case 3568:  /* *avx512f_eqv16si3_1 */
    case 3518:  /* *avx512vl_eqv8hi3_1 */
    case 3516:  /* *avx512vl_eqv8hi3_1 */
    case 3514:  /* *avx512vl_eqv16hi3_1 */
    case 3512:  /* *avx512vl_eqv16hi3_1 */
    case 3510:  /* *avx512bw_eqv32hi3_1 */
    case 3508:  /* *avx512bw_eqv32hi3_1 */
    case 3506:  /* *avx512vl_eqv32qi3_1 */
    case 3504:  /* *avx512vl_eqv32qi3_1 */
    case 3502:  /* *avx512vl_eqv16qi3_1 */
    case 3500:  /* *avx512vl_eqv16qi3_1 */
    case 3498:  /* *avx512bw_eqv64qi3_1 */
    case 3496:  /* *avx512bw_eqv64qi3_1 */
    case 3223:  /* *reducepv2df */
    case 3219:  /* *reducepv4df */
    case 3215:  /* *reducepv8df */
    case 3213:  /* *reducepv4sf */
    case 3209:  /* *reducepv8sf */
    case 3205:  /* *reducepv16sf */
    case 3203:  /* *reducepv8hf */
    case 3199:  /* *reducepv16hf */
    case 3195:  /* *reducepv32hf */
    case 3125:  /* ieee_minv2df3 */
    case 3123:  /* ieee_maxv2df3 */
    case 3119:  /* ieee_minv4df3 */
    case 3115:  /* ieee_maxv4df3 */
    case 3111:  /* ieee_minv8df3 */
    case 3107:  /* ieee_maxv8df3 */
    case 3105:  /* ieee_minv4sf3 */
    case 3103:  /* ieee_maxv4sf3 */
    case 3099:  /* ieee_minv8sf3 */
    case 3095:  /* ieee_maxv8sf3 */
    case 3091:  /* ieee_minv16sf3 */
    case 3087:  /* ieee_maxv16sf3 */
    case 3085:  /* ieee_minv8hf3 */
    case 3083:  /* ieee_maxv8hf3 */
    case 3079:  /* ieee_minv16hf3 */
    case 3075:  /* ieee_maxv16hf3 */
    case 3071:  /* ieee_minv32hf3 */
    case 3067:  /* ieee_maxv32hf3 */
    case 2383:  /* *mmx_psadbw */
    case 2331:  /* mmx_pshufbv4qi3 */
    case 2330:  /* mmx_pshufbv8qi3 */
    case 2295:  /* mmx_packusdw */
    case 2293:  /* mmx_packuswb */
    case 2063:  /* mmx_rsqit1v2sf3 */
    case 2061:  /* mmx_rcpit2v2sf3 */
    case 2060:  /* mmx_rcpit1v2sf3 */
    case 1916:  /* xsaves64 */
    case 1915:  /* xsavec64 */
    case 1914:  /* xsaveopt64 */
    case 1913:  /* xsave64 */
    case 1912:  /* xsaves_rex64 */
    case 1911:  /* xsavec_rex64 */
    case 1910:  /* xsaveopt_rex64 */
    case 1909:  /* xsave_rex64 */
    case 1893:  /* sse4_2_crc32si */
    case 1892:  /* sse4_2_crc32hi */
    case 1891:  /* sse4_2_crc32qi */
    case 1826:  /* *ieee_smindf3 */
    case 1825:  /* *ieee_smaxdf3 */
    case 1824:  /* *ieee_sminsf3 */
    case 1823:  /* *ieee_smaxsf3 */
    case 1822:  /* *ieee_sminhf3 */
    case 1821:  /* *ieee_smaxhf3 */
    case 1731:  /* sse4_1_rounddf2 */
    case 1730:  /* sse4_1_roundsf2 */
    case 1729:  /* sse4_1_roundhf2 */
    case 1728:  /* avx512f_scalefdf2 */
    case 1727:  /* avx512f_scalefsf2 */
    case 1603:  /* bmi2_pext_di3 */
    case 1602:  /* bmi2_pext_si3 */
    case 1601:  /* bmi2_pdep_di3 */
    case 1600:  /* bmi2_pdep_si3 */
    case 1454:  /* *setcc_si_slp */
    case 159:  /* push2_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 151:  /* *insvdi_lowpart_1 */
    case 150:  /* *insvdi_lowpart_1 */
    case 149:  /* *insvdi_lowpart_1 */
    case 148:  /* *insvti_lowpart_1 */
    case 147:  /* *insvti_lowpart_1 */
    case 146:  /* *insvti_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 145:  /* *insvti_highpart_1 */
    case 144:  /* *insvti_highpart_1 */
    case 143:  /* *insvti_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 136:  /* *insvqi_2 */
    case 135:  /* *insvqi_2 */
    case 134:  /* *insvqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 1043:  /* *one_cmplhi_1_slp */
    case 1042:  /* *one_cmplqi_1_slp */
    case 142:  /* *insvqi_3 */
    case 141:  /* *insvqi_3 */
    case 140:  /* *insvqi_3 */
    case 139:  /* *insvqi_3 */
    case 138:  /* *insvqi_3 */
    case 137:  /* *insvqi_3 */
    case 133:  /* *insvqi_1 */
    case 132:  /* *insvqi_1 */
    case 131:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 127:  /* *extzvqi */
    case 126:  /* *extzvqi */
    case 125:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 2595:  /* knotdi */
    case 2594:  /* knotsi */
    case 2593:  /* knothi */
    case 2592:  /* knotqi */
    case 2123:  /* negv2qi2 */
    case 2081:  /* mmx_floatv2siv2sf2 */
    case 2080:  /* mmx_fix_truncv2sfv2si2 */
    case 1802:  /* *x86_movdicc_0_m1_neg */
    case 1801:  /* *x86_movsicc_0_m1_neg */
    case 1800:  /* *x86_movhicc_0_m1_neg */
    case 1799:  /* *x86_movqicc_0_m1_neg */
    case 1798:  /* *x86_movdicc_0_m1_se */
    case 1797:  /* *x86_movsicc_0_m1_se */
    case 1796:  /* *x86_movdicc_0_m1 */
    case 1795:  /* *x86_movsicc_0_m1 */
    case 1639:  /* popcounthi2 */
    case 1627:  /* popcountdi2 */
    case 1626:  /* popcountsi2 */
    case 1535:  /* clzdi2_lzcnt */
    case 1534:  /* clzsi2_lzcnt */
    case 1515:  /* ctzdi2 */
    case 1514:  /* ctzsi2 */
    case 1015:  /* *negxf2_i387_1 */
    case 1014:  /* *absxf2_i387_1 */
    case 1013:  /* *negdf2_i387_1 */
    case 1012:  /* *absdf2_i387_1 */
    case 1011:  /* *negsf2_i387_1 */
    case 1010:  /* *abssf2_i387_1 */
    case 1002:  /* *absdi2_1 */
    case 1001:  /* *abssi2_1 */
    case 1000:  /* *abshi2_1 */
    case 999:  /* *absqi2_1 */
    case 996:  /* *absti2_doubleword */
    case 995:  /* *absdi2_doubleword */
    case 961:  /* *negdi_1 */
    case 959:  /* *negsi_1 */
    case 957:  /* *neghi_1 */
    case 955:  /* *negqi_1 */
    case 953:  /* *negti2_doubleword */
    case 952:  /* *negdi2_doubleword */
    case 234:  /* *fix_truncdi_i387_1 */
    case 233:  /* *fix_truncsi_i387_1 */
    case 232:  /* *fix_trunchi_i387_1 */
    case 182:  /* zero_extendqihi2_and */
    case 179:  /* zero_extendhisi2_and */
    case 178:  /* zero_extendqisi2_and */
    case 121:  /* *extvdi_1_0 */
    case 120:  /* *extvsi_1_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 117:  /* *movstrictqi_extdi_1 */
    case 116:  /* *movstrictqi_extsi_1 */
    case 115:  /* *movstrictqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1471:  /* *sibcall_memory */
    case 1470:  /* *sibcall_memory */
    case 114:  /* *movstricthi_xor */
    case 113:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 173:  /* *swapxf */
    case 110:  /* *swaphi */
    case 109:  /* *swapqi */
    case 108:  /* swapdi */
    case 107:  /* swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 10691:  /* avx10_2_sqrtbf16_v8bf */
    case 10689:  /* avx10_2_sqrtbf16_v16bf */
    case 10687:  /* avx10_2_sqrtbf16_v32bf */
    case 10352:  /* avx512f_cvtneps2bf16_v8sf */
    case 10350:  /* avx512f_cvtneps2bf16_v16sf */
    case 10349:  /* vcvtneps2bf16_v8sf */
    case 10166:  /* vpopcountv8hi */
    case 10164:  /* vpopcountv16hi */
    case 10162:  /* vpopcountv32hi */
    case 10160:  /* vpopcountv32qi */
    case 10158:  /* vpopcountv16qi */
    case 10156:  /* vpopcountv64qi */
    case 10146:  /* vpopcountv2di */
    case 10144:  /* vpopcountv4di */
    case 10142:  /* vpopcountv8di */
    case 10140:  /* vpopcountv4si */
    case 10138:  /* vpopcountv8si */
    case 10136:  /* vpopcountv16si */
    case 10111:  /* avx512f_pd512_256pd */
    case 10110:  /* avx512f_ps512_256ps */
    case 10109:  /* avx512f_si512_256si */
    case 10073:  /* clzv2di2 */
    case 10071:  /* clzv4di2 */
    case 10069:  /* clzv8di2 */
    case 10067:  /* clzv4si2 */
    case 10065:  /* clzv8si2 */
    case 10063:  /* clzv16si2 */
    case 9555:  /* avx_pd256_pd */
    case 9554:  /* avx_ps256_ps */
    case 9553:  /* avx_si256_si */
    case 9347:  /* *avx512dq_broadcastv4df_1 */
    case 9345:  /* *avx512dq_broadcastv4di_1 */
    case 9343:  /* *avx512dq_broadcastv8df_1 */
    case 9341:  /* *avx512dq_broadcastv8di_1 */
    case 9339:  /* *avx512dq_broadcastv16si_1 */
    case 9337:  /* *avx512dq_broadcastv16sf_1 */
    case 9335:  /* *avx512vl_broadcastv8sf_1 */
    case 9333:  /* *avx512vl_broadcastv8si_1 */
    case 9314:  /* vec_dupv4df */
    case 9313:  /* vec_dupv4di */
    case 9312:  /* vec_dupv8sf */
    case 9311:  /* vec_dupv8si */
    case 9310:  /* *vec_dupv8bf */
    case 9309:  /* *vec_dupv16bf */
    case 9308:  /* *vec_dupv8hf */
    case 9307:  /* *vec_dupv16hf */
    case 9306:  /* *vec_dupv4si */
    case 9305:  /* *vec_dupv8si */
    case 9304:  /* *vec_dupv8hi */
    case 9303:  /* *vec_dupv16hi */
    case 9302:  /* *vec_dupv16qi */
    case 9301:  /* *vec_dupv32qi */
    case 9295:  /* *vec_dupv2di */
    case 9294:  /* *vec_dupv4si */
    case 9293:  /* vec_dupv4sf */
    case 9291:  /* *avx512vl_vec_dup_gprv2df */
    case 9289:  /* *avx512vl_vec_dup_gprv4df */
    case 9287:  /* *avx512f_vec_dup_gprv8df */
    case 9285:  /* *avx512vl_vec_dup_gprv4sf */
    case 9283:  /* *avx512vl_vec_dup_gprv8sf */
    case 9281:  /* *avx512f_vec_dup_gprv16sf */
    case 9279:  /* *avx512vl_vec_dup_gprv2di */
    case 9277:  /* *avx512vl_vec_dup_gprv4di */
    case 9275:  /* *avx512f_vec_dup_gprv8di */
    case 9273:  /* *avx512vl_vec_dup_gprv4si */
    case 9271:  /* *avx512vl_vec_dup_gprv8si */
    case 9269:  /* *avx512f_vec_dup_gprv16si */
    case 9267:  /* *avx512vl_vec_dup_gprv8bf */
    case 9265:  /* *avx512vl_vec_dup_gprv16bf */
    case 9263:  /* *avx512bw_vec_dup_gprv32bf */
    case 9261:  /* *avx512fp16_vec_dup_gprv8hf */
    case 9259:  /* *avx512vl_vec_dup_gprv16hf */
    case 9257:  /* *avx512bw_vec_dup_gprv32hf */
    case 9255:  /* *avx512vl_vec_dup_gprv8hi */
    case 9253:  /* *avx512vl_vec_dup_gprv16hi */
    case 9251:  /* *avx512bw_vec_dup_gprv32hi */
    case 9249:  /* *avx512vl_vec_dup_gprv32qi */
    case 9247:  /* *avx512vl_vec_dup_gprv16qi */
    case 9245:  /* *avx512bw_vec_dup_gprv64qi */
    case 9243:  /* *avx512f_broadcastv8di */
    case 9241:  /* *avx512f_broadcastv8df */
    case 9239:  /* *avx512f_broadcastv16si */
    case 9237:  /* *avx512f_broadcastv16sf */
    case 8930:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 8928:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 8920:  /* avx2_zero_extendv4siv4di2 */
    case 8918:  /* avx2_sign_extendv4siv4di2 */
    case 8914:  /* avx512f_zero_extendv8siv8di2 */
    case 8912:  /* avx512f_sign_extendv8siv8di2 */
    case 8906:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 8904:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 8894:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 8892:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 8886:  /* avx512f_zero_extendv8hiv8di2 */
    case 8884:  /* avx512f_sign_extendv8hiv8di2 */
    case 8879:  /* *sse4_1_zero_extendv2qiv2di2_1 */
    case 8877:  /* *sse4_1_sign_extendv2qiv2di2_1 */
    case 8867:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 8865:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 8855:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 8853:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 8839:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 8837:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 8827:  /* avx2_zero_extendv8hiv8si2 */
    case 8825:  /* avx2_sign_extendv8hiv8si2 */
    case 8819:  /* avx512f_zero_extendv16hiv16si2 */
    case 8817:  /* avx512f_sign_extendv16hiv16si2 */
    case 8811:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 8809:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 8799:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 8797:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 8791:  /* *avx512f_zero_extendv16qiv16si2 */
    case 8789:  /* *avx512f_sign_extendv16qiv16si2 */
    case 8779:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 8777:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 8767:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 8765:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 8759:  /* avx2_zero_extendv16qiv16hi2 */
    case 8757:  /* avx2_sign_extendv16qiv16hi2 */
    case 8662:  /* *absv2di2 */
    case 8661:  /* *absv4di2 */
    case 8660:  /* *absv8di2 */
    case 8659:  /* *absv4si2 */
    case 8658:  /* *absv8si2 */
    case 8657:  /* *absv16si2 */
    case 8656:  /* *absv8hi2 */
    case 8655:  /* *absv16hi2 */
    case 8654:  /* *absv32hi2 */
    case 8653:  /* *absv16qi2 */
    case 8652:  /* *absv32qi2 */
    case 8651:  /* *absv64qi2 */
    case 8480:  /* *vec_extractv2di_1 */
    case 8473:  /* *vec_extractv2di_0_sse */
    case 8472:  /* *vec_extractv2di_0 */
    case 8471:  /* *vec_extractv4si_0 */
    case 8461:  /* *vec_extractv8hi_0_mem */
    case 8460:  /* *vec_extractv16qi_0_mem */
    case 7453:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 7452:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 7451:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 7435:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 7434:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 7433:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 7416:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 7415:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 7414:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 7389:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 7388:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 7387:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 7386:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 7385:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 7384:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 7349:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 7348:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 7347:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 7346:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 7345:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 7344:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 7319:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 7318:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 7317:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 7316:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 7315:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 7314:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 7301:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 7300:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 7299:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 7271:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 7270:  /* *avx512vl_truncatev16hiv16qi2 */
    case 7269:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 7268:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 7267:  /* *avx512vl_truncatev8siv8hi2 */
    case 7266:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 7265:  /* *avx512vl_us_truncatev4div4si2 */
    case 7264:  /* *avx512vl_truncatev4div4si2 */
    case 7263:  /* *avx512vl_ss_truncatev4div4si2 */
    case 7258:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 7257:  /* avx512bw_truncatev32hiv32qi2 */
    case 7256:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 7238:  /* *avx512f_us_truncatev8div8hi2 */
    case 7237:  /* *avx512f_truncatev8div8hi2 */
    case 7236:  /* *avx512f_ss_truncatev8div8hi2 */
    case 7235:  /* *avx512f_us_truncatev8div8si2 */
    case 7234:  /* *avx512f_truncatev8div8si2 */
    case 7233:  /* *avx512f_ss_truncatev8div8si2 */
    case 7232:  /* *avx512f_us_truncatev16siv16hi2 */
    case 7231:  /* *avx512f_truncatev16siv16hi2 */
    case 7230:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 7229:  /* *avx512f_us_truncatev16siv16qi2 */
    case 7228:  /* *avx512f_truncatev16siv16qi2 */
    case 7227:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 7222:  /* vec_dupv2df */
    case 7217:  /* *vec_extractv2df_0_sse */
    case 7216:  /* sse2_storelpd */
    case 7215:  /* *vec_extractv2df_1_sse */
    case 7214:  /* sse2_storehpd */
    case 5402:  /* *vec_extractv8bf_0 */
    case 5401:  /* *vec_extractv16bf_0 */
    case 5400:  /* *vec_extractv32bf_0 */
    case 5399:  /* *vec_extractv8hf_0 */
    case 5398:  /* *vec_extractv16hf_0 */
    case 5397:  /* *vec_extractv32hf_0 */
    case 5396:  /* vec_extract_hi_v32qi */
    case 5395:  /* vec_extract_lo_v32qi */
    case 5394:  /* vec_extract_hi_v64qi */
    case 5393:  /* vec_extract_lo_v64qi */
    case 5392:  /* vec_extract_hi_v16bf */
    case 5391:  /* vec_extract_hi_v16hf */
    case 5390:  /* vec_extract_hi_v16hi */
    case 5389:  /* vec_extract_lo_v16bf */
    case 5388:  /* vec_extract_lo_v16hf */
    case 5387:  /* vec_extract_lo_v16hi */
    case 5386:  /* vec_extract_hi_v32bf */
    case 5385:  /* vec_extract_hi_v32hf */
    case 5384:  /* vec_extract_hi_v32hi */
    case 5383:  /* vec_extract_lo_v32bf */
    case 5382:  /* vec_extract_lo_v32hf */
    case 5381:  /* vec_extract_lo_v32hi */
    case 5380:  /* vec_extract_hi_v8sf */
    case 5379:  /* vec_extract_hi_v8si */
    case 5376:  /* vec_extract_lo_v8sf */
    case 5375:  /* vec_extract_lo_v8si */
    case 5372:  /* vec_extract_hi_v4df */
    case 5371:  /* vec_extract_hi_v4di */
    case 5368:  /* vec_extract_lo_v4df */
    case 5367:  /* vec_extract_lo_v4di */
    case 5364:  /* vec_extract_lo_v16si */
    case 5363:  /* vec_extract_lo_v16sf */
    case 5360:  /* vec_extract_hi_v16si */
    case 5359:  /* vec_extract_hi_v16sf */
    case 5356:  /* vec_extract_hi_v8di */
    case 5355:  /* vec_extract_hi_v8df */
    case 5352:  /* vec_extract_lo_v8di */
    case 5351:  /* vec_extract_lo_v8df */
    case 5338:  /* *vec_extractv4sf_0 */
    case 5282:  /* sse_storelps */
    case 5280:  /* sse_storehps */
    case 5244:  /* sse2_cvtps2pd_1 */
    case 5194:  /* avx_cvtps2pd256 */
    case 5190:  /* avx512f_cvtps2pd512 */
    case 5187:  /* truncv2dfv2sf2 */
    case 5182:  /* avx_cvtpd2ps256 */
    case 5178:  /* *avx512f_cvtpd2ps512 */
    case 5161:  /* *fixuns_truncv4sfv4si2 */
    case 5159:  /* *fixuns_truncv8sfv8si2 */
    case 5143:  /* fixuns_truncv4sfv4di2 */
    case 5141:  /* fix_truncv4sfv4di2 */
    case 5139:  /* fixuns_truncv8sfv8di2 */
    case 5137:  /* fix_truncv8sfv8di2 */
    case 5099:  /* fixuns_truncv2dfv2di2 */
    case 5097:  /* fix_truncv2dfv2di2 */
    case 5093:  /* fixuns_truncv4dfv4di2 */
    case 5089:  /* fix_truncv4dfv4di2 */
    case 5085:  /* fixuns_truncv8dfv8di2 */
    case 5081:  /* fix_truncv8dfv8di2 */
    case 5059:  /* fixuns_truncv4dfv4si2 */
    case 5053:  /* fix_truncv4dfv4si2 */
    case 5040:  /* fixuns_truncv8dfv8si2 */
    case 5036:  /* fix_truncv8dfv8si2 */
    case 4997:  /* floatunsv4siv4df2 */
    case 4995:  /* floatunsv8siv8df2 */
    case 4985:  /* floatunsv4div4sf2 */
    case 4981:  /* floatv4div4sf2 */
    case 4977:  /* floatunsv8div8sf2 */
    case 4973:  /* floatv8div8sf2 */
    case 4971:  /* floatunsv2div2df2 */
    case 4969:  /* floatv2div2df2 */
    case 4965:  /* floatunsv4div4df2 */
    case 4961:  /* floatv4div4df2 */
    case 4957:  /* floatunsv8div8df2 */
    case 4953:  /* floatv8div8df2 */
    case 4951:  /* floatv4siv4df2 */
    case 4949:  /* floatv8siv8df2 */
    case 4907:  /* fixuns_truncv2dfv2si2 */
    case 4905:  /* sse2_cvttpd2pi */
    case 4902:  /* floatunsv2siv2df2 */
    case 4901:  /* sse2_cvtpi2pd */
    case 4899:  /* fix_truncv4sfv4si2 */
    case 4895:  /* fix_truncv8sfv8si2 */
    case 4887:  /* fixuns_truncv16sfv16si2 */
    case 4883:  /* fix_truncv16sfv16si2 */
    case 4833:  /* *floatunsv4siv4sf2 */
    case 4829:  /* *floatunsv8siv8sf2 */
    case 4825:  /* *floatunsv16siv16sf2 */
    case 4823:  /* floatv4siv4sf2 */
    case 4819:  /* floatv8siv8sf2 */
    case 4815:  /* floatv16siv16sf2 */
    case 4748:  /* avx512fp16_vcvtps2ph_v8sf */
    case 4744:  /* avx512fp16_vcvtps2ph_v16sf */
    case 4740:  /* avx512fp16_vcvtpd2ph_v8df */
    case 4738:  /* *avx512fp16_float_extend_phv2df2_load */
    case 4734:  /* *avx512fp16_float_extend_phv4sf2_load */
    case 4732:  /* *avx512fp16_float_extend_phv4df2_load */
    case 4722:  /* avx512fp16_float_extend_phv8sf2 */
    case 4718:  /* avx512fp16_float_extend_phv16sf2 */
    case 4714:  /* avx512fp16_float_extend_phv8df2 */
    case 4713:  /* avx512fp16_fixuns_truncdi2_mem */
    case 4712:  /* avx512fp16_fix_truncdi2_mem */
    case 4711:  /* avx512fp16_fixuns_truncsi2_mem */
    case 4710:  /* avx512fp16_fix_truncsi2_mem */
    case 4692:  /* *avx512fp16_fixuns_truncv2di2_load */
    case 4690:  /* *avx512fp16_fix_truncv2di2_load */
    case 4680:  /* *avx512fp16_fixuns_truncv4di2_load */
    case 4678:  /* *avx512fp16_fix_truncv4di2_load */
    case 4676:  /* *avx512fp16_fixuns_truncv4si2_load */
    case 4674:  /* *avx512fp16_fix_truncv4si2_load */
    case 4650:  /* avx512fp16_fixuns_truncv8di2 */
    case 4646:  /* avx512fp16_fix_truncv8di2 */
    case 4642:  /* avx512fp16_fixuns_truncv16si2 */
    case 4638:  /* avx512fp16_fix_truncv16si2 */
    case 4634:  /* avx512fp16_fixuns_truncv8si2 */
    case 4630:  /* avx512fp16_fix_truncv8si2 */
    case 4626:  /* avx512fp16_fixuns_truncv32hi2 */
    case 4622:  /* avx512fp16_fix_truncv32hi2 */
    case 4618:  /* avx512fp16_fixuns_truncv16hi2 */
    case 4614:  /* avx512fp16_fix_truncv16hi2 */
    case 4612:  /* avx512fp16_fixuns_truncv8hi2 */
    case 4610:  /* avx512fp16_fix_truncv8hi2 */
    case 4522:  /* avx512fp16_vcvtuqq2ph_v8di */
    case 4518:  /* avx512fp16_vcvtqq2ph_v8di */
    case 4514:  /* avx512fp16_vcvtudq2ph_v16si */
    case 4510:  /* avx512fp16_vcvtdq2ph_v16si */
    case 4506:  /* avx512fp16_vcvtudq2ph_v8si */
    case 4502:  /* avx512fp16_vcvtdq2ph_v8si */
    case 4498:  /* avx512fp16_vcvtuw2ph_v32hi */
    case 4494:  /* avx512fp16_vcvtw2ph_v32hi */
    case 4490:  /* avx512fp16_vcvtuw2ph_v16hi */
    case 4486:  /* avx512fp16_vcvtw2ph_v16hi */
    case 4484:  /* avx512fp16_vcvtuw2ph_v8hi */
    case 4482:  /* avx512fp16_vcvtw2ph_v8hi */
    case 2938:  /* sse2_sqrtv2df2 */
    case 2934:  /* avx_sqrtv4df2 */
    case 2930:  /* avx512f_sqrtv8df2 */
    case 2928:  /* sse_sqrtv4sf2 */
    case 2924:  /* avx_sqrtv8sf2 */
    case 2920:  /* avx512f_sqrtv16sf2 */
    case 2918:  /* avx512fp16_sqrtv8hf2 */
    case 2914:  /* avx512fp16_sqrtv16hf2 */
    case 2910:  /* avx512fp16_sqrtv32hf2 */
    case 2394:  /* popcountv2si2 */
    case 2393:  /* popcountv2hi2 */
    case 2392:  /* popcountv4hi2 */
    case 2391:  /* popcountv2qi2 */
    case 2390:  /* popcountv4qi2 */
    case 2389:  /* popcountv8qi2 */
    case 2377:  /* *vec_dupv2hi */
    case 2376:  /* *vec_dupv2bf */
    case 2375:  /* *vec_dupv2hf */
    case 2352:  /* *vec_extractv2si_1 */
    case 2349:  /* *vec_extractv2si_0 */
    case 2347:  /* *vec_dupv2si */
    case 2346:  /* *vec_dupv4hi */
    case 2345:  /* *vec_dupv4bf */
    case 2344:  /* *vec_dupv4hf */
    case 2342:  /* mmx_pswapdv2si2 */
    case 2315:  /* avx512vl_truncv2siv2hi2 */
    case 2314:  /* avx512vl_truncv2siv2qi2 */
    case 2313:  /* avx512vl_truncv2hiv2qi2 */
    case 2312:  /* avx512vl_truncv4hiv4qi2 */
    case 2267:  /* one_cmplv2hi2 */
    case 2266:  /* one_cmplv2qi2 */
    case 2265:  /* one_cmplv4qi2 */
    case 2197:  /* absv2hi2 */
    case 2196:  /* absv2qi2 */
    case 2195:  /* absv4qi2 */
    case 2194:  /* ssse3_absv2si2 */
    case 2193:  /* ssse3_absv4hi2 */
    case 2192:  /* ssse3_absv8qi2 */
    case 2094:  /* *vec_extractv2sf_1 */
    case 2093:  /* *vec_extractv2sf_0 */
    case 2089:  /* *vec_dupv2sf */
    case 2086:  /* *mmx_movsldup */
    case 2085:  /* *mmx_movshdup */
    case 2084:  /* mmx_pswapdv2sf2 */
    case 1713:  /* *sqrtdf2_sse */
    case 1712:  /* *sqrtsf2_sse */
    case 1711:  /* sqrthf2 */
    case 1708:  /* sqrtxf2 */
    case 1645:  /* *bswaphi2 */
    case 1644:  /* *bswaphi2_movbe */
    case 1643:  /* *bswapdi2 */
    case 1642:  /* *bswapsi2 */
    case 1641:  /* *bswapdi2_movbe */
    case 1640:  /* *bswapsi2_movbe */
    case 1638:  /* popcounthi2_nf */
    case 1625:  /* popcountdi2_nf */
    case 1624:  /* popcountsi2_nf */
    case 1533:  /* clzdi2_lzcnt_nf */
    case 1532:  /* clzsi2_lzcnt_nf */
    case 1339:  /* rotr64ti2_doubleword */
    case 1338:  /* rotl64ti2_doubleword */
    case 1337:  /* rotr32di2_doubleword */
    case 1336:  /* rotl32di2_doubleword */
    case 1041:  /* *one_cmplqi2_1 */
    case 1034:  /* *one_cmpldi2_1 */
    case 1033:  /* *one_cmplsi2_1 */
    case 1032:  /* *one_cmplhi2_1 */
    case 1031:  /* *one_cmplti2_doubleword */
    case 1030:  /* *one_cmpldi2_doubleword */
    case 1029:  /* *negxf2_i387 */
    case 1028:  /* *absxf2_i387 */
    case 1027:  /* *negdf2_i387 */
    case 1026:  /* *absdf2_i387 */
    case 1025:  /* *negsf2_i387 */
    case 1024:  /* *abssf2_i387 */
    case 960:  /* *negdi_1_nf */
    case 958:  /* *negsi_1_nf */
    case 956:  /* *neghi_1_nf */
    case 954:  /* *negqi_1_nf */
    case 260:  /* *floatunsdidf2_avx512 */
    case 259:  /* *floatunssidf2_avx512 */
    case 258:  /* *floatunsdisf2_avx512 */
    case 257:  /* *floatunssisf2_avx512 */
    case 253:  /* *floatdidf2_i387 */
    case 252:  /* *floatdisf2_i387 */
    case 251:  /* floatunsdihf2 */
    case 250:  /* floatdihf2 */
    case 249:  /* floatunssihf2 */
    case 248:  /* floatsihf2 */
    case 247:  /* *floatdidf2 */
    case 246:  /* *floatsidf2 */
    case 245:  /* *floatdisf2 */
    case 244:  /* *floatsisf2 */
    case 243:  /* floatdixf2 */
    case 242:  /* floatsixf2 */
    case 241:  /* floathixf2 */
    case 240:  /* floathidf2 */
    case 239:  /* floathisf2 */
    case 228:  /* fix_truncdfdi_sse */
    case 227:  /* fix_truncdfsi_sse */
    case 226:  /* fix_truncsfdi_sse */
    case 225:  /* fix_truncsfsi_sse */
    case 219:  /* fixuns_truncdfsi2_avx512f */
    case 218:  /* fixuns_truncsfsi2_avx512f */
    case 217:  /* fixuns_truncdfdi2 */
    case 216:  /* fixuns_truncsfdi2 */
    case 215:  /* fixuns_trunchfdi2 */
    case 214:  /* fix_trunchfdi2 */
    case 213:  /* fixuns_trunchfsi2 */
    case 212:  /* fix_trunchfsi2 */
    case 211:  /* truncsfbf2 */
    case 210:  /* *truncdfhf2 */
    case 209:  /* *truncsfhf2 */
    case 208:  /* truncxfdf2 */
    case 207:  /* truncxfsf2 */
    case 206:  /* truncdfsf2 */
    case 205:  /* *extenddfxf2_i387 */
    case 204:  /* *extendsfxf2_i387 */
    case 202:  /* *extendhfdf2 */
    case 201:  /* *extendhfsf2 */
    case 200:  /* *extendsfdf2 */
    case 193:  /* extendqihi2 */
    case 191:  /* extendqisi2 */
    case 189:  /* extendhisi2 */
    case 188:  /* extendhidi2 */
    case 187:  /* extendqidi2 */
    case 184:  /* *extendsidi2_rex64 */
    case 183:  /* *zero_extendqihi2 */
    case 181:  /* *zero_extendhisi2 */
    case 180:  /* *zero_extendqisi2 */
    case 177:  /* zero_extendhidi2 */
    case 176:  /* zero_extendqidi2 */
    case 175:  /* *zero_extendsidi2 */
    case 174:  /* zero_extendditi2 */
    case 124:  /* *extzvdi */
    case 123:  /* *extzvsi */
    case 122:  /* *extzvhi */
    case 119:  /* *extvsi */
    case 118:  /* *extvhi */
    case 106:  /* *movabsdi_2 */
    case 105:  /* *movabssi_2 */
    case 104:  /* *movabshi_2 */
    case 103:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1469:  /* *sibcall */
    case 1468:  /* *sibcall */
    case 1465:  /* *call */
    case 1464:  /* *call */
    case 1453:  /* *setcc_qi_slp */
    case 130:  /* insvdi_1 */
    case 129:  /* insvsi_1 */
    case 128:  /* insvhi_1 */
    case 112:  /* *movstricthi_1 */
    case 111:  /* *movstrictqi_1 */
    case 102:  /* *movabsdi_1 */
    case 101:  /* *movabssi_1 */
    case 100:  /* *movabshi_1 */
    case 99:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 11026:  /* storedi_via_sse */
    case 11025:  /* loaddi_via_sse */
    case 11024:  /* storedi_via_fpu */
    case 11023:  /* loaddi_via_fpu */
    case 11011:  /* avx10_2_vmovrsqv2di */
    case 11009:  /* avx10_2_vmovrsqv4di */
    case 11007:  /* avx10_2_vmovrsqv8di */
    case 11005:  /* avx10_2_vmovrsdv4si */
    case 11003:  /* avx10_2_vmovrsdv8si */
    case 11001:  /* avx10_2_vmovrsdv16si */
    case 10999:  /* avx10_2_vmovrswv8hi */
    case 10997:  /* avx10_2_vmovrswv16hi */
    case 10995:  /* avx10_2_vmovrswv32hi */
    case 10993:  /* avx10_2_vmovrsbv16qi */
    case 10991:  /* avx10_2_vmovrsbv32qi */
    case 10989:  /* avx10_2_vmovrsbv64qi */
    case 10917:  /* avx10_2_vcvttps2uqqsv2di */
    case 10915:  /* avx10_2_vcvttps2qqsv2di */
    case 10911:  /* avx10_2_vcvttps2uqqsv4di */
    case 10907:  /* avx10_2_vcvttps2qqsv4di */
    case 10903:  /* avx10_2_vcvttps2uqqsv8di */
    case 10899:  /* avx10_2_vcvttps2qqsv8di */
    case 10897:  /* avx10_2_vcvttpd2uqqsv2df */
    case 10895:  /* avx10_2_vcvttpd2qqsv2df */
    case 10891:  /* avx10_2_vcvttpd2uqqsv4df */
    case 10887:  /* avx10_2_vcvttpd2qqsv4df */
    case 10883:  /* avx10_2_vcvttpd2uqqsv8df */
    case 10879:  /* avx10_2_vcvttpd2qqsv8df */
    case 10877:  /* avx10_2_vcvttpd2udqsv2df */
    case 10875:  /* avx10_2_vcvttpd2dqsv2df */
    case 10871:  /* avx10_2_vcvttpd2udqsv4df */
    case 10867:  /* avx10_2_vcvttpd2dqsv4df */
    case 10863:  /* avx10_2_vcvttpd2udqsv8df */
    case 10859:  /* avx10_2_vcvttpd2dqsv8df */
    case 10857:  /* avx10_2_vcvttps2udqsv4sf */
    case 10855:  /* avx10_2_vcvttps2dqsv4sf */
    case 10851:  /* avx10_2_vcvttps2udqsv8sf */
    case 10847:  /* avx10_2_vcvttps2dqsv8sf */
    case 10843:  /* avx10_2_vcvttps2udqsv16sf */
    case 10839:  /* avx10_2_vcvttps2dqsv16sf */
    case 10837:  /* avx10_2_cvttps2iubsv4sf */
    case 10835:  /* avx10_2_cvttps2ibsv4sf */
    case 10831:  /* avx10_2_cvttps2iubsv8sf */
    case 10827:  /* avx10_2_cvttps2ibsv8sf */
    case 10823:  /* avx10_2_cvttps2iubsv16sf */
    case 10819:  /* avx10_2_cvttps2ibsv16sf */
    case 10817:  /* avx10_2_cvtps2iubsv4sf */
    case 10815:  /* avx10_2_cvtps2ibsv4sf */
    case 10811:  /* avx10_2_cvtps2iubsv8sf */
    case 10807:  /* avx10_2_cvtps2ibsv8sf */
    case 10803:  /* avx10_2_cvtps2iubsv16sf */
    case 10799:  /* avx10_2_cvtps2ibsv16sf */
    case 10797:  /* avx10_2_cvttph2iubsv8hf */
    case 10795:  /* avx10_2_cvttph2ibsv8hf */
    case 10791:  /* avx10_2_cvttph2iubsv16hf */
    case 10787:  /* avx10_2_cvttph2ibsv16hf */
    case 10783:  /* avx10_2_cvttph2iubsv32hf */
    case 10779:  /* avx10_2_cvttph2ibsv32hf */
    case 10777:  /* avx10_2_cvtph2iubsv8hf */
    case 10775:  /* avx10_2_cvtph2ibsv8hf */
    case 10771:  /* avx10_2_cvtph2iubsv16hf */
    case 10767:  /* avx10_2_cvtph2ibsv16hf */
    case 10763:  /* avx10_2_cvtph2iubsv32hf */
    case 10759:  /* avx10_2_cvtph2ibsv32hf */
    case 10757:  /* avx10_2_cvttbf162iubsv8bf */
    case 10755:  /* avx10_2_cvttbf162ibsv8bf */
    case 10753:  /* avx10_2_cvtbf162iubsv8bf */
    case 10751:  /* avx10_2_cvtbf162ibsv8bf */
    case 10749:  /* avx10_2_cvttbf162iubsv16bf */
    case 10747:  /* avx10_2_cvttbf162ibsv16bf */
    case 10745:  /* avx10_2_cvtbf162iubsv16bf */
    case 10743:  /* avx10_2_cvtbf162ibsv16bf */
    case 10741:  /* avx10_2_cvttbf162iubsv32bf */
    case 10739:  /* avx10_2_cvttbf162ibsv32bf */
    case 10737:  /* avx10_2_cvtbf162iubsv32bf */
    case 10735:  /* avx10_2_cvtbf162ibsv32bf */
    case 10703:  /* avx10_2_getexpbf16_v8bf */
    case 10701:  /* avx10_2_getexpbf16_v16bf */
    case 10699:  /* avx10_2_getexpbf16_v32bf */
    case 10697:  /* avx10_2_rcpbf16_v8bf */
    case 10695:  /* avx10_2_rcpbf16_v16bf */
    case 10693:  /* avx10_2_rcpbf16_v32bf */
    case 10685:  /* avx10_2_rsqrtbf16_v8bf */
    case 10683:  /* avx10_2_rsqrtbf16_v16bf */
    case 10681:  /* avx10_2_rsqrtbf16_v32bf */
    case 10526:  /* vcvthf82phv8hf */
    case 10524:  /* vcvthf82phv16hf */
    case 10522:  /* vcvthf82phv32hf */
    case 10520:  /* vcvtph2hf8sv32hf */
    case 10518:  /* vcvtph2hf8v32hf */
    case 10516:  /* vcvtph2bf8sv32hf */
    case 10514:  /* vcvtph2bf8v32hf */
    case 10512:  /* vcvtph2hf8sv16hf */
    case 10510:  /* vcvtph2hf8v16hf */
    case 10508:  /* vcvtph2bf8sv16hf */
    case 10506:  /* vcvtph2bf8v16hf */
    case 10085:  /* *conflictv2di */
    case 10083:  /* *conflictv4di */
    case 10081:  /* *conflictv8di */
    case 10079:  /* *conflictv4si */
    case 10077:  /* *conflictv8si */
    case 10075:  /* *conflictv16si */
    case 9658:  /* *avx512f_vcvtph2ps512 */
    case 9654:  /* vcvtph2ps256 */
    case 9652:  /* *vcvtph2ps_load */
    case 9089:  /* aesimc */
    case 9062:  /* xop_frczv4df2 */
    case 9061:  /* xop_frczv8sf2 */
    case 9060:  /* xop_frczv2df2 */
    case 9059:  /* xop_frczv4sf2 */
    case 9058:  /* xop_frczdf2 */
    case 9057:  /* xop_frczsf2 */
    case 8756:  /* sse4_1_phminposuw */
    case 8723:  /* sse4_1_movntdqa */
    case 8722:  /* avx2_movntdqa */
    case 8721:  /* avx512f_movntdqa */
    case 8676:  /* sse4a_movntdf */
    case 8675:  /* sse4a_movntsf */
    case 8561:  /* sse2_pmovmskb */
    case 8560:  /* avx2_pmovmskb */
    case 8515:  /* sse2_movmskpd */
    case 8514:  /* avx_movmskpd256 */
    case 8513:  /* sse_movmskps */
    case 8512:  /* avx_movmskps256 */
    case 7069:  /* avx512vl_getexpv2df */
    case 7065:  /* avx512vl_getexpv4df */
    case 7061:  /* avx512f_getexpv8df */
    case 7059:  /* avx512vl_getexpv4sf */
    case 7055:  /* avx512vl_getexpv8sf */
    case 7051:  /* avx512f_getexpv16sf */
    case 7049:  /* avx512fp16_getexpv8hf */
    case 7045:  /* avx512vl_getexpv16hf */
    case 7041:  /* avx512bw_getexpv32hf */
    case 5211:  /* avx512vl_cvtq2maskv2di */
    case 5210:  /* avx512vl_cvtq2maskv4di */
    case 5209:  /* avx512f_cvtq2maskv8di */
    case 5208:  /* avx512vl_cvtd2maskv4si */
    case 5207:  /* avx512vl_cvtd2maskv8si */
    case 5206:  /* avx512f_cvtd2maskv16si */
    case 5205:  /* avx512vl_cvtw2maskv8hi */
    case 5204:  /* avx512vl_cvtw2maskv16hi */
    case 5203:  /* avx512bw_cvtw2maskv32hi */
    case 5202:  /* avx512vl_cvtb2maskv32qi */
    case 5201:  /* avx512vl_cvtb2maskv16qi */
    case 5200:  /* avx512bw_cvtb2maskv64qi */
    case 5163:  /* unspec_sse2_cvttpd2dq */
    case 5157:  /* *unspec_fixuns_truncv4sfv4si2 */
    case 5153:  /* *unspec_fixuns_truncv8sfv8si2 */
    case 5147:  /* unspec_avx512dq_fixuns_truncv2sfv2di2 */
    case 5145:  /* unspec_avx512dq_fix_truncv2sfv2di2 */
    case 5133:  /* unspec_fixuns_truncv4sfv4di2 */
    case 5129:  /* unspec_fix_truncv4sfv4di2 */
    case 5125:  /* unspec_fixuns_truncv8sfv8di2 */
    case 5121:  /* unspec_fix_truncv8sfv8di2 */
    case 5119:  /* fixuns_notruncv2dfv2di2 */
    case 5115:  /* fixuns_notruncv4dfv4di2 */
    case 5111:  /* fixuns_notruncv8dfv8di2 */
    case 5109:  /* fix_notruncv2dfv2di2 */
    case 5105:  /* fix_notruncv4dfv4di2 */
    case 5101:  /* fix_notruncv8dfv8di2 */
    case 5079:  /* unspec_fixuns_truncv2dfv2di2 */
    case 5077:  /* unspec_fix_truncv2dfv2di2 */
    case 5073:  /* unspec_fixuns_truncv4dfv4di2 */
    case 5069:  /* unspec_fix_truncv4dfv4di2 */
    case 5065:  /* unspec_fixuns_truncv8dfv8di2 */
    case 5061:  /* unspec_fix_truncv8dfv8di2 */
    case 5055:  /* unspec_fixuns_truncv4dfv4si2 */
    case 5049:  /* unspec_fix_truncv4dfv4si2 */
    case 5032:  /* unspec_fixuns_truncv8dfv8si2 */
    case 5028:  /* unspec_fix_truncv8dfv8si2 */
    case 5021:  /* fixuns_notruncv4dfv4si2 */
    case 5017:  /* fixuns_notruncv8dfv8si2 */
    case 5009:  /* avx_cvtpd2dq256 */
    case 5005:  /* avx512f_cvtpd2dq512 */
    case 4943:  /* unspec_sse2_cvttsd2siq */
    case 4941:  /* unspec_sse2_cvttsd2si */
    case 4940:  /* sse2_cvtsd2siq_2 */
    case 4939:  /* sse2_cvtsd2si_2 */
    case 4929:  /* unspec_avx512f_vcvttsd2usiq */
    case 4927:  /* unspec_avx512f_vcvttsd2usi */
    case 4917:  /* unspec_avx512f_vcvttss2usiq */
    case 4915:  /* unspec_avx512f_vcvttss2usi */
    case 4906:  /* unspec_fixuns_truncv2dfv2si2 */
    case 4904:  /* unspec_sse2_cvttpd2pi */
    case 4903:  /* sse2_cvtpd2pi */
    case 4897:  /* unspec_fix_truncv4sfv4si2 */
    case 4891:  /* unspec_fix_truncv8sfv8si2 */
    case 4879:  /* unspec_fixuns_truncv16sfv16si2 */
    case 4875:  /* unspec_fix_truncv16sfv16si2 */
    case 4869:  /* *avx512dq_cvtps2uqqv4di */
    case 4865:  /* *avx512dq_cvtps2uqqv8di */
    case 4859:  /* *avx512dq_cvtps2qqv4di */
    case 4855:  /* *avx512dq_cvtps2qqv8di */
    case 4853:  /* *avx512vl_fixuns_notruncv4sfv4si */
    case 4849:  /* *avx512vl_fixuns_notruncv8sfv8si */
    case 4845:  /* *avx512f_fixuns_notruncv16sfv16si */
    case 4841:  /* avx512f_fix_notruncv16sfv16si */
    case 4839:  /* sse2_fix_notruncv4sfv4si */
    case 4835:  /* avx_fix_notruncv8sfv8si */
    case 4802:  /* unspec_sse_cvttss2siq */
    case 4800:  /* unspec_sse_cvttss2si */
    case 4799:  /* sse_cvtss2siq_2 */
    case 4798:  /* sse_cvtss2si_2 */
    case 4788:  /* unspec_sse_cvttps2pi */
    case 4700:  /* unspec_avx512fp16_fixuns_truncdi2 */
    case 4698:  /* unspec_avx512fp16_fix_truncdi2 */
    case 4696:  /* unspec_avx512fp16_fixuns_truncsi2 */
    case 4694:  /* unspec_avx512fp16_fix_truncsi2 */
    case 4684:  /* unspec_avx512fp16_fixuns_truncv2di2 */
    case 4682:  /* unspec_avx512fp16_fix_truncv2di2 */
    case 4662:  /* unspec_avx512fp16_fixuns_truncv4di2 */
    case 4658:  /* unspec_avx512fp16_fix_truncv4di2 */
    case 4656:  /* unspec_avx512fp16_fixuns_truncv4si2 */
    case 4654:  /* unspec_avx512fp16_fix_truncv4si2 */
    case 4606:  /* unspec_avx512fp16_fixuns_truncv8di2 */
    case 4602:  /* unspec_avx512fp16_fix_truncv8di2 */
    case 4598:  /* unspec_avx512fp16_fixuns_truncv16si2 */
    case 4594:  /* unspec_avx512fp16_fix_truncv16si2 */
    case 4590:  /* unspec_avx512fp16_fixuns_truncv8si2 */
    case 4586:  /* unspec_avx512fp16_fix_truncv8si2 */
    case 4582:  /* unspec_avx512fp16_fixuns_truncv32hi2 */
    case 4578:  /* unspec_avx512fp16_fix_truncv32hi2 */
    case 4574:  /* unspec_avx512fp16_fixuns_truncv16hi2 */
    case 4570:  /* unspec_avx512fp16_fix_truncv16hi2 */
    case 4568:  /* unspec_avx512fp16_fixuns_truncv8hi2 */
    case 4566:  /* unspec_avx512fp16_fix_truncv8hi2 */
    case 4557:  /* avx512fp16_vcvtsh2siq_2 */
    case 4556:  /* avx512fp16_vcvtsh2usiq_2 */
    case 4555:  /* avx512fp16_vcvtsh2si_2 */
    case 4554:  /* avx512fp16_vcvtsh2usi_2 */
    case 4480:  /* avx512fp16_vcvtph2qq_v2di */
    case 4478:  /* avx512fp16_vcvtph2uqq_v2di */
    case 4476:  /* avx512fp16_vcvtph2dq_v4si */
    case 4474:  /* avx512fp16_vcvtph2udq_v4si */
    case 4472:  /* avx512fp16_vcvtph2w_v8hi */
    case 4470:  /* avx512fp16_vcvtph2uw_v8hi */
    case 4466:  /* avx512fp16_vcvtph2qq_v4di */
    case 4462:  /* avx512fp16_vcvtph2uqq_v4di */
    case 4458:  /* avx512fp16_vcvtph2dq_v8si */
    case 4454:  /* avx512fp16_vcvtph2udq_v8si */
    case 4450:  /* avx512fp16_vcvtph2w_v16hi */
    case 4446:  /* avx512fp16_vcvtph2uw_v16hi */
    case 4442:  /* avx512fp16_vcvtph2qq_v8di */
    case 4438:  /* avx512fp16_vcvtph2uqq_v8di */
    case 4434:  /* avx512fp16_vcvtph2dq_v16si */
    case 4430:  /* avx512fp16_vcvtph2udq_v16si */
    case 4426:  /* avx512fp16_vcvtph2w_v32hi */
    case 4422:  /* avx512fp16_vcvtph2uw_v32hi */
    case 2982:  /* *rsqrt14v2df */
    case 2980:  /* *rsqrt14v4df */
    case 2978:  /* *rsqrt14v8df */
    case 2976:  /* *rsqrt14v4sf */
    case 2974:  /* *rsqrt14v8sf */
    case 2972:  /* *rsqrt14v16sf */
    case 2970:  /* avx512fp16_rsqrtv8hf2 */
    case 2968:  /* avx512fp16_rsqrtv16hf2 */
    case 2966:  /* avx512fp16_rsqrtv32hf2 */
    case 2965:  /* sse_rsqrtv4sf2 */
    case 2964:  /* avx_rsqrtv8sf2 */
    case 2904:  /* *rcp14v2df */
    case 2902:  /* *rcp14v4df */
    case 2900:  /* *rcp14v8df */
    case 2898:  /* *rcp14v4sf */
    case 2896:  /* *rcp14v8sf */
    case 2894:  /* *rcp14v16sf */
    case 2889:  /* avx512fp16_rcpv8hf2 */
    case 2887:  /* avx512fp16_rcpv16hf2 */
    case 2885:  /* avx512fp16_rcpv32hf2 */
    case 2882:  /* sse_rcpv4sf2 */
    case 2881:  /* avx_rcpv8sf2 */
    case 2571:  /* sse2_movntv2di */
    case 2570:  /* avx_movntv4di */
    case 2569:  /* avx512f_movntv8di */
    case 2568:  /* sse2_movntv2df */
    case 2567:  /* avx_movntv4df */
    case 2566:  /* avx512f_movntv8df */
    case 2565:  /* sse_movntv4sf */
    case 2564:  /* avx_movntv8sf */
    case 2563:  /* avx512f_movntv16sf */
    case 2562:  /* sse2_movntidi */
    case 2561:  /* sse2_movntisi */
    case 2560:  /* sse3_lddqu */
    case 2559:  /* avx_lddqu256 */
    case 2496:  /* *avx512vl_loadv8bf */
    case 2495:  /* *avx512vl_loadv16bf */
    case 2494:  /* *avx512bw_loadv32bf */
    case 2493:  /* *avx512fp16_loadv8hf */
    case 2492:  /* *avx512vl_loadv16hf */
    case 2491:  /* *avx512bw_loadv32hf */
    case 2490:  /* *avx512vl_loadv8hi */
    case 2489:  /* *avx512vl_loadv16hi */
    case 2488:  /* *avx512bw_loadv32hi */
    case 2487:  /* *avx512vl_loadv32qi */
    case 2486:  /* *avx512vl_loadv16qi */
    case 2485:  /* *avx512bw_loadv64qi */
    case 2472:  /* *avx512vl_loadv2df */
    case 2471:  /* *avx512vl_loadv4df */
    case 2470:  /* *avx512f_loadv8df */
    case 2469:  /* *avx512vl_loadv4sf */
    case 2468:  /* *avx512vl_loadv8sf */
    case 2467:  /* *avx512f_loadv16sf */
    case 2466:  /* *avx512vl_loadv2di */
    case 2465:  /* *avx512vl_loadv4di */
    case 2464:  /* *avx512f_loadv8di */
    case 2463:  /* *avx512vl_loadv4si */
    case 2462:  /* *avx512vl_loadv8si */
    case 2461:  /* *avx512f_loadv16si */
    case 2384:  /* mmx_pmovmskb */
    case 2062:  /* mmx_rsqrtv2sf2 */
    case 2059:  /* mmx_rcpv2sf2 */
    case 2048:  /* sse_movntq */
    case 2018:  /* movrsdi */
    case 2017:  /* movrssi */
    case 2016:  /* movrshi */
    case 2015:  /* movrsqi */
    case 2011:  /* urdmsr */
    case 1987:  /* movdiridi */
    case 1986:  /* movdirisi */
    case 1957:  /* rdsspdi */
    case 1956:  /* rdsspsi */
    case 1925:  /* xgetbv */
    case 1908:  /* xsaves */
    case 1907:  /* xsavec */
    case 1906:  /* xsaveopt */
    case 1905:  /* xsave */
    case 1895:  /* rdpmc */
    case 1759:  /* movmsk_df */
    case 1758:  /* fxamxf2_i387 */
    case 1757:  /* fxamdf2_i387 */
    case 1756:  /* fxamsf2_i387 */
    case 1735:  /* lrintxfsi2 */
    case 1734:  /* lrintxfhi2 */
    case 1732:  /* rintxf2 */
    case 1725:  /* *f2xm1xf2_i387 */
    case 1718:  /* cosxf2 */
    case 1717:  /* sinxf2 */
    case 1710:  /* rsqrthf2 */
    case 1709:  /* *rsqrtsf2_sse */
    case 1707:  /* truncxfdf2_i387_noop_unspec */
    case 1706:  /* truncxfsf2_i387_noop_unspec */
    case 1681:  /* rcphf2 */
    case 1680:  /* *rcpsf2_sse */
    case 1668:  /* *tls_dynamic_gnu2_lea_64_di */
    case 1667:  /* *tls_dynamic_gnu2_lea_64_si */
    case 1564:  /* lzcnt_hi_nf */
    case 1562:  /* tzcnt_hi_nf */
    case 1549:  /* lzcnt_di_nf */
    case 1548:  /* tzcnt_di_nf */
    case 1547:  /* lzcnt_si_nf */
    case 1546:  /* tzcnt_si_nf */
    case 203:  /* extendbfsf2_1 */
    case 83:  /* popfldi1 */
    case 82:  /* popflsi1 */
    case 81:  /* pushfldi2 */
    case 80:  /* pushflsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1449:  /* *setcc_si_1_and */
    case 1448:  /* *setcc_hi_1_and */
    case 162:  /* popp_di */
    case 161:  /* pushp_di */
    case 91:  /* *movdi_or */
    case 90:  /* *movsi_or */
    case 89:  /* *movhi_or */
    case 88:  /* *movdi_and */
    case 87:  /* *movsi_and */
    case 86:  /* *movhi_and */
    case 85:  /* *movdi_xor */
    case 84:  /* *movsi_xor */
    case 79:  /* *popdi1_epilogue */
    case 78:  /* *popsi1_epilogue */
    case 75:  /* *pushdi2_prologue */
    case 74:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 10334:  /* *movp2hi_internal */
    case 10333:  /* *movp2qi_internal */
    case 5522:  /* *avx512vl_vpternlogv2df_0 */
    case 5521:  /* *avx512vl_vpternlogv4df_0 */
    case 5520:  /* *avx512f_vpternlogv8df_0 */
    case 5519:  /* *avx512vl_vpternlogv4sf_0 */
    case 5518:  /* *avx512vl_vpternlogv8sf_0 */
    case 5517:  /* *avx512f_vpternlogv16sf_0 */
    case 5516:  /* *avx512vl_vpternlogv8bf_0 */
    case 5515:  /* *avx512vl_vpternlogv16bf_0 */
    case 5514:  /* *avx512bw_vpternlogv32bf_0 */
    case 5513:  /* *avx512fp16_vpternlogv8hf_0 */
    case 5512:  /* *avx512vl_vpternlogv16hf_0 */
    case 5511:  /* *avx512bw_vpternlogv32hf_0 */
    case 5510:  /* *avx512vl_vpternlogv2di_0 */
    case 5509:  /* *avx512vl_vpternlogv4di_0 */
    case 5508:  /* *avx512f_vpternlogv8di_0 */
    case 5507:  /* *avx512vl_vpternlogv4si_0 */
    case 5506:  /* *avx512vl_vpternlogv8si_0 */
    case 5505:  /* *avx512f_vpternlogv16si_0 */
    case 5504:  /* *avx512vl_vpternlogv8hi_0 */
    case 5503:  /* *avx512vl_vpternlogv16hi_0 */
    case 5502:  /* *avx512bw_vpternlogv32hi_0 */
    case 5501:  /* *avx512vl_vpternlogv16qi_0 */
    case 5500:  /* *avx512vl_vpternlogv32qi_0 */
    case 5499:  /* *avx512bw_vpternlogv64qi_0 */
    case 2421:  /* movv2df_internal */
    case 2420:  /* movv4df_internal */
    case 2419:  /* movv8df_internal */
    case 2418:  /* movv4sf_internal */
    case 2417:  /* movv8sf_internal */
    case 2416:  /* movv16sf_internal */
    case 2415:  /* movv8bf_internal */
    case 2414:  /* movv16bf_internal */
    case 2413:  /* movv32bf_internal */
    case 2412:  /* movv8hf_internal */
    case 2411:  /* movv16hf_internal */
    case 2410:  /* movv32hf_internal */
    case 2409:  /* movv1ti_internal */
    case 2408:  /* movv2ti_internal */
    case 2407:  /* movv4ti_internal */
    case 2406:  /* movv2di_internal */
    case 2405:  /* movv4di_internal */
    case 2404:  /* movv8di_internal */
    case 2403:  /* movv4si_internal */
    case 2402:  /* movv8si_internal */
    case 2401:  /* movv16si_internal */
    case 2400:  /* movv8hi_internal */
    case 2399:  /* movv16hi_internal */
    case 2398:  /* movv32hi_internal */
    case 2397:  /* movv16qi_internal */
    case 2396:  /* movv32qi_internal */
    case 2395:  /* movv64qi_internal */
    case 2047:  /* *pushv2qi2 */
    case 2046:  /* *movv2qi_internal */
    case 2045:  /* *pushv2bf2_rex64 */
    case 2044:  /* *pushv2hf2_rex64 */
    case 2043:  /* *pushv1si2_rex64 */
    case 2042:  /* *pushv2hi2_rex64 */
    case 2041:  /* *pushv4qi2_rex64 */
    case 2040:  /* *movv2sf_imm */
    case 2039:  /* *movv2si_imm */
    case 2038:  /* *movv4bf_imm */
    case 2037:  /* *movv4hf_imm */
    case 2036:  /* *movv4hi_imm */
    case 2035:  /* *movv8qi_imm */
    case 2034:  /* *movv2hf_imm */
    case 2033:  /* *movv2hi_imm */
    case 2032:  /* *movv4qi_imm */
    case 2031:  /* *movv2qi_imm */
    case 2030:  /* *movv2bf_internal */
    case 2029:  /* *movv2hf_internal */
    case 2028:  /* *movv1si_internal */
    case 2027:  /* *movv2hi_internal */
    case 2026:  /* *movv4qi_internal */
    case 2025:  /* *movv4bf_internal */
    case 2024:  /* *movv4hf_internal */
    case 2023:  /* *movv2sf_internal */
    case 2022:  /* *movv1di_internal */
    case 2021:  /* *movv2si_internal */
    case 2020:  /* *movv4hi_internal */
    case 2019:  /* *movv8qi_internal */
    case 1888:  /* *prefetch_3dnow */
    case 1452:  /* *setcc_qi */
    case 1451:  /* *setcc_si_1_movzbl */
    case 1450:  /* *setcc_hi_1_movzbl */
    case 1447:  /* *setcc_di_1 */
    case 1446:  /* *setcc_di_zu */
    case 1445:  /* *setcc_si_zu */
    case 1444:  /* *setcc_hi_zu */
    case 265:  /* *leadi */
    case 264:  /* *leasi */
    case 172:  /* *movbf_internal */
    case 171:  /* *movhf_internal */
    case 170:  /* *movsf_internal */
    case 169:  /* *movdf_internal */
    case 168:  /* *movxf_internal */
    case 167:  /* *movtf_internal */
    case 166:  /* *pushsf */
    case 165:  /* *pushsf_rex64 */
    case 158:  /* *pushbf */
    case 157:  /* *pushhf */
    case 156:  /* *pushbf_rex64 */
    case 155:  /* *pushhf_rex64 */
    case 154:  /* *pushdf */
    case 153:  /* *pushxf */
    case 152:  /* *pushtf */
    case 98:  /* *movqi_internal */
    case 97:  /* *movhi_internal */
    case 96:  /* *movsi_internal */
    case 95:  /* *movdi_internal */
    case 94:  /* *movti_internal */
    case 93:  /* *movoi_internal_avx */
    case 92:  /* *movxi_internal_avx512f */
    case 77:  /* *popdi1 */
    case 76:  /* *popsi1 */
    case 73:  /* *pushhi2 */
    case 72:  /* *pushqi2 */
    case 71:  /* *pushsi2 */
    case 70:  /* *pushsi2_rex64 */
    case 69:  /* *pushdi2_rex64 */
    case 68:  /* *pushti2 */
    case 67:  /* *pushdi2 */
    case 66:  /* *pushv1ti2 */
    case 65:  /* *pushv1ti2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 9093:  /* avx_vzeroupper_callee_abi */
    case 2388:  /* *mmx_femms */
    case 2387:  /* *mmx_emms */
    case 2008:  /* serialize */
    case 2007:  /* speculation_barrier */
    case 1998:  /* testui */
    case 1997:  /* stui */
    case 1996:  /* clui */
    case 1991:  /* xresldtrk */
    case 1990:  /* xsusldtrk */
    case 1985:  /* wbnoinvd */
    case 1984:  /* wbinvd */
    case 1972:  /* xtest_1 */
    case 1970:  /* xend */
    case 1968:  /* nop_endbr */
    case 1966:  /* setssbsy */
    case 1960:  /* saveprevssp */
    case 1930:  /* fnclex */
    case 1886:  /* ud2 */
    case 1885:  /* trap */
    case 1760:  /* cld */
    case 1505:  /* *leave_rex64 */
    case 1504:  /* *leave */
    case 1503:  /* eh_return_internal */
    case 1495:  /* nop */
    case 1491:  /* simple_return_internal_long */
    case 1490:  /* interrupt_return */
    case 1489:  /* simple_return_internal */
    case 1486:  /* blockage */
    case 533:  /* *setcc_qi_negqi_ccc_2_ccc */
    case 532:  /* *setcc_qi_negqi_ccc_2_cc */
    case 531:  /* *setcc_qi_negqi_ccc_1_ccc */
    case 530:  /* *setcc_qi_negqi_ccc_1_cc */
    case 529:  /* *setccc */
    case 528:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 527:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
    case 64:  /* *x86_cmc */
    case 63:  /* x86_stc */
      break;

    case 55:  /* *cmpxuhf */
    case 53:  /* *cmpxudf */
    case 51:  /* *cmpxusf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 61:  /* *cmpiuhf */
    case 59:  /* *cmpiudf */
    case 57:  /* *cmpiusf */
    case 54:  /* *cmpxhf */
    case 52:  /* *cmpxdf */
    case 50:  /* *cmpxsf */
    case 49:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1648:  /* parityqi2_cmp */
    case 47:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 46:  /* *cmpuxf_i387 */
    case 45:  /* *cmpudf_i387 */
    case 44:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 43:  /* *cmpxf_si_i387 */
    case 42:  /* *cmpdf_si_i387 */
    case 41:  /* *cmpsf_si_i387 */
    case 40:  /* *cmpxf_hi_i387 */
    case 39:  /* *cmpdf_hi_i387 */
    case 38:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 8567:  /* *sse2_pmovmskb_lt */
    case 8566:  /* *avx2_pmovmskb_lt */
    case 8527:  /* *sse2_movmskpd_lt */
    case 8526:  /* *avx_movmskpd256_lt */
    case 8525:  /* *sse_movmskps_lt */
    case 8524:  /* *avx_movmskps256_lt */
    case 37:  /* *cmpdf_i387 */
    case 36:  /* *cmpsf_i387 */
    case 35:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 32:  /* *cmpqi_extdi_4 */
    case 31:  /* *cmpqi_extsi_4 */
    case 30:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 29:  /* *cmpqi_extdi_3 */
    case 28:  /* *cmpqi_extsi_3 */
    case 27:  /* *cmpqi_exthi_3 */
    case 26:  /* *cmpqi_extdi_2 */
    case 25:  /* *cmpqi_extsi_2 */
    case 24:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 23:  /* *cmpqi_extdi_1 */
    case 22:  /* *cmpqi_extsi_1 */
    case 21:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 693:  /* *testti_doubleword */
    case 686:  /* *testsi_1 */
    case 685:  /* *testhi_1 */
    case 684:  /* *testqi_1 */
    case 683:  /* *testqi_1_maybe_si */
    case 682:  /* *testdi_1 */
    case 20:  /* *cmpdi_minus_1 */
    case 19:  /* *cmpsi_minus_1 */
    case 18:  /* *cmphi_minus_1 */
    case 17:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 62:  /* *cmpibf */
    case 60:  /* *cmpihf */
    case 58:  /* *cmpidf */
    case 56:  /* *cmpisf */
    case 48:  /* *cmpixf_i387 */
    case 34:  /* *cmpti_doubleword */
    case 33:  /* *cmpdi_doubleword */
    case 16:  /* *cmpdi_1 */
    case 15:  /* *cmpsi_1 */
    case 14:  /* *cmphi_1 */
    case 13:  /* *cmpqi_1 */
    case 12:  /* *cmpdi_ccno_1 */
    case 11:  /* *cmpsi_ccno_1 */
    case 10:  /* *cmphi_ccno_1 */
    case 9:  /* *cmpqi_ccno_1 */
    case 8:  /* *cmpdi_ccz_1 */
    case 7:  /* *cmpsi_ccz_1 */
    case 6:  /* *cmphi_ccz_1 */
    case 5:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4:  /* ccmpdi */
    case 3:  /* ccmpsi */
    case 2:  /* ccmphi */
    case 1:  /* ccmpqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    }
}
