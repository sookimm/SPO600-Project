/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_power_of_two_cand (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case LSHIFT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  switch (TREE_CODE (_p0))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			  {
			    res_ops[0] = captures[0];
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 13, __FILE__, __LINE__, false);
			    return true;
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
    case INTEGER_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 14, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_with_possible_nonzero_bits (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (gimple_with_possible_nonzero_bits_1 (t, valueize))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { t };
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 36, __FILE__, __LINE__, false);
	  return true;
	}
      }
    }
  return false;
}

bool
gimple_min_value (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (uniform_integer_cst_p (t))
    {
      {
	{
 tree int_cst = uniform_integer_cst_p (t);
 tree inner_type = TREE_TYPE (int_cst);
	    if ((INTEGRAL_TYPE_P (inner_type)
 || POINTER_TYPE_P (inner_type))
 && wi::eq_p (wi::to_wide (int_cst), wi::min_value (inner_type))
)
	      {
		{
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 40, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	}
      }
    }
  return false;
}

bool
gimple_unsigned_integer_sat_trunc (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case BIT_IOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
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
					      CASE_CONVERT:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case GT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q41))
								    {
								    case INTEGER_CST:
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											  {
											    {
											      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q41 };
											      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												{
												  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
												    {
												      {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[1], itype_precision);
													  if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
													    {
													      {
														res_ops[0] = captures[0];
														if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 67, __FILE__, __LINE__, false);
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
									      }
									    break;
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
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case NEGATE_EXPR:
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
							      CASE_CONVERT:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  switch (TREE_CODE (_q50))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q50))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case GT_EXPR:
									        {
										  tree _q60 = gimple_assign_rhs1 (_a5);
										  _q60 = do_valueize (valueize, _q60);
										  tree _q61 = gimple_assign_rhs2 (_a5);
										  _q61 = do_valueize (valueize, _q61);
										  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
										    {
										      switch (TREE_CODE (_q61))
										        {
											case INTEGER_CST:
											  {
											    {
											      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q61 };
											      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												{
												  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
												    {
												      {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[1], itype_precision);
													  if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
													    {
													      {
														res_ops[0] = captures[0];
														if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 67, __FILE__, __LINE__, false);
														return true;
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
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      CASE_CONVERT:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  switch (TREE_CODE (_q50))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q50))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case LE_EXPR:
									        {
										  tree _q60 = gimple_assign_rhs1 (_a5);
										  _q60 = do_valueize (valueize, _q60);
										  tree _q61 = gimple_assign_rhs2 (_a5);
										  _q61 = do_valueize (valueize, _q61);
										  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
										    {
										      switch (TREE_CODE (_q61))
										        {
											case INTEGER_CST:
											  {
											    switch (TREE_CODE (_q41))
											      {
											      case INTEGER_CST:
											        {
												  {
												    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q61, _q41 };
												    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												      {
													if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
													  {
													    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
														if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
														  {
														    {
														      res_ops[0] = captures[0];
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
														      return true;
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
						    case INTEGER_CST:
						      {
							switch (TREE_CODE (_q41))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q41))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q60 = gimple_assign_rhs1 (_a4);
									_q60 = do_valueize (valueize, _q60);
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case LE_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
											  {
											    switch (TREE_CODE (_q71))
											      {
											      case INTEGER_CST:
											        {
												  {
												    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q71, _q40 };
												    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												      {
													if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
													  {
													    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
														if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
														  {
														    {
														      res_ops[0] = captures[0];
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
														      return true;
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
			      case PLUS_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case LE_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q41))
								    {
								    case INTEGER_CST:
								      {
									switch (TREE_CODE (_q21))
									  {
									  case INTEGER_CST:
									    {
									      switch (TREE_CODE (_p1))
									        {
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _p1))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  CASE_CONVERT:
											    {
											      tree _q80 = gimple_assign_rhs1 (_a5);
											      _q80 = do_valueize (valueize, _q80);
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q21 };
												    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												      {
													if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
													  {
													    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
														if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
														  {
														    {
														      res_ops[0] = captures[0];
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
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
										    }
										  break;
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
					      default:;
					      }
				        }
				      break;
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_q21))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q21))
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
								    case LE_EXPR:
								      {
									tree _q50 = gimple_assign_rhs1 (_a4);
									_q50 = do_valueize (valueize, _q50);
									tree _q51 = gimple_assign_rhs2 (_a4);
									_q51 = do_valueize (valueize, _q51);
									switch (TREE_CODE (_q51))
									  {
									  case INTEGER_CST:
									    {
									      switch (TREE_CODE (_p1))
									        {
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _p1))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  CASE_CONVERT:
											    {
											      tree _q80 = gimple_assign_rhs1 (_a5);
											      _q80 = do_valueize (valueize, _q80);
											      if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
												{
												  {
												    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
												    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												      {
													if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
													  {
													    {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int max = wi::mask (otype_precision, false, otype_precision);
 wide_int int_cst_1 = wi::to_wide (captures[1]);
 wide_int int_cst_2 = wi::to_wide (captures[2]);
														if (wi::eq_p (trunc_max, int_cst_1) && wi::eq_p (max, int_cst_2)
)
														  {
														    {
														      res_ops[0] = captures[0];
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 68, __FILE__, __LINE__, false);
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
										    }
										  break;
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
			      case MIN_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q21))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
					  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					    {
					      if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && single_use (captures[1])
)
						{
						  {
 unsigned itype_precision = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_precision = TYPE_PRECISION (type);
 wide_int trunc_max = wi::mask (otype_precision, false, itype_precision);
 wide_int int_cst = wi::to_wide (captures[2], itype_precision);
						      if (otype_precision < itype_precision && wi::eq_p (trunc_max, int_cst)
)
							{
							  {
							    res_ops[0] = captures[0];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 69, __FILE__, __LINE__, false);
							    return true;
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
gimple_simplify_19 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail525;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 119, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail525:;
  return false;
}

bool
gimple_simplify_21 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail527;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail527;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail527;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 121, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail527:;
    }
  return false;
}

bool
gimple_simplify_25 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail531;
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
	      if (!_r1) goto next_after_fail531;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail531;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 125, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail531:;
    }
  return false;
}

bool
gimple_simplify_29 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail535;
      {
	res_op->set_op (rop, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail535;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail535;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail535;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail535;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 129, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail535:;
    }
  return false;
}

bool
gimple_simplify_32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((TREE_CODE (captures[3]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (int_fits_type_p (captures[3], TREE_TYPE (captures[1]))
 || tree_nop_conversion_p (TREE_TYPE (captures[1]), type)))
 || types_match (captures[1], captures[3]))
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (TREE_TYPE (captures[1])) != OFFSET_TYPE
 && (bitop != BIT_AND_EXPR ||
1
)
 && (
 TYPE_PRECISION (TREE_TYPE (captures[1])) < TYPE_PRECISION (type)
 || (
1
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (type))
 || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT
 || !type_has_mode_precision_p (type)
 || (
1
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && single_use (captures[0])
 && single_use (captures[2])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail538;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail538;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail538;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 131, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail538:;
    }
  return false;
}

bool
gimple_simplify_36 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[5])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail544;
      {
	res_op->set_op (VEC_COND_EXPR, type, 3);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[4];
	res_op->ops[2] = captures[7];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 137, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail544:;
    }
  return false;
}

bool
gimple_simplify_39 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail547;
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
		    if (!_r2) goto next_after_fail547;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail547;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 139, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail547:;
      }
    }
  return false;
}

bool
gimple_simplify_42 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && operand_equal_p (captures[2], captures[6], 0)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[4])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int c = wi::add (wi::to_wide (captures[3]), wi::to_wide (captures[7]));
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])
	          || !single_use (captures[4])
	          || !single_use (captures[5])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail551;
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
		    if (!_r2) goto next_after_fail551;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail551;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 138, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail551:;
      }
    }
  return false;
}

bool
gimple_simplify_45 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail554;
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
	      if (!_r1) goto next_after_fail554;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 143, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail554:;
    }
  return false;
}

bool
gimple_simplify_47 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[1])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])), wone);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail556;
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
		    if (!_r2) goto next_after_fail556;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail556;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 145, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail556:;
      }
    }
  return false;
}

bool
gimple_simplify_53 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (fold_real_zero_addition_p (type, captures[0], captures[1], 0)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail565;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 154, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail565:;
    }
  return false;
}

bool
gimple_simplify_55 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail568;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 157, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail568:;
    }
  return false;
}

bool
gimple_simplify_56 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type)
 && !TYPE_SATURATING (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail569;
      {
	res_op->set_op (LSHIFT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail569;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 158, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail569:;
    }
  return false;
}

bool
gimple_simplify_59 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail573;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail573;
      res_op->ops[0] = _r1;
    }
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail573;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 162, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail573:;
  return false;
}

bool
gimple_simplify_63 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  {
 tree t1 = type;
 if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type) != TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
 t1 = TYPE_OVERFLOW_WRAPS (type) ? type : TREE_TYPE (captures[1]);
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail577;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail577;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail577;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail577;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 166, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail577:;
	  }
	}
    }
  return false;
}

bool
gimple_simplify_68 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (TYPE_OVERFLOW_UNDEFINED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail590;
	      {
		res_op->set_op (POINTER_DIFF_EXPR, type, 2);
		res_op->ops[0] = captures[2];
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 179, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail590:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_70 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0]))
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_OVERFLOW_SANITIZED (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail592;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (NULL, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
		  if (!_r1) goto next_after_fail592;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 181, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail592:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_72 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail594;
	      {
		res_op->set_op (NEGATE_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail594;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 183, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail594:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_75 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (plusminus))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (!FLOAT_TYPE_P (type) || flag_associative_math)
)
    {
      if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
)
	{
	  if ((!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
 || (INTEGRAL_TYPE_P (type)
 && ((tree_expr_nonzero_p (captures[1])
 && (plusminus == MINUS_EXPR
 || expr_not_equal_to (captures[1],
 wi::minus_one (TYPE_PRECISION (type)))))
 || expr_not_equal_to (captures[2],
 (plusminus == PLUS_EXPR
 ? wi::max_value (TYPE_PRECISION (type), SIGNED)
 : wi::min_value (TYPE_PRECISION (type), SIGNED))))))
 && single_use (captures[0])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail598;
	      {
		res_op->set_op (MULT_EXPR, type, 2);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] =  build_one_cst (type);
		  gimple_match_op tem_op (res_op->cond.any_else (), plusminus, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail598;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 187, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail598:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_77 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail600;
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
	      if (!_r1) goto next_after_fail600;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 189, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail600:;
    }
  return false;
}

bool
gimple_simplify_80 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail603;
      {
	res_op->set_op (RDIV_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail603;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 192, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail603:;
    }
  return false;
}

bool
gimple_simplify_83 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[1])
          || !single_use (captures[4])
          || !single_use (captures[5])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail606;
  {
    res_op->set_op (PLUS_EXPR, type, 2);
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), POPCOUNT, type, _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail606;
      res_op->ops[0] = _r1;
    }
    {
      tree _o1[1], _r1;
      _o1[0] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), POPCOUNT, type, _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail606;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 195, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail606:;
  return false;
}

bool
gimple_simplify_86 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_FLOAT_TYPE_P (type)
 && TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
    {
      {
 tree perm_cst = captures[1];
 vec_perm_builder builder;
 bool full_perm_p = false;
 if (tree_to_vec_perm_builder (&builder, perm_cst))
 {
 unsigned HOST_WIDE_INT nelts;
 nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_indices sel (builder, 1, nelts);
 if (sel.encoding ().encoded_full_vector_p ())
 {
 auto_sbitmap seen (nelts);
 bitmap_clear (seen);
 unsigned HOST_WIDE_INT count = 0, i;
 for (i = 0; i < nelts; i++)
 {
 if (!bitmap_set_bit (seen, sel[i].to_constant ()))
 break;
 count++;
 }
 full_perm_p = count == nelts;
 }
 }
	  if (full_perm_p
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail609;
	      {
		res_op->set_op (VEC_PERM_EXPR, type, 3);
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail609;
		  captures[3] = _r1;
		}
		res_op->ops[0] = captures[3];
		res_op->ops[1] = captures[3];
		res_op->ops[2] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 198, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail609:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_93 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail616;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail616;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 205, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail616:;
  return false;
}

bool
gimple_simplify_95 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail618;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail618;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail618;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 206, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail618:;
    }
  return false;
}

