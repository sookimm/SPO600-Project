/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_bit_xor_cst (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_XOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (uniform_integer_cst_p (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			{
			  res_ops[0] = captures[0];
			  res_ops[1] = captures[1];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 4, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_with_possible_nonzero_bits_1 (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 33, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case POLY_INT_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 34, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case SSA_NAME:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
	    {
	      {
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 35, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_usadd_overflow_mask (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case GT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q31))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q31))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case PLUS_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  if (tree_swap_operands_p (_q50, _q51))
								    std::swap (_q50, _q51);
								  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
								    {
								      {
									tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q51 };
									if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
									  {
									    if (types_match (type, captures[0], captures[1])
)
									      {
										{
										  res_ops[0] = captures[0];
										  res_ops[1] = captures[1];
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 42, __FILE__, __LINE__, false);
										  return true;
										}
									      }
									  }
								      }
								    }
								  if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q30, 0) && types_match (_q51, _q30)))
								    {
								      {
									tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
									if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
									  {
									    if (types_match (type, captures[0], captures[1])
)
									      {
										{
										  res_ops[0] = captures[0];
										  res_ops[1] = captures[1];
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 42, __FILE__, __LINE__, false);
										  return true;
										}
									      }
									  }
								      }
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      case LT_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case PLUS_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
								    {
								      {
									tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q41 };
									if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
									  {
									    if (types_match (type, captures[0], captures[1])
)
									      {
										{
										  res_ops[0] = captures[0];
										  res_ops[1] = captures[1];
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 43, __FILE__, __LINE__, false);
										  return true;
										}
									      }
									  }
								      }
								    }
								  if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q41, 0) && types_match (_q31, _q41)))
								    {
								      {
									tree captures[2] ATTRIBUTE_UNUSED = { _q41, _q40 };
									if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
									  {
									    if (types_match (type, captures[0], captures[1])
)
									      {
										{
										  res_ops[0] = captures[0];
										  res_ops[1] = captures[1];
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 43, __FILE__, __LINE__, false);
										  return true;
										}
									      }
									  }
								      }
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_double_value_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == double_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

bool
gimple_float_value_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == float_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

bool
gimple_float16_value_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == float16_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 93, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

bool
gimple_vec_same_elem_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_DUPLICATE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 94, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { t };
		    if (TREE_CODE (captures[0]) == SSA_NAME
 && uniform_vector_p (gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])))
)
		      {
			{
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 95, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (uniform_vector_p (captures[0])
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 96, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

bool
gimple_cond_expr_convert_p (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  tree _p2 = gimple_assign_rhs3 (_a1);
		  _p2 = do_valueize (valueize, _p2);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			      case LE_EXPR:
			      case EQ_EXPR:
			      case NE_EXPR:
			      case GE_EXPR:
			      case GT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  switch (TREE_CODE (_p2))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _p2))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      CASE_CONVERT:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  {
								    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q50, _q70, _p0, _q21, _p1, _p2 };
								    if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (type) != TYPE_PRECISION (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 == TYPE_PRECISION (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
 || (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 == TYPE_UNSIGNED (TREE_TYPE (captures[2]))))
 && single_use (captures[5])
 && single_use (captures[6])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  res_ops[2] = captures[2];
									  res_ops[3] = captures[3];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 98, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case LT_EXPR:
		    case LE_EXPR:
		    case EQ_EXPR:
		    case NE_EXPR:
		    case GE_EXPR:
		    case GT_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				switch (TREE_CODE (_p1))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _p1))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    CASE_CONVERT:
					      {
						tree _q50 = gimple_assign_rhs1 (_a2);
						_q50 = do_valueize (valueize, _q50);
						switch (TREE_CODE (_p2))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _p2))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    CASE_CONVERT:
							      {
								tree _q70 = gimple_assign_rhs1 (_a3);
								_q70 = do_valueize (valueize, _q70);
								{
								  tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q50, _q70, _p0, _q21, _p1, _p2 };
								  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (type) != TYPE_PRECISION (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 == TYPE_PRECISION (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
 || (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 == TYPE_UNSIGNED (TREE_TYPE (captures[2]))))
 && single_use (captures[5])
 && single_use (captures[6])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									res_ops[2] = captures[2];
									res_ops[3] = captures[3];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 98, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							        break;
							      }
							    default:;
							    }
						      }
						    break;
					          default:;
					          }
					        break;
					      }
					    default:;
					    }
				      }
				    break;
			          default:;
			          }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_4 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail506;
      {
	res_op->set_op (RSHIFT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail506;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 104, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail506:;
    }
  return false;
}

bool
gimple_simplify_7 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail509;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 107, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail509:;
  return false;
}

bool
gimple_simplify_8 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail510;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 108, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail510:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail511;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 109, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail511:;
    }
  return false;
}

bool
gimple_simplify_10 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail514;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 110, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail514:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail515;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 111, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail515:;
    }
  return false;
}

bool
gimple_simplify_12 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail518;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail518;
      res_op->ops[0] = _r1;
    }
    {
      tree _o1[2], _r1;
      {
	tree _o2[1], _r2;
	_o2[0] = captures[4];
	gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	tem_op.resimplify (NULL, valueize);
	_r2 = maybe_push_res_to_seq (&tem_op, NULL);
	if (!_r2) goto next_after_fail518;
	_o1[0] = _r2;
      }
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (NULL, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
      if (!_r1) goto next_after_fail518;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 112, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail518:;
  return false;
}

bool
gimple_simplify_15 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail521;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 115, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail521:;
  return false;
}

bool
gimple_simplify_16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail522;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 116, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail522:;
  return false;
}

bool
gimple_simplify_18 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail524;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[0];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[1];
	      if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0])
	          && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail524;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail524;
	    _o1[0] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail524;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 118, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail524:;
    }
  return false;
}

bool
gimple_simplify_23 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail529;
  {
    res_op->set_op (NOP_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 123, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail529:;
  return false;
}

bool
gimple_simplify_26 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail532;
      {
	res_op->set_op (BIT_XOR_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail532;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail532;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 126, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail532:;
    }
  return false;
}

bool
gimple_simplify_28 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (opo),
 const enum tree_code ARG_UNUSED (opi))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail534;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail534;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 128, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail534:;
  return false;
}

bool
gimple_simplify_30 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail536;
      {
	res_op->set_op (BIT_XOR_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail536;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail536;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 130, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail536:;
    }
  return false;
}

bool
gimple_simplify_33 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!CONSTANT_CLASS_P (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail539;
      {
	res_op->set_op (bitop, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (NULL, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	  if (!_r1) goto next_after_fail539;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 132, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail539:;
    }
  else
    {
      {
 tree cst1 = const_binop (bitop, type, captures[0], captures[2]);
	  if (cst1
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail540;
	      {
		res_op->set_op (bitop, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  cst1;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 133, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail540:;
	    }
	  else
	    {
	      {
 tree cst2 = const_binop (bitop, type, captures[1], captures[2]);
		  if (cst2
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail541;
		      {
			res_op->set_op (bitop, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  cst2;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 134, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail541:;
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_37 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail545;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail545;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail545;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 127, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail545:;
    }
  return false;
}

bool
gimple_simplify_40 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[2])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int c = wi::add (wi::to_wide (captures[3]), 1);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail548;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail548;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail548;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 140, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail548:;
      }
    }
  return false;
}

bool
gimple_simplify_43 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[5]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[4])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (type));
 wide_int c = wi::add (wi::to_wide (captures[3]),
 wi::lshift (wone, wi::to_wide (captures[5])));
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])
	          || !single_use (captures[4])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail552;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail552;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail552;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 139, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail552:;
      }
    }
  return false;
}

bool
gimple_simplify_46 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && tree_int_cst_sgn (captures[4]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[3])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])),
 wi::lshift (wone, wi::to_wide (captures[4])));
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[3])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail555;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail555;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t,c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail555;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 144, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail555:;
      }
    }
  return false;
}

bool
gimple_simplify_50 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail560;
      {
	res_op->set_op (GE_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail560;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 149, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail560:;
    }
  return false;
}

bool
gimple_simplify_54 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (outer_op),
 const enum tree_code ARG_UNUSED (inner_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (captures[2])
 && real_zerop (captures[3])
 && !HONOR_SIGN_DEPENDENT_ROUNDING (type)
)
    {
      {
 bool inner_plus = ((inner_op == PLUS_EXPR)
 ^ REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[2])));
 bool outer_plus
 = ((outer_op == PLUS_EXPR)
 ^ REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[3])));
	  if (outer_plus && !inner_plus
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail566;
	      {
		res_op->set_op (outer_op, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 155, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail566:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail567;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 156, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail567:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_58 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type)
 && !integer_all_onesp (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail571;
      {
	res_op->set_op (PLUS_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail571;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_minus_one_cst (type);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 160, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail571:;
    }
  else
    {
      if (INTEGRAL_TYPE_P (type)
 && TREE_CODE (captures[1]) == INTEGER_CST
 && wi::to_wide (captures[1]) != wi::min_value (TYPE_PRECISION (type),
 SIGNED)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail572;
	  {
	    res_op->set_op (MINUS_EXPR, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] =  build_minus_one_cst (type);
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail572;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 161, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail572:;
	}
    }
  return false;
}

bool
gimple_simplify_64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner_op),
 const enum tree_code ARG_UNUSED (neg_inner_op),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      if (!CONSTANT_CLASS_P (captures[0])
)
		{
		  if (outer_op == PLUS_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail578;
		      {
			res_op->set_op (PLUS_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail578;
			  res_op->ops[0] = _r1;
			}
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail578;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (NULL, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			  if (!_r1) goto next_after_fail578;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 167, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail578:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail579;
		      {
			res_op->set_op (MINUS_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail579;
			  res_op->ops[0] = _r1;
			}
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail579;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), neg_inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (NULL, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			  if (!_r1) goto next_after_fail579;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 168, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail579:;
		    }
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0]))
)
		{
		  if (outer_op == PLUS_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail580;
		      {
			res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, TREE_TYPE (_o1[0]), _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail580;
			      _o2[0] = _r3;
			    }
			    _o2[1] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), inner_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r2) goto next_after_fail580;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail580;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 169, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail580:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail581;
		      {
			res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, TREE_TYPE (_o1[0]), _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail581;
			      _o2[0] = _r3;
			    }
			    _o2[1] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), neg_inner_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r2) goto next_after_fail581;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail581;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 170, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail581:;
		    }
		}
	      else
		{
		  if (types_match (type, captures[0]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (outer_op == inner_op
 ? PLUS_EXPR : MINUS_EXPR,
 type, captures[1], captures[2]);
			  if (cst
)
			    {
			      if (INTEGRAL_TYPE_P (type) && !TREE_OVERFLOW (cst)
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail582;
				  {
				    res_op->set_op (inner_op, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] =  cst;
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 171, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail582:;
				}
			      else
				{
				  if (INTEGRAL_TYPE_P (type)
 && wi::to_wide (cst) == wi::min_value (type)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail583;
				      {
					res_op->set_op (neg_inner_op, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  wide_int_to_tree (type, wi::to_wide (cst));
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 172, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail583:;
				    }
				  else
				    {
				      {
 tree utype = unsigned_type_for (type);
					  if (utype
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail584;
					      {
						res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						{
						  tree _o1[2], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o2[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r2) goto next_after_fail584;
						    _o1[0] = _r2;
						  }
						  {
						    tree _o2[1], _r2;
						    _o2[0] =  TREE_OVERFLOW (cst)
 ? drop_tree_overflow (cst) : cst;
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o2[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r2) goto next_after_fail584;
						    _o1[1] = _r2;
						  }
						  gimple_match_op tem_op (res_op->cond.any_else (), inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail584;
						  res_op->ops[0] = _r1;
						}
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 173, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail584:;
					    }
				      }
				    }
				}
			    }
		      }
		    }
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_82 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (wi::bit_and (widest_int::from (tree_nonzero_bits (captures[1]), UNSIGNED),
 widest_int::from (tree_nonzero_bits (captures[3]), UNSIGNED))
 == 0)
)
    {
      {
 tree utype = TREE_TYPE (captures[1]);
 if (TYPE_PRECISION (utype) < TYPE_PRECISION (TREE_TYPE (captures[3])))
 utype = TREE_TYPE (captures[3]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[2])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail605;
	  {
	    res_op->set_op (POPCOUNT, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail605;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail605;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail605;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 194, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail605:;
      }
    }
  return false;
}

bool
gimple_simplify_88 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail611;
      {
	res_op->set_op (MINUS_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[4];
	  _o1[1] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail611;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 200, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail611:;
    }
  return false;
}

bool
gimple_simplify_92 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[0]))
 && !TYPE_SATURATING (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail615;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[1];
	    _o2[1] = captures[2];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail615;
	    _o1[0] = _r2;
	  }
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail615;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 204, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail615:;
    }
  return false;
}

bool
gimple_simplify_97 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail620;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    res_op->ops[0] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 208, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail620:;
	}
    }
  return false;
}