bool
gimple_simplify_100 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail625;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    res_op->ops[0] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 213, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail625:;
	}
    }
  return false;
}

bool
gimple_simplify_101 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail626;
	  {
	    res_op->set_op (PLUS_EXPR, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail626:;
	}
    }
  return false;
}

bool
gimple_simplify_105 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && TREE_CODE (captures[1]) != INTEGER_CST
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail632;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (utype != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail632;
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail632;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 220, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail632:;
	      }
	    }
	  else
	    {
	      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail633;
		  {
		    res_op->set_op (NEGATE_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail633;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 221, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail633:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_109 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && ! HONOR_NANS (type) && ! HONOR_INFINITIES (type)
 && ! flag_trapping_math
 && ! flag_errno_math
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[2])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail638;
	  {
	    res_op->set_op (logs, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail638;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 226, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail638:;
	}
    }
  return false;
}

bool
gimple_simplify_111 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[1]) == SSA_NAME && num_imm_uses (captures[1]) == 2
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail640;
      {
	res_op->set_op (MINUS_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    _o2[1] = captures[2];
	    _o2[2] = captures[4];
	    gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1], _o2[2]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail640;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail640;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[5];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 228, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail640:;
    }
  return false;
}

bool
gimple_simplify_116 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail645;
	  {
	    res_op->set_op (BIT_IOR_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail645;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 233, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail645:;
	}
  }
  return false;
}

bool
gimple_simplify_121 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail650;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 237, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail650:;
  return false;
}

bool
gimple_simplify_125 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail654;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[3];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 240, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail654:;
  return false;
}

bool
gimple_simplify_128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail657;
  {
    res_op->set_op (bitop, type, 2);
    res_op->ops[0] = captures[0];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail657;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 241, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail657:;
  return false;
}

bool
gimple_simplify_135 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail664;
      {
	res_op->set_op (BIT_NOT_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail664;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail664;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), rop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail664;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 246, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail664:;
    }
  return false;
}

bool
gimple_simplify_141 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail673;
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
		  if (!_r1) goto next_after_fail673;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail673:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail674;
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
		      if (!_r1) goto next_after_fail674;
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
next_after_fail674:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_147 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail680;
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
		  if (!_r3) goto next_after_fail680;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail680;
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
		if (!_r2) goto next_after_fail680;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail680;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail680:;
    }
  return false;
}

bool
gimple_simplify_154 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[5])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      if (integer_onep (captures[4])
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[7])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail688;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    {
	      tree _o1[3], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[6];
	      _o1[2] = captures[9];
	      gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail688;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[4];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 258, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail688:;
	}
      else
	{
	  if (integer_minus_onep (captures[4])
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[7])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail689;
	      {
		res_op->set_op (VEC_COND_EXPR, type, 3);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[6];
		res_op->ops[2] = captures[9];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 259, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail689:;
	    }
	}
    }
  else
    {
      if (integer_zerop (captures[4])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
	{
	  if (integer_onep (captures[5])
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[7])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail690;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[3], _r1;
		  _o1[0] = captures[1];
		  _o1[1] = captures[9];
		  _o1[2] = captures[6];
		  gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail690;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[5];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 260, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail690:;
	    }
	  else
	    {
	      if (integer_minus_onep (captures[5])
)
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])
		          || !single_use (captures[7])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail691;
		  {
		    res_op->set_op (VEC_COND_EXPR, type, 3);
		    res_op->ops[0] = captures[1];
		    res_op->ops[1] = captures[9];
		    res_op->ops[2] = captures[6];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 261, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail691:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_162 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail717;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), cmp, type, _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail717;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[4];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail717:;
  return false;
}

bool
gimple_simplify_163 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail718;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), cmp, type, _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail718;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[3];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 281, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail718:;
  return false;
}

bool
gimple_simplify_164 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail719;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail719:;
  return false;
}

bool
gimple_simplify_165 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail720;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail720:;
  return false;
}

bool
gimple_simplify_166 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail721;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 264, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail721:;
  return false;
}

bool
gimple_simplify_168 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail724;
	      {
		tree tem;
		tem = captures[3];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail724:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail725;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail725:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail726;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail726:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail727;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    res_op->ops[1] = captures[5];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail727:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail728;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				res_op->ops[1] = captures[5];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 270, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail728:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail729;
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
					  if (!_r1) goto next_after_fail729;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail729:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail730;
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
					      if (!_r1) goto next_after_fail730;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail730:;
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
gimple_simplify_183 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail753;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail753;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 292, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail753:;
    }
  return false;
}

bool
gimple_simplify_187 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail757;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail757;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail757:;
    }
  return false;
}

bool
gimple_simplify_191 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail761;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail761;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail761:;
    }
  return false;
}

bool
gimple_simplify_195 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail765;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail765;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail765:;
    }
  return false;
}

bool
gimple_simplify_199 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail769;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail769;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 295, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail769:;
    }
  return false;
}

bool
gimple_simplify_204 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail775;
	  {
	    res_op->set_op (ABSU_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 298, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail775:;
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail776;
	  {
	    res_op->set_op (ABS_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 299, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail776:;
	}
    }
  return false;
}

bool
gimple_simplify_209 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail781;
  {
    res_op->set_op (NOP_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail781:;
  return false;
}

bool
gimple_simplify_210 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_widest_int factor;
      if (multiple_p (wi::to_poly_widest (captures[2]), wi::to_widest (captures[1]), &factor)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail782;
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
		  if (!_r1) goto next_after_fail782;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  wide_int_to_tree (type, factor);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 304, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail782:;
	}
  }
  return false;
}

bool
gimple_simplify_214 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (!TREE_OVERFLOW (captures[2])
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail787;
	  {
	    res_op->set_op (POW, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] =  build_one_cst (type);
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail787;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 309, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail787:;
	}
    }
  return false;
}

bool
gimple_simplify_218 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail791;
      {
	res_op->set_op (POW, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail791;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 313, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail791:;
    }
  return false;
}

bool
gimple_simplify_221 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail794;
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
		    if (!_r2) goto next_after_fail794;
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
		    if (!_r2) goto next_after_fail794;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), mod, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail794;
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (utype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail794;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 316, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail794:;
      }
    }
  return false;
}

bool
gimple_simplify_230 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail819;
  {
    res_op->set_op (op, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 340, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail819:;
  return false;
}

bool
gimple_simplify_233 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail822;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[3];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 343, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail822:;
    }
  return false;
}

bool
gimple_simplify_236 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[2]);
      if (ptr_difference_const (captures[0], captures[1], &diff)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail825;
	  {
	    res_op->set_op (neeq, type, 2);
	    res_op->ops[0] =  build_int_cst_type (inner_type, diff);
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 345, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail825:;
	}
  }
  return false;
}

bool
gimple_simplify_239 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_INT_CST_LOW (captures[1]) & 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail828;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail828:;
    }
  return false;
}

bool
gimple_simplify_240 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::bit_and_not (get_known_nonzero_bits (captures[1]),
 get_nonzero_bits (captures[0])) != 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail829;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 349, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail829:;
    }
  return false;
}

bool
gimple_simplify_244 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::gt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail834;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 354, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail834:;
    }
  else
    {
      if (wi::lt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail835;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 355, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail835:;
	}
    }
  return false;
}

bool
gimple_simplify_248 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail841;
      {
	res_op->set_op (icmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]),
 wi::exact_log2 (wi::to_wide (captures[1])));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 361, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail841:;
    }
  return false;
}

bool
gimple_simplify_250 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_fits_shwi_p (captures[3])
 && tree_to_shwi (captures[3]) > 0
 && tree_to_shwi (captures[3]) < TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      {
 tree t0 = TREE_TYPE (captures[2]);
 unsigned int prec = TYPE_PRECISION (t0);
 wide_int c1 = wi::to_wide (captures[3]);
 wide_int c2 = wi::to_wide (captures[4]);
 wide_int c3 = wi::to_wide (captures[5]);
 wide_int sb = wi::set_bit_in_zero (prec - 1, prec);
	  if ((c2 & c3) != c3
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail844;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 364, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail844:;
	    }
	  else
	    {
	      if (TYPE_UNSIGNED (t0)
)
		{
		  if ((c3 & wi::arshift (sb, c1 - 1)) != 0
)
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail845;
		      {
			tree tem;
			tem =  constant_boolean_node (cmp == NE_EXPR, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 365, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail845:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (lseq
		          && (!single_use (captures[0])
		              || !single_use (captures[1])))
		        lseq = NULL;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail846;
		      {
			res_op->set_op (cmp, type, 2);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail846;
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  wide_int_to_tree (t0, c3 << c1);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 366, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail846:;
		    }
		}
	      else
		{
		  {
 wide_int smask = wi::arshift (sb, c1);
		      if ((c2 & smask) == 0
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])
			          || !single_use (captures[1])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail847;
			  {
			    res_op->set_op (cmp, type, 2);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail847;
			      res_op->ops[0] = _r1;
			    }
			    res_op->ops[1] =  wide_int_to_tree (t0, c3 << c1);
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 367, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail847:;
			}
		      else
			{
			  if ((c3 & smask) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (lseq
			          && (!single_use (captures[0])
			              || !single_use (captures[1])))
			        lseq = NULL;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail848;
			      {
				res_op->set_op (cmp, type, 2);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[2];
				  _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail848;
				  res_op->ops[0] = _r1;
				}
				res_op->ops[1] =  wide_int_to_tree (t0, c3 << c1);
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 368, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail848:;
			    }
			  else
			    {
			      if ((c2 & smask) != (c3 & smask)
)
				{
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])
				          || !single_use (captures[1])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail849;
				  {
				    tree tem;
				    tem =  constant_boolean_node (cmp == NE_EXPR, type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 369, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail849:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])
				          || !single_use (captures[1])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail850;
				  {
				    res_op->set_op (cmp, type, 2);
				    {
				      tree _o1[2], _r1;
				      _o1[0] = captures[2];
				      _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail850;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] =  wide_int_to_tree (t0, (c3 << c1) | sb);
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 370, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail850:;
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
gimple_simplify_269 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail876;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] =  build_real (TREE_TYPE (captures[1]), dconst0);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 394, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail876:;
    }
  else
    {
      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail877;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] =  build_real (TREE_TYPE (captures[0]), dconst0);
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 395, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail877:;
	}
      else
	{
	  if (REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[1])
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail878;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 396, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail878:;
	    }
	  else
	    {
	      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_ISNAN (TREE_REAL_CST (captures[0]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[0])
 && !tree_expr_signaling_nan_p (captures[1])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail879;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == NE_EXPR, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 397, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail879:;
		}
	      else
		{
		  if (REAL_VALUE_ISINF (TREE_REAL_CST (captures[1]))
 && MODE_HAS_INFINITIES (TYPE_MODE (TREE_TYPE (captures[1])))
)
		    {
		      {
 REAL_VALUE_TYPE max;
 enum tree_code code = cmp;
 bool neg = REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]));
 if (neg)
 code = swap_tree_comparison (code);
			  if (code == GT_EXPR
 && !(HONOR_NANS (captures[0]) && flag_trapping_math)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail880;
			      {
				tree tem;
				tem =  constant_boolean_node (false, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 398, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail880:;
			    }
			  else
			    {
			      if (code == LE_EXPR
)
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail881;
				      {
					tree tem;
					tem =  constant_boolean_node (true, type);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 399, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail881:;
				    }
				  else
				    {
				      if (!flag_trapping_math
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
					  {
					    res_op->set_op (EQ_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] = captures[0];
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 400, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail882:;
					}
				    }
				}
			      else
				{
				  if ((code == EQ_EXPR && !(HONOR_NANS (captures[0]) && flag_trapping_math))
 || code == GE_EXPR
)
				    {
				      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					  if (neg
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail883;
					      {
						res_op->set_op (LT_EXPR, type, 2);
						res_op->ops[0] = captures[0];
						res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 401, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail883:;
					    }
					  else
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail884;
					      {
						res_op->set_op (GT_EXPR, type, 2);
						res_op->ops[0] = captures[0];
						res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 402, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail884:;
					    }
				      }
				    }
				  else
				    {
				      if (code == LT_EXPR
)
					{
					  {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					      if (neg
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail885;
						  {
						    res_op->set_op (GE_EXPR, type, 2);
						    res_op->ops[0] = captures[0];
						    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 403, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail885:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail886;
						  {
						    res_op->set_op (LE_EXPR, type, 2);
						    res_op->ops[0] = captures[0];
						    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 404, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail886:;
						}
					  }
					}
				      else
					{
					  if (code == NE_EXPR
)
					    {
					      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
						  if (! HONOR_NANS (captures[0])
)
						    {
						      if (neg
)
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail887;
							  {
							    res_op->set_op (GE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail887:;
							}
						      else
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail888;
							  {
							    res_op->set_op (LE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail888:;
							}
						    }
						  else
						    {
						      if (neg
)
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail889;
							  {
							    res_op->set_op (UNGE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 407, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail889:;
							}
						      else
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail890;
							  {
							    res_op->set_op (UNLE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 408, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail890:;
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
    }
  return false;
}

bool
gimple_simplify_287 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail950;
  {
    res_op->set_op (cmp, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	tem_op.resimplify (NULL, valueize);
	_r2 = maybe_push_res_to_seq (&tem_op, NULL);
	if (!_r2) goto next_after_fail950;
	_o1[1] = _r2;
      }
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail950;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 461, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail950:;
  return false;
}

bool
gimple_simplify_289 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonzero_p (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail952;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 463, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail952:;
    }
  return false;
}

bool
gimple_simplify_292 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (sgncmp),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail955;
      {
	res_op->set_op (ncmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail955;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 466, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail955:;
    }
  return false;
}

bool
gimple_simplify_295 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!FLOAT_TYPE_P (TREE_TYPE (captures[3]))
 || !operation_could_trap_p (cmp, true, false, captures[3])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail958;
      {
	res_op->set_op (COND_EXPR, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[0] = unshare_expr (res_op->ops[0]);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), cmp, type, _o1[0], _o1[1]);
	  tem_op.resimplify (NULL, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	  if (!_r1) goto next_after_fail958;
	  res_op->ops[1] = _r1;
	}
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), cmp, type, _o1[0], _o1[1]);
	  tem_op.resimplify (NULL, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	  if (!_r1) goto next_after_fail958;
	  res_op->ops[2] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 468, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail958:;
    }
  return false;
}

bool
gimple_simplify_300 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && ptrs_compare_unequal (captures[0], captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail977;
      {
	tree tem;
	tem =  constant_boolean_node (neeq != EQ_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 478, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail977:;
    }
  return false;
}

bool
gimple_simplify_303 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= 2 * TYPE_PRECISION (TREE_TYPE (captures[2])))
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], captures[3])
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && (optab_handler (umulv4_optab, TYPE_MODE (TREE_TYPE (captures[2])))
 != CODE_FOR_nothing)
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail984;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[3];
		gimple_match_op tem_op (res_op->cond.any_else (), CFN_MUL_OVERFLOW, cpx, _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail984;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail984;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (t);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 485, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail984:;
      }
    }
  return false;
}

bool
gimple_simplify_307 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[3]) && single_use (captures[0])
)
    {
      {
 tree type0 = TREE_TYPE (captures[1]);
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
 if (integer_zerop (captures[2]))
 stype = NULL_TREE;
	  if (stype
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail998;
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
		      if (!_r1) goto next_after_fail998;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] =  build_zero_cst (stype);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 499, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail998:;
	    }
      }
    }
  else
    {
      {
 bool ok = true;
 tree type0 = TREE_TYPE (captures[1]);
 if (wi::to_widest (captures[2]) == TYPE_PRECISION (type0) - 1)
 ok = false;
	  if (ok && wi::to_wide (captures[3]) == (TYPE_PRECISION (type0) - 1)
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail999;
	      {
		res_op->set_op (op, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_one_cst (type0);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 500, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail999:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_313 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1009;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 510, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1009:;
    }
  return false;
}

bool
gimple_simplify_317 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1014;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 515, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1014:;
    }
  else
    {
      if (!direct_internal_fn_supported_p (IFN_COPYSIGN, type,
 OPTIMIZE_FOR_BOTH)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1015;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1015;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 516, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1015:;
	}
    }
  return false;
}

bool
gimple_simplify_323 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_vector)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_scalar))
 && (useless_type_conversion_p (type, TREE_TYPE (captures[2]))
 || (element_precision (type) >= element_precision (TREE_TYPE (captures[2]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 || (element_precision (type)
 == element_precision (TREE_TYPE (captures[2])))
 || (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0])
 & wi::mask (element_precision (TREE_TYPE (captures[2])) - 1,
 true,
 element_precision (type))) == 0))))
)
    {
      if (!VECTOR_TYPE_P (type)
 && useless_type_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && element_precision (TREE_TYPE (captures[1])) < element_precision (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1022;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1022;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 521, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1022:;
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
	  {
	    res_op->set_op (RSHIFT_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 522, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1023:;
	}
    }
  return false;
}

bool
gimple_simplify_334 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1035;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 534, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1035:;
	}
      else
	{
	  {
int_range_max vr0, vr1;
	      if (INTEGRAL_TYPE_P (type)
 && get_range_query (cfun)->range_of_expr (vr0, captures[0])
 && get_range_query (cfun)->range_of_expr (vr1, captures[1])
 && range_op_handler (MULT_EXPR).overflow_free_p (vr0, vr1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1036;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 535, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1036:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_340 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1044;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 543, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1044:;
    }
  return false;
}

bool
gimple_simplify_342 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1046;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 545, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1046:;
    }
  return false;
}

bool
gimple_simplify_348 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
    {
      if (types_match (type, float_type_node)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1052;
	  {
	    res_op->set_op (CFN_BUILT_IN_COPYSIGNF, type, 2);
	    res_op->ops[0] =  build_one_cst (type);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1052;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 551, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1052:;
	}
      else
	{
	  if (types_match (type, double_type_node)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1053;
	      {
		res_op->set_op (CFN_BUILT_IN_COPYSIGN, type, 2);
		res_op->ops[0] =  build_one_cst (type);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1053;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 552, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1053:;
	    }
	  else
	    {
	      if (types_match (type, long_double_type_node)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1054;
		  {
		    res_op->set_op (CFN_BUILT_IN_COPYSIGNL, type, 2);
		    res_op->ops[0] =  build_one_cst (type);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[0];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1054;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 553, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1054:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_362 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1070;
	  {
	    res_op->set_op (op, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1070;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1070;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 569, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1070:;
      }
    }
  return false;
}

bool
gimple_simplify_371 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 wi::overflow_type ovf;
 wide_int prod = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[1]),
 TYPE_SIGN (TREE_TYPE (captures[1])), &ovf);
	  if (ovf
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1080;
	      {
		tree tem;
		tem =  constant_boolean_node (wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (cmp == LT_EXPR || cmp == LE_EXPR), type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 579, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1080:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1081;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 580, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1081:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_377 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1118;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1118:;
    }
  return false;
}

bool
gimple_simplify_380 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !VECTOR_TYPE_P (TREE_TYPE (captures[2]))
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1121;
	  {
	    res_op->set_op (out, type, 2);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), CFN_MUL_OVERFLOW, cpx, _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1121;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1121;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (t);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 603, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1121:;
      }
    }
  return false;
}

bool
gimple_simplify_385 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > 1
 && (wi::to_wide (captures[2])
 == wi::max_value (TYPE_PRECISION (TREE_TYPE (captures[0])), SIGNED) - 1)
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1133;
	  {
	    res_op->set_op (icmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1133;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_int_cst (stype, 0);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 615, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1133:;
      }
    }
  return false;
}

bool
gimple_simplify_388 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1136;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1136:;
    }
  return false;
}

bool
gimple_simplify_391 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !VECTOR_TYPE_P (TREE_TYPE (captures[2]))
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1139;
	  {
	    res_op->set_op (out, type, 2);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), CFN_MUL_OVERFLOW, cpx, _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1139;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1139;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (t);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 603, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1139:;
      }
    }
  return false;
}

bool
gimple_simplify_396 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[3]) && tree_int_cst_sgn (captures[3]) > 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1148;
      {
	res_op->set_op (shift, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[2];
	    _o2[1] =  build_int_cst (TREE_TYPE (captures[2]),
 1);
	    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail1148;
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1148;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 626, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1148:;
    }
  return false;
}

bool
gimple_simplify_401 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1153;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 631, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1153:;
  return false;
}

bool
gimple_simplify_404 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
)
    {
      {
 int width = ceil_log2 (element_precision (TREE_TYPE (captures[0])));
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
	  if ((get_nonzero_bits (captures[1]) & wi::mask (width, false, prec)) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1156;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 633, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1156:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_408 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1163;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1163;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_minus_one_cst (type);
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1163;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 639, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1163:;
	}
      else
	{
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      {
 int width = element_precision (type) - tree_to_uhwi (captures[1]);
 tree stype = NULL_TREE;
 if (width <= MAX_FIXED_MODE_SIZE)
 stype = build_nonstandard_integer_type (width, 0);
		  if (stype && (width == 1 || type_has_mode_precision_p (stype))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1164;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (stype != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1164;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 640, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1164:;
		    }
	      }
	    }
	}
    }
  return false;
}

bool
gimple_simplify_418 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1179;
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
		  if (!_r1) goto next_after_fail1179;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1179:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1180;
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
			if (!_r2) goto next_after_fail1180;
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
			if (!_r2) goto next_after_fail1180;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1180;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 656, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1180:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1181;
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
				  if (!_r1) goto next_after_fail1181;
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
				  if (!_r1) goto next_after_fail1181;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 657, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1181:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1182;
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
					    if (!_r2) goto next_after_fail1182;
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
					    if (!_r2) goto next_after_fail1182;
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1182;
				      res_op->ops[0] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 658, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1182:;
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
gimple_simplify_439 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1214;
  {
    res_op->set_op (PLUS_EXPR, type, 2);
    {
      tree _o1[1], _r1;
      _o1[0] = captures[0];
      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1214;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] =  build_each_one_cst (type);
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 678, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1214:;
  return false;
}

bool
gimple_simplify_445 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1220;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 684, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1220:;
  return false;
}

bool
gimple_simplify_450 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[5], op, captures[1], bitop,
 captures[2], captures[3], captures[4], ERROR_MARK, NULL_TREE,
 NULL_TREE, pmop);
      if (utype
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1225;
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
		      if (!_r3) goto next_after_fail1225;
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
		      if (!_r3) goto next_after_fail1225;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1225;
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
		    if (!_r2) goto next_after_fail1225;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1225;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 688, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1225:;
	}
  }
  return false;
}