bool
gimple_simplify_98 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail621;
	      {
		res_op->set_op (NEGATE_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail621;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 209, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail621:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail622;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail622;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 210, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail622:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_103 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!TYPE_OVERFLOW_TRAPS (type)
 && TREE_CODE (type) != COMPLEX_TYPE
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail630;
	      {
		res_op->set_op (BIT_NOT_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail630;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail630:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_107 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
1
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail636;
      {
	res_op->set_op (COND_EXPR, type, 3);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (boolean_type_node != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (boolean_type_node, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, boolean_type_node, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail636;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 224, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail636:;
    }
  return false;
}

bool
gimple_simplify_108 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail637;
      {
	res_op->set_op (PLUS_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r3) goto next_after_fail637;
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o2[1]), _o2[0], _o2[1], _o2[2]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail637;
	    _o1[0] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail637;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail637:;
    }
  return false;
}

bool
gimple_simplify_112 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail641;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail641;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail641;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 229, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail641:;
    }
  return false;
}

bool
gimple_simplify_117 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail646;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 232, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail646:;
  return false;
}

bool
gimple_simplify_120 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail649;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 236, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail649:;
  return false;
}

bool
gimple_simplify_123 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail652;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 238, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail652:;
  return false;
}

bool
gimple_simplify_127 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail656;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 238, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail656:;
  return false;
}

bool
gimple_simplify_130 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail659;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 242, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail659:;
  return false;
}

bool
gimple_simplify_133 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail662;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 243, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail662:;
  return false;
}

bool
gimple_simplify_136 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail665;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 237, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail665:;
  return false;
}

bool
gimple_simplify_139 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[6]))
)
    {
      if (single_use (captures[4]) && single_use (captures[5])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail669;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail669;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail669:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail670;
	      {
		res_op->set_op (op, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail670;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[4];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 249, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail670:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_143 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[2], captures[0], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail676;
	  {
	    res_op->set_op (bitop, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 251, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail676:;
	}
  }
  return false;
}

bool
gimple_simplify_146 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])
              || !single_use (captures[2])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail679;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0])
	          && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail679;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail679;
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail679;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail679;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail679:;
    }
  return false;
}

bool
gimple_simplify_153 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail687;
      {
	res_op->set_op (BIT_AND_EXPR, type, 2);
	{
	  tree _o1[3], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  _o1[2] = captures[5];
	  gimple_match_op tem_op (res_op->cond.any_else (), COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail687;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_one_cst (type);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 257, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail687:;
    }
  return false;
}

bool
gimple_simplify_156 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail693;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail693:;
  return false;
}

bool
gimple_simplify_157 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail694;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 264, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail694:;
  return false;
}

bool
gimple_simplify_159 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail696;
	      {
		tree tem;
		tem = captures[3];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail696:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail697;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail697:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail698;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail698:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail699;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    res_op->ops[1] = captures[5];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail699:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail700;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				res_op->ops[1] = captures[5];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 270, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail700:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
				  {
				    res_op->set_op (GE_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail701;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail701:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail702;
				      {
					res_op->set_op (LE_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail702;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail702:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_169 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail731;
	      {
		tree tem;
		tem = captures[3];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail731:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail732;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail732:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail733;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail733:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail734;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    res_op->ops[1] = captures[5];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail734:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail735;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				res_op->ops[1] = captures[5];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 270, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail735:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail736;
				  {
				    res_op->set_op (GE_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail736;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail736:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail737;
				      {
					res_op->set_op (LE_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail737;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail737:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_185 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail755;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail755;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail755:;
    }
  return false;
}

bool
gimple_simplify_189 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail759;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail759;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail759:;
    }
  return false;
}

bool
gimple_simplify_193 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail763;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail763;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail763:;
    }
  return false;
}

bool
gimple_simplify_197 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail767;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 294, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail767:;
    }
  return false;
}

bool
gimple_simplify_201 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail771;
  {
    res_op->set_op (MULT_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 297, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail771:;
  return false;
}

bool
gimple_simplify_205 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail777;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail777;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail777;
	    _o1[0] = _r2;
	  }
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail777;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 300, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail777:;
    }
  return false;
}

bool
gimple_simplify_212 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[3]) != INTEGER_CST
 && single_use (captures[0])
 && !integer_zerop (captures[2]) && !integer_minus_onep (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail785;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail785:;
    }
  return false;
}

bool
gimple_simplify_215 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (LDEXP))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 HOST_WIDE_INT tmp = 0;
	  if (real_isinteger (&TREE_REAL_CST (captures[0]), &tmp)
 && tmp > 0 && pow2p_hwi (tmp)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail788;
	      {
		res_op->set_op (LDEXP, type, 2);
		res_op->ops[0] = captures[1];
		{
		  tree _o1[2], _r1;
		  _o1[0] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail788;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 310, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail788:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_219 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail792;
      {
	res_op->set_op (POW, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail792;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 314, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail792:;
    }
  return false;
}

bool
gimple_simplify_222 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail795;
  {
    tree tem;
    tem =  constant_boolean_node (op == NE_EXPR ? true : false, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 317, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail795:;
  return false;
}

bool
gimple_simplify_224 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail797;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 319, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail797:;
    }
  return false;
}

bool
gimple_simplify_228 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 && (CONSTANT_CLASS_P (captures[2]) || (single_use (captures[1]) && single_use (captures[0])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail804;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[2]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 325, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail804:;
    }
  return false;
}

bool
gimple_simplify_232 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || ((op == EQ_EXPR || op == NE_EXPR)
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0]))))
 && (CONSTANT_CLASS_P (captures[2]) || single_use (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail821;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[2]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 342, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail821:;
    }
  return false;
}

bool
gimple_simplify_235 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail824;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[3];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[3]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail824:;
    }
  return false;
}

bool
gimple_simplify_238 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ocmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TREE_CODE (TREE_TYPE (captures[0])) != COMPLEX_TYPE
 && (VECTOR_TYPE_P (type) || !VECTOR_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail827;
      {
	res_op->set_op (ocmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 347, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail827:;
    }
  return false;
}

bool
gimple_simplify_241 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp1),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail830;
      {
	res_op->set_op (rcmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 350, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail830:;
    }
  return false;
}

bool
gimple_simplify_245 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail836;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail836;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail836;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail836;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (utype);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 356, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail836:;
      }
    }
  return false;
}

bool
gimple_simplify_251 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int cand = wi::ctz (wi::to_wide (captures[2])) - wi::ctz (wi::to_wide (captures[0]));
      if (cand < 0
 || (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) != wi::to_wide (captures[2]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail851;
	  {
	    tree tem;
	    tem =  constant_boolean_node (cmp == NE_EXPR, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 371, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail851:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail852;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), cand);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 372, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail852:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_254 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2]) || integer_all_onesp (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail855;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 375, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail855:;
    }
  return false;
}

bool
gimple_simplify_257 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[1]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail858;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail858;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), bswap, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (NULL, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	  if (!_r1) goto next_after_fail858;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 378, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail858:;
  }
  return false;
}