bool
gimple_simplify_465 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) <= HOST_BITS_PER_WIDE_INT
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) > 0
 && tree_to_uhwi (captures[4]) < TYPE_PRECISION (type)
)
    {
      {
 unsigned int shiftc = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT mask = TREE_INT_CST_LOW (captures[5]);
 unsigned HOST_WIDE_INT newmask, zerobits = 0;
 tree shift_type = TREE_TYPE (captures[2]);
 unsigned int prec;
 if (shift == LSHIFT_EXPR)
 zerobits = ((HOST_WIDE_INT_1U << shiftc) - 1);
 else if (shift == RSHIFT_EXPR
 && type_has_mode_precision_p (shift_type))
 {
 prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 tree arg00 = captures[3];
 if (captures[2] != captures[3]
 && TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 {
 tree inner_type = TREE_TYPE (captures[3]);
 if (type_has_mode_precision_p (inner_type)
 && TYPE_PRECISION (inner_type) < prec)
 {
 prec = TYPE_PRECISION (inner_type);
 if (shiftc < prec)
 shift_type = inner_type;
 }
 }
 zerobits = HOST_WIDE_INT_M1U;
 if (shiftc < prec)
 {
 zerobits >>= HOST_BITS_PER_WIDE_INT - shiftc;
 zerobits <<= prec - shiftc;
 }
 if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && prec == TYPE_PRECISION (TREE_TYPE (captures[2])))
 {
 if ((mask & zerobits) == 0)
 shift_type = unsigned_type_for (TREE_TYPE (captures[2]));
 else
 zerobits = 0;
 }
 }
	  if ((mask & zerobits) == mask
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1242;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 701, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1242:;
	    }
	  else
	    {
	      {
 newmask = mask | zerobits;
		  if (newmask != mask && (newmask & (newmask + 1)) == 0
)
		    {
		      {
 for (prec = BITS_PER_UNIT;
 prec < HOST_BITS_PER_WIDE_INT; prec <<= 1)
 if (newmask == (HOST_WIDE_INT_1U << prec) - 1)
 break;
			  if (prec < HOST_BITS_PER_WIDE_INT
 || newmask == HOST_WIDE_INT_M1U
)
			    {
			      {
 tree newmaskt = build_int_cst_type (TREE_TYPE (captures[5]), newmask);
				  if (!tree_int_cst_equal (newmaskt, captures[5])
)
				    {
				      if (shift_type != TREE_TYPE (captures[2])
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1243;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0])
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail1243;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1243;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1243;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 702, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1243:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1244;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 703, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1244:;
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
gimple_simplify_480 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1294;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1294:;
  return false;
}

bool
gimple_simplify_482 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
      {
	res_op->set_op (GT_EXPR, type, 2);
	res_op->ops[0] = captures[3];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1296;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 727, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1296:;
    }
  return false;
}

bool
gimple_simplify_485 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) <= HOST_BITS_PER_WIDE_INT
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) > 0
 && tree_to_uhwi (captures[4]) < TYPE_PRECISION (type)
)
    {
      {
 unsigned int shiftc = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT mask = TREE_INT_CST_LOW (captures[5]);
 unsigned HOST_WIDE_INT newmask, zerobits = 0;
 tree shift_type = TREE_TYPE (captures[2]);
 unsigned int prec;
 if (shift == LSHIFT_EXPR)
 zerobits = ((HOST_WIDE_INT_1U << shiftc) - 1);
 else if (shift == RSHIFT_EXPR
 && type_has_mode_precision_p (shift_type))
 {
 prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 tree arg00 = captures[3];
 if (captures[2] != captures[3]
 && TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 {
 tree inner_type = TREE_TYPE (captures[3]);
 if (type_has_mode_precision_p (inner_type)
 && TYPE_PRECISION (inner_type) < prec)
 {
 prec = TYPE_PRECISION (inner_type);
 if (shiftc < prec)
 shift_type = inner_type;
 }
 }
 zerobits = HOST_WIDE_INT_M1U;
 if (shiftc < prec)
 {
 zerobits >>= HOST_BITS_PER_WIDE_INT - shiftc;
 zerobits <<= prec - shiftc;
 }
 if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && prec == TYPE_PRECISION (TREE_TYPE (captures[2])))
 {
 if ((mask & zerobits) == 0)
 shift_type = unsigned_type_for (TREE_TYPE (captures[2]));
 else
 zerobits = 0;
 }
 }
	  if ((mask & zerobits) == mask
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 701, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1301:;
	    }
	  else
	    {
	      {
 newmask = mask | zerobits;
		  if (newmask != mask && (newmask & (newmask + 1)) == 0
)
		    {
		      {
 for (prec = BITS_PER_UNIT;
 prec < HOST_BITS_PER_WIDE_INT; prec <<= 1)
 if (newmask == (HOST_WIDE_INT_1U << prec) - 1)
 break;
			  if (prec < HOST_BITS_PER_WIDE_INT
 || newmask == HOST_WIDE_INT_M1U
)
			    {
			      {
 tree newmaskt = build_int_cst_type (TREE_TYPE (captures[5]), newmask);
				  if (!tree_int_cst_equal (newmaskt, captures[5])
)
				    {
				      if (shift_type != TREE_TYPE (captures[2])
)
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0])
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail1302;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail1302;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1302;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 702, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1302:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 703, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1303:;
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
gimple_simplify_502 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
)
    {
      {
 tree shift_type = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (shift_type != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (shift_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1323;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1323;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1323:;
      }
    }
  return false;
}

bool
gimple_simplify_510 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[2])
 && tree_expr_nonzero_p (captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1332;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 751, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1332:;
    }
  return false;
}

bool
gimple_simplify_515 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1337;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 756, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1337:;
  return false;
}

bool
gimple_simplify_520 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree from_type = TREE_TYPE (captures[0]);
 tree c1_type = TREE_TYPE (captures[1]), c2_type = TREE_TYPE (captures[2]);
 enum tree_code code = ERROR_MARK;
 if (INTEGRAL_TYPE_P (from_type)
 && int_fits_type_p (captures[2], from_type)
 && (types_match (c1_type, from_type)
 || (TYPE_PRECISION (c1_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c1_type) == TYPE_SIGN (from_type))))
 && (types_match (c2_type, from_type)
 || (TYPE_PRECISION (c2_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c2_type) == TYPE_SIGN (from_type)))))
 {
 if (cmp != EQ_EXPR)
 code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[2]);
 else if (int_fits_type_p (captures[1], from_type))
 code = EQ_EXPR;
 }
      if (code == MAX_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1342;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
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
		    if (!_r2) goto next_after_fail1342;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1342;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 761, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1342:;
	}
      else
	{
	  if (code == MIN_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1343;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
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
			if (!_r2) goto next_after_fail1343;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1343;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 762, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1343:;
	    }
	  else
	    {
	      if (code == EQ_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1344;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[3], _r1;
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
			      if (!_r3) goto next_after_fail1344;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[1] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1344;
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (from_type != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (from_type, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, from_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1344;
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (from_type != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (from_type, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, from_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1344;
			  }
			else
			  _r2 = _o2[0];
			_o1[2] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1344;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 763, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1344:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_532 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1404;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1404:;
    }
  return false;
}

bool
gimple_simplify_534 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1406;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1406:;
    }
  return false;
}

bool
gimple_simplify_536 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1408;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1408:;
    }
  return false;
}

bool
gimple_simplify_540 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (TYPE_OVERFLOW_WRAPS (type)
 || !wi::only_sign_bit_p (wi::to_wide (captures[1])))
 && wi::eq_p (wi::neg (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1412;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 789, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1412:;
    }
  return false;
}

bool
gimple_simplify_548 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1422;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 797, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1422:;
    }
  return false;
}

bool
gimple_simplify_552 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1426;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 797, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1426:;
    }
  return false;
}

bool
gimple_simplify_559 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1434;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 800, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1434:;
    }
  return false;
}

bool
gimple_simplify_565 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (cmp == LT_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1444;
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
		    if (!_r2) goto next_after_fail1444;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1444;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 810, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1444:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1445;
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
		      if (!_r3) goto next_after_fail1445;
		      _o2[0] = _r3;
		    }
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1445;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1445;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 811, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1445:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_576 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[1])
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 int shift = element_precision (captures[0]) - wi::exact_log2 (wi::to_wide (captures[1])) - 1;
	  if (shift >= 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1471;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  build_int_cst (integer_type_node, shift);
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1471;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1471;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 819, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1471:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1472;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1472;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 820, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1472:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_584 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 ifn = IFN_CLZ;
 else if (direct_internal_fn_supported_p (IFN_CLZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH))
 ifn = IFN_CLZ;
      if (ifn == IFN_CLZ
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1481;
	  {
	    res_op->set_op (CFN_CLZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 826, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1481:;
	}
  }
  return false;
}

bool
gimple_simplify_590 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1487;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 830, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1487:;
  return false;
}

bool
gimple_simplify_597 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1503;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1503:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1504;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1504:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1505;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1505:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1506;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1506:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_615 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (MINMAX))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_INTEGER_TYPE_P (type)
 && target_supports_op_p (type, MINMAX, optab_vector)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1527;
      {
	res_op->set_op (minmax, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 857, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1527:;
    }
  return false;
}

bool
gimple_simplify_620 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1532;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 803, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1532:;
  return false;
}

bool
gimple_simplify_627 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1539;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1539;
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[4];
	      _o1[5] = captures[5];
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_len_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1539;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 864, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1539:;
	}
  }
  return false;
}

bool
gimple_simplify_635 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1547;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1547:;
  return false;
}

bool
gimple_simplify_637 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[1])) || TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1549;
      {
	res_op->set_op (ovf, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1549:;
    }
  return false;
}

bool
gimple_simplify_646 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
 && targetm.libc_has_function (function_c99_misc, NULL_TREE)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1558;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), tos, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1558;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1558:;
    }
  return false;
}

bool
gimple_simplify_657 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (rints))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (!flag_errno_math
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1569;
	  {
	    res_op->set_op (FIX_TRUNC_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1569:;
	}
    }
  return false;
}

bool
gimple_simplify_664 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1576;
      {
	res_op->set_op (CFN_FNMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 901, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1576:;
    }
  return false;
}