bool
gimple_simplify_262 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] = captures[3];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 383, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail864:;
    }
  else
    {
      if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && single_use (captures[0])
)
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail865;
	      {
		res_op->set_op (scmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 384, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail865:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail866;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 385, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail866:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_267 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
 && (TREE_CODE (captures[2]) == INTEGER_CST || TREE_CODE (captures[2]) == VECTOR_CST)
)
    {
      {
 tree otype = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail874;
	  {
	    res_op->set_op (scmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail874;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail874;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 393, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail874:;
      }
    }
  return false;
}

bool
gimple_simplify_272 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sq),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && ! flag_errno_math
)
    {
      if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	{
	  if (cmp == EQ_EXPR || cmp == LT_EXPR || cmp == LE_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail893;
	      {
		tree tem;
		tem =  constant_boolean_node (false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 411, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail893:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR || !HONOR_NANS (captures[0])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail894;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 412, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail894:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail895;
		  {
		    res_op->set_op (GE_EXPR, type, 2);
		    res_op->ops[0] = captures[0];
		    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 413, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail895:;
		}
	    }
	}
      else
	{
	  if (real_equal (TREE_REAL_CST_PTR (captures[1]), &dconst0)
)
	    {
	      if (cmp == LT_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail896;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 414, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail896:;
		}
	      else
		{
		  if (cmp == GE_EXPR && !HONOR_NANS (captures[0])
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail897;
		      {
			tree tem;
			tem =  constant_boolean_node (true, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 415, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail897:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail898;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] = captures[1];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 416, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail898:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail899;
			  {
			    res_op->set_op (cmp, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] = captures[1];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 417, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail899:;
			}
		    }
		}
	    }
	  else
	    {
	      if ((cmp == LT_EXPR
 || cmp == LE_EXPR
 || cmp == GT_EXPR
 || cmp == GE_EXPR)
 && !REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && !HONOR_SIGN_DEPENDENT_ROUNDING (TREE_TYPE (captures[0]))
)
		{
		  {
 REAL_VALUE_TYPE c2;
 enum tree_code ncmp = cmp;
 const real_format *fmt
 = REAL_MODE_FORMAT (TYPE_MODE (TREE_TYPE (captures[0])));
 real_arithmetic (&c2, MULT_EXPR,
 &TREE_REAL_CST (captures[1]), &TREE_REAL_CST (captures[1]));
 real_convert (&c2, fmt, &c2);
 if (!REAL_VALUE_ISINF (c2))
 {
 tree c3 = fold_const_call (CFN_SQRT, TREE_TYPE (captures[0]),
 build_real (TREE_TYPE (captures[0]), c2));
 if (c3 == NULL_TREE || TREE_CODE (c3) != REAL_CST)
 ncmp = ERROR_MARK;
 else if ((cmp == LT_EXPR || cmp == GE_EXPR)
 && real_less (&TREE_REAL_CST (c3), &TREE_REAL_CST (captures[1])))
 ncmp = cmp == LT_EXPR ? LE_EXPR : GT_EXPR;
 else if ((cmp == LE_EXPR || cmp == GT_EXPR)
 && real_less (&TREE_REAL_CST (captures[1]), &TREE_REAL_CST (c3)))
 ncmp = cmp == LE_EXPR ? LT_EXPR : GE_EXPR;
 else
 {
 REAL_VALUE_TYPE c2alt, tow;
 if (cmp == LT_EXPR || cmp == GE_EXPR)
 tow = dconst0;
 else
 tow = dconstinf;
 real_nextafter (&c2alt, fmt, &c2, &tow);
 real_convert (&c2alt, fmt, &c2alt);
 if (REAL_VALUE_ISINF (c2alt))
 ncmp = ERROR_MARK;
 else
 {
 c3 = fold_const_call (CFN_SQRT, TREE_TYPE (captures[0]),
 build_real (TREE_TYPE (captures[0]), c2alt));
 if (c3 == NULL_TREE || TREE_CODE (c3) != REAL_CST)
 ncmp = ERROR_MARK;
 else if (real_equal (&TREE_REAL_CST (c3),
 &TREE_REAL_CST (captures[1])))
 c2 = c2alt;
 }
 }
 }
		      if (cmp == GT_EXPR || cmp == GE_EXPR
)
			{
			  if (REAL_VALUE_ISINF (c2)
)
			    {
			      if (HONOR_INFINITIES (captures[0])
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail900;
				  {
				    res_op->set_op (EQ_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 418, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail900:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail901;
				  {
				    tree tem;
				    tem =  constant_boolean_node (false, type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 419, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail901:;
				}
			    }
			  else
			    {
			      if (ncmp != ERROR_MARK
)
				{
				  if (ncmp == GE_EXPR
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail902;
				      {
					res_op->set_op (GE_EXPR, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 420, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail902:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail903;
				      {
					res_op->set_op (GT_EXPR, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 421, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail903:;
				    }
				}
			    }
			}
		      else
			{
			  if (REAL_VALUE_ISINF (c2)
)
			    {
			      if (! HONOR_NANS (captures[0]) && ! HONOR_INFINITIES (captures[0])
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail904;
				  {
				    tree tem;
				    tem =  constant_boolean_node (true, type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 422, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail904:;
				}
			      else
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail905;
				      {
					res_op->set_op (NE_EXPR, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 423, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail905:;
				    }
				  else
				    {
				      if (! HONOR_INFINITIES (captures[0])
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail906;
					  {
					    res_op->set_op (GE_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 424, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail906:;
					}
				      else
					{
					  if (0
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail907;
					      {
						res_op->set_op (TRUTH_ANDIF_EXPR, type, 2);
						{
						  tree _o1[2], _r1;
						  _o1[0] = captures[0];
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
						  gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail907;
						  res_op->ops[0] = _r1;
						}
						{
						  tree _o1[2], _r1;
						  _o1[0] = captures[0];
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
						  gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail907;
						  res_op->ops[1] = _r1;
						}
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 425, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail907:;
					    }
					}
				    }
				}
			    }
			  else
			    {
			      if (ncmp != ERROR_MARK && ! HONOR_NANS (captures[0])
)
				{
				  if (ncmp == LT_EXPR
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail908;
				      {
					res_op->set_op (LT_EXPR, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 426, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail908:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail909;
				      {
					res_op->set_op (LE_EXPR, type, 2);
					res_op->ops[0] = captures[0];
					res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), c2);
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 427, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail909:;
				    }
				}
			      else
				{
				  if (ncmp != ERROR_MARK &&
0
)
				    {
				      if (ncmp == LT_EXPR
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail910;
					  {
					    res_op->set_op (TRUTH_ANDIF_EXPR, type, 2);
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail910;
					      res_op->ops[0] = _r1;
					    }
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail910;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 428, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail910:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
					  {
					    res_op->set_op (TRUTH_ANDIF_EXPR, type, 2);
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail911;
					      res_op->ops[0] = _r1;
					    }
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail911;
					      res_op->ops[1] = _r1;
					    }
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail911:;
					}
				    }
				}
			    }
			}
		  }
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_304 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[2]) && !TREE_OVERFLOW (captures[3])
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[1]))
 && !TYPE_SATURATING (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (rop, captures[3], captures[2]);
	  if (TREE_OVERFLOW (res)
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail985;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 486, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail985:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail986;
		  {
		    res_op->set_op (cmp, type, 2);
		    res_op->ops[0] = captures[1];
		    res_op->ops[1] =  TREE_OVERFLOW (res)
 ? drop_tree_overflow (res) : res;
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 487, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail986:;
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_306 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (clz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!sanitize_flags_p (SANITIZE_BUILTIN)
 || (cfun && (cfun->curr_properties & PROP_ssa) != 0)
)
    {
      if (integer_zerop (captures[2]) && single_use (captures[0])
)
	{
	  {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail996;
	      {
		res_op->set_op (cmp, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (stype != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail996;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] =  build_zero_cst (stype);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 497, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail996:;
	  }
	}
      else
	{
	  if (wi::to_wide (captures[2]) == TYPE_PRECISION (TREE_TYPE (captures[1])) - 1
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail997;
	      {
		res_op->set_op (op, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_one_cst (TREE_TYPE (captures[1]));
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 498, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail997:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_311 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1005;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 506, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1005:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0 || wi::to_widest (captures[2]) > prec
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1006;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR ? true : false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 507, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1006:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1007;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1007;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (tree_to_uhwi (captures[2]) - 1, 1,
 false, prec));
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 508, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1007:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_321 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1019;
  {
    res_op->set_op (ABS_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 520, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1019:;
  return false;
}

bool
gimple_simplify_326 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
 && !flag_non_call_exceptions
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1026;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 525, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1026:;
    }
  return false;
}

bool
gimple_simplify_329 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1029;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 528, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1029:;
    }
  return false;
}

bool
gimple_simplify_331 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[2])
 && tree_int_cst_sgn (captures[2]) > 0
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && wi::to_wide (captures[2]) + wi::to_wide (captures[1]) == 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1032;
      {
	res_op->set_op (RSHIFT_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1032;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_int_cst (integer_type_node,
 wi::exact_log2 (wi::to_wide (captures[2])));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 531, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1032:;
    }
  return false;
}

bool
gimple_simplify_339 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1043;
      {
	res_op->set_op (trunc_divmod, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 542, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1043:;
    }
  return false;
}

bool
gimple_simplify_341 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1045;
  {
    tree tem;
    tem =  build_zero_cst (type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 544, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1045:;
  return false;
}

bool
gimple_simplify_346 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[1]))
 || TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || !TYPE_UNSIGNED (type))
 && integer_pow2p (captures[2]) && tree_int_cst_sgn (captures[2]) > 0
)
    {
      {
 tree utype = TREE_TYPE (captures[1]);
 if (!TYPE_OVERFLOW_WRAPS (utype))
 utype = unsigned_type_for (utype);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1050;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] = captures[1];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1050;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		_o2[1] =  build_one_cst (utype);
		gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1050;
		_o1[0] = _r2;
	      }
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1050;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 549, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1050:;
      }
    }
  return false;
}

bool
gimple_simplify_357 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1063;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail1063;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), POW, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1063;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 562, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1063:;
    }
  return false;
}

bool
gimple_simplify_364 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1072;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1072:;
    }
  return false;
}

bool
gimple_simplify_369 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == 1
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1078;
	  {
	    res_op->set_op (acmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst) - 1));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1078:;
	}
  }
  return false;
}

bool
gimple_simplify_374 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2]))
 || VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
    {
      {
 tree cst = uniform_integer_cst_p (captures[2]);
 tree arg1_type = TREE_TYPE (cst);
 unsigned int prec = TYPE_PRECISION (arg1_type);
 wide_int max = wi::max_value (arg1_type);
 wide_int signed_max = wi::max_value (prec, SIGNED);
 wide_int min = wi::min_value (arg1_type);
	  if (wi::to_wide (cst) == max
)
	    {
	      if (cmp == GT_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1100;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1100:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1101;
		      {
			res_op->set_op (EQ_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] = captures[2];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1101:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1102;
			  {
			    tree tem;
			    tem =  constant_boolean_node (true, type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 585, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1102:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1103;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[2];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 586, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1103:;
			    }
			}
		    }
		}
	    }
	  else
	    {
	      if (wi::to_wide (cst) == min
)
		{
		  if (cmp == LT_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1104;
		      {
			tree tem;
			tem =  constant_boolean_node (false, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1104:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1105;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] = captures[2];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 588, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1105:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1106;
			      {
				tree tem;
				tem =  constant_boolean_node (true, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 589, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1106:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1107;
				  {
				    res_op->set_op (NE_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 590, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1107:;
				}
			    }
			}
		    }
		}
	      else
		{
		  if (wi::to_wide (cst) == max - 1
)
		    {
		      if (cmp == GT_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1108;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 591, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1108:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1109;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 592, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1109:;
			    }
			}
		    }
		  else
		    {
		      if (wi::to_wide (cst) == min + 1
)
			{
			  if (cmp == GE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 593, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1110:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1111;
				  {
				    res_op->set_op (EQ_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 594, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1111:;
				}
			    }
			}
		      else
			{
			  if (wi::to_wide (cst) == signed_max
 && TYPE_UNSIGNED (arg1_type)
 && TYPE_MODE (arg1_type) != BLKmode
 && prec == GET_MODE_PRECISION (SCALAR_INT_TYPE_MODE (arg1_type))
 && INTEGRAL_TYPE_P (arg1_type)
)
			    {
			      if (cmp == LE_EXPR || cmp == GT_EXPR
)
				{
				  {
 tree st = signed_type_for (TREE_TYPE (captures[2]));
				      if (cst == captures[2] && cmp == LE_EXPR
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1112;
					  {
					    res_op->set_op (GE_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (st != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1112;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  build_zero_cst (st);
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 595, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1112:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1113;
					      {
						res_op->set_op (LT_EXPR, type, 2);
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (st != TREE_TYPE (_o1[0])
						      && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail1113;
						    }
						  else
						    _r1 = _o1[0];
						  res_op->ops[0] = _r1;
						}
						res_op->ops[1] =  build_zero_cst (st);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 596, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail1113:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1114;
						  {
						    res_op->set_op (GE_EXPR, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail1114;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  build_zero_cst (st);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail1114:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1115;
						      {
							res_op->set_op (LT_EXPR, type, 2);
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail1115;
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  build_zero_cst (st);
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail1115:;
						    }
						}
					    }
					}
				  }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_411 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (1
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && types_match (type, captures[2])
 && !POINTER_TYPE_P (TREE_TYPE (captures[2]))
 && TREE_CODE (TREE_TYPE (captures[2])) != OFFSET_TYPE
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1171;
      {
	res_op->set_op (bitop, type, 2);
	res_op->ops[0] = captures[2];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[3];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1171;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 647, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1171:;
    }
  return false;
}

bool
gimple_simplify_415 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize
 && !HONOR_SNANS (captures[0])
 && types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[2]))
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_COPYSIGN,
 type, OPTIMIZE_FOR_BOTH)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1176;
      {
	res_op->set_op (CFN_COPYSIGN, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1176:;
    }
  return false;
}

bool
gimple_simplify_419 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && op != MULT_EXPR
 && op != RDIV_EXPR
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && type_has_mode_precision_p (TREE_TYPE (captures[4]))
 && type_has_mode_precision_p (type)
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], type)
 && (types_match (captures[2], captures[4])
 || poly_int_tree_p (captures[3]))
)
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1183;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[2];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1183;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1183:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1184;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1184;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[4];
		    if (utype != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1184;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1184;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 656, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1184:;
	  }
	}
    }
  else
    {
      if (FLOAT_TYPE_P (type)
 && DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (type)
)
	{
	  {
 tree arg0 = strip_float_extensions (captures[2]);
 tree arg1 = strip_float_extensions (captures[4]);
 tree itype = TREE_TYPE (captures[0]);
 tree ty1 = TREE_TYPE (arg0);
 tree ty2 = TREE_TYPE (arg1);
 enum tree_code code = TREE_CODE (itype);
	      if (FLOAT_TYPE_P (ty1)
 && FLOAT_TYPE_P (ty2)
)
		{
		  {
 tree newtype = type;
 if (TYPE_MODE (ty1) == SDmode
 || TYPE_MODE (ty2) == SDmode
 || TYPE_MODE (type) == SDmode)
 newtype = dfloat32_type_node;
 if (TYPE_MODE (ty1) == DDmode
 || TYPE_MODE (ty2) == DDmode
 || TYPE_MODE (type) == DDmode)
 newtype = dfloat64_type_node;
 if (TYPE_MODE (ty1) == TDmode
 || TYPE_MODE (ty2) == TDmode
 || TYPE_MODE (type) == TDmode)
 newtype = dfloat128_type_node;
		      if ((newtype == dfloat32_type_node
 || newtype == dfloat64_type_node
 || newtype == dfloat128_type_node)
 && newtype == type
 && types_match (newtype, type)
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1185;
			  {
			    res_op->set_op (op, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (newtype != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1185;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (newtype != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1185;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 657, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1185:;
			}
		      else
			{
			  {
 if (element_precision (ty1) > element_precision (newtype))
 newtype = ty1;
 if (element_precision (ty2) > element_precision (newtype))
 newtype = ty2;
			      if (element_precision (newtype) < element_precision (itype)
 && (!VECTOR_MODE_P (TYPE_MODE (newtype))
 || target_supports_op_p (newtype, op, optab_default))
 && (flag_unsafe_math_optimizations
 || (element_precision (newtype) == element_precision (type)
 && real_can_shorten_arithmetic (element_mode (itype),
 element_mode (type))
 && !excess_precision_type (newtype)))
 && !types_match (itype, newtype)
)
				{
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1186;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (newtype != TREE_TYPE (_o2[0])
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1186;
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (newtype != TREE_TYPE (_o2[0])
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1186;
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1186;
				      res_op->ops[0] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 658, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1186:;
				}
			  }
			}
		  }
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_440 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (!TYPE_OVERFLOW_SANITIZED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1215;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 679, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1215:;
	}
    }
  return false;
}

bool
gimple_simplify_446 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1221;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 685, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1221:;
  return false;
}

bool
gimple_simplify_451 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[5], op, captures[1], ERROR_MARK,
 NULL_TREE, NULL_TREE, captures[2], bitop, captures[3],
 captures[4], pmop);
      if (utype
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[2])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1226;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1226;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1226;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1226;
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1226;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1226;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1226:;
	}
  }
  return false;
}

bool
gimple_simplify_466 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[3])
 && tree_fits_uhwi_p (captures[4])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[3]);
 unsigned HOST_WIDE_INT mask = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT lo = bits & 7;
 unsigned HOST_WIDE_INT hi = bits - lo;
	  if (bits < prec
 && mask < (256u>>lo)
 && bits < TYPE_PRECISION (TREE_TYPE(captures[0]))
)
	    {
	      {
 unsigned HOST_WIDE_INT ns = (prec - (hi + 8)) + lo;
		  if (ns == 0
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1245;
		      {
			res_op->set_op (BIT_AND_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (type != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1245;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] = captures[4];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 704, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1245:;
		    }
		  else
		    {
		      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
 tree nst = build_int_cst (integer_type_node, ns);
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1246;
			  {
			    res_op->set_op (BIT_AND_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[2];
				  if (utype != TREE_TYPE (_o3[0])
				      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r3) goto next_after_fail1246;
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] = nst;
				gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, utype, _o2[0], _o2[1]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1246;
				_o1[0] = _r2;
			      }
			      if (type != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1246;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    res_op->ops[1] = captures[4];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1246:;
		      }
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_475 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
      {
	tree tem;
	tem =  constant_boolean_node (false, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 709, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1276:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1277;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 710, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1277:;
	}
    }
  return false;
}

bool
gimple_simplify_478 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1286;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 711, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1286:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1287;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 712, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1287:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1288;
		      {
			tree tem;
			tem = captures[3];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1288:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1289;
			  {
			    res_op->set_op (GT_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1289;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1289:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
			      {
				res_op->set_op (LT_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1290;
				    }
				  else
				    _r1 = _o1[0];
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1290:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
				  {
				    res_op->set_op (GT_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1291;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1291:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1292;
				      {
					res_op->set_op (LT_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1292;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1292:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_499 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_each_one_cst (TREE_TYPE (captures[0]));
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1320;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1320:;
    }
  return false;
}

bool
gimple_simplify_504 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1325;
  {
    res_op->set_op (maxmin, type, 2);
    res_op->ops[0] = captures[1];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1325;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1325:;
  return false;
}

bool
gimple_simplify_508 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 tree itype = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1330;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (COMPARISON_CLASS_P (_o2[0]))
		  {
		    if (!seq) return false;
		    _o2[0] = gimple_build (seq, TREE_CODE (_o2[0]), TREE_TYPE (_o2[0]), TREE_OPERAND (_o2[0], 0), TREE_OPERAND (_o2[0], 1));
		  }
		if (itype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (itype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1330;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1330;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 749, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1330:;
      }
    }
  return false;
}

bool
gimple_simplify_518 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1340;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 759, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1340:;
  return false;
}

bool
gimple_simplify_524 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && (
 (INTEGRAL_TYPE_P (type)
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[2]), TREE_TYPE (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) <= TYPE_PRECISION (type)
 && TYPE_PRECISION (TREE_TYPE (captures[3])) <= TYPE_PRECISION (type))
 || (types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[3]))))
)
    {
      if (cmp == EQ_EXPR
)
	{
	  if (VECTOR_TYPE_P (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1371;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1371:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1372;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1372:;
	    }
	}
      else
	{
	  if (cmp == NE_EXPR
)
	    {
	      if (VECTOR_TYPE_P (type)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1373;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 768, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1373:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1374;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 769, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1374:;
		}
	    }
	  else
	    {
	      if (cmp == LE_EXPR || cmp == UNLE_EXPR || cmp == LT_EXPR || cmp == UNLT_EXPR
)
		{
		  if (!HONOR_NANS (type)
)
		    {
		      if (VECTOR_TYPE_P (type)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1375;
			  {
			    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1375;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1375:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1376;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1376;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 771, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1376:;
			}
		    }
		}
	      else
		{
		  if (cmp == GE_EXPR || cmp == UNGE_EXPR || cmp == GT_EXPR || cmp == UNGT_EXPR
)
		    {
		      if (!HONOR_NANS (type)
)
			{
			  if (VECTOR_TYPE_P (type)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1377;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1377;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1377:;
			    }
			  else
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1378;
			      {
				res_op->set_op (NOP_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1378;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1378:;
			    }
			}
		    }
		  else
		    {
		      if (cmp == UNEQ_EXPR
)
			{
			  if (!HONOR_NANS (type)
)
			    {
			      if (VECTOR_TYPE_P (type)
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1379;
				  {
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1379:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1380;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 775, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1380:;
				}
			    }
			}
		      else
			{
			  if (cmp == LTGT_EXPR
)
			    {
			      if (!HONOR_NANS (type)
)
				{
				  if (VECTOR_TYPE_P (type)
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1381;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 776, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1381:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1382;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 777, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1382:;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_542 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
    {
      if (ABS_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1414;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 791, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1414:;
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1415;
	  {
	    tree tem;
	    tem = captures[2];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 792, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1415:;
	}
    }
  return false;
}

bool
gimple_simplify_553 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1427;
      {
	tree tem;
	tem = captures[3];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 798, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1427:;
    }
  return false;
}

bool
gimple_simplify_560 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1435;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 801, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1435:;
    }
  return false;
}

bool
gimple_simplify_566 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type)
)
    {
      {
 tree shifter = build_int_cst (integer_type_node, TYPE_PRECISION (type) - 1);
	  if (cmp == GE_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1446;
	      {
		res_op->set_op (BIT_XOR_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1446;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1446;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1446:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1447;
	      {
		res_op->set_op (BIT_NOT_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1447;
		      _o2[0] = _r3;
		    }
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1447;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1447;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 813, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1447:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_577 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq),
 const combined_fn ARG_UNUSED (sign))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (neeq == NE_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1473;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 821, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1473:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1474;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1474;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 822, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1474:;
    }
  return false;
}

bool
gimple_simplify_581 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 {
 if (tree_fits_shwi_p (captures[3]))
 {
 HOST_WIDE_INT valw = tree_to_shwi (captures[3]);
 if ((int) valw == valw)
 {
 val = valw;
 ifn = IFN_CLZ;
 }
 }
 }
 else if (direct_internal_fn_supported_p (IFN_CLZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH)
 && CLZ_DEFINED_VALUE_AT_ZERO
 (SCALAR_INT_TYPE_MODE (TREE_TYPE (captures[2])), val) == 2)
 ifn = IFN_CLZ;
      if (ifn == IFN_CLZ && wi::to_widest (captures[3]) == val
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1478;
	  {
	    res_op->set_op (CFN_CLZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 825, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1478:;
	}
  }
  return false;
}

bool
gimple_simplify_586 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 {
 if (tree_fits_shwi_p (captures[3]))
 {
 HOST_WIDE_INT valw = tree_to_shwi (captures[3]);
 if ((int) valw == valw)
 {
 val = valw;
 ifn = IFN_CTZ;
 }
 }
 }
 else if (direct_internal_fn_supported_p (IFN_CTZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH)
 && CTZ_DEFINED_VALUE_AT_ZERO
 (SCALAR_INT_TYPE_MODE (TREE_TYPE (captures[2])), val) == 2)
 ifn = IFN_CTZ;
      if (ifn == IFN_CTZ && wi::to_widest (captures[3]) == val
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1483;
	  {
	    res_op->set_op (CFN_CTZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1483:;
	}
  }
  return false;
}

bool
gimple_simplify_595 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
0
);
      if (equal == 1
)
	{
	  if (minmax == MIN_EXPR
)
	    {
	      if (known_le (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1495;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1495:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1496;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1496:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1497;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1497:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1498;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1498:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_613 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[3]))
 && VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && VECTOR_TYPE_P (type)
 && tree_int_cst_le (TYPE_SIZE (TREE_TYPE (type)),
 TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[1]))))
 && TYPE_SIZE (type) == TYPE_SIZE (TREE_TYPE (captures[1]))
)
    {
      {
 tree vtype = TREE_TYPE (captures[1]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1525;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[3], _r1;
	      _o1[0] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, vtype, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1525;
		_o1[1] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, vtype, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1525;
		_o1[2] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1525;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1525:;
      }
    }
  return false;
}

bool
gimple_simplify_628 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1540;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1540;
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[6];
	      _o1[5] = captures[7];
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_len_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1540;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 865, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1540:;
	}
  }
  return false;
}

bool
gimple_simplify_636 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) || TYPE_UNSIGNED (TREE_TYPE (captures[1])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1548;
      {
	res_op->set_op (ovf, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1548:;
    }
  return false;
}

bool
gimple_simplify_645 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1557;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 882, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1557:;
  return false;
}

bool
gimple_simplify_651 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1563;
      {
	res_op->set_op (tos, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1563:;
    }
  return false;
}

bool
gimple_simplify_658 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIGNBIT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1570;
  {
    tree tem;
    tem =  integer_zero_node;
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1570:;
  return false;
}

bool
gimple_simplify_665 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1577;
      {
	res_op->set_op (CFN_FMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1577:;
    }
  return false;
}

bool
gimple_simplify_674 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
 unsigned int prec0 = TYPE_PRECISION (type0);
 unsigned int prec1 = TYPE_PRECISION (type1);
	  if (prec0 == prec1 || (prec0 > prec1 && TYPE_UNSIGNED (type1))
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1588;
	      {
		res_op->set_op (popcount, type, 1);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (type1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1588;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1588;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1588:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_684 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1603;
	  {
	    res_op->set_op (parity, type, 1);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (type1 != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1603;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      if (type0 != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1603;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1603:;
      }
    }
  return false;
}

bool
gimple_simplify_690 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (reduc))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int i = single_nonzero_element (captures[1]);
      if (i >= 0
)
	{
	  {
 tree elt = vector_cst_elt (captures[1], i);
 tree elt_type = TREE_TYPE (elt);
 unsigned int elt_bits = tree_to_uhwi (TYPE_SIZE (elt_type));
 tree size = bitsize_int (elt_bits);
 tree pos = bitsize_int (elt_bits * i);
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1611;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[3], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  size;
		    _o2[2] =  pos;
		    gimple_match_op tem_op (res_op->cond.any_else (), BIT_FIELD_REF, elt_type, _o2[0], _o2[1], _o2[2]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1611;
		    _o1[0] = _r2;
		  }
		  _o1[1] =  elt;
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, elt_type, _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1611;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 929, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1611:;
	  }
	}
  }
  return false;
}

bool
gimple_simplify_CFN_COS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_COS;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1649;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1649:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_COS;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1650;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1650:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_COS, CFN_ATAN, CFN_SQRT, CFN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_COS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CCOS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1673;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOS, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1673:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CCOSH (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1676;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOSH, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1676:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CABSL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case CONJ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1688;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1688:;
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1689;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1689:;
		  }
	          break;
	        }
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_zerop (_q21))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1690;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1690:;
		      }
		    }
		  if (real_zerop (_q20))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1691;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1691:;
		      }
		    }
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1692;
			    {
			      res_op->set_op (MULT_EXPR, type, 2);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail1692;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] =  build_real_truncate (type, dconst_sqrt2 ());
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1692:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_REALPART_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1745;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1745:;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case CONJ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1746;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[2];
					gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1746;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 990, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1746:;
				  }
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    const enum tree_code op = PLUS_EXPR;
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1747;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[2], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1747;
					  _o1[0] = _r2;
					}
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[3];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1747;
					  _o1[1] = _r2;
					}
					gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1747;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1747:;
				  }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    const enum tree_code op = MINUS_EXPR;
				    gimple_seq *lseq = seq;
				    if (lseq
				        && (!single_use (captures[0])
				            || !single_use (captures[1])))
				      lseq = NULL;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1748;
				    {
				      res_op->set_op (NOP_EXPR, type, 1);
				      {
					tree _o1[2], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1748;
					  _o1[0] = _r2;
					}
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[3];
					  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r2) goto next_after_fail1748;
					  _o1[1] = _r2;
					}
					gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail1748;
					res_op->ops[0] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1748:;
				  }
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_CEXPIF:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1749;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSF, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1749;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1749:;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_CEXPIL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1750;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSL, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1750;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1750:;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_CEXPI:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      gimple_seq *lseq = seq;
				      if (lseq
				          && (!single_use (captures[0])
				              || !single_use (captures[1])))
				        lseq = NULL;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1751;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COS, TREE_TYPE (_o1[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail1751;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1751:;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case CONJ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1752;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1752;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 990, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1752:;
		  }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    const enum tree_code op = PLUS_EXPR;
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1753;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[2], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1753;
			  _o1[0] = _r2;
			}
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1753;
			  _o1[1] = _r2;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1753;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1753:;
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    const enum tree_code op = MINUS_EXPR;
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])
		            || !single_use (captures[1])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1754;
		    {
		      res_op->set_op (NOP_EXPR, type, 1);
		      {
			tree _o1[2], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1754;
			  _o1[0] = _r2;
			}
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r2) goto next_after_fail1754;
			  _o1[1] = _r2;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1754;
			res_op->ops[0] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1754:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1755;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSF, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1755;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1755:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1756;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COSL, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1756;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1756:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1757;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_COS, TREE_TYPE (_o1[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1757;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1757:;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_LOG (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_LOG))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		if (real_onep (_q20))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_LOG))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1791;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1791:;
			}
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_POW))
		        return true;
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP2)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1792;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1792;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1792:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_SQRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1793;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1793;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1793:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP10)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1794;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1794;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1794:;
			      }
			    }
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LOG10 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		if (real_onep (_q20))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1823;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1823;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1823:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_POW))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_CBRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1824;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1824;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1824:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP2)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1825;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1825;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1825:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_SQRT)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1826;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1826;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1826:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1827;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1827:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1828;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1828:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POW10F (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1851;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1851:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_SQRT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1875;
			  {
			    res_op->set_op (CFN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1875;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1875:;
			}
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1876;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1876;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1876;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1876:;
			}
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1877;
			  {
			    res_op->set_op (CFN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1877;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1877:;
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1878;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real (type, dconst_quarter ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1001, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1878:;
			}
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1879;
			  {
			    res_op->set_op (CFN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1879;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1879:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_ATANF, CFN_BUILT_IN_SQRTF, CFN_BUILT_IN_COPYSIGNF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_ATANL, CFN_BUILT_IN_SQRTL, CFN_BUILT_IN_COPYSIGNL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_SINH (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_ATANH:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_SINH, CFN_ATANH, CFN_SQRT))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_TRUNCF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF16, CFN_BUILT_IN_TRUNCF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF128X, CFN_BUILT_IN_TRUNCF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEILF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ROUNDF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_ROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_ROUND:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_ROUND))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_ROUND))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_NEARBYINTF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF16))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF128X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LCEILL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEILL, CFN_BUILT_IN_LCEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEILL, CFN_BUILT_IN_LCEILF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEILL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LROUNDL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LROUNDL, CFN_BUILT_IN_LROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LROUNDL, CFN_BUILT_IN_LROUNDF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LROUNDL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOOR, CFN_BUILT_IN_LLFLOORF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOOR))
        return true;
    }
  }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOOR))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOOR, CFN_BUILT_IN_LFLOOR, CFN_BUILT_IN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IFLOORF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORF))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORF, CFN_BUILT_IN_LFLOORF, CFN_BUILT_IN_LLFLOORF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLFLOORF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORF))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORF, CFN_BUILT_IN_LFLOORF, CFN_BUILT_IN_LLFLOORF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF, CFN_BUILT_IN_LROUNDF, CFN_BUILT_IN_LLROUNDF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CPROJ (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (!HONOR_INFINITIES (type)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1907;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1010, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1907:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (tree_expr_nonnegative_p (_q21))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (real_isinf (TREE_REAL_CST_PTR (captures[0]))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1908;
				  {
				    tree tem;
				    tem =  build_complex_inf (type, false);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1011, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1908:;
				}
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (real_isinf (TREE_REAL_CST_PTR (captures[1]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1909;
			      {
				tree tem;
				tem =  build_complex_inf (type, TREE_REAL_CST_PTR (captures[1])->sign);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1012, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1909:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POPCOUNTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
				      return true;
				  }
			          break;
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_676 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_PARITY (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, CFN_PARITY))
		      return true;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_682 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_PARITY))
				      return true;
				  }
			          break;
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_682 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_PARITY))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_PARITY))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_PARITY))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_PARITY))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_PARITY))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, CFN_PARITY))
		      return true;
		  }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_685 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_PARITY))
		      return true;
		  }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_685 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_PARITY))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_PARITY))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_PARITY))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_PARITY))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_PARITY))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_PARITY))
      return true;
  }
  return false;
}