bool
gimple_simplify_672 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1584;
      {
	res_op->set_op (ctz, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (t != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (t, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1584;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1584:;
  }
  return false;
}

bool
gimple_simplify_681 (gimple_match_op *res_op, gimple_seq *seq,
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
	      && (!single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1598;
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
		    if (!_r2) goto next_after_fail1598;
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
		  if (!_r1) goto next_after_fail1598;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1598:;
      }
    }
  return false;
}

bool
gimple_simplify_687 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (FFS))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_FFS;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 0);
 }
 type0 = signed_type_for (type0);
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_FFS, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_FFS;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_FFS,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (integer_type_node))
 cfn = CFN_BUILT_IN_FFS;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_integer_type_node))
 cfn = CFN_BUILT_IN_FFSLL;
 }
	  if (cfn == CFN_FFS
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1606;
	      {
		res_op->set_op (CFN_FFS, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1606;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1606:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_FFS
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1607;
		  {
		    res_op->set_op (CFN_BUILT_IN_FFS, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1607;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1607:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_FFSLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1608;
		      {
			res_op->set_op (CFN_BUILT_IN_FFSLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1608;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1608:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COSH (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn coss = CFN_BUILT_IN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1653;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1653:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1654;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1654:;
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_COSH))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_COSH))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_COSH))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_ATANH:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSH, CFN_BUILT_IN_ATANH, CFN_BUILT_IN_SQRT))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_COSH))
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
gimple_simplify_CFN_BUILT_IN_CCOSHL (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1677;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOSHL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1677:;
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
gimple_simplify_BIT_NOT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_493 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_493 (res_op, seq, valueize, type, captures))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_494 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_494 (res_op, seq, valueize, type, captures))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1693;
				    {
				      res_op->set_op (PLUS_EXPR, type, 2);
				      res_op->ops[0] = captures[0];
				      res_op->ops[1] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1693:;
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1694;
		    {
		      res_op->set_op (PLUS_EXPR, type, 2);
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[1];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1694;
			res_op->ops[0] = _r1;
		      }
		      res_op->ops[1] = captures[2];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 971, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1694:;
		  }
		  if (integer_each_onep (_q21))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_495 (res_op, seq, valueize, type, captures))
			  return true;
		      }
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    if (gimple_simplify_496 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				    if (gimple_simplify_496 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if ((INTEGRAL_TYPE_P (type)
 && TYPE_UNSIGNED (type))
 || (!TYPE_OVERFLOW_SANITIZED (type)
 && may_negate_without_overflow_p (captures[2]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (lseq
			          && (!single_use (captures[0])))
			        lseq = NULL;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1695;
			      {
				res_op->set_op (PLUS_EXPR, type, 2);
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1695;
				  res_op->ops[0] = _r1;
				}
				res_op->ops[1] =  const_unop (NEGATE_EXPR, type, captures[2]);
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 972, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1695:;
			    }
			}
		        break;
		      }
		    default:;
		    }
		if (integer_all_onesp (_q21))
		  {
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_497 (res_op, seq, valueize, type, captures))
		        return true;
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    if (!TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1696;
			{
			  res_op->set_op (RSHIFT_EXPR, type, 2);
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1696;
			    res_op->ops[0] = _r1;
			  }
			  res_op->ops[1] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1696:;
		      }
		    else
		      {
			if (INTEGRAL_TYPE_P (type)
 && !wi::neg_p (tree_nonzero_bits (captures[1]))
)
			  {
			    {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
				gimple_seq *lseq = seq;
				if (lseq
				    && (!single_use (captures[0])))
				  lseq = NULL;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1697;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  {
				    tree _o1[2], _r1;
				    {
				      tree _o2[1], _r2;
				      {
					tree _o3[1], _r3;
					_o3[0] = captures[1];
					if (stype != TREE_TYPE (_o3[0])
					    && !useless_type_conversion_p (stype, TREE_TYPE (_o3[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o3[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r3) goto next_after_fail1697;
					  }
					else
					  _r3 = _o3[0];
					_o2[0] = _r3;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      tem_op.resimplify (NULL, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, NULL);
				      if (!_r2) goto next_after_fail1697;
				      _o1[0] = _r2;
				    }
				    _o1[1] = captures[2];
				    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail1697;
				    res_op->ops[0] = _r1;
				  }
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1697:;
			    }
			  }
		      }
		  }
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_498 (res_op, seq, valueize, type, captures))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_498 (res_op, seq, valueize, type, captures))
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1698;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1698:;
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
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				    if (gimple_simplify_499 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_each_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_495 (res_op, seq, valueize, type, captures))
					  return true;
				      }
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
				  if (integer_all_onesp (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_497 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
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
					{
					  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					  if (gimple_simplify_500 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
						    if (gimple_simplify_501 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q31))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q31))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
						    if (gimple_simplify_501 (res_op, seq, valueize, type, captures))
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
			      case RSHIFT_EXPR:
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
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_502 (res_op, seq, valueize, type, captures))
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_502 (res_op, seq, valueize, type, captures))
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
			      case LROTATE_EXPR:
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
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_503 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_503 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
			      case RROTATE_EXPR:
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
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_503 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_503 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_499 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
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
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (gimple_simplify_500 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    if (gimple_simplify_501 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				    if (gimple_simplify_501 (res_op, seq, valueize, type, captures))
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
		  if (gimple_truth_valued_p (_q20, valueize))
		    {
		      if (gimple_truth_valued_p (_q21, valueize))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1
)
			      {
				gimple_seq *lseq = seq;
				if (lseq
				    && (!single_use (captures[0])))
				  lseq = NULL;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1699;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[2];
				    gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail1699;
				    res_op->ops[0] = _r1;
				  }
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1699:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      case MIN_EXPR:
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_504 (res_op, seq, valueize, type, captures, MIN_EXPR, MAX_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_504 (res_op, seq, valueize, type, captures, MIN_EXPR, MAX_EXPR))
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
	      case MAX_EXPR:
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_504 (res_op, seq, valueize, type, captures, MAX_EXPR, MIN_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_504 (res_op, seq, valueize, type, captures, MAX_EXPR, MIN_EXPR))
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
	      case LROTATE_EXPR:
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_505 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_505 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
	      case RROTATE_EXPR:
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_505 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_505 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
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
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1700;
		    {
		      res_op->set_op (VEC_COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1700;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1700;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 936, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1700:;
		  }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
		      return true;
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
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
		      return true;
		  }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
		      return true;
		  }
	          break;
	        }
	      case ORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNEQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TANF (gimple_match_op *res_op, gimple_seq *seq,
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
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_641 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_ATANF))
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
gimple_simplify_CFN_BUILT_IN_TAN (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_641 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_ATAN))
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
gimple_simplify_CFN_BUILT_IN_TANL (gimple_match_op *res_op, gimple_seq *seq,
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
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_641 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_ATANL))
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
gimple_simplify_CFN_TAN (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_641 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_ATAN))
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
gimple_simplify_CFN_BUILT_IN_SIN (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_ATAN, CFN_BUILT_IN_SQRT, CFN_BUILT_IN_COPYSIGN))
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
gimple_simplify_CFN_BUILT_IN_SINHF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ATANHF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_ATANHF, CFN_BUILT_IN_SQRTF))
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
gimple_simplify_CFN_BUILT_IN_TRUNCF16 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF16))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF128X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128X))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF32X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_FLOORF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X, CFN_BUILT_IN_TRUNCF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF32 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_CEILF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_CEIL (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_CEIL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_CEIL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_CEIL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTL, CFN_BUILT_IN_NEARBYINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTL, CFN_BUILT_IN_NEARBYINTF))
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
	      case CFN_BUILT_IN_NEARBYINTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL, CFN_BUILT_IN_RINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL, CFN_BUILT_IN_RINTF))
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
	      case CFN_BUILT_IN_RINTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLFLOORL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL, CFN_BUILT_IN_LLFLOOR))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL, CFN_BUILT_IN_LLFLOORF))
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
      if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL))
        return true;
    }
  }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLFLOORL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL, CFN_BUILT_IN_LFLOORL, CFN_BUILT_IN_LLFLOORL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUNDL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL, CFN_BUILT_IN_LLROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL, CFN_BUILT_IN_LLROUNDF))
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
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL, CFN_BUILT_IN_LROUNDL, CFN_BUILT_IN_LLROUNDL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LCEIL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEIL, CFN_BUILT_IN_LCEILF))
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
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEIL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IRINT (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT, CFN_BUILT_IN_IRINTF))
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
      if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINT, CFN_BUILT_IN_LRINT, CFN_BUILT_IN_LLRINT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LCEILF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LCEILF))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF, CFN_BUILT_IN_LROUNDF, CFN_BUILT_IN_LLROUNDF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_LLRINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_LLRINT))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_IRINT, CFN_LRINT, CFN_LLRINT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_SIGNBIT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_658 (res_op, seq, valueize, type, captures, CFN_SIGNBIT))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_659 (res_op, seq, valueize, type, captures, CFN_SIGNBIT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_CTZ (gimple_match_op *res_op, gimple_seq *seq,
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_671 (res_op, seq, valueize, type, captures, CFN_CTZ))
		      return true;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_CTZ))
		      return true;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_673 (res_op, seq, valueize, type, captures, CFN_CTZ))
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
		  case NEGATE_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_669 (res_op, seq, valueize, type, captures, CFN_CTZ))
			  return true;
		      }
		      break;
		    }
		  case ABS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_670 (res_op, seq, valueize, type, captures, CFN_CTZ))
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
}
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_PARITYLL (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_680 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
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
				    if (gimple_simplify_682 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
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
				    if (gimple_simplify_682 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
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
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
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
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
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
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
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
				      if (gimple_simplify_681 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
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
		    if (gimple_simplify_683 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
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
		    if (gimple_simplify_685 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
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
		    if (gimple_simplify_685 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
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
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
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
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
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
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
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
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
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
    if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_IOR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q30 = gimple_assign_rhs1 (_a2);
				      _q30 = do_valueize (valueize, _q30);
				      tree _q31 = gimple_assign_rhs2 (_a2);
				      _q31 = do_valueize (valueize, _q31);
				      if (tree_swap_operands_p (_q30, _q31))
				        std::swap (_q30, _q31);
				      switch (TREE_CODE (_q31))
				        {
					case VECTOR_CST:
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					      if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
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
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
		      return true;
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1914;
			  {
			    res_op->set_op (BIT_IOR_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1914;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1914;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1914:;
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
gimple_simplify_PLUS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1964;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1964:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_53 (res_op, seq, valueize, type, captures))
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
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_54 (res_op, seq, valueize, type, captures, PLUS_EXPR, PLUS_EXPR))
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
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_54 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR))
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
		  if (integer_zerop (_q21))
		    {
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
				      switch (TREE_CODE (_q50))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q50))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  if (integer_zerop (_q51))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
								if (gimple_simplify_55 (res_op, seq, valueize, type, captures))
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
				  if (integer_zerop (_q21))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case MAX_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      tree _q61 = gimple_assign_rhs2 (_a3);
						      _q61 = do_valueize (valueize, _q61);
						      if (tree_swap_operands_p (_q60, _q61))
						        std::swap (_q60, _q61);
						      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
							{
							  if (integer_zerop (_q61))
							    {
							      {
								tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
								if (gimple_simplify_55 (res_op, seq, valueize, type, captures))
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
	      case MULT_EXPR:
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
			      case PLUS_EXPR:
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
 wi::overflow_type ovf1;
 wi::overflow_type ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[4]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::add (mul, wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 int_range_max vr0;
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE
 && get_global_range_query ()->range_of_expr (vr0, captures[2])
 && !vr0.varying_p () && !vr0.undefined_p ())
 {
 wide_int wmin0 = vr0.lower_bound ();
 wide_int wmax0 = vr0.upper_bound ();
 wmin0 = wi::mul (wmin0, wi::to_wide (captures[4]), TYPE_SIGN (type), &ovf1);
 wmax0 = wi::mul (wmax0, wi::to_wide (captures[4]), TYPE_SIGN (type), &ovf2);
 if (ovf1 == wi::OVF_NONE && ovf2 == wi::OVF_NONE)
 {
 wi::add (wmin0, mul, TYPE_SIGN (type), &ovf1);
 wi::add (wmax0, mul, TYPE_SIGN (type), &ovf2);
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
							      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1965;
							      {
								res_op->set_op (PLUS_EXPR, type, 2);
								{
								  tree _o1[2], _r1;
								  _o1[0] = captures[2];
								  _o1[1] = captures[4];
								  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								  tem_op.resimplify (lseq, valueize);
								  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								  if (!_r1) goto next_after_fail1965;
								  res_op->ops[0] = _r1;
								}
								res_op->ops[1] =  wide_int_to_tree (type, add);
								res_op->resimplify (lseq, valueize);
								if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1025, __FILE__, __LINE__, true);
								return true;
							      }
next_after_fail1965:;
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
	      case LSHIFT_EXPR:
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
			      case LSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_56 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			      if (gimple_simplify_57 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
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
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    if (gimple_simplify_58 (res_op, seq, valueize, type, captures))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
      if (gimple_simplify_53 (res_op, seq, valueize, type, captures))
        return true;
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		    if (gimple_simplify_58 (res_op, seq, valueize, type, captures))
		      return true;
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (integer_onep (_q31))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			    if (gimple_simplify_59 (res_op, seq, valueize, type, captures))
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
		  if (integer_onep (_q21))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			    if (gimple_simplify_59 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
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
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					      return true;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_60 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
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
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q60, _q61 };
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
					switch (TREE_CODE (_q51))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
						if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case BIT_XOR_EXPR:
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
			      case BIT_AND_EXPR:
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
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case BIT_IOR_EXPR:
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
			      case BIT_AND_EXPR:
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
					    if (gimple_simplify_60 (res_op, seq, valueize, type, captures))
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
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
							{
							  if (integer_all_onesp (_p1))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
								if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
								  return true;
							      }
							    }
						        }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
						    {
						      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
							{
							  if (integer_all_onesp (_p1))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
								if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree _q21_pops[1];
					if (gimple_nop_convert (_q21, _q21_pops, valueize))
					  {
					    tree _q70 = _q21_pops[0];
					    switch (TREE_CODE (_q70))
					      {
					      case SSA_NAME:
					        if (gimple *_d3 = get_def (valueize, _q70))
					          {
						    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						      switch (gimple_assign_rhs_code (_a3))
							{
							case BIT_IOR_EXPR:
							  {
							    tree _q80 = gimple_assign_rhs1 (_a3);
							    _q80 = do_valueize (valueize, _q80);
							    tree _q81 = gimple_assign_rhs2 (_a3);
							    _q81 = do_valueize (valueize, _q81);
							    if (tree_swap_operands_p (_q80, _q81))
							      std::swap (_q80, _q81);
							    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
							      {
								if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
								  {
								    if (integer_all_onesp (_p1))
								      {
									{
									  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
									  if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
									    return true;
									}
								      }
								  }
							      }
							    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
							      {
								if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
								  {
								    if (integer_all_onesp (_p1))
								      {
									{
									  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
									  if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			      if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			  return true;
		      }
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
			      case BIT_AND_EXPR:
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
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case BIT_AND_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (tree_swap_operands_p (_q70, _q71))
									  std::swap (_q70, _q71);
									switch (TREE_CODE (_q71))
									  {
									  case INTEGER_CST:
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q60, _q70, _q71 };
										if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
						        break;
						      }
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1, _q60, _q61 };
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q30 };
				    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (integer_zerop (_q22))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case COND_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
					{
					  if (integer_zerop (_q61))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1966;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[0] = unshare_expr (res_op->ops[0]);
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1966:;
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
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case COND_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
					{
					  if (integer_zerop (_q62))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1967;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[0] = unshare_expr (res_op->ops[0]);
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1967:;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
							case GE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
							case GT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case NE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
							case NE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case EQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
							case EQ_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
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
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
							case LT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
							case LE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case ORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
							case ORDERED_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
							case UNORDERED_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
							case GE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
							case GT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
							case LE_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
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
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
							case LT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LTGT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
							case LTGT_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
										    return true;
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
				  if (zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNEQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (zerop (_q82))
										{
										  {
										    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
							case UNEQ_EXPR:
							  {
							    tree _q90 = TREE_OPERAND (_q80, 0);
							    if ((TREE_CODE (_q90) == SSA_NAME
							         || is_gimple_min_invariant (_q90)))
							      {
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = TREE_OPERAND (_q80, 1);
								if ((TREE_CODE (_q91) == SSA_NAME
								     || is_gimple_min_invariant (_q91)))
								  {
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
										    return true;
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
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
						      case GE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
										  return true;
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
						      case GT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case EQ_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case NE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
						      case NE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case NE_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case EQ_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
						      case EQ_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
										  return true;
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
						      case LT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
						      case LE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNORDERED_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case ORDERED_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
						      case ORDERED_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case ORDERED_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case UNORDERED_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
						      case UNORDERED_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNLT_EXPR:
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
						      case GE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNLE_EXPR:
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case GT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
						      case GT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNGT_EXPR:
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LE_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
						      case LE_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNGE_EXPR:
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
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
						      case LT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case UNEQ_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case LTGT_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
						      case LTGT_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    case LTGT_EXPR:
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
				if (tree_swap_operands_p (_q30, _q31))
				  std::swap (_q30, _q31);
				if (zerop (_q22))
				  {
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d2 = get_def (valueize, _p1))
				          {
					    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					      switch (gimple_assign_rhs_code (_a2))
						{
						case COND_EXPR:
						  {
						    tree _q80 = gimple_assign_rhs1 (_a2);
						    _q80 = do_valueize (valueize, _q80);
						    tree _q81 = gimple_assign_rhs2 (_a2);
						    _q81 = do_valueize (valueize, _q81);
						    tree _q82 = gimple_assign_rhs3 (_a2);
						    _q82 = do_valueize (valueize, _q82);
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q80))
						          {
							    if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							      switch (gimple_assign_rhs_code (_a3))
								{
								case UNEQ_EXPR:
								  {
								    tree _q90 = gimple_assign_rhs1 (_a3);
								    _q90 = do_valueize (valueize, _q90);
								    tree _q91 = gimple_assign_rhs2 (_a3);
								    _q91 = do_valueize (valueize, _q91);
								    if (tree_swap_operands_p (_q90, _q91))
								      std::swap (_q90, _q91);
								    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								      {
									if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									  {
									    if (zerop (_q82))
									      {
										{
										  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
						      case UNEQ_EXPR:
						        {
							  tree _q90 = TREE_OPERAND (_q80, 0);
							  if ((TREE_CODE (_q90) == SSA_NAME
							       || is_gimple_min_invariant (_q90)))
							    {
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = TREE_OPERAND (_q80, 1);
							      if ((TREE_CODE (_q91) == SSA_NAME
							           || is_gimple_min_invariant (_q91)))
							        {
								  _q91 = do_valueize (valueize, _q91);
								  if (tree_swap_operands_p (_q90, _q91))
								    std::swap (_q90, _q91);
								  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								    {
								      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									{
									  if (zerop (_q82))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
										  return true;
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
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (integer_zerop (_q22))
		    {
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
					  if (integer_zerop (_q61))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1968;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1968:;
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
		  if (integer_zerop (_q21))
		    {
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
					  if (integer_zerop (_q62))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
						const enum tree_code op = PLUS_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1969;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1969:;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR, GE_EXPR))
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
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR, GT_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case NE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, EQ_EXPR, NE_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case EQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR, EQ_EXPR))
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
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
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
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR, LT_EXPR))
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
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, GT_EXPR, LE_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case ORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNORDERED_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
			          break;
			        }
			      case UNLT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLT_EXPR, GE_EXPR))
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
			          break;
			        }
			      case UNLE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case GT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNLE_EXPR, GT_EXPR))
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
			          break;
			        }
			      case UNGT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LE_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGT_EXPR, LE_EXPR))
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
			          break;
			        }
			      case UNGE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
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
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNGE_EXPR, LT_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LTGT_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
				  if (integer_zerop (_q22))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a3);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a3);
						      _q81 = do_valueize (valueize, _q81);
						      tree _q82 = gimple_assign_rhs3 (_a3);
						      _q82 = do_valueize (valueize, _q82);
						      switch (TREE_CODE (_q80))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q80))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case UNEQ_EXPR:
								    {
								      tree _q90 = gimple_assign_rhs1 (_a4);
								      _q90 = do_valueize (valueize, _q90);
								      tree _q91 = gimple_assign_rhs2 (_a4);
								      _q91 = do_valueize (valueize, _q91);
								      if (tree_swap_operands_p (_q90, _q91))
								        std::swap (_q90, _q91);
								      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
									{
									  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
									    {
									      if (integer_zerop (_q82))
										{
										  {
										    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, PLUS_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
		  case MINUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      switch (TREE_CODE (_q31))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q31))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
							    {
							      if (integer_all_onesp (_p1))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
								    if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
						        }
						      if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
							{
							  if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
							    {
							      if (integer_all_onesp (_p1))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
								    if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
				      case BIT_AND_EXPR:
				        {
					  tree _q50 = gimple_assign_rhs1 (_a2);
					  _q50 = do_valueize (valueize, _q50);
					  tree _q51 = gimple_assign_rhs2 (_a2);
					  _q51 = do_valueize (valueize, _q51);
					  if (tree_swap_operands_p (_q50, _q51))
					    std::swap (_q50, _q51);
					  {
					    tree _q31_pops[1];
					    if (gimple_nop_convert (_q31, _q31_pops, valueize))
					      {
						tree _q80 = _q31_pops[0];
						switch (TREE_CODE (_q80))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q80))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case BIT_IOR_EXPR:
							      {
								tree _q90 = gimple_assign_rhs1 (_a3);
								_q90 = do_valueize (valueize, _q90);
								tree _q91 = gimple_assign_rhs2 (_a3);
								_q91 = do_valueize (valueize, _q91);
								if (tree_swap_operands_p (_q90, _q91))
								  std::swap (_q90, _q91);
								if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								  {
								    if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
								      {
									if (integer_all_onesp (_p1))
									  {
									    {
									      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
									      if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
									        return true;
									    }
									  }
								      }
								  }
								if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
								  {
								    if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
								      {
									if (integer_all_onesp (_p1))
									  {
									    {
									      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
									      if (gimple_simplify_61 (res_op, seq, valueize, type, captures))
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
		    }
		  default:;
		  }
	    }
	  break;
        default:;
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
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
		    if (gimple_simplify_63 (res_op, seq, valueize, type, captures))
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
		  case MINUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      {
			tree _q31_pops[1];
			if (gimple_nop_convert (_q31, _q31_pops, valueize))
			  {
			    tree _q50 = _q31_pops[0];
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
				  if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			    if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_64 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR))
				  return true;
			      }
			    }
		        }
		      if (CONSTANT_CLASS_P (_q30))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR))
				  return true;
			      }
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
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_64 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_nop_convert (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			      if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
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
		  case MINUS_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      {
			tree _q41_pops[1];
			if (gimple_nop_convert (_q41, _q41_pops, valueize))
			  {
			    tree _q60 = _q41_pops[0];
			    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
				  if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
			    if (gimple_simplify_62 (res_op, seq, valueize, type, captures))
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
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
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_64 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case MINUS_EXPR:
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
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q50, _q20 };
					if (gimple_simplify_66 (res_op, seq, valueize, type, captures))
					  return true;
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
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_67 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_67 (res_op, seq, valueize, type, captures))
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_64 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR))
			      return true;
			  }
		        }
		    }
		  if (CONSTANT_CLASS_P (_q20))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case POINTER_DIFF_EXPR:
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
			      case POINTER_DIFF_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_68 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
					if (gimple_simplify_68 (res_op, seq, valueize, type, captures))
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
			      case PLUS_EXPR:
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
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
						if (gimple_simplify_69 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
						if (gimple_simplify_69 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
			          break;
			        }
			      default:;
			      }
		        }
			{
			  switch (TREE_CODE (_p1))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				  if (!TYPE_SATURATING (type)
)
				    {
				      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
					{
					  if (TREE_CODE (TREE_TYPE (captures[1])) == INTEGER_TYPE
 && TREE_CODE (type) == INTEGER_TYPE
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
					    {
					      {
 wi::overflow_type min_ovf = wi::OVF_OVERFLOW,
 max_ovf = wi::OVF_OVERFLOW;
 tree inner_type = TREE_TYPE (captures[1]);
 wide_int w1
 = wide_int::from (wi::to_wide (captures[2]), TYPE_PRECISION (inner_type),
 TYPE_SIGN (inner_type));
 int_range_max vr;
 if (get_global_range_query ()->range_of_expr (vr, captures[1])
 && !vr.varying_p () && !vr.undefined_p ())
 {
 wide_int wmin0 = vr.lower_bound ();
 wide_int wmax0 = vr.upper_bound ();
 wi::add (wmin0, w1, TYPE_SIGN (inner_type), &min_ovf);
 wi::add (wmax0, w1, TYPE_SIGN (inner_type), &max_ovf);
 }
						  if (min_ovf == wi::OVF_NONE && max_ovf == wi::OVF_NONE
)
						    {
						      gimple_seq *lseq = seq;
						      if (lseq
						          && (!single_use (captures[0])))
						        lseq = NULL;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1970;
						      {
							res_op->set_op (NOP_EXPR, type, 1);
							{
							  tree _o1[2], _r1;
							  _o1[0] = captures[1];
							  _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[1]), w1);
							  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail1970;
							  res_op->ops[0] = _r1;
							}
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1026, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail1970:;
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
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_70 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
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
						  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
						    {
						      {
							tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
							if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
						    {
						      {
							tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
							if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if (integer_each_onep (_p1))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_72 (res_op, seq, valueize, type, captures))
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_71 (res_op, seq, valueize, type, captures))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  if (integer_each_onep (_p1))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_72 (res_op, seq, valueize, type, captures))
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
	      case MULT_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
					if (gimple_simplify_73 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_74 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
			if (gimple_simplify_74 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, PLUS_EXPR))
			  return true;
		      }
		    }
		  if (integer_nonzerop (_q20))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      if (gimple_simplify_76 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
		  if (integer_nonzerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      if (gimple_simplify_76 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_zero_one_valued_p (_q21, valueize))
				    {
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
		if (gimple_zero_one_valued_p (_q20, valueize))
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q21))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					  if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			      if (gimple_simplify_57 (res_op, seq, valueize, type, captures))
			        return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case LSHIFT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < element_precision (type)
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) < element_precision (type)
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || optab_handler (smul_optab,
 TYPE_MODE (type)) != CODE_FOR_nothing)
)
						      {
							{
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t)) t = unsigned_type_for (t);
 unsigned int prec = element_precision (type);
 wide_int w = wi::set_bit_in_zero (tree_to_uhwi (captures[2]), prec);
 w += wi::set_bit_in_zero (tree_to_uhwi (captures[4]), prec);
 tree cst = wide_int_to_tree (VECTOR_TYPE_P (t) ? TREE_TYPE (t)
 : t, w);
 cst = build_uniform_cst (t, cst);
							    gimple_seq *lseq = seq;
							    if (lseq
							        && (!single_use (captures[0])
							            || !single_use (captures[3])))
							      lseq = NULL;
							    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1971;
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
								      if (!_r2) goto next_after_fail1971;
								    }
								  else
								    _r2 = _o2[0];
								  _o1[0] = _r2;
								}
								_o1[1] =  cst;
								gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								tem_op.resimplify (lseq, valueize);
								_r1 = maybe_push_res_to_seq (&tem_op, lseq);
								if (!_r1) goto next_after_fail1971;
								res_op->ops[0] = _r1;
							      }
							      res_op->resimplify (lseq, valueize);
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1027, __FILE__, __LINE__, true);
							      return true;
							    }
next_after_fail1971:;
							}
						      }
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
			      }
			    break;
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1972;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1972:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1973;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1973:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1974;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1974:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1975;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1975:;
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
	      case MULT_EXPR:
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
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
		if (gimple_zero_one_valued_p (_q30, valueize))
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q31))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q50 = gimple_assign_rhs1 (_a2);
				    _q50 = do_valueize (valueize, _q50);
				    tree _q51 = gimple_assign_rhs2 (_a2);
				    _q51 = do_valueize (valueize, _q51);
				    if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
					  if (gimple_simplify_77 (res_op, seq, valueize, type, captures))
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
	      case MULT_EXPR:
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
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				    }
			          break;
			        }
			      case CEIL_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				    }
			          break;
			        }
			      case FLOOR_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				    }
			          break;
			        }
			      case ROUND_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				    }
			          break;
			        }
			      case CEIL_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				    }
			          break;
			        }
			      case FLOOR_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				    }
			          break;
			        }
			      case ROUND_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_MOD_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
	      case TRUNC_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case TRUNC_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR))
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
	      case CEIL_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case CEIL_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case CEIL_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR))
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
	      case FLOOR_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case FLOOR_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case FLOOR_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR))
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
	      case ROUND_MOD_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case ROUND_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case ROUND_DIV_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      {
								tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
								if (gimple_simplify_78 (res_op, seq, valueize, type, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR))
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	    {
	      {
 tree tem = const_unop (NEGATE_EXPR, type, captures[1]);
		  if (!TREE_OVERFLOW (tem) || !flag_trapping_math
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1976;
		      {
			res_op->set_op (MINUS_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  tem;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1028, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1976:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (SCALAR_FLOAT_TYPE_P (type)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1977;
	    {
	      res_op->set_op (MULT_EXPR, type, 2);
	      res_op->ops[0] = captures[0];
	      res_op->ops[1] =  build_real (type, dconst2);
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1029, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail1977:;
	  }
	else
	  {
	    if (INTEGRAL_TYPE_P (type)
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1978;
		{
		  res_op->set_op (MULT_EXPR, type, 2);
		  res_op->ops[0] = captures[0];
		  res_op->ops[1] =  build_int_cst (type, 2);
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1030, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail1978:;
	      }
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1979;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1979;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1979;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1979:;
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1980;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1980;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1980;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1980:;
		      }
		  }
		  if (integer_each_onep (_q21))
		    {
		      if (integer_zerop (_q22))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21, _q22 };
			    if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
 && (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1981;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1981;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1981;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1981:;
		      }
		  }
	          break;
	        }
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
				  case VEC_COND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      tree _q42 = gimple_assign_rhs3 (_a2);
				      _q42 = do_valueize (valueize, _q42);
				      if (integer_each_onep (_q41))
					{
					  if (integer_zerop (_q42))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
						if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_COND_EXPR:
				    {
				      tree _q30 = gimple_assign_rhs1 (_a2);
				      _q30 = do_valueize (valueize, _q30);
				      tree _q31 = gimple_assign_rhs2 (_a2);
				      _q31 = do_valueize (valueize, _q31);
				      tree _q32 = gimple_assign_rhs3 (_a2);
				      _q32 = do_valueize (valueize, _q32);
				      if (integer_each_onep (_q31))
					{
					  if (integer_zerop (_q32))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q30, _q31, _q32 };
						if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
		  if (integer_each_onep (_q31))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
			    if (gimple_simplify_79 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RDIV_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_80 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
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
								    }
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
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
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTLL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
								    }
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTLL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
				      default:;
				      }
			          }
			        break;
			      case CFN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
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
								    }
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_POPCOUNT:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
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
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTIMAX:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
								    }
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTIMAX:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q50))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q50))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
								    }
								  case BIT_IOR_EXPR:
								    {
								      tree _q60 = gimple_assign_rhs1 (_a4);
								      _q60 = do_valueize (valueize, _q60);
								      tree _q61 = gimple_assign_rhs2 (_a4);
								      _q61 = do_valueize (valueize, _q61);
								      if (tree_swap_operands_p (_q60, _q61))
								        std::swap (_q60, _q61);
								      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d5 = get_def (valueize, _p1))
									        {
										  if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										    switch (gimple_call_combined_fn (_c5))
										      {
										      case CFN_BUILT_IN_POPCOUNTL:
										        if (gimple_call_num_args (_c5) == 1)
										          {
											    tree _q90 = gimple_call_arg (_c5, 0);
											    _q90 = do_valueize (valueize, _q90);
											    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
	          break;
	        }
	      case VEC_PERM_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (gimple_vec_same_elem_p (_q31, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if (gimple_vec_same_elem_p (_q30, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1982;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1982;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1982:;
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
							    if (gimple_simplify_86 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
	      case CFN_BUILT_IN_LOG:
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
				case CFN_BUILT_IN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG))
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
	      case CFN_BUILT_IN_POPCOUNT:
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
				case CFN_BUILT_IN_POPCOUNT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
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
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_AND_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNT))
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
		          }
		        break;
		      default:;
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
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
	      case CFN_BUILT_IN_LOG2:
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
				case CFN_BUILT_IN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2))
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
	      case CFN_BUILT_IN_LOGF:
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
				case CFN_BUILT_IN_LOGF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF))
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
	      case CFN_BUILT_IN_LOGL:
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
				case CFN_BUILT_IN_LOGL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL))
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
	      case CFN_BUILT_IN_POPCOUNTLL:
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
				case CFN_BUILT_IN_POPCOUNTLL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_AND_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
		          }
		        break;
		      default:;
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTLL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
	      case CFN_BUILT_IN_LOG10F:
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
				case CFN_BUILT_IN_LOG10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F))
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
	      case CFN_BUILT_IN_LOG10L:
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
				case CFN_BUILT_IN_LOG10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L))
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
	      case CFN_POPCOUNT:
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
				case CFN_POPCOUNT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
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
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_AND_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_POPCOUNT))
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
		          }
		        break;
		      default:;
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
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
	      case CFN_LOG:
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
				case CFN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG))
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
	      case CFN_BUILT_IN_POPCOUNTIMAX:
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
				case CFN_BUILT_IN_POPCOUNTIMAX:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_AND_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
		          }
		        break;
		      default:;
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTIMAX:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
	      case CFN_LOG2:
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
				case CFN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG2))
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
	      case CFN_BUILT_IN_POPCOUNTL:
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
				case CFN_BUILT_IN_POPCOUNTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_82 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
		    switch (TREE_CODE (_q20))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q20))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_AND_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_IOR_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
				case BIT_IOR_EXPR:
				  {
				    tree _q30 = gimple_assign_rhs1 (_a2);
				    _q30 = do_valueize (valueize, _q30);
				    tree _q31 = gimple_assign_rhs2 (_a2);
				    _q31 = do_valueize (valueize, _q31);
				    if (tree_swap_operands_p (_q30, _q31))
				      std::swap (_q30, _q31);
				    switch (TREE_CODE (_p1))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _p1))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q60 = gimple_call_arg (_c3, 0);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_AND_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      tree _q71 = gimple_assign_rhs2 (_a4);
								      _q71 = do_valueize (valueize, _q71);
								      if (tree_swap_operands_p (_q70, _q71))
								        std::swap (_q70, _q71);
								      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
									{
									  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
										  return true;
									      }
									    }
								        }
								      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
									{
									  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
										if (gimple_simplify_83 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
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
		          }
		        break;
		      default:;
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case MINUS_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    switch (TREE_CODE (_q40))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q40))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_q41))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q41))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
												  if (gimple_simplify_84 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
	      case CFN_LOG10:
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
				case CFN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_LOG10))
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
	      case CFN_BUILT_IN_LOG10:
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
				case CFN_BUILT_IN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
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
	      case CFN_BUILT_IN_LOG2F:
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
				case CFN_BUILT_IN_LOG2F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
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
	      case CFN_BUILT_IN_LOG2L:
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
				case CFN_BUILT_IN_LOG2L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_81 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L))
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
	      case VEC_PERM_EXPR:
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
			      case MULT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if (gimple_vec_same_elem_p (_q41, valueize))
				    {
				      if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q41, _q32, _p0 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if (gimple_vec_same_elem_p (_q40, valueize))
				    {
				      if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q40, _q32, _p0 };
					    if (gimple_simplify_85 (res_op, seq, valueize, type, captures))
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
  return false;
}