bool
gimple_simplify_MULT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2097;
	{
	  tree tem;
	  tem = captures[1];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1084, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2097:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if (integer_zerop (_q31))
						    {
						      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q31 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
							      return true;
							  }
						        }
						      if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q31 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if (integer_zerop (_q31))
						    {
						      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q31 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
							      return true;
							  }
						        }
						      if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q31 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				  if (integer_zerop (_q31))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					    if (gimple_simplify_178 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      case LSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_onep (_q30))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
					if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      if (integer_zerop (_q41))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q41 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
							      return true;
							  }
						        }
						    }
						  if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
						    {
						      if (integer_zerop (_q41))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q41 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      if (integer_zerop (_q41))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q41 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
							      return true;
							  }
						        }
						    }
						  if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
						    {
						      if (integer_zerop (_q41))
							{
							  {
							    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q41 };
							    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q21))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q21))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
					      return true;
					  }
				        }
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			    if (gimple_simplify_178 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q31))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (integer_zerop (_q31))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q31))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
					      return true;
					  }
				        }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (integer_zerop (_q31))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_177 (res_op, seq, valueize, type, captures, EQ_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (initializer_each_zero_or_onep (captures[1])
 && !HONOR_SNANS (type)
 && !HONOR_SIGNED_ZEROS (type)
)
	    {
	      {
 tree itype = FLOAT_TYPE_P (type) ? unsigned_type_for (type) : type;
		  if (itype
 && (!VECTOR_MODE_P (TYPE_MODE (type))
 || (VECTOR_MODE_P (TYPE_MODE (itype))
 && optab_handler (and_optab,
 TYPE_MODE (itype)) != CODE_FOR_nothing))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2098;
		      {
			res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, itype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail2098;
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, itype, _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail2098;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2098;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1085, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2098:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!tree_expr_maybe_nan_p (captures[0])
 && (!HONOR_NANS (type) || !tree_expr_maybe_infinite_p (captures[0]))
 && (!HONOR_SIGNED_ZEROS (type) || tree_expr_nonnegative_p (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2099;
	  {
	    tree tem;
	    tem = captures[1];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1086, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2099:;
	}
    }
  }
if (real_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2100;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1087, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2100:;
	}
    }
  }
if (real_minus_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2101;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1088, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2101:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (uniform_integer_cst_p (_q31))
				    {
				      if (uniform_integer_cst_p (_q21))
					{
					  if (uniform_integer_cst_p (_p1))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						{
 tree rshift_cst = uniform_integer_cst_p (captures[1]);
 tree bit_and_cst = uniform_integer_cst_p (captures[2]);
 tree mult_cst = uniform_integer_cst_p (captures[3]);
						    if (VECTOR_TYPE_P (type)
 && tree_fits_uhwi_p (rshift_cst)
 && tree_fits_uhwi_p (mult_cst)
 && tree_fits_uhwi_p (bit_and_cst)
)
						      {
							{
 HOST_WIDE_INT vec_elem_bits = vector_element_bits (type);
 poly_int64 vec_nelts = TYPE_VECTOR_SUBPARTS (type);
 poly_int64 vec_bits = vec_elem_bits * vec_nelts;
 unsigned HOST_WIDE_INT cmp_bits_i, bit_and_i, mult_i;
 unsigned HOST_WIDE_INT target_mult_i, target_bit_and_i;
 cmp_bits_i = tree_to_uhwi (rshift_cst) + 1;
 mult_i = tree_to_uhwi (mult_cst);
 target_mult_i = (HOST_WIDE_INT_1U << cmp_bits_i) - 1;
 bit_and_i = tree_to_uhwi (bit_and_cst);
 target_bit_and_i = 0;
 for (unsigned i = 0; i < vec_elem_bits / cmp_bits_i; i++)
 target_bit_and_i = (target_bit_and_i << cmp_bits_i) | 1U;
							    if ((exact_log2 (cmp_bits_i)) >= 0
 && cmp_bits_i < HOST_BITS_PER_WIDE_INT
 && multiple_p (vec_bits, cmp_bits_i)
 && vec_elem_bits <= HOST_BITS_PER_WIDE_INT
 && target_mult_i == mult_i
 && target_bit_and_i == bit_and_i
)
							      {
								{
 tree cmp_type = build_nonstandard_integer_type (cmp_bits_i, 0);
 poly_int64 vector_type_nelts = exact_div (vec_bits, cmp_bits_i);
 tree vec_cmp_type = build_vector_type (cmp_type, vector_type_nelts);
 tree vec_truth_type = truth_type_for (vec_cmp_type);
 tree zeros = build_zero_cst (vec_cmp_type);
 tree ones = build_all_ones_cst (vec_cmp_type);
								    if (expand_vec_cmp_expr_p (vec_cmp_type, vec_truth_type, LT_EXPR)
 && expand_vec_cond_expr_p (vec_cmp_type, vec_truth_type)
)
								      {
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2102;
									{
									  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
									  {
									    tree _o1[3], _r1;
									    {
									      tree _o2[2], _r2;
									      {
										tree _o3[1], _r3;
										_o3[0] = captures[0];
										gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
										tem_op.resimplify (lseq, valueize);
										_r3 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r3) goto next_after_fail2102;
										_o2[0] = _r3;
									      }
									      _o2[1] =  zeros;
									      gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
									      tem_op.resimplify (lseq, valueize);
									      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
									      if (!_r2) goto next_after_fail2102;
									      _o1[0] = _r2;
									    }
									    _o1[1] =  ones;
									    _o1[2] =  zeros;
									    gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
									    tem_op.resimplify (lseq, valueize);
									    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									    if (!_r1) goto next_after_fail2102;
									    res_op->ops[0] = _r1;
									  }
									  res_op->resimplify (lseq, valueize);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1089, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2102:;
								      }
								}
							      }
							}
						      }
						}
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_180 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_181 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_182 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_onep (_q31))
					    {
					      if (real_minus_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						    if (gimple_simplify_183 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case GT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_180 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_181 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_182 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_onep (_q31))
					  {
					    if (real_minus_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						  if (gimple_simplify_183 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_184 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_185 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_186 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_187 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_188 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_189 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (real_zerop (_q31))
				    {
				      if (real_onep (_q21))
					{
					  if (real_minus_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						    if (gimple_simplify_190 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				      if (real_minus_onep (_q21))
					{
					  if (real_onep (_q22))
					    {
					      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						    if (gimple_simplify_191 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case GT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_184 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_185 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_186 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_187 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_188 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_189 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
		      {
			tree _q30 = TREE_OPERAND (_q20, 0);
			if ((TREE_CODE (_q30) == SSA_NAME
			     || is_gimple_min_invariant (_q30)))
			  {
			    _q30 = do_valueize (valueize, _q30);
			    tree _q31 = TREE_OPERAND (_q20, 1);
			    if ((TREE_CODE (_q31) == SSA_NAME
			         || is_gimple_min_invariant (_q31)))
			      {
				_q31 = do_valueize (valueize, _q31);
				if (real_zerop (_q31))
				  {
				    if (real_onep (_q21))
				      {
					if (real_minus_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						  if (gimple_simplify_190 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				    if (real_minus_onep (_q21))
				      {
					if (real_onep (_q22))
					  {
					    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						  if (gimple_simplify_191 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_192 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_193 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_194 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (real_zerop (_q41))
					{
					  if (real_minus_onep (_q31))
					    {
					      if (real_onep (_q32))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						    if (gimple_simplify_195 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					        }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case GT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_192 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case GE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_193 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_194 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			if ((TREE_CODE (_q40) == SSA_NAME
			     || is_gimple_min_invariant (_q40)))
			  {
			    _q40 = do_valueize (valueize, _q40);
			    tree _q41 = TREE_OPERAND (_q30, 1);
			    if ((TREE_CODE (_q41) == SSA_NAME
			         || is_gimple_min_invariant (_q41)))
			      {
				_q41 = do_valueize (valueize, _q41);
				if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				  {
				    if (real_zerop (_q41))
				      {
					if (real_minus_onep (_q31))
					  {
					    if (real_onep (_q32))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						  if (gimple_simplify_195 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					  }
				      }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      if (gimple_simplify_196 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			        return true;
			    }
			  }
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (real_onep (_q20))
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			      if (gimple_simplify_197 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			        return true;
			    }
			  }
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					      if (gimple_simplify_198 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      if (gimple_simplify_199 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_200 (res_op, seq, valueize, type, captures, MULT_EXPR))
        return true;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				{
 wi::overflow_type overflow;
 wide_int mul = wi::mul (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type), &overflow);
				    if (!overflow || TYPE_OVERFLOW_WRAPS (type)
)
				      {
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2103;
					{
					  res_op->set_op (MULT_EXPR, type, 2);
					  res_op->ops[0] = captures[0];
					  res_op->ops[1] =  wide_int_to_tree (type, mul);
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1090, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2103:;
				      }
				}
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_q21))
					  {
					  case INTEGER_CST:
					    {
					      switch (TREE_CODE (_p1))
					        {
						case INTEGER_CST:
						  {
						    {
						      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
						      {
 bool overflowed = true;
 wi::overflow_type ovf1, ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::mul (wi::to_wide (captures[4]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 int_range_max vr0;
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE
 && get_global_range_query ()->range_of_expr (vr0, captures[1])
 && !vr0.varying_p () && !vr0.undefined_p ())
 {
 wide_int wmin0 = vr0.lower_bound ();
 wide_int wmax0 = vr0.upper_bound ();
 wmin0 = wi::mul (wmin0, wi::to_wide (captures[5]), TYPE_SIGN (type), &ovf1);
 wmax0 = wi::mul (wmax0, wi::to_wide (captures[5]), TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 {
 wi::add (wmin0, add, TYPE_SIGN (type), &ovf1);
 wi::add (wmax0, add, TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 overflowed = false;
 }
 }
 }
 else
 overflowed = false;
							  if (!overflowed
)
							    {
							      gimple_seq *lseq = seq;
							      if (lseq
							          && (!single_use (captures[0])
							              || !single_use (captures[1])))
							        lseq = NULL;
							      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2104;
							      {
								res_op->set_op (PLUS_EXPR, type, 2);
								{
								  tree _o1[2], _r1;
								  _o1[0] = captures[2];
								  _o1[1] =  wide_int_to_tree (type, mul);
								  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								  tem_op.resimplify (lseq, valueize);
								  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								  if (!_r1) goto next_after_fail2104;
								  res_op->ops[0] = _r1;
								}
								res_op->ops[1] =  wide_int_to_tree (type, add);
								res_op->resimplify (lseq, valueize);
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1091, __FILE__, __LINE__, true);
								return true;
							      }
next_after_fail2104:;
							    }
						      }
						    }
						    break;
						  }
					        default:;
					        }
					      break;
					    }
				          default:;
				          }
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2105;
				{
				  res_op->set_op (BIT_AND_EXPR, type, 2);
				  res_op->ops[0] = captures[0];
				  {
				    tree _o1[1], _r1;
				    _o1[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail2105;
				    res_op->ops[1] = _r1;
				  }
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1092, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2105:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2106;
			{
			  res_op->set_op (MULT_EXPR, type, 2);
			  res_op->ops[0] = captures[1];
			  res_op->ops[1] = captures[1];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1093, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2106:;
		      }
		    }
	          break;
	        }
	      case ABSU_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2107;
			{
			  res_op->set_op (MULT_EXPR, type, 2);
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[1];
			    if (type != TREE_TYPE (_o1[0])
			        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2107;
			      }
			    else
			      _r1 = _o1[0];
			    captures[2] = _r1;
			  }
			  res_op->ops[0] = captures[2];
			  res_op->ops[1] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1094, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2107:;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_201 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (integer_onep (_q40))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (integer_onep (_q30))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_onep (_q20))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			if (gimple_simplify_179 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			    if (gimple_simplify_202 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  if (integer_zerop (_q32))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2108;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1095, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2108:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q31))
				    {
				      if (integer_zerop (_q22))
					{
					  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2109;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1095, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2109:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_zerop (_q31))
				    {
				      if (integer_zerop (_q21))
					{
					  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2110;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2110:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  if (integer_zerop (_q31))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2111;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2111:;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (flag_associative_math
 && single_use (captures[0])
)
				  {
				    {
 tree tem = const_binop (MULT_EXPR, type, captures[1], captures[3]);
					if (tem
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2112;
					    {
					      res_op->set_op (RDIV_EXPR, type, 2);
					      res_op->ops[0] =  tem;
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2112:;
					  }
				    }
				  }
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_IOR_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      switch (TREE_CODE (_q40))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q40))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q31))
									    {
									      {
										tree _p1_pops[1];
										if (gimple_nop_convert (_p1, _p1_pops, valueize))
										  {
										    tree _q100 = _p1_pops[0];
										    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
											  if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
											    return true;
											}
										      }
										  }
									      }
									      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
										    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  default:;
								  }
							    }
							  break;
						        default:;
						        }
						      break;
						    }
						  case LT_EXPR:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      tree _q51 = gimple_assign_rhs2 (_a3);
						      _q51 = do_valueize (valueize, _q51);
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q31))
							    {
							      {
								tree _p1_pops[1];
								if (gimple_nop_convert (_p1, _p1_pops, valueize))
								  {
								    tree _q90 = _p1_pops[0];
								    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								      {
									{
									  tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
									  if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							      if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
								    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    {
		      tree _q30_pops[1];
		      if (gimple_nop_convert (_q30, _q30_pops, valueize))
		        {
			  tree _q40 = _q30_pops[0];
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q40))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q50 = gimple_assign_rhs1 (_a2);
					  _q50 = do_valueize (valueize, _q50);
					  switch (TREE_CODE (_q50))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q50))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      CASE_CONVERT:
						        {
							  tree _q60 = gimple_assign_rhs1 (_a3);
							  _q60 = do_valueize (valueize, _q60);
							  switch (TREE_CODE (_q60))
							    {
							    case SSA_NAME:
							      if (gimple *_d4 = get_def (valueize, _q60))
							        {
								  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								    switch (gimple_assign_rhs_code (_a4))
								      {
								      case LT_EXPR:
								        {
									  tree _q70 = gimple_assign_rhs1 (_a4);
									  _q70 = do_valueize (valueize, _q70);
									  tree _q71 = gimple_assign_rhs2 (_a4);
									  _q71 = do_valueize (valueize, _q71);
									  if (integer_zerop (_q71))
									    {
									      if (integer_onep (_q31))
										{
										  {
										    tree _p1_pops[1];
										    if (gimple_nop_convert (_p1, _p1_pops, valueize))
										      {
											tree _q110 = _p1_pops[0];
											if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
											  {
											    {
											      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
											      if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
											        return true;
											    }
											  }
										      }
										  }
										  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
											if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
											  return true;
										      }
										    }
									        }
									    }
								          break;
								        }
								      default:;
								      }
							        }
							      break;
							    default:;
							    }
						          break;
						        }
						      case LT_EXPR:
						        {
							  tree _q60 = gimple_assign_rhs1 (_a3);
							  _q60 = do_valueize (valueize, _q60);
							  tree _q61 = gimple_assign_rhs2 (_a3);
							  _q61 = do_valueize (valueize, _q61);
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q31))
								{
								  {
								    tree _p1_pops[1];
								    if (gimple_nop_convert (_p1, _p1_pops, valueize))
								      {
									tree _q100 = _p1_pops[0];
									if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
									  {
									    {
									      tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
									      if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
									        return true;
									    }
									  }
								      }
								  }
								  if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
									if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							    }
						          break;
						        }
						      default:;
						      }
					        }
					      break;
					    default:;
					    }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		        }
		    }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
      switch (TREE_CODE (_p1))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _p1))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_IOR_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									{
									  if (integer_zerop (_q71))
									    {
									      if (integer_onep (_q41))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
										    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  default:;
								  }
							    }
							  break;
						        default:;
						        }
						      break;
						    }
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q41))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
								    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    {
		      tree _q40_pops[1];
		      if (gimple_nop_convert (_q40, _q40_pops, valueize))
		        {
			  tree _q50 = _q40_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      CASE_CONVERT:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  switch (TREE_CODE (_q70))
							    {
							    case SSA_NAME:
							      if (gimple *_d4 = get_def (valueize, _q70))
							        {
								  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								    switch (gimple_assign_rhs_code (_a4))
								      {
								      case LT_EXPR:
								        {
									  tree _q80 = gimple_assign_rhs1 (_a4);
									  _q80 = do_valueize (valueize, _q80);
									  tree _q81 = gimple_assign_rhs2 (_a4);
									  _q81 = do_valueize (valueize, _q81);
									  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									    {
									      if (integer_zerop (_q81))
										{
										  if (integer_onep (_q41))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
											  return true;
										      }
										    }
									        }
									    }
								          break;
								        }
								      default:;
								      }
							        }
							      break;
							    default:;
							    }
						          break;
						        }
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q41))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							    }
						          break;
						        }
						      default:;
						      }
					        }
					      break;
					    default:;
					    }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		        }
		    }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
    {
      tree _p1_pops[1];
      if (gimple_nop_convert (_p1, _p1_pops, valueize))
        {
	  tree _q40 = _p1_pops[0];
	  switch (TREE_CODE (_q40))
	    {
	    case SSA_NAME:
	      if (gimple *_d1 = get_def (valueize, _q40))
	        {
		  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		    switch (gimple_assign_rhs_code (_a1))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = gimple_assign_rhs1 (_a1);
			  _q50 = do_valueize (valueize, _q50);
			  tree _q51 = gimple_assign_rhs2 (_a1);
			  _q51 = do_valueize (valueize, _q51);
			  if (tree_swap_operands_p (_q50, _q51))
			    std::swap (_q50, _q51);
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      CASE_CONVERT:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  switch (TREE_CODE (_q70))
							    {
							    case SSA_NAME:
							      if (gimple *_d4 = get_def (valueize, _q70))
							        {
								  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								    switch (gimple_assign_rhs_code (_a4))
								      {
								      case LT_EXPR:
								        {
									  tree _q80 = gimple_assign_rhs1 (_a4);
									  _q80 = do_valueize (valueize, _q80);
									  tree _q81 = gimple_assign_rhs2 (_a4);
									  _q81 = do_valueize (valueize, _q81);
									  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									    {
									      if (integer_zerop (_q81))
										{
										  if (integer_onep (_q51))
										    {
										      {
											tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
											  return true;
										      }
										    }
									        }
									    }
								          break;
								        }
								      default:;
								      }
							        }
							      break;
							    default:;
							    }
						          break;
						        }
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q51))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							    }
						          break;
						        }
						      default:;
						      }
					        }
					      break;
					    default:;
					    }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
			{
			  tree _q50_pops[1];
			  if (gimple_nop_convert (_q50, _q50_pops, valueize))
			    {
			      tree _q60 = _q50_pops[0];
			      switch (TREE_CODE (_q60))
			        {
				case SSA_NAME:
				  if (gimple *_d2 = get_def (valueize, _q60))
				    {
				      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				        switch (gimple_assign_rhs_code (_a2))
					  {
					  case NEGATE_EXPR:
					    {
					      tree _q70 = gimple_assign_rhs1 (_a2);
					      _q70 = do_valueize (valueize, _q70);
					      switch (TREE_CODE (_q70))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q70))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  CASE_CONVERT:
							    {
							      tree _q80 = gimple_assign_rhs1 (_a3);
							      _q80 = do_valueize (valueize, _q80);
							      switch (TREE_CODE (_q80))
							        {
								case SSA_NAME:
								  if (gimple *_d4 = get_def (valueize, _q80))
								    {
								      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								        switch (gimple_assign_rhs_code (_a4))
									  {
									  case LT_EXPR:
									    {
									      tree _q90 = gimple_assign_rhs1 (_a4);
									      _q90 = do_valueize (valueize, _q90);
									      tree _q91 = gimple_assign_rhs2 (_a4);
									      _q91 = do_valueize (valueize, _q91);
									      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
										{
										  if (integer_zerop (_q91))
										    {
										      if (integer_onep (_q51))
											{
											  {
											    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
											    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
											      return true;
											  }
										        }
										    }
									        }
									      break;
									    }
									  default:;
									  }
								    }
								  break;
							        default:;
							        }
							      break;
							    }
							  case LT_EXPR:
							    {
							      tree _q80 = gimple_assign_rhs1 (_a3);
							      _q80 = do_valueize (valueize, _q80);
							      tree _q81 = gimple_assign_rhs2 (_a3);
							      _q81 = do_valueize (valueize, _q81);
							      if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
								{
								  if (integer_zerop (_q81))
								    {
								      if (integer_onep (_q51))
									{
									  {
									    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
									    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
									      return true;
									  }
								        }
								    }
							        }
							      break;
							    }
							  default:;
							  }
						    }
						  break;
					        default:;
					        }
					      break;
					    }
					  default:;
					  }
				    }
				  break;
			        default:;
			        }
			    }
			}
		          break;
		        }
		      default:;
		      }
	        }
	      break;
	    default:;
	    }
        }
    }
    }
}
  {
    tree _p1_pops[1];
    if (gimple_nop_convert (_p1, _p1_pops, valueize))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _q30))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q40 = gimple_assign_rhs1 (_a1);
			_q40 = do_valueize (valueize, _q40);
			tree _q41 = gimple_assign_rhs2 (_a1);
			_q41 = do_valueize (valueize, _q41);
			if (tree_swap_operands_p (_q40, _q41))
			  std::swap (_q40, _q41);
			switch (TREE_CODE (_q40))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q40))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case NEGATE_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case LT_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									  {
									    if (integer_zerop (_q71))
									      {
										if (integer_onep (_q41))
										  {
										    {
										      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										      if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
										        return true;
										    }
										  }
									      }
									  }
								        break;
								      }
								    default:;
								    }
							      }
							    break;
						          default:;
						          }
						        break;
						      }
						    default:;
						    }
					      }
					    break;
				          default:;
				          }
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
		      {
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    switch (TREE_CODE (_q50))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q50))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case NEGATE_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    switch (TREE_CODE (_q60))
					      {
					      case SSA_NAME:
					        if (gimple *_d3 = get_def (valueize, _q60))
					          {
						    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						      switch (gimple_assign_rhs_code (_a3))
							{
							CASE_CONVERT:
							  {
							    tree _q70 = gimple_assign_rhs1 (_a3);
							    _q70 = do_valueize (valueize, _q70);
							    switch (TREE_CODE (_q70))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q70))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case LT_EXPR:
									  {
									    tree _q80 = gimple_assign_rhs1 (_a4);
									    _q80 = do_valueize (valueize, _q80);
									    tree _q81 = gimple_assign_rhs2 (_a4);
									    _q81 = do_valueize (valueize, _q81);
									    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
									      {
										if (integer_zerop (_q81))
										  {
										    if (integer_onep (_q41))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
											  if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
											    return true;
											}
										      }
										  }
									      }
									    break;
									  }
									default:;
									}
							          }
							        break;
							      default:;
							      }
							    break;
							  }
							default:;
							}
					          }
					        break;
					      default:;
					      }
					    break;
					  }
					default:;
					}
			          }
			        break;
			      default:;
			      }
			  }
		      }
		        break;
		      }
		    default:;
		    }
	      }
	    break;
          default:;
          }
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case LT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  if (integer_zerop (_q51))
								    {
								      if (integer_onep (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_nop_convert (_p1, _p1_pops, valueize))
									      {
										tree _q90 = _p1_pops[0];
										if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
										  {
										    {
										      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
										      if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
										        return true;
										    }
										  }
									      }
									  }
									  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
									    {
									      {
										tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
										if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
										  return true;
									      }
									    }
								        }
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      case LT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (integer_zerop (_q41))
						    {
						      if (integer_onep (_q21))
							{
							  {
							    tree _p1_pops[1];
							    if (gimple_nop_convert (_p1, _p1_pops, valueize))
							      {
								tree _q80 = _p1_pops[0];
								if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
								  {
								    {
								      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
								      if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
								        return true;
								    }
								  }
							      }
							  }
							  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
								if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
								  return true;
							      }
							    }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		{
		  tree _q20_pops[1];
		  if (gimple_nop_convert (_q20, _q20_pops, valueize))
		    {
		      tree _q30 = _q20_pops[0];
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      switch (TREE_CODE (_q40))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q40))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q21))
									    {
									      {
										tree _p1_pops[1];
										if (gimple_nop_convert (_p1, _p1_pops, valueize))
										  {
										    tree _q100 = _p1_pops[0];
										    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
										      {
											{
											  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
											  if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
											    return true;
											}
										      }
										  }
									      }
									      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
										    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  default:;
								  }
							    }
							  break;
						        default:;
						        }
						      break;
						    }
						  case LT_EXPR:
						    {
						      tree _q50 = gimple_assign_rhs1 (_a3);
						      _q50 = do_valueize (valueize, _q50);
						      tree _q51 = gimple_assign_rhs2 (_a3);
						      _q51 = do_valueize (valueize, _q51);
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q21))
							    {
							      {
								tree _p1_pops[1];
								if (gimple_nop_convert (_p1, _p1_pops, valueize))
								  {
								    tree _q90 = _p1_pops[0];
								    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								      {
									{
									  tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
									  if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							      if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
								    if (gimple_simplify_203 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
		}
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case LT_EXPR:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  tree _q61 = gimple_assign_rhs2 (_a4);
								  _q61 = do_valueize (valueize, _q61);
								  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
								    {
								      if (integer_zerop (_q61))
									{
									  if (integer_onep (_q31))
									    {
									      {
										tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
										  return true;
									      }
									    }
								        }
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      case LT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      if (integer_zerop (_q51))
							{
							  if (integer_onep (_q31))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
								  return true;
							      }
							    }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		{
		  tree _q30_pops[1];
		  if (gimple_nop_convert (_q30, _q30_pops, valueize))
		    {
		      tree _q40 = _q30_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
									{
									  if (integer_zerop (_q71))
									    {
									      if (integer_onep (_q31))
										{
										  {
										    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
										    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  default:;
								  }
							    }
							  break;
						        default:;
						        }
						      break;
						    }
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q31))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
		}
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p1_pops[1];
  if (gimple_nop_convert (_p1, _p1_pops, valueize))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q30))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_IOR_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case LT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							{
							  if (integer_zerop (_q61))
							    {
							      if (integer_onep (_q41))
								{
								  {
								    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
								    if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    {
		      tree _q40_pops[1];
		      if (gimple_nop_convert (_q40, _q40_pops, valueize))
		        {
			  tree _q50 = _q40_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  switch (TREE_CODE (_q60))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q60))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case LT_EXPR:
						        {
							  tree _q70 = gimple_assign_rhs1 (_a3);
							  _q70 = do_valueize (valueize, _q70);
							  tree _q71 = gimple_assign_rhs2 (_a3);
							  _q71 = do_valueize (valueize, _q71);
							  if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
							    {
							      if (integer_zerop (_q71))
								{
								  if (integer_onep (_q41))
								    {
								      {
									tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
									if (gimple_simplify_204 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							    }
						          break;
						        }
						      default:;
						      }
					        }
					      break;
					    default:;
					    }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		        }
		    }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if (gimple_negate_expr_p (_q50, valueize))
						    {
						      {
							tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
							if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				if (gimple_negate_expr_p (_p1, valueize))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
				      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
				        return true;
				    }
				  }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, EQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case ORDERED_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, ORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNLT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNLE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNGE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNEQ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LTGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
				    if (gimple_simplify_206 (res_op, seq, valueize, type, captures, LTGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (gimple_negate_expr_p (_q20, valueize))
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				CASE_CONVERT:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					      switch (gimple_assign_rhs_code (_a3))
						{
						case NEGATE_EXPR:
						  {
						    tree _q50 = gimple_assign_rhs1 (_a3);
						    _q50 = do_valueize (valueize, _q50);
						    {
						      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
						      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
						        return true;
						    }
						    break;
						  }
						default:;
						}
				          }
				        break;
				      default:;
				      }
				    break;
				  }
				case NEGATE_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
				        return true;
				    }
				    break;
				  }
				default:;
				}
		          }
		        break;
		      default:;
		      }
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if (gimple_negate_expr_p (_q40, valueize))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (gimple_negate_expr_p (_p1, valueize))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (gimple_negate_expr_p (_p0, valueize))
  {
    switch (TREE_CODE (_p1))
      {
      case SSA_NAME:
        if (gimple *_d1 = get_def (valueize, _p1))
          {
	    if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	      switch (gimple_assign_rhs_code (_a1))
		{
		CASE_CONVERT:
		  {
		    tree _q30 = gimple_assign_rhs1 (_a1);
		    _q30 = do_valueize (valueize, _q30);
		    switch (TREE_CODE (_q30))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q30))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case NEGATE_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
				      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
				        return true;
				    }
				    break;
				  }
				default:;
				}
		          }
		        break;
		      default:;
		      }
		    break;
		  }
		case NEGATE_EXPR:
		  {
		    tree _q30 = gimple_assign_rhs1 (_a1);
		    _q30 = do_valueize (valueize, _q30);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		      if (gimple_simplify_205 (res_op, seq, valueize, type, captures))
		        return true;
		    }
		    break;
		  }
		default:;
		}
          }
        break;
      default:;
      }
  }
if (gimple_zero_one_valued_p (_p0, valueize))
  {
    if (gimple_zero_one_valued_p (_p1, valueize))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2113;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2113:;
	    }
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, LE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, EQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNORDERED_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case ORDERED_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, ORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNLT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNLE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNGE_EXPR))
				      return true;
				  }
			          break;
			        }
			      case UNEQ_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      case LTGT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
				    if (gimple_simplify_207 (res_op, seq, valueize, type, captures, LTGT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2114;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2114:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2115;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2115:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2116;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2116:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2117;
						{
						  res_op->set_op (MULT_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2117:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_with_possible_nonzero_bits (_q30, valueize))
				    {
				      switch (TREE_CODE (_q31))
				        {
					case INTEGER_CST:
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						  if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
						    return true;
						}
					      }
					    break;
					  }
				        default:;
				        }
				    }
			          break;
			        }
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
							if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
					if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_p1))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					      if (gimple_simplify_210 (res_op, seq, valueize, type, captures))
					        return true;
					    }
					  }
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case EXACT_DIV_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  switch (TREE_CODE (_q51))
								    {
								    case INTEGER_CST:
								      {
									if (poly_int_tree_p (_q31))
									  {
									    if (poly_int_tree_p (_p1))
									      {
										{
										  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
										  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, PLUS_EXPR))
										    return true;
										}
									      }
									  }
								        break;
								      }
								    default:;
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q31))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
								  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, PLUS_EXPR))
								    return true;
								}
							      }
							  }
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case EXACT_DIV_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
								  switch (TREE_CODE (_q51))
								    {
								    case INTEGER_CST:
								      {
									if (poly_int_tree_p (_q31))
									  {
									    if (poly_int_tree_p (_p1))
									      {
										{
										  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
										  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, MINUS_EXPR))
										    return true;
										}
									      }
									  }
								        break;
								      }
								    default:;
								    }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    default:;
						    }
					          break;
					        }
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q31))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
								  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, MINUS_EXPR))
								    return true;
								}
							      }
							  }
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (gimple_with_possible_nonzero_bits (_q20, valueize))
		    {
		      switch (TREE_CODE (_q21))
		        {
			case INTEGER_CST:
			  {
			    if (poly_int_tree_p (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  if (gimple_simplify_208 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			    break;
			  }
		        default:;
		        }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
					if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
			if (gimple_simplify_209 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if (poly_int_tree_p (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_210 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q21))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
								  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, PLUS_EXPR))
								    return true;
								}
							      }
							  }
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_q21))
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, PLUS_EXPR))
						    return true;
						}
					      }
					  }
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EXACT_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if (poly_int_tree_p (_q21))
							  {
							    if (poly_int_tree_p (_p1))
							      {
								{
								  tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
								  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, MINUS_EXPR))
								    return true;
								}
							      }
							  }
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if (poly_int_tree_p (_q21))
					  {
					    if (poly_int_tree_p (_p1))
					      {
						{
						  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
						  if (gimple_simplify_211 (res_op, seq, valueize, type, captures, MINUS_EXPR))
						    return true;
						}
					      }
					  }
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2118;
	{
	  res_op->set_op (NEGATE_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2118:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q31))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
			  if (gimple_simplify_212 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2119;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2119;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2119;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2119:;
					  }
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2120;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2120;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2120;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2120:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2121;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2121;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2121;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2121:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF))
			    return true;
			}
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2122;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRTF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2122;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2122:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL))
			    return true;
			}
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2123;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRTL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2123;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2123:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_EXP:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2124;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2124;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2124:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2125;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2125;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2125;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2125;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2125:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2126;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2126;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2126;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2126;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2126:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2127;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2127;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2127;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2127;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2127:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2128;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2128;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2128;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2128;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2128:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2129;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2129;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2129;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2129;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2129:;
						    }
						}
					    }
				          }
				        break;
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_EXP10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2130;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2130;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2130:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2131;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2131;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2131;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2131;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2131:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_EXP10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2132;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2132;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2132:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2133;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2133;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2133;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2133;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2133:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_CBRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2134;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2134;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2134:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2135;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2135;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2135;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2135;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2135:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2136;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2136;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2136:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_EXPF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2137;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2137;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2137:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2138;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2138;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2138;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2138;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2138:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_EXPL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2139;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2139;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2139:;
					  }
				      }
				    }
				  break;
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2140;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2140;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2140;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2140;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2140:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP10F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2141;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2141;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2141;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2141;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2141:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXPF:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2142;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2142;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2142;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2142;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2142:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2143;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2143;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2143;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2143;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2143:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2F:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2144;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2144;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2144;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2144;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2144:;
						    }
						}
					    }
				          }
				        break;
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_BUILT_IN_EXP10L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2145;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2145;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2145;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2145;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2145:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXPL:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2146;
						      {
							res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2146;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2146;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2146;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2146:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_POW10L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2147;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2147;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2147;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2147;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2147:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_BUILT_IN_EXP2L:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2148;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2148;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2148;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2148;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2148:;
						    }
						}
					    }
				          }
				        break;
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT))
			    return true;
			}
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2149;
					    {
					      res_op->set_op (CFN_BUILT_IN_SQRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2149;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2149:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF128))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF32X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF64X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF64X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF16))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF32))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF64))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_EXP:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2150;
					    {
					      res_op->set_op (CFN_EXP, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2150;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2150:;
					  }
				      }
				    }
				  break;
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2151;
						      {
							res_op->set_op (CFN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2151;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2151;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2151;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2151:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
				    switch (gimple_call_combined_fn (_c2))
				      {
				      case CFN_EXP:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2152;
						      {
							res_op->set_op (CFN_EXP, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2152;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2152;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2152;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2152:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_EXP2:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2153;
						      {
							res_op->set_op (CFN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2153;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2153;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2153;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2153:;
						    }
						}
					    }
				          }
				        break;
				      case CFN_EXP10:
				        if (gimple_call_num_args (_c2) == 1)
				          {
					    tree _q50 = gimple_call_arg (_c2, 0);
					    _q50 = do_valueize (valueize, _q50);
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2154;
						      {
							res_op->set_op (CFN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2154;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2154;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2154;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2154:;
						    }
						}
					    }
				          }
				        break;
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q21))
		      {
		      case REAL_CST:
		        {
			  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_POW))
				  return true;
			      }
			    }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2155;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2155;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2155;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2155;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2155:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2156;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2156;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2156:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2157;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2157;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2157;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2157;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2157:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2158;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2158;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2158:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF128X))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2159;
						      {
							res_op->set_op (CFN_EXP2, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2159;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2159;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2159;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2159:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_EXP2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2160;
					    {
					      res_op->set_op (CFN_EXP2, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2160;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2160:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
			  if (gimple_simplify_213 (res_op, seq, valueize, type, captures, CFN_SQRT))
			    return true;
			}
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2161;
					    {
					      res_op->set_op (CFN_SQRT, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2161;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2161:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2162;
						      {
							res_op->set_op (CFN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2162;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2162;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2162;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2162:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_EXP10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2163;
					    {
					      res_op->set_op (CFN_EXP10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2163;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2163:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_CBRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2164;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRTF, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2164;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2164:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_CBRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2165;
					    {
					      res_op->set_op (CFN_BUILT_IN_CBRTL, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2165;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2165:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2166;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2166;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2166;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2166;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2166:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2167;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2167;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2167:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2168;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2168;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2168;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2168;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2168:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2169;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2169;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2169:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2170;
						      {
							res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2170;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2170;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2170;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2170:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_EXP2L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2171;
					    {
					      res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2171;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2171:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q20))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_call_arg (_c2, 1);
				      _q41 = do_valueize (valueize, _q41);
				      switch (TREE_CODE (_q40))
				        {
					case REAL_CST:
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
					      if (flag_unsafe_math_optimizations
)
						{
						  if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])
						              || !single_use (captures[3])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2172;
						      {
							res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[2], _r2;
							    {
							      tree _o3[1], _r3;
							      _o3[0] = captures[1];
							      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), _o3[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r3) goto next_after_fail2172;
							      _o2[0] = _r3;
							    }
							    _o2[1] = captures[2];
							    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail2172;
							    _o1[0] = _r2;
							  }
							  _o1[1] = captures[4];
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail2172;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2172:;
						    }
						}
					    }
					    break;
					  }
				        default:;
				        }
				    }
				  break;
				case CFN_BUILT_IN_POW10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (flag_unsafe_math_optimizations
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[2])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2173;
					    {
					      res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2173;
						res_op->ops[0] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2173:;
					  }
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gcall *_c1 = dyn_cast <gcall *> (_d1))
		  switch (gimple_call_combined_fn (_c1))
		    {
		    case CFN_BUILT_IN_LDEXPF:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LDEXPL:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		        }
		      break;
		    case CFN_LDEXP:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LDEXP:
		      if (gimple_call_num_args (_c1) == 2)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  tree _q31 = gimple_call_arg (_c1, 1);
			  _q31 = do_valueize (valueize, _q31);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_215 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
			      return true;
			  }
		        }
		      break;
		    default:;
		    }
	      }
	    break;
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LDEXPF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPF))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXPL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    switch (TREE_CODE (_q30))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			    if (gimple_simplify_216 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LDEXP))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COS:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_TAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COSF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_TANF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COSL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_TANL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_TANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_COSF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_TANL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_COSL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_COS:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_TAN:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_COS, CFN_SIN))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_TAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_COS:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					    if (gimple_simplify_217 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_COS, CFN_SIN))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		      }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			switch (TREE_CODE (_q31))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
				if (gimple_simplify_214 (res_op, seq, valueize, type, captures, CFN_POW))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_PERM_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
					{
					  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
						if (VECTOR_INTEGER_TYPE_P (type)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2174;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2174;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2174:;
						  }
					      }
					    }
				        }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		      switch (TREE_CODE (_q22))
		        {
			case VECTOR_CST:
			  {
			    switch (TREE_CODE (_p1))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _p1))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case VEC_PERM_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    tree _q61 = gimple_assign_rhs2 (_a2);
					    _q61 = do_valueize (valueize, _q61);
					    tree _q62 = gimple_assign_rhs3 (_a2);
					    _q62 = do_valueize (valueize, _q62);
					    if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
					      {
						if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
						  {
						    switch (TREE_CODE (_q62))
						      {
						      case VECTOR_CST:
						        {
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
							    if (gimple_simplify_86 (res_op, seq, valueize, type, captures, MULT_EXPR))
							      return true;
							  }
						          break;
						        }
						      default:;
						      }
						  }
					      }
					    break;
					  }
					default:;
					}
			          }
			        break;
			      default:;
			      }
			    break;
			  }
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_219 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_219 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWI:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWI:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2175;
						{
						  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2175;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1103, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2175:;
					      }
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_219 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWL))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_POW:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					    if (gimple_simplify_218 (res_op, seq, valueize, type, captures, CFN_POW))
					      return true;
					  }
				        }
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (gimple_simplify_219 (res_op, seq, valueize, type, captures, CFN_POW))
					      return true;
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWIF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWIF:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2176;
						{
						  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2176;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1103, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2176:;
					      }
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POWIL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_POWIL:
				  if (gimple_call_num_args (_c2) == 2)
				    {
				      tree _q50 = gimple_call_arg (_c2, 0);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_call_arg (_c2, 1);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					    if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
					      {
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2177;
						{
						  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[4];
						    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2177;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] = captures[2];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1103, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2177:;
					      }
					  }
				        }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_UNEQ_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2588;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2588;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2588;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2588:;
					  }
				      }
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2589;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2589;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2589;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2589:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2590;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2590;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2590;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2590:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_635 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_274 (res_op, seq, valueize, type, captures, UNEQ_EXPR, EQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNEQ_EXPR, UNEQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_278 (res_op, seq, valueize, type, captures, UNEQ_EXPR, UNEQ_EXPR))
		        return true;
		    }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_633 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_BIT_INSERT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_FIELD_REF:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 1);
		      if ((TREE_CODE (_q31) == SSA_NAME
		           || is_gimple_min_invariant (_q31)))
		        {
			  _q31 = do_valueize (valueize, _q31);
			  tree _q32 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 2);
			  if ((TREE_CODE (_q32) == SSA_NAME
			       || is_gimple_min_invariant (_q32)))
			    {
			      _q32 = do_valueize (valueize, _q32);
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
				if (VECTOR_TYPE_P (type)
 && (VECTOR_MODE_P (TYPE_MODE (type))
 || optimize_vectors_before_lowering_p ())
 && operand_equal_p (TYPE_SIZE (TREE_TYPE (captures[0])),
 TYPE_SIZE (TREE_TYPE (captures[2])), 0)
 && types_match (TREE_TYPE (TREE_TYPE (captures[0])), TREE_TYPE (captures[1]))
 && TYPE_VECTOR_SUBPARTS (type).is_constant ()
 && multiple_p (wi::to_poly_offset (captures[4]),
 wi::to_poly_offset (TYPE_SIZE (TREE_TYPE (type))))
)
				  {
				    {
 unsigned HOST_WIDE_INT elsz
 = tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))));
 poly_uint64 relt = exact_div (tree_to_poly_uint64 (captures[4]), elsz);
 poly_uint64 ielt = exact_div (tree_to_poly_uint64 (captures[5]), elsz);
 unsigned nunits = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder;
 builder.new_vector (nunits, nunits, 1);
 for (unsigned i = 0; i < nunits; ++i)
 builder.quick_push (known_eq (ielt, i) ? nunits + relt : i);
 vec_perm_indices sel (builder, 2, nunits);
					if (!VECTOR_MODE_P (TYPE_MODE (type))
 || can_vec_perm_const_p (TYPE_MODE (type),
 TYPE_MODE (type), sel, false)
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2821;
					    {
					      res_op->set_op (VEC_PERM_EXPR, type, 3);
					      res_op->ops[0] = captures[0];
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[2];
						gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2821;
						res_op->ops[1] = _r1;
					      }
					      res_op->ops[2] =  vec_perm_indices_to_tree (build_vector_type (ssizetype, nunits),
 sel);
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1248, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2821:;
					  }
				    }
				  }
			      }
			    }
		        }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMA (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_661 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (gimple_simplify_662 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_661 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMA))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FMA (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_FMA))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_661 (res_op, seq, valueize, type, captures, CFN_FMA))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_660 (res_op, seq, valueize, type, captures, CFN_FMA))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (gimple_simplify_662 (res_op, seq, valueize, type, captures, CFN_FMA))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_661 (res_op, seq, valueize, type, captures, CFN_FMA))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FNMS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_667 (res_op, seq, valueize, type, captures))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_668 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_667 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (canonicalize_math_after_vectorization_p ()
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2824;
			{
			  res_op->set_op (CFN_FNMA, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1251, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2824:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_668 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2)
{
  switch (code.get_rep())
    {
    case COND_EXPR:
      return gimple_simplify_COND_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case VEC_COND_EXPR:
      return gimple_simplify_VEC_COND_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case BIT_FIELD_REF:
      return gimple_simplify_BIT_FIELD_REF (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case BIT_INSERT_EXPR:
      return gimple_simplify_BIT_INSERT_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMAF:
      return gimple_simplify_CFN_BUILT_IN_FMAF (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMA:
      return gimple_simplify_CFN_BUILT_IN_FMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_BUILT_IN_FMAL:
      return gimple_simplify_CFN_BUILT_IN_FMAL (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FMA:
      return gimple_simplify_CFN_FMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FMS:
      return gimple_simplify_CFN_FMS (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FNMA:
      return gimple_simplify_CFN_FNMA (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_FNMS:
      return gimple_simplify_CFN_FNMS (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case -CFN_VCOND_MASK_LEN:
      return gimple_simplify_CFN_VCOND_MASK_LEN (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    case VEC_PERM_EXPR:
      return gimple_simplify_VEC_PERM_EXPR (res_op, seq, valueize, code, type, _p0, _p1, _p2);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_ADD (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if (zerop (_q42))
		    {
		      if ((_p3 == _p1 && ! TREE_SIDE_EFFECTS (_p3)) || (operand_equal_p (_p3, _p1, 0) && types_match (_p3, _p1)))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
			    if (ANY_INTEGRAL_TYPE_P (type)
 || (FLOAT_TYPE_P (type)
 && fold_real_zero_addition_p (type, NULL_TREE, captures[4], 0))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2840;
				{
				  res_op->set_op (CFN_COND_ADD, type, 4);
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail2840;
				    res_op->ops[0] = _r1;
				  }
				  res_op->ops[1] = captures[1];
				  res_op->ops[2] = captures[3];
				  res_op->ops[3] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1265, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2840:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2, tree _p3)
{
  switch (code.get_rep())
    {
    case -CFN_COND_MUL:
      return gimple_simplify_CFN_COND_MUL (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    case -CFN_COND_ADD:
      return gimple_simplify_CFN_COND_ADD (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_VCOND_MASK_LEN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2841;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2841;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1266, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2841:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2842;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2842;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1266, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2842:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2843;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2843;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1266, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2843:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2844;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2844;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1266, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2844:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2845;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2845;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2845;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1267, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2845:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2846;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2846;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2846;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1267, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2846:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2847;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2847;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2847;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1267, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2847:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2848;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2848;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2848;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1267, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2848:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2849;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2849;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2849;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2849:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2850;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2850;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2850;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2850:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2851;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2851;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2851;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2851:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2852;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2852;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2852;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2852:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2853;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2853;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2853;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2853:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2854;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2854;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2854;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2854:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2855;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2855;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2855;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2855:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2856;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2856;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2856;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2856:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2857;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2857;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2857;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2857:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2858;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2858;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2858;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2858:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2859;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2859;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2859;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2859:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2860;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2860;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2860;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2860:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2861;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2861;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2861;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2861:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2862;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2862;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2862;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2862:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2863;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2863;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2863;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2863:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2864;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2864;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2864;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2864:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2865;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2865;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2865;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2865:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2866;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2866;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2866;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2866:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2867;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2867;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2867;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2867:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2868;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2868;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2868;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2868:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2869;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2869;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2869;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2869:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2870;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2870;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2870;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2870:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2871;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2871;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2871;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2871:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2872;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2872;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2872;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2872:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2873;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2873;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2873;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2873:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2874;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2874;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2874;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2874:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2875;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2875;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2875;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2875:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2876;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2876;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2876;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2876:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2877;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2877;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2877;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2877:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2878;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2878;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2878;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2878:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2879;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2879;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2879;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2879:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2880;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2880;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2880;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1268, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2880:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2881;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2881;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2881;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2881;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2881:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2882;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2882;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2882;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2882;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2882:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2883;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2883;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2883;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2883;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2883:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2884;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2884;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2884;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2884;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2884:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2885;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2885;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2885;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2885;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2885:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2886;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2886;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2886;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2886;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2886:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2887;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2887;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2887;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2887;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2887:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2888;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2888;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2888;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2888;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2888:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2889;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2889;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2889;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2889;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2889:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2890;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2890;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2890;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2890;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2890:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2891;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2891;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2891;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2891;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2891:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2892;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2892;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2892;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2892;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2892:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2893;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2893;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2893;
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2893;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2893:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2894;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2894;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2894;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2894;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2894:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2895;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2895;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2895;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2895;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2895:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2896;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2896;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2896;
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2896;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2896:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2897;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2897;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2897;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2897;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2897:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2898;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2898;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2898;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2898;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2898:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2899;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2899;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2899;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2899;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2899:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2900;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2900;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2900;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2900;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2900:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2901;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2901;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2901;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2901;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2901:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2902;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2902;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2902;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2902;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2902:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2903;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2903;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2903;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2903;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2903:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2904;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2904;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2904;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2904;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2904:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2905;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2905;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2905;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2905;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2905:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2906;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2906;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2906;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2906;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2906:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2907;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2907;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2907;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2907;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2907:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2908;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2908;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2908;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2908;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2908:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2909;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2909;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2909;
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2909;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2909:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2910;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2910;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2910;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2910;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2910:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2911;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2911;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2911;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2911;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2911:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2912;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2912;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2912;
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2912;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1269, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2912:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}
#pragma GCC diagnostic pop