bool
gimple_simplify_BIT_FIELD_REF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case BIT_FIELD_REF:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      tree _q21 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 1);
		      if ((TREE_CODE (_q21) == SSA_NAME
		           || is_gimple_min_invariant (_q21)))
		        {
			  _q21 = do_valueize (valueize, _q21);
			  tree _q22 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 2);
			  if ((TREE_CODE (_q22) == SSA_NAME
			       || is_gimple_min_invariant (_q22)))
			    {
			      _q22 = do_valueize (valueize, _q22);
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1, _p2 };
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2803;
				{
				  res_op->set_op (BIT_FIELD_REF, type, 3);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[3];
				  res_op->ops[2] =  const_binop (PLUS_EXPR, bitsizetype, captures[2], captures[4]);
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1230, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2803:;
			      }
			    }
		        }
		    }
	          break;
	        }
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			if (! INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || type_has_mode_precision_p (TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2804;
			    {
			      res_op->set_op (BIT_FIELD_REF, type, 3);
			      res_op->ops[0] = captures[0];
			      res_op->ops[1] = captures[1];
			      res_op->ops[2] = captures[2];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1231, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2804:;
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
  if (integer_zerop (_p2))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (tree_int_cst_equal (captures[1], TYPE_SIZE (TREE_TYPE (captures[0])))
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2805;
	    {
	      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	      res_op->ops[0] = captures[0];
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1232, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2805:;
	  }
      }
    }
  {
    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
    if (TREE_CODE (TREE_TYPE (captures[0])) == COMPLEX_TYPE
 && tree_int_cst_equal (captures[1], TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))))
)
      {
	if (integer_zerop (captures[2])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2806;
	    {
	      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	      {
		tree _o1[1], _r1;
		_o1[0] = captures[0];
		gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		tem_op.resimplify (lseq, valueize);
		_r1 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r1) goto next_after_fail2806;
		res_op->ops[0] = _r1;
	      }
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1233, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2806:;
	  }
	else
	  {
	    if (tree_int_cst_equal (captures[2], TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0]))))
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2807;
		{
		  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[0];
		    gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail2807;
		    res_op->ops[0] = _r1;
		  }
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail2807:;
	      }
	  }
      }
    else
      {
	if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && (!
1
 || is_gimple_reg (captures[0]))
 && ((compare_tree_int (captures[1], TYPE_PRECISION (TREE_TYPE (captures[0]))) == 0
 && integer_zerop (captures[2]))
 || (BYTES_BIG_ENDIAN == WORDS_BIG_ENDIAN
 && canonicalize_math_after_vectorization_p ()
 && TYPE_PRECISION (TREE_TYPE (captures[0])) % BITS_PER_UNIT == 0
 && TYPE_PRECISION (type) % BITS_PER_UNIT == 0
 && compare_tree_int (captures[2], (BYTES_BIG_ENDIAN
 ? (TYPE_PRECISION (TREE_TYPE (captures[0]))
 - TYPE_PRECISION (type))
 : 0)) == 0))
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2808;
	    {
	      res_op->set_op (NOP_EXPR, type, 1);
	      res_op->ops[0] = captures[0];
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1235, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2808:;
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
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
		    if (VECTOR_TYPE_P (TREE_TYPE (captures[0]))
 && tree_fits_uhwi_p (TYPE_SIZE (type))
 && ((tree_to_uhwi (TYPE_SIZE (type))
 == tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))))
 || (VECTOR_TYPE_P (type)
 && (tree_to_uhwi (TYPE_SIZE (TREE_TYPE (type)))
 == tree_to_uhwi (TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))))))
)
		      {
			{
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
 tree eltype = TREE_TYPE (TREE_TYPE (ctor));
 unsigned HOST_WIDE_INT width = tree_to_uhwi (TYPE_SIZE (eltype));
 unsigned HOST_WIDE_INT n = tree_to_uhwi (captures[1]);
 unsigned HOST_WIDE_INT idx = tree_to_uhwi (captures[2]);
			    if (n != 0
 && (idx % width) == 0
 && (n % width) == 0
 && known_le ((idx + n) / width,
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (ctor)))
)
			      {
				{
 idx = idx / width;
 n = n / width;
 poly_uint64 k = 1;
 if (CONSTRUCTOR_NELTS (ctor) != 0)
 {
 tree cons_elem = TREE_TYPE (CONSTRUCTOR_ELT (ctor, 0)->value);
 if (TREE_CODE (cons_elem) == VECTOR_TYPE)
 k = TYPE_VECTOR_SUBPARTS (cons_elem);
 }
 unsigned HOST_WIDE_INT elt, count, const_k;
				    if (multiple_p (idx, k, &elt) && multiple_p (n, k, &count)
)
				      {
					if (CONSTRUCTOR_NELTS (ctor) == 0
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2809;
					    {
					      tree tem;
					      tem =  build_zero_cst (type);
					      res_op->set_value (tem);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2809:;
					  }
					else
					  {
					    if (count == 1
)
					      {
						if (elt < CONSTRUCTOR_NELTS (ctor)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2810;
						    {
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, elt)->value;
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1237, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2810:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2811;
						    {
						      tree tem;
						      tem =  build_zero_cst (type);
						      res_op->set_value (tem);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1238, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2811:;
						  }
					      }
					    else
					      {
						if (single_use (captures[0])
)
						  {
						    {
 vec<constructor_elt, va_gc> *vals;
 vec_alloc (vals, count);
 bool constant_p = true;
 tree res;
 for (unsigned i = 0;
 i < count && elt + i < CONSTRUCTOR_NELTS (ctor); ++i)
 {
 tree e = CONSTRUCTOR_ELT (ctor, elt + i)->value;
 CONSTRUCTOR_APPEND_ELT (vals, NULL_TREE, e);
 if (!CONSTANT_CLASS_P (e))
 constant_p = false;
 }
 tree evtype = (types_match (TREE_TYPE (type),
 TREE_TYPE (TREE_TYPE (ctor)))
 ? type
 : build_vector_type (TREE_TYPE (TREE_TYPE (ctor)),
 count * k));
 res = (constant_p ? build_vector_from_ctor (evtype, vals)
 : (
1
 ? NULL_TREE : build_constructor (evtype, vals)));
							if (res
)
							  {
							    gimple_seq *lseq = seq;
							    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2812;
							    {
							      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							      res_op->ops[0] =  res;
							      res_op->resimplify (lseq, valueize);
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1239, __FILE__, __LINE__, true);
							      return true;
							    }
next_after_fail2812:;
							  }
						    }
						  }
					      }
					  }
				      }
				    else
				      {
					if (k.is_constant (&const_k)
 && idx + n <= (idx / const_k + 1) * const_k
)
					  {
					    if (CONSTRUCTOR_NELTS (ctor) <= idx / const_k
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2813;
						{
						  tree tem;
						  tem =  build_zero_cst (type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1240, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2813:;
					      }
					    else
					      {
						if (n == const_k
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2814;
						    {
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1241, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2814:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2815;
						    {
						      res_op->set_op (BIT_FIELD_REF, type, 3);
						      res_op->ops[0] =  CONSTRUCTOR_ELT (ctor, idx / const_k)->value;
						      res_op->ops[1] = captures[1];
						      res_op->ops[2] =  bitsize_int ((idx % const_k) * width);
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2815:;
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
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_q22))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _p2 };
			  {
 tree elem_type = TREE_TYPE (TREE_TYPE (captures[0]));
 poly_uint64 elem_size = tree_to_poly_uint64 (TYPE_SIZE (elem_type));
 poly_uint64 size = tree_to_poly_uint64 (TYPE_SIZE (type));
 unsigned HOST_WIDE_INT nelts, idx;
 unsigned HOST_WIDE_INT nelts_op = 0;
			      if (constant_multiple_p (tree_to_poly_uint64 (captures[5]), elem_size, &idx)
 && VECTOR_CST_NELTS (captures[3]).is_constant (&nelts)
 && (known_eq (size, elem_size)
 || (constant_multiple_p (size, elem_size, &nelts_op)
 && pow2p_hwi (nelts_op)))
)
				{
				  {
 bool ok = true;
 if (known_eq (size, elem_size))
 idx = TREE_INT_CST_LOW (VECTOR_CST_ELT (captures[3], idx)) % (2 * nelts);
 else
 {
 unsigned start
 = TREE_INT_CST_LOW (vector_cst_elt (captures[3], idx)) % (2 * nelts);
 unsigned end
 = (TREE_INT_CST_LOW (vector_cst_elt (captures[3], idx + nelts_op - 1))
 % (2 * nelts));
 if ((start < nelts) != (end < nelts))
 ok = false;
 else
 for (unsigned HOST_WIDE_INT i = 1; i != nelts_op; i++)
 {
 if ((TREE_INT_CST_LOW (vector_cst_elt (captures[3], idx + i))
 % (2 * nelts) - 1)
 != (TREE_INT_CST_LOW (vector_cst_elt (captures[3], idx + i - 1))
 % (2 * nelts)))
 {
 ok = false;
 break;
 }
 }
 if (start % nelts_op)
 ok = false;
 idx = start;
 }
				      if (ok
)
					{
					  if (idx < nelts
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2816;
					      {
						res_op->set_op (BIT_FIELD_REF, type, 3);
						res_op->ops[0] = captures[1];
						res_op->ops[1] = captures[4];
						res_op->ops[2] =  bitsize_int (idx * elem_size);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail2816:;
					    }
					  else
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2817;
					      {
						res_op->set_op (BIT_FIELD_REF, type, 3);
						res_op->ops[0] = captures[2];
						res_op->ops[1] = captures[4];
						res_op->ops[2] =  bitsize_int ((idx - nelts) * elem_size);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1244, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail2817:;
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
	      case BIT_INSERT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1, _p2 };
		    {
 unsigned HOST_WIDE_INT isize;
 if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])))
 isize = TYPE_PRECISION (TREE_TYPE (captures[1]));
 else
 isize = tree_to_uhwi (TYPE_SIZE (TREE_TYPE (captures[1])));
			if ((!INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || type_has_mode_precision_p (TREE_TYPE (captures[1])))
 && wi::leu_p (wi::to_wide (captures[2]), wi::to_wide (captures[4]))
 && wi::leu_p (wi::to_wide (captures[4]) + wi::to_wide (captures[3]),
 wi::to_wide (captures[2]) + isize)
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2818;
			    {
			      res_op->set_op (BIT_FIELD_REF, type, 3);
			      res_op->ops[0] = captures[1];
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] =  wide_int_to_tree (bitsizetype,
 wi::to_wide (captures[4])
 - wi::to_wide (captures[2]));
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1245, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2818:;
			  }
			else
			  {
			    if (wi::eq_p (wi::to_wide (captures[2]), wi::to_wide (captures[4]))
 && compare_tree_int (captures[3], isize) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2819;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1246, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2819:;
			      }
			    else
			      {
				if (wi::geu_p (wi::to_wide (captures[2]),
 wi::to_wide (captures[4]) + wi::to_wide (captures[3]))
 || wi::geu_p (wi::to_wide (captures[4]),
 wi::to_wide (captures[2]) + isize)
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2820;
				    {
				      res_op->set_op (BIT_FIELD_REF, type, 3);
				      res_op->ops[0] = captures[0];
				      res_op->ops[1] = captures[3];
				      res_op->ops[2] = captures[4];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1247, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2820:;
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
gimple_simplify_CFN_COND_MUL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    if (real_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _p3 };
			  {
 tree signs = sign_mask_for (type);
			      if (signs
)
				{
				  {
 tree inttype = TREE_TYPE (signs);
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2838;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					{
					  tree _o1[4], _r1;
					  _o1[0] = captures[0];
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[1];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2838;
					    _o1[1] = _r2;
					  }
					  {
					    tree _o2[2], _r2;
					    {
					      tree _o3[1], _r3;
					      _o3[0] = captures[2];
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o3[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r3) goto next_after_fail2838;
					      _o2[0] = _r3;
					    }
					    _o2[1] =  signs;
					    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2838;
					    _o1[2] = _r2;
					  }
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2838;
					    _o1[3] = _r2;
					  }
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, inttype, _o1[0], _o1[1], _o1[2], _o1[3]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2838;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2838:;
				  }
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    if (real_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p2, _q31, _p3 };
			  {
 tree signs = sign_mask_for (type);
			      if (signs
)
				{
				  {
 tree inttype = TREE_TYPE (signs);
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2839;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					{
					  tree _o1[4], _r1;
					  _o1[0] = captures[0];
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[1];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2839;
					    _o1[1] = _r2;
					  }
					  {
					    tree _o2[2], _r2;
					    {
					      tree _o3[1], _r3;
					      _o3[0] = captures[2];
					      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o3[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r3) goto next_after_fail2839;
					      _o2[0] = _r3;
					    }
					    _o2[1] =  signs;
					    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2839;
					    _o1[2] = _r2;
					  }
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, inttype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail2839;
					    _o1[3] = _r2;
					  }
					  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, inttype, _o1[0], _o1[1], _o1[2], _o1[3]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail2839;
					  res_op->ops[0] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1264, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2839:;
				  }
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
gimple_simplify_CFN_COND_LEN_ADD (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4, tree _p5)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_truep (_p0))
    {
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
				tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q42, _p4, _p5 };
				if (ANY_INTEGRAL_TYPE_P (type)
 || (FLOAT_TYPE_P (type)
 && fold_real_zero_addition_p (type, NULL_TREE, captures[3], 0))
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2913;
				    {
				      res_op->set_op (CFN_COND_LEN_ADD, type, 6);
				      res_op->ops[0] = captures[1];
				      res_op->ops[1] = captures[0];
				      res_op->ops[2] = captures[2];
				      res_op->ops[3] = captures[0];
				      res_op->ops[4] = captures[4];
				      res_op->ops[5] = captures[5];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1270, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2913:;
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
    }
  return false;
}
#pragma GCC diagnostic pop
