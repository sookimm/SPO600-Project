/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_nop_convert (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
		      {
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 0, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		  }
	          break;
	        }
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _p0 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_p0) == SSA_NAME
		       || is_gimple_min_invariant (_p0)))
		    {
		      _p0 = do_valueize (valueize, _p0);
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[0]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[0])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[0])))
)
			  {
			    {
			      res_ops[0] = captures[0];
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1, __FILE__, __LINE__, false);
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
  return false;
}

bool
gimple_with_known_nonzero_bits (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (gimple_with_known_nonzero_bits_1 (t, valueize))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { t };
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 39, __FILE__, __LINE__, false);
	  return true;
	}
      }
    }
  return false;
}

bool
gimple_unsigned_integer_sat_add (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
			      case PLUS_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  {
				    tree _p1_pops[2];
				    if (gimple_usadd_overflow_mask (_p1, _p1_pops, valueize))
				      {
					tree _q50 = _p1_pops[0];
					tree _q51 = _p1_pops[1];
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					      {
						{
						  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (types_match (type, captures[0], captures[1])
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 44, __FILE__, __LINE__, false);
							    return true;
							  }
							}
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
						  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						    {
						      if (types_match (type, captures[0], captures[1])
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 44, __FILE__, __LINE__, false);
							    return true;
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
			      case REALPART_EXPR:
			        {
				  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
				  if ((TREE_CODE (_q20) == SSA_NAME
				       || is_gimple_min_invariant (_q20)))
				    {
				      _q20 = do_valueize (valueize, _q20);
				      switch (TREE_CODE (_q20))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q20))
					    {
					      if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					        switch (gimple_call_combined_fn (_c3))
						  {
						  case CFN_ADD_OVERFLOW:
						    if (gimple_call_num_args (_c3) == 2)
						      {
							tree _q30 = gimple_call_arg (_c3, 0);
							_q30 = do_valueize (valueize, _q30);
							tree _q31 = gimple_call_arg (_c3, 1);
							_q31 = do_valueize (valueize, _q31);
							if (tree_swap_operands_p (_q30, _q31))
							  std::swap (_q30, _q31);
							switch (TREE_CODE (_p1))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _p1))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case NEGATE_EXPR:
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
										    case IMAGPART_EXPR:
										      {
											tree _q70 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
											if ((TREE_CODE (_q70) == SSA_NAME
											     || is_gimple_min_invariant (_q70)))
											  {
											    _q70 = do_valueize (valueize, _q70);
											    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
											      {
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
												  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												    {
												      if (types_match (type, captures[0], captures[1])
)
													{
													  {
													    res_ops[0] = captures[0];
													    res_ops[1] = captures[1];
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
													    return true;
													  }
													}
												    }
												}
											      }
											  }
										        break;
										      }
										    CASE_CONVERT:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											switch (TREE_CODE (_q70))
											  {
											  case SSA_NAME:
											    if (gimple *_d6 = get_def (valueize, _q70))
											      {
												if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												  switch (gimple_assign_rhs_code (_a6))
												    {
												    case NE_EXPR:
												      {
													tree _q80 = gimple_assign_rhs1 (_a6);
													_q80 = do_valueize (valueize, _q80);
													tree _q81 = gimple_assign_rhs2 (_a6);
													_q81 = do_valueize (valueize, _q81);
													if (tree_swap_operands_p (_q80, _q81))
													  std::swap (_q80, _q81);
													switch (TREE_CODE (_q80))
													  {
													  case SSA_NAME:
													    if (gimple *_d7 = get_def (valueize, _q80))
													      {
														if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														  switch (gimple_assign_rhs_code (_a7))
														    {
														    case IMAGPART_EXPR:
														      {
															tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a7), 0);
															if ((TREE_CODE (_q90) == SSA_NAME
															     || is_gimple_min_invariant (_q90)))
															  {
															    _q90 = do_valueize (valueize, _q90);
															    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
															      {
																if (integer_zerop (_q81))
																  {
																    {
																      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
																		res_ops[0] = captures[0];
																		res_ops[1] = captures[1];
																		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 46, __FILE__, __LINE__, false);
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
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case REALPART_EXPR:
								    {
								      tree _q50 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
								      if ((TREE_CODE (_q50) == SSA_NAME
								           || is_gimple_min_invariant (_q50)))
								        {
									  _q50 = do_valueize (valueize, _q50);
									  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
									    {
									      switch (TREE_CODE (_q50))
									        {
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _q50))
										    {
										      if (gcall *_c5 = dyn_cast <gcall *> (_d5))
										        switch (gimple_call_combined_fn (_c5))
											  {
											  case CFN_ADD_OVERFLOW:
											    if (gimple_call_num_args (_c5) == 2)
											      {
												tree _q70 = gimple_call_arg (_c5, 0);
												_q70 = do_valueize (valueize, _q70);
												tree _q71 = gimple_call_arg (_c5, 1);
												_q71 = do_valueize (valueize, _q71);
												if (tree_swap_operands_p (_q70, _q71))
												  std::swap (_q70, _q71);
												{
												  tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q71, _q30 };
												  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												    {
												      if (types_match (type, captures[0], captures[1])
)
													{
													  {
													    res_ops[0] = captures[0];
													    res_ops[1] = captures[1];
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
													    return true;
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
							      case NE_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case IMAGPART_EXPR:
									        {
										  tree _q50 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
										  if ((TREE_CODE (_q50) == SSA_NAME
										       || is_gimple_min_invariant (_q50)))
										    {
										      _q50 = do_valueize (valueize, _q50);
										      if (integer_zerop (_q41))
											{
											  switch (TREE_CODE (_p1))
											    {
											    case SSA_NAME:
											      if (gimple *_d6 = get_def (valueize, _p1))
											        {
												  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												    switch (gimple_assign_rhs_code (_a6))
												      {
												      case REALPART_EXPR:
												        {
													  tree _q80 = TREE_OPERAND (gimple_assign_rhs1 (_a6), 0);
													  if ((TREE_CODE (_q80) == SSA_NAME
													       || is_gimple_min_invariant (_q80)))
													    {
													      _q80 = do_valueize (valueize, _q80);
													      if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
														{
														  switch (TREE_CODE (_q80))
														    {
														    case SSA_NAME:
														      if (gimple *_d7 = get_def (valueize, _q80))
														        {
															  if (gcall *_c7 = dyn_cast <gcall *> (_d7))
															    switch (gimple_call_combined_fn (_c7))
															      {
															      case CFN_ADD_OVERFLOW:
															        if (gimple_call_num_args (_c7) == 2)
															          {
																    tree _q100 = gimple_call_arg (_c7, 0);
																    _q100 = do_valueize (valueize, _q100);
																    tree _q101 = gimple_call_arg (_c7, 1);
																    _q101 = do_valueize (valueize, _q101);
																    if (tree_swap_operands_p (_q100, _q101))
																      std::swap (_q100, _q101);
																    {
																      tree captures[3] ATTRIBUTE_UNUSED = { _q100, _q101, _q50 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
																		res_ops[0] = captures[0];
																		res_ops[1] = captures[1];
																		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 46, __FILE__, __LINE__, false);
																		return true;
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
		  tree _p0_pops[2];
		  if (gimple_usadd_overflow_mask (_p0, _p0_pops, valueize))
		    {
		      tree _q20 = _p0_pops[0];
		      tree _q21 = _p0_pops[1];
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
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 44, __FILE__, __LINE__, false);
							  return true;
							}
						      }
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
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 44, __FILE__, __LINE__, false);
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
		        default:;
		        }
		    }
		}
	          break;
	        }
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
			      case GE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						    {
						      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						    {
						      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
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
			      case LT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
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
			      case LE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						    {
						      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
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
			      case GT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
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
			      case EQ_EXPR:
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
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case REALPART_EXPR:
											  {
											    tree _q80 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
											    if ((TREE_CODE (_q80) == SSA_NAME
											         || is_gimple_min_invariant (_q80)))
											      {
												_q80 = do_valueize (valueize, _q80);
												if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
												  {
												    if (integer_minus_onep (_p2))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
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
			          break;
			        }
			      case NE_EXPR:
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
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    if (integer_minus_onep (_p1))
									      {
										switch (TREE_CODE (_p2))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _p2))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case REALPART_EXPR:
											      {
												tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												if ((TREE_CODE (_q90) == SSA_NAME
												     || is_gimple_min_invariant (_q90)))
												  {
												    _q90 = do_valueize (valueize, _q90);
												    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 52, __FILE__, __LINE__, false);
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
									          default:;
									          }
									      }
									  }
									switch (TREE_CODE (_q41))
									  {
									  case INTEGER_CST:
									    {
									      if (integer_zerop (_q21))
										{
										  if (integer_minus_onep (_p1))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q90) == SSA_NAME
												           || is_gimple_min_invariant (_q90)))
												        {
													  _q90 = do_valueize (valueize, _q90);
													  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
													    {
													      {
														tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
														if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
														  {
														    if (types_match (type, captures[0]) && int_fits_type_p (captures[1], type)
)
														      {
															{
															  res_ops[0] = captures[0];
															  res_ops[1] = captures[1];
															  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 53, __FILE__, __LINE__, false);
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
		    case GE_EXPR:
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
						if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						  {
						    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						  {
						    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case LT_EXPR:
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
						if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
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
				switch (TREE_CODE (_q21))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q21))
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
						if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						  {
						    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						  {
						    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
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
				switch (TREE_CODE (_q21))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q21))
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
						if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case EQ_EXPR:
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
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d4 = get_def (valueize, _p1))
									        {
										  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										    switch (gimple_assign_rhs_code (_a4))
										      {
										      case REALPART_EXPR:
										        {
											  tree _q80 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											  if ((TREE_CODE (_q80) == SSA_NAME
											       || is_gimple_min_invariant (_q80)))
											    {
											      _q80 = do_valueize (valueize, _q80);
											      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
												{
												  if (integer_minus_onep (_p2))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
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
			  }
		        break;
		      }
		    case NE_EXPR:
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
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  if (integer_minus_onep (_p1))
									    {
									      switch (TREE_CODE (_p2))
									        {
										case SSA_NAME:
										  if (gimple *_d4 = get_def (valueize, _p2))
										    {
										      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										        switch (gimple_assign_rhs_code (_a4))
											  {
											  case REALPART_EXPR:
											    {
											      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											      if ((TREE_CODE (_q90) == SSA_NAME
											           || is_gimple_min_invariant (_q90)))
											        {
												  _q90 = do_valueize (valueize, _q90);
												  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 52, __FILE__, __LINE__, false);
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
									        default:;
									        }
									    }
								        }
								      switch (TREE_CODE (_q41))
								        {
									case INTEGER_CST:
									  {
									    if (integer_zerop (_q21))
									      {
										if (integer_minus_onep (_p1))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q90) == SSA_NAME
												         || is_gimple_min_invariant (_q90)))
												      {
													_q90 = do_valueize (valueize, _q90);
													if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
													  {
													    {
													      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
														{
														  if (types_match (type, captures[0]) && int_fits_type_p (captures[1], type)
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 53, __FILE__, __LINE__, false);
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
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case PLUS_EXPR:
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
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q21 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
 unsigned precision = TYPE_PRECISION (type);
 wide_int cst_1 = wi::to_wide (captures[1]);
 wide_int cst_2 = wi::to_wide (captures[2]);
 wide_int max = wi::mask (precision, false, precision);
 wide_int sum = wi::add (cst_1, cst_2);
							    if (wi::eq_p (max, sum)
)
							      {
								{
								  res_ops[0] = captures[0];
								  res_ops[1] = captures[1];
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 54, __FILE__, __LINE__, false);
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
	  else if (gphi *_a1 = dyn_cast <gphi *> (_d1))
	    {
	      basic_block _b1 = gimple_bb (_a1);
	      tree _p1, _p2;
	      gcond *_cond_1 = match_cond_with_binary_phi (_a1, &_p1, &_p2);
	      if (_cond_1)
		{
		  tree _cond_lhs_1 = gimple_cond_lhs (_cond_1);
		  tree _cond_rhs_1 = gimple_cond_rhs (_cond_1);
		  tree _p0 = build2 (gimple_cond_code (_cond_1), boolean_type_node, _cond_lhs_1, _cond_rhs_1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						    {
						      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						    {
						      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
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
			      case LT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
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
			      case LE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						    {
						      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
							{
							  if (integer_minus_onep (_p2))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
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
			      case GT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q21))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q21))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (tree_swap_operands_p (_q40, _q41))
						    std::swap (_q40, _q41);
						  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
									  return true;
									}
								      }
								  }
							      }
							    }
						        }
						    }
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      if (integer_minus_onep (_p1))
							{
							  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
								if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								  {
								    if (types_match (type, captures[0], captures[1])
)
								      {
									{
									  res_ops[0] = captures[0];
									  res_ops[1] = captures[1];
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
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
			      case EQ_EXPR:
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
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d5 = get_def (valueize, _p1))
									          {
										    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										      switch (gimple_assign_rhs_code (_a5))
											{
											case REALPART_EXPR:
											  {
											    tree _q80 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
											    if ((TREE_CODE (_q80) == SSA_NAME
											         || is_gimple_min_invariant (_q80)))
											      {
												_q80 = do_valueize (valueize, _q80);
												if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
												  {
												    if (integer_minus_onep (_p2))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
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
			          break;
			        }
			      case NE_EXPR:
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
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_ADD_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    if (integer_minus_onep (_p1))
									      {
										switch (TREE_CODE (_p2))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _p2))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case REALPART_EXPR:
											      {
												tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												if ((TREE_CODE (_q90) == SSA_NAME
												     || is_gimple_min_invariant (_q90)))
												  {
												    _q90 = do_valueize (valueize, _q90);
												    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 52, __FILE__, __LINE__, false);
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
									          default:;
									          }
									      }
									  }
									switch (TREE_CODE (_q41))
									  {
									  case INTEGER_CST:
									    {
									      if (integer_zerop (_q21))
										{
										  if (integer_minus_onep (_p1))
										    {
										      switch (TREE_CODE (_p2))
										        {
											case SSA_NAME:
											  if (gimple *_d5 = get_def (valueize, _p2))
											    {
											      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											        switch (gimple_assign_rhs_code (_a5))
												  {
												  case REALPART_EXPR:
												    {
												      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q90) == SSA_NAME
												           || is_gimple_min_invariant (_q90)))
												        {
													  _q90 = do_valueize (valueize, _q90);
													  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
													    {
													      {
														tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
														if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
														  {
														    if (types_match (type, captures[0]) && int_fits_type_p (captures[1], type)
)
														      {
															{
															  res_ops[0] = captures[0];
															  res_ops[1] = captures[1];
															  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 53, __FILE__, __LINE__, false);
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
		    case GE_EXPR:
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
						if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						  {
						    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						  {
						    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 47, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case LT_EXPR:
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
						if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q20 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 48, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case LE_EXPR:
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
				switch (TREE_CODE (_q21))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q21))
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
						if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						  {
						    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						  {
						    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
						      {
							if (integer_minus_onep (_p2))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 49, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
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
				switch (TREE_CODE (_q21))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q21))
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
						if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
									return true;
								      }
								    }
								}
							    }
							  }
						      }
						  }
						if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						  {
						    if (integer_minus_onep (_p1))
						      {
							if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q21 };
							      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
								{
								  if (types_match (type, captures[0], captures[1])
)
								    {
								      {
									res_ops[0] = captures[0];
									res_ops[1] = captures[1];
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 50, __FILE__, __LINE__, false);
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
			      }
			  }
		        break;
		      }
		    case EQ_EXPR:
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
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  switch (TREE_CODE (_p1))
									    {
									    case SSA_NAME:
									      if (gimple *_d4 = get_def (valueize, _p1))
									        {
										  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										    switch (gimple_assign_rhs_code (_a4))
										      {
										      case REALPART_EXPR:
										        {
											  tree _q80 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											  if ((TREE_CODE (_q80) == SSA_NAME
											       || is_gimple_min_invariant (_q80)))
											    {
											      _q80 = do_valueize (valueize, _q80);
											      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
												{
												  if (integer_minus_onep (_p2))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 51, __FILE__, __LINE__, false);
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
			  }
		        break;
		      }
		    case NE_EXPR:
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
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_ADD_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  if (integer_minus_onep (_p1))
									    {
									      switch (TREE_CODE (_p2))
									        {
										case SSA_NAME:
										  if (gimple *_d4 = get_def (valueize, _p2))
										    {
										      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										        switch (gimple_assign_rhs_code (_a4))
											  {
											  case REALPART_EXPR:
											    {
											      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											      if ((TREE_CODE (_q90) == SSA_NAME
											           || is_gimple_min_invariant (_q90)))
											        {
												  _q90 = do_valueize (valueize, _q90);
												  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 52, __FILE__, __LINE__, false);
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
									        default:;
									        }
									    }
								        }
								      switch (TREE_CODE (_q41))
								        {
									case INTEGER_CST:
									  {
									    if (integer_zerop (_q21))
									      {
										if (integer_minus_onep (_p1))
										  {
										    switch (TREE_CODE (_p2))
										      {
										      case SSA_NAME:
										        if (gimple *_d4 = get_def (valueize, _p2))
										          {
											    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
											      switch (gimple_assign_rhs_code (_a4))
												{
												case REALPART_EXPR:
												  {
												    tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q90) == SSA_NAME
												         || is_gimple_min_invariant (_q90)))
												      {
													_q90 = do_valueize (valueize, _q90);
													if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
													  {
													    {
													      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
														{
														  if (types_match (type, captures[0]) && int_fits_type_p (captures[1], type)
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 53, __FILE__, __LINE__, false);
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
			  }
		        break;
		      }
		    default:;
		    }
		}
	    }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_227 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail803;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[2]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 325, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail803:;
    }
  return false;
}

bool
gimple_simplify_231 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail820;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[3];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[3]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail820:;
    }
  return false;
}

bool
gimple_simplify_234 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail823;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[3];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 344, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail823:;
    }
  return false;
}

bool
gimple_simplify_237 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[1]);
      if (ptr_difference_const (captures[0], captures[2], &diff)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail826;
	  {
	    res_op->set_op (neeq, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_int_cst_type (inner_type, diff);
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail826;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 346, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail826:;
	}
  }
  return false;
}

bool
gimple_simplify_242 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (!VECTOR_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (type)
 && (!expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, cmp)
 || expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, out))))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail831;
      {
	res_op->set_op (out, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 351, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail831:;
    }
  return false;
}

bool
gimple_simplify_246 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int c1 = wi::clz (wi::to_wide (captures[0]));
 int c2 = wi::clz (wi::to_wide (captures[2]));
      if (c1 < c2
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail837;
	  {
	    tree tem;
	    tem =  constant_boolean_node (cmp == NE_EXPR ? false : true, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 357, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail837:;
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail838;
	  {
	    res_op->set_op (icmp, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), c1 - c2);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 358, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail838:;
	}
  }
  return false;
}

bool
gimple_simplify_249 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_int_cst_sgn (captures[0]) > 0
)
    {
      {
 int c1 = wi::clz (wi::to_wide (captures[0]));
 int c2 = wi::clz (wi::to_wide (captures[2]));
	  if (c1 > c2
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail842;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR ? false : true, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 362, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail842:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail843;
	      {
		res_op->set_op (icmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), c2 - c1);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 363, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail843:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_253 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail854;
  {
    res_op->set_op (cmp, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] =  const_binop (invrot, TREE_TYPE (captures[0]), captures[2], captures[1]);
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 374, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail854:;
  return false;
}

bool
gimple_simplify_256 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[0]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail857;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail857;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail857;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 377, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail857:;
  }
  return false;
}

bool
gimple_simplify_259 (gimple_match_op *res_op, gimple_seq *seq,
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
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[1]));
	  if (ic == icmp
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
	      {
		res_op->set_op (icmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 380, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail860:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail861;
		  {
		    res_op->set_op (ncmp, type, 2);
		    res_op->ops[0] = captures[1];
		    res_op->ops[1] = captures[2];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 381, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail861:;
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_265 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail872;
	  {
	    tree tem;
	    tem =  constant_boolean_node (cmp == NE_EXPR, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail872:;
	}
  }
  return false;
}

bool
gimple_simplify_266 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[1]) && single_use (captures[3])
)
    {
      {
 tree otype = TREE_TYPE (captures[0]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail873;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail873;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail873;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 392, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail873:;
      }
    }
  return false;
}

bool
gimple_simplify_271 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_associative_math
)
    {
      {
 tree tem = const_binop (MINUS_EXPR, TREE_TYPE (captures[1]), captures[0], captures[2]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail892;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] =  tem;
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 410, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail892:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_276 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      if (wi::to_wide (captures[2]) == 0
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail922;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 440, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail922:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail923;
		      {
			tree tem;
			tem =  constant_boolean_node (cmp == NE_EXPR, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 441, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail923:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail924;
		      {
			res_op->set_op (cmp, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 442, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail924:;
		    }
	      }
	    }
	}
    }
  return false;
}

bool
gimple_simplify_279 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !(targetm.have_canonicalize_funcptr_for_compare ()
 && ((POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1]))))
 || (POINTER_TYPE_P (TREE_TYPE (captures[3]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[3]))))))
 && single_use (captures[0])
)
    {
      if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[0]))
 && (TREE_CODE (captures[3]) == INTEGER_CST
 || captures[2] != captures[3])
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1])) == TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 || cmp == NE_EXPR
 || cmp == EQ_EXPR)
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && (TREE_CODE (TREE_TYPE (captures[1])) != BOOLEAN_TYPE
 || TREE_CODE (TREE_TYPE (captures[3])) == BOOLEAN_TYPE)
)
	{
	  if (TREE_CODE (captures[2]) == INTEGER_CST
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail927;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  force_fit_type (TREE_TYPE (captures[1]),
 wide_int::from (wi::to_wide (captures[2]),
 MAX (TYPE_PRECISION (TREE_TYPE (captures[2])),
 TYPE_PRECISION (TREE_TYPE (captures[1]))),
 TYPE_SIGN (TREE_TYPE (captures[2]))),
 0, TREE_OVERFLOW (captures[2]));
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 445, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail927:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail928;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail928;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 446, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail928:;
	    }
	}
      else
	{
	  if (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
	    {
	      if ((cmp == EQ_EXPR || cmp == NE_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0])) == TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
 && (types_match (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]))
 || ((TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= TYPE_PRECISION (TREE_TYPE (captures[3])))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 == TYPE_UNSIGNED (TREE_TYPE (captures[3]))))
 || (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail929;
		  {
		    res_op->set_op (cmp, type, 2);
		    res_op->ops[0] = captures[1];
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail929;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 447, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail929:;
		}
	      else
		{
		  if (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
		    {
		      {
 tree min = lower_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 tree max = upper_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 bool above = integer_nonzerop (const_binop (LT_EXPR, type, max, captures[2]));
 bool below = integer_nonzerop (const_binop (LT_EXPR, type, captures[2], min));
			  if (above || below
)
			    {
			      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail930;
				  {
				    tree tem;
				    tem =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 448, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail930:;
				}
			      else
				{
				  if (cmp == LT_EXPR || cmp == LE_EXPR
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail931;
				      {
					tree tem;
					tem =  constant_boolean_node (above ? true : false, type);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail931:;
				    }
				  else
				    {
				      if (cmp == GT_EXPR || cmp == GE_EXPR
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail932;
					  {
					    tree tem;
					    tem =  constant_boolean_node (above ? false : true, type);
					    res_op->set_value (tem);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 450, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail932:;
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
  else
    {
      if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[1])))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[3])))
)
	{
	  {
 tree type1 = TREE_TYPE (captures[3]);
 if (TREE_CODE (captures[3]) == REAL_CST && !DECIMAL_FLOAT_TYPE_P (type1))
 {
 REAL_VALUE_TYPE orig = TREE_REAL_CST (captures[3]);
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (float_type_node)
 && exact_real_truncate (TYPE_MODE (float_type_node), &orig))
 type1 = float_type_node;
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (double_type_node)
 && exact_real_truncate (TYPE_MODE (double_type_node), &orig))
 type1 = double_type_node;
 }
 tree newtype
 = (element_precision (TREE_TYPE (captures[1])) > element_precision (type1)
 ? TREE_TYPE (captures[1]) : type1);
	      if (element_precision (TREE_TYPE (captures[0])) > element_precision (newtype)
 && (!VECTOR_TYPE_P (type) || is_truth_type_for (newtype, type))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail933;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (newtype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail933;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (newtype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail933;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 451, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail933:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_296 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[1]))
 && element_precision (captures[0]) >= element_precision (captures[1])
 && wi::only_sign_bit_p (wi::to_wide (captures[2]), element_precision (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail959;
	  {
	    res_op->set_op (ncmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail959;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (stype);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 469, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail959:;
      }
    }
  return false;
}

bool
gimple_simplify_301 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[0])))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !(
0
 && TREE_CODE (TREE_TYPE (captures[0])) == REFERENCE_TYPE
 && (flag_sanitize & (SANITIZE_NULL | SANITIZE_ALIGNMENT))))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1])))))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail978;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail978;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 479, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail978:;
    }
  return false;
}

bool
gimple_simplify_305 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[0]) && !TREE_OVERFLOW (captures[2])
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (MINUS_EXPR, captures[0], captures[2]);
	  if (TREE_OVERFLOW (res)
)
	    {
	      if (cmp == NE_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 488, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail987:;
		}
	      else
		{
		  if (cmp == EQ_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail988;
		      {
			tree tem;
			tem =  constant_boolean_node (false, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail988:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
		      {
			tree tem;
 bool less = cmp == LE_EXPR || cmp == LT_EXPR;
 bool ovf_high = wi::lt_p (wi::to_wide (captures[0]), 0,
 TYPE_SIGN (TREE_TYPE (captures[0])));			tem = 
 constant_boolean_node (less == ovf_high, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail989:;
		    }
		}
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail990;
	      {
		res_op->set_op (rcmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  res;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail990:;
	    }
      }
    }
  else
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	{
	  if (cmp == EQ_EXPR || cmp == NE_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail991;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail991;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 492, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail991:;
	    }
	  else
	    {
	      if (cmp == LE_EXPR || cmp == GT_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail992;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[2];
			_o2[1] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail992;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail992;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] = captures[2];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 493, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail992:;
		}
	      else
		{
		  if (cmp == LT_EXPR || cmp == GE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail993;
		      {
			res_op->set_op (cmp, type, 2);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[2];
			    {
			      tree _o3[2], _r3;
			      _o3[0] = captures[0];
			      _o3[1] =  build_one_cst (TREE_TYPE (captures[1]));
			      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail993;
			      _o2[1] = _r3;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail993;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail993;
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] = captures[2];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 494, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail993:;
		    }
		}
	    }
	}
      else
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
	    {
	      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail994;
		  {
		    res_op->set_op (cmp, type, 2);
		    res_op->ops[0] = captures[1];
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail994;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 495, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail994:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail995;
		  {
		    res_op->set_op (rcmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			_o2[1] =  build_one_cst (TREE_TYPE (captures[1]));
			gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail995;
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail995;
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail995;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 496, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail995:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_335 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && wi::multiple_of_p (wi::to_widest (captures[1]), wi::to_widest (captures[2]), SIGNED)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1037;
	  {
	    res_op->set_op (MULT_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), div, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (NULL, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	      if (!_r1) goto next_after_fail1037;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 536, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1037:;
	}
      else
	{
	  {
int_range_max vr0, vr1;
	      if (get_range_query (cfun)->range_of_expr (vr0, captures[0])
 && get_range_query (cfun)->range_of_expr (vr1, captures[1])
 && range_op_handler (MULT_EXPR).overflow_free_p (vr0, vr1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1038;
		  {
		    res_op->set_op (MULT_EXPR, type, 2);
		    res_op->ops[0] = captures[0];
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), div, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (NULL, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
		      if (!_r1) goto next_after_fail1038;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 537, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1038:;
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_347 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1051;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1051:;
    }
  return false;
}

bool
gimple_simplify_352 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1058;
      {
	res_op->set_op (TANH, type, 1);
	res_op->ops[0] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 557, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1058:;
    }
  return false;
}

bool
gimple_simplify_356 (gimple_match_op *res_op, gimple_seq *seq,
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
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1062;
	  {
	    res_op->set_op (POW, type, 2);
	    res_op->ops[0] = captures[1];
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] =  build_one_cst (type);
	      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1062;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 561, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1062:;
	}
    }
  return false;
}

bool
gimple_simplify_360 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      if (tree_expr_nonnegative_p (captures[1]) && tree_expr_nonzero_p (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1067;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1067:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
 && wi::neg_p (wi::to_wide (captures[1]), TYPE_SIGN (TREE_TYPE (captures[1])))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1068;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[2];
		res_op->ops[1] = captures[0];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 567, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1068:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_368 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1077;
  {
    tree tem;
    tem =  constant_boolean_node (cmp == GE_EXPR || cmp == LE_EXPR, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 576, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1077:;
  return false;
}

bool
gimple_simplify_372 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 tree utype = TREE_TYPE (captures[2]);
 wide_int denom = wi::to_wide (captures[1]);
 wide_int right = wi::to_wide (captures[2]);
 wide_int smax = wi::sdiv_trunc (wi::max_value (TREE_TYPE (captures[0])), denom);
 wide_int smin = wi::sdiv_trunc (wi::min_value (TREE_TYPE (captures[0])), denom);
 bool small = wi::leu_p (right, smax);
 bool large = wi::geu_p (right, smin);
	  if (small || large
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1082;
	      {
		res_op->set_op (cmp, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (utype != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1082;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1082;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1082;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 581, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1082:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1083;
	      {
		res_op->set_op (cmp2, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 582, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1083:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_383 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool ok = true;
 HOST_WIDE_INT val = 0;
 if (sanitize_flags_p (SANITIZE_BUILTIN)
 && (!cfun
 || (cfun->curr_properties & PROP_ssa) == 0))
 ok = false;
 else if (!tree_fits_shwi_p (captures[2]))
 ok = false;
 else
 {
 val = tree_to_shwi (captures[2]);
 if (op == GT_EXPR || op == LE_EXPR)
 {
 if (val == HOST_WIDE_INT_MAX)
 ok = false;
 else
 val++;
 }
 }
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
      if (ok && prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (val <= 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1127;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 609, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1127:;
	    }
	  else
	    {
	      if (val >= prec
)
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1128;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 610, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1128:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1129;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (val, false, prec));
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1129;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  build_zero_cst (type0);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 611, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1129:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_389 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1137;
      {
	res_op->set_op (out, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1137;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 601, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1137:;
    }
  return false;
}

bool
gimple_simplify_394 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (cmp3),
 const enum tree_code ARG_UNUSED (bit_op),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1142;
	  {
	    res_op->set_op (cmp2, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 620, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1142:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1143;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == GT_EXPR ? true : false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 621, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1143:;
	    }
	  else
	    {
	      if (wi::to_widest (captures[2]) >= prec
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1144;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == GT_EXPR ? false : true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 622, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1144:;
		}
	      else
		{
		  if (wi::to_widest (captures[2]) == prec - 1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1145;
		      {
			res_op->set_op (cmp3, type, 2);
			res_op->ops[0] = captures[1];
			res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (prec - 1, 1,
 false, prec));
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 623, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1145:;
		    }
		  else
		    {
		      if (single_use (captures[0])
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1146;
			  {
			    res_op->set_op (bit_op, type, 2);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      gimple_match_op tem_op (res_op->cond.any_else (), cmp2, type, _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1146;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[1];
				_o2[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1146;
				_o1[0] = _r2;
			      }
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      gimple_match_op tem_op (res_op->cond.any_else (), cmp3, type, _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1146;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 624, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1146:;
			}
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_410 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 unsigned prec = TYPE_PRECISION (type);
 int shift = (64 - prec) & 63;
 unsigned HOST_WIDE_INT c1
 = HOST_WIDE_INT_UC (0x0101010101010101) >> shift;
 unsigned HOST_WIDE_INT c2
 = HOST_WIDE_INT_UC (0x0F0F0F0F0F0F0F0F) >> shift;
 unsigned HOST_WIDE_INT c3
 = HOST_WIDE_INT_UC (0x3333333333333333) >> shift;
 unsigned HOST_WIDE_INT c4
 = HOST_WIDE_INT_UC (0x5555555555555555) >> shift;
      if (prec >= 16
 && prec <= 64
 && pow2p_hwi (prec)
 && TYPE_UNSIGNED (type)
 && integer_onep (captures[5])
 && wi::to_widest (captures[7]) == 2
 && wi::to_widest (captures[1]) == 4
 && wi::to_widest (captures[11]) == prec - 8
 && tree_to_uhwi (captures[10]) == c1
 && tree_to_uhwi (captures[9]) == c2
 && tree_to_uhwi (captures[8]) == c3
 && tree_to_uhwi (captures[3]) == c3
 && tree_to_uhwi (captures[6]) == c4
)
	{
	  if (direct_internal_fn_supported_p (IFN_POPCOUNT, type,
 OPTIMIZE_FOR_BOTH)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1169;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[4];
		  gimple_match_op tem_op (res_op->cond.any_else (), CFN_POPCOUNT, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1169;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 645, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1169:;
	    }
	  else
	    {
	      {
 tree half_type = NULL_TREE;
 opt_machine_mode m = mode_for_size ((prec + 1) / 2, MODE_INT, 1);
 int half_prec = 8;
 if (m.exists ()
 && m.require () != TYPE_MODE (type))
 {
 half_prec = GET_MODE_PRECISION (as_a <scalar_int_mode> (m));
 half_type = build_nonstandard_integer_type (half_prec, 1);
 }
 gcc_assert (half_prec > 2);
		  if (half_type != NULL_TREE
 && direct_internal_fn_supported_p (IFN_POPCOUNT, half_type,
 OPTIMIZE_FOR_BOTH)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1170;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[4];
			      if (half_type != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (half_type, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, half_type, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail1170;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), CFN_POPCOUNT, half_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1170;
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[1], _r2;
			    {
			      tree _o3[1], _r3;
			      {
				tree _o4[2], _r4;
				_o4[0] = captures[4];
				_o4[1] =  build_int_cst (integer_type_node, half_prec);
				gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o4[0]), _o4[0], _o4[1]);
				tem_op.resimplify (lseq, valueize);
				_r4 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r4) goto next_after_fail1170;
				_o3[0] = _r4;
			      }
			      if (half_type != TREE_TYPE (_o3[0])
			          && !useless_type_conversion_p (half_type, TREE_TYPE (_o3[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, half_type, _o3[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r3) goto next_after_fail1170;
			        }
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), CFN_POPCOUNT, half_type, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail1170;
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1170;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 646, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1170:;
		    }
	      }
	    }
	}
  }
  return false;
}

bool
gimple_simplify_424 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (coss),
 const combined_fn ARG_UNUSED (atans),
 const combined_fn ARG_UNUSED (sqrts),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 REAL_VALUE_TYPE r_cst;
 build_sinatan_real (&r_cst, type);
 tree t_cst = build_real (type, r_cst);
 tree t_one = build_one_cst (type);
 tree t_zero = build_zero_cst (type);
      if (SCALAR_FLOAT_TYPE_P (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1197;
	  {
	    res_op->set_op (COND_EXPR, type, 3);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1197;
		_o1[0] = _r2;
	      }
	      _o1[1] =  t_cst;
	      gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1197;
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_one;
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[2], _r3;
		  {
		    tree _o4[2], _r4;
		    _o4[0] = captures[1];
		    _o4[1] = captures[1];
		    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o4[0]), _o4[0], _o4[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r4 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r4) goto next_after_fail1197;
		    _o3[0] = _r4;
		  }
		  _o3[1] =  t_one;
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail1197;
		  _o2[0] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), sqrts, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1197;
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1197;
	      res_op->ops[1] = _r1;
	    }
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_zero;
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), copysigns, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1197;
	      res_op->ops[2] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 661, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1197:;
	}
  }
  return false;
}

bool
gimple_simplify_431 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1205;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1205:;
  return false;
}

bool
gimple_simplify_433 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1207;
  {
    res_op->set_op (hypots, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 671, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1207:;
  return false;
}

bool
gimple_simplify_435 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1209;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1209;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_real_truncate (type, dconst_sqrt2 ());
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 673, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1209:;
    }
  return false;
}

bool
gimple_simplify_437 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! TYPE_UNSIGNED (type)
 && ! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1211;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1211;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 675, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1211:;
    }
  return false;
}

bool
gimple_simplify_443 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1218;
      {
	res_op->set_op (BIT_AND_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 682, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1218:;
    }
  return false;
}

bool
gimple_simplify_449 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[3])
          || !single_use (captures[4])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1224;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[5];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1224;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 687, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1224:;
  return false;
}

bool
gimple_simplify_456 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1231;
  {
    res_op->set_op (BIT_XOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 694, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1231:;
  return false;
}

bool
gimple_simplify_458 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1233;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1233;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1233:;
  return false;
}

bool
gimple_simplify_463 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      {
 unsigned int align;
 unsigned HOST_WIDE_INT bitpos;
 get_pointer_alignment_1 (captures[0], &align, &bitpos);
	  if (wi::ltu_p (wi::to_wide (captures[1]), align / BITS_PER_UNIT)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1238;
	      {
		tree tem;
		tem =  wide_int_to_tree (type, (wi::to_wide (captures[1])
 & (bitpos / BITS_PER_UNIT)));
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1238:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_470 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1252;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 711, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1252:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1253;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 712, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1253:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1254;
		      {
			tree tem;
			tem = captures[3];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1254:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1255;
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
				  if (!_r1) goto next_after_fail1255;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1255:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1256;
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
				      if (!_r1) goto next_after_fail1256;
				    }
				  else
				    _r1 = _o1[0];
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1256:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1257;
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
					  if (!_r1) goto next_after_fail1257;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1257:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1258;
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
					      if (!_r1) goto next_after_fail1258;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1258:;
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
gimple_simplify_487 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((wi::to_wide (captures[2]) & 1) != 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1306:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1307:;
    }
  return false;
}

bool
gimple_simplify_490 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1310:;
  return false;
}

bool
gimple_simplify_493 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[1];
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1314;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 736, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1314:;
  return false;
}

bool
gimple_simplify_495 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1316;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1316;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 738, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1316:;
    }
  return false;
}

bool
gimple_simplify_497 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1318;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 740, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1318:;
    }
  return false;
}

bool
gimple_simplify_503 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      {
 tree rotate_type = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (rotate_type != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (rotate_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, rotate_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1324;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      gimple_match_op tem_op (res_op->cond.any_else (), rotate, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1324;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1324:;
      }
    }
  return false;
}

bool
gimple_simplify_511 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1333;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 752, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1333:;
    }
  return false;
}

bool
gimple_simplify_516 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1338;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 757, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1338:;
  return false;
}

bool
gimple_simplify_522 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1347;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1347:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1348;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1348:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1349;
		  {
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 768, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1349:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1350;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 769, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1350:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1351;
			  {
			    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1351;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1351:;
			}
		      else
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1352;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1352;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 771, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1352:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1353;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1353;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1353:;
			    }
			  else
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1354;
			      {
				res_op->set_op (NOP_EXPR, type, 1);
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1354;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1354:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1355;
				  {
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1355:;
				}
			      else
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1356;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    res_op->ops[0] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 775, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1356:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1357;
				      {
					res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 776, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1357:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1358;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 777, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1358:;
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
gimple_simplify_538 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1410:;
    }
  return false;
}

bool
gimple_simplify_545 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1419:;
    }
  return false;
}

bool
gimple_simplify_550 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1424;
  {
    tree tem;
    tem = captures[3];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 799, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1424:;
  return false;
}

bool
gimple_simplify_554 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1428;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 800, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1428:;
    }
  return false;
}

bool
gimple_simplify_561 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1436;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 802, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1436:;
    }
  return false;
}

bool
gimple_simplify_567 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
	{
	  {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
	      if (types_match (captures[0], stype)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1448;
		  {
		    res_op->set_op (ABSU_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 806, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1448:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1449;
		  {
		    res_op->set_op (ABSU_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      if (stype != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1449;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1449:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1450;
	  {
	    res_op->set_op (ABS_EXPR, type, 1);
	    res_op->ops[0] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 808, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1450:;
	}
    }
  return false;
}

bool
gimple_simplify_573 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
)
    {
      if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
	{
	  {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (types_match (captures[0], stype)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1463;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1463;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1463;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1463:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1464;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[2];
			  if (stype != TREE_TYPE (_o3[0])
			      && !useless_type_conversion_p (stype, TREE_TYPE (_o3[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail1464;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1464;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1464;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 815, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1464:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1465;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1465;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1465;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1465:;
	}
    }
  return false;
}

bool
gimple_simplify_589 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1486;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 829, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1486:;
  return false;
}

bool
gimple_simplify_596 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1499;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1499:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1500;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1500:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1501;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1501:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1502;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1502:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_614 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1526;
      {
	res_op->set_op (minmax, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 856, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1526:;
    }
  return false;
}

bool
gimple_simplify_619 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1531;
  {
    tree tem;
    tem = captures[3];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 799, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1531:;
  return false;
}

bool
gimple_simplify_626 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1538;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[5], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1538;
		_o1[4] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1538;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 863, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1538:;
	}
  }
  return false;
}

bool
gimple_simplify_634 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1546;
  {
    res_op->set_op (UNORDERED_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 871, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1546:;
  return false;
}

bool
gimple_simplify_639 (gimple_match_op *res_op, gimple_seq *seq,
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
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1551;
	  {
	    res_op->set_op (MINUS_EXPR, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), logs, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (NULL, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, NULL);
	      if (!_r1) goto next_after_fail1551;
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      gimple_match_op tem_op (res_op->cond.any_else (), logs, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1551;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 876, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1551:;
	}
    }
  return false;
}

bool
gimple_simplify_652 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1564;
      {
	res_op->set_op (tos, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1564:;
    }
  return false;
}

bool
gimple_simplify_659 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIGNBIT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1571;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
	  gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1571;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 896, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1571:;
    }
  return false;
}

bool
gimple_simplify_670 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1582;
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
	      if (!_r1) goto next_after_fail1582;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1582:;
  }
  return false;
}

bool
gimple_simplify_679 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (pfun))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 wide_int nz = tree_nonzero_bits (captures[0]);
	  if (nz == 1
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1595;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->ops[0] = captures[0];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 915, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1595:;
	    }
	  else
	    {
	      if (wi::popcount (nz) == 1
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1596;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
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
				if (!_r2) goto next_after_fail1596;
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (integer_type_node,
 wi::ctz (nz));
			  gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, utype, _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1596;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1596:;
		  }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_688 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (uncond_op),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[1]);
      if (vectorized_internal_fn_supported_p (as_internal_fn (cond_op), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1609;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[2];
	      _o1[2] = captures[3];
	      _o1[3] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1609;
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[6];
	      _o1[6] = captures[7];
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1609;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1609:;
	}
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COSF (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn coss = CFN_BUILT_IN_COSF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1643;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1643:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1644;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1644:;
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_COSF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_COSF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_COSF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_ATANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_424 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSF, CFN_BUILT_IN_ATANF, CFN_BUILT_IN_SQRTF, CFN_BUILT_IN_COPYSIGNF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_COSF))
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
gimple_simplify_CFN_COSH (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn coss = CFN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1657;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1657:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1658;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1658:;
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_COSH))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_COSH))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_COSH))
		        return true;
		    }
	          }
	        break;
	      case CFN_ATANH:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_COSH, CFN_ATANH, CFN_SQRT))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_COSH))
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
gimple_simplify_ABSU_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
			      case ABSU_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				    if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
				      {
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1701;
					{
					  tree tem;
					  tem = captures[1];
					  res_op->set_value (tem);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 977, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1701:;
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1702;
		    {
		      res_op->set_op (ABSU_EXPR, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 978, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1702:;
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1703;
		    {
		      res_op->set_op (VEC_COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1703;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1703;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 936, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1703:;
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
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1704;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1704:;
    }
  }
  return false;
}

bool
gimple_simplify_CONJ_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
			      case CONJ_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				    if (gimple_simplify_609 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      case COMPLEX_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    {
 tree itype = TREE_TYPE (type);
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[1])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1771;
					{
					  res_op->set_op (COMPLEX_EXPR, type, 2);
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (itype != TREE_TYPE (_o1[0])
					        && !useless_type_conversion_p (itype, TREE_TYPE (_o1[0])))
					      {
						gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o1[0]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail1771;
					      }
					    else
					      _r1 = _o1[0];
					    res_op->ops[0] = _r1;
					  }
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      _o2[0] = captures[3];
					      if (itype != TREE_TYPE (_o2[0])
					          && !useless_type_conversion_p (itype, TREE_TYPE (_o2[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o2[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r2) goto next_after_fail1771;
					        }
					      else
					        _r2 = _o2[0];
					      _o1[0] = _r2;
					    }
					    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail1771;
					    res_op->ops[1] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1771:;
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
	      case CONJ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_609 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    {
 tree itype = TREE_TYPE (type);
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])
			        || !single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1772;
			{
			  res_op->set_op (COMPLEX_EXPR, type, 2);
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[2];
			    if (itype != TREE_TYPE (_o1[0])
			        && !useless_type_conversion_p (itype, TREE_TYPE (_o1[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail1772;
			      }
			    else
			      _r1 = _o1[0];
			    res_op->ops[0] = _r1;
			  }
			  {
			    tree _o1[1], _r1;
			    {
			      tree _o2[1], _r2;
			      _o2[0] = captures[3];
			      if (itype != TREE_TYPE (_o2[0])
			          && !useless_type_conversion_p (itype, TREE_TYPE (_o2[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail1772;
			        }
			      else
			        _r2 = _o2[0];
			      _o1[0] = _r2;
			    }
			    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r1) goto next_after_fail1772;
			    res_op->ops[1] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1772:;
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
gimple_simplify_CFN_BUILT_IN_BSWAP32 (gimple_match_op *res_op, gimple_seq *seq,
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				      if (gimple_simplify_611 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32))
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
	      case BIT_XOR_EXPR:
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP32))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP32))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP32))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP32))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP32))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_612 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP32))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_610 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32))
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
gimple_simplify_CFN_BUILT_IN_LOG (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG))
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
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG))
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1779;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1779:;
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
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_POW))
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1780;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1780;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1780:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1781;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1781;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1781:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1782;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1782;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1782:;
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP10)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1783;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1783;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1783:;
			      }
			    }
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_POW10)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1784;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1784;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1784:;
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
gimple_simplify_CFN_BUILT_IN_LOG10F (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F))
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
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F))
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
	      case CFN_BUILT_IN_SQRTF:
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
 switch (CFN_BUILT_IN_SQRTF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1817;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1817;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1817:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1818;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1818:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
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
 switch (CFN_BUILT_IN_EXPF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1819;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1819;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1819:;
			      }
			    }
			}
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_POWF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1820;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1820:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
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
 switch (CFN_BUILT_IN_CBRTF)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1821;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1821;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1821:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
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
 switch (CFN_BUILT_IN_EXP2F)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1822;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG10F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1822;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1822:;
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
gimple_simplify_CFN_EXP10 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_LOG10:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1850;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1850:;
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
gimple_simplify_CFN_BUILT_IN_SQRTL (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_SQRTL:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1868;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real (type, dconst_quarter ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1001, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1868:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1869;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1869;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1869:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1870;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1870;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1870:;
			}
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1871;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1871;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1871;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1871:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1872;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1872;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1872:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTL:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1873;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real_truncate (type, dconst_sixth ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1004, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1873:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1874;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1874;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1874:;
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
gimple_simplify_CFN_BUILT_IN_SINHL (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ATANHL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINHL, CFN_BUILT_IN_ATANHL, CFN_BUILT_IN_SQRTL))
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
gimple_simplify_CFN_BUILT_IN_TRUNCF128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOOR))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOORF))
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
	      case CFN_BUILT_IN_FLOORL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_TRUNCL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_CEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_CEILF))
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
	      case CFN_BUILT_IN_CEILL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL, CFN_BUILT_IN_ROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL, CFN_BUILT_IN_ROUNDF))
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
	      case CFN_BUILT_IN_ROUNDL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF64 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_NEARBYINTF64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF64))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF64))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINT (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT, CFN_BUILT_IN_RINTF))
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
	      case CFN_BUILT_IN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEXP (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (gimple_compositional_complex (_p0, valueize))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0 };
	if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
	  {
	    if (targetm.libc_has_function (function_c99_math_complex, TREE_TYPE (captures[0]))
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1902;
		{
		  res_op->set_op (COMPLEX_EXPR, type, 2);
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      {
			tree _o3[1], _r3;
			_o3[0] = captures[0];
			gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o3[0])), _o3[0]);
			tem_op.resimplify (lseq, valueize);
			_r3 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r3) goto next_after_fail1902;
			_o2[0] = _r3;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_EXP, TREE_TYPE (_o2[0]), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1902;
		      captures[1] = _r2;
		    }
		    _o1[0] = captures[1];
		    {
		      tree _o2[1], _r2;
		      {
			tree _o3[1], _r3;
			{
			  tree _o4[1], _r4;
			  _o4[0] = captures[0];
			  gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o4[0])), _o4[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r4 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r4) goto next_after_fail1902;
			  _o3[0] = _r4;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_CEXPI, type, _o3[0]);
			tem_op.resimplify (lseq, valueize);
			_r3 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r3) goto next_after_fail1902;
			captures[2] = _r3;
		      }
		      _o2[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), REALPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1902;
		      _o1[1] = _r2;
		    }
		    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail1902;
		    res_op->ops[0] = _r1;
		  }
		  {
		    tree _o1[2], _r1;
		    _o1[0] = captures[1];
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r2) goto next_after_fail1902;
		      _o1[1] = _r2;
		    }
		    gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r1) goto next_after_fail1902;
		    res_op->ops[1] = _r1;
		  }
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1009, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail1902:;
	      }
	  }
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLRINTL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL, CFN_BUILT_IN_LLRINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL, CFN_BUILT_IN_LLRINTF))
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
      if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_LRINTL, CFN_BUILT_IN_LLRINTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LROUND (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LROUND, CFN_BUILT_IN_LROUNDF))
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
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LROUND))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_LFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_LFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_LFLOOR))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLCEILF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEILF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILF, CFN_BUILT_IN_LCEILF, CFN_BUILT_IN_LLCEILF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_IRINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_IRINT))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_IRINT, CFN_LRINT, CFN_LLRINT))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CPROJL (gimple_match_op *res_op, gimple_seq *seq,
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1910;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1010, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1910:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1911;
				  {
				    tree tem;
				    tem =  build_complex_inf (type, false);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1011, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1911:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1912;
			      {
				tree tem;
				tem =  build_complex_inf (type, TREE_REAL_CST_PTR (captures[1])->sign);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1012, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1912:;
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
gimple_simplify_CFN_BUILT_IN_POPCOUNTLL (gimple_match_op *res_op, gimple_seq *seq,
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
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTLL))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTLL))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTLL))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTLL))
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
		    if (gimple_simplify_676 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
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
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTLL))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTLL))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTLL))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTLL))
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
    if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTLL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FFS (gimple_match_op *res_op, gimple_seq *seq,
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
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FFS))
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
if (tree_expr_nonzero_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FFS, CFN_BUILT_IN_CTZ))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_PLUS (gimple_match_op *res_op, gimple_seq *seq,
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
					      if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_PLUS))
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
			  if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_PLUS))
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
		    if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_REDUC_PLUS))
		      return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1913;
			  {
			    res_op->set_op (PLUS_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_PLUS, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1913;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_PLUS, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1913;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1913:;
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
gimple_simplify_BIT_XOR_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case INTEGER_CST:
					  {
					    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q41 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
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
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
					  {
					    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q31))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case RSHIFT_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_q61))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q61 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
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
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      switch (TREE_CODE (_q51))
				        {
					case INTEGER_CST:
					  {
					    if ((_q31 == _q50 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q50, 0) && types_match (_q31, _q50)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _p0, _q51 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
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
if (integer_zerop (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1921;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1921:;
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
					if (gimple_simplify_3 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
	      case RSHIFT_EXPR:
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
			      case RSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_4 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q30 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
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
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
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
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
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
	      case BIT_NOT_EXPR:
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
			      case BIT_AND_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q41))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q60 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
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
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
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
	      case BIT_AND_EXPR:
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
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
		  if (integer_minus_onep (_q21))
		    {
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
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    if (gimple_simplify_8 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
			      case PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      if (integer_minus_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    if (gimple_simplify_9 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					      return true;
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
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      if (integer_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    if (gimple_simplify_10 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
		  if (integer_onep (_q21))
		    {
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
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    if (gimple_simplify_11 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _p1 };
				    if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20, _p1 };
				    if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q31, _p0 };
				    if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
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
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q31, _q50, _q30, _p0 };
				    if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _p1 };
				    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
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
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20, _p1 };
				    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
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
	      case BIT_AND_EXPR:
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q31, _p0 };
				    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
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
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q31, _q50, _q30, _p0 };
				    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
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
	      CASE_CONVERT:
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
				  {
				    tree _q40_pops[1];
				    if (gimple_maybe_bit_not (_q40, _q40_pops, valueize))
				      {
					tree _q50 = _q40_pops[0];
					{
					  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
					  if (gimple_simplify_14 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
		    tree _q20_pops[1];
		    if (gimple_maybe_bit_not (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
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
					{
					  tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
					  if (gimple_simplify_14 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
    if (gimple_maybe_bit_not (_p1, _p1_pops, valueize))
      {
	tree _q30 = _p1_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  if (gimple_simplify_14 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
	    return true;
	}
      }
  }
  {
    tree _p0_pops[1];
    if (gimple_maybe_bit_not (_p0, _p0_pops, valueize))
      {
	tree _q20 = _p0_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  if (gimple_simplify_14 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
	    return true;
	}
      }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1922;
	{
	  tree tem;
	  tem =  build_zero_cst (type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1922:;
      }
    }
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1923;
	{
	  res_op->set_op (BIT_NOT_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1923:;
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
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
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
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
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
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
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
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
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q30 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q30 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						      switch (TREE_CODE (_q61))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q61))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_NOT_EXPR:
								    {
								      tree _q80 = gimple_assign_rhs1 (_a4);
								      _q80 = do_valueize (valueize, _q80);
								      if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
									    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
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
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
								    {
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
									    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
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
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q21, _p1 };
							    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
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
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p1 };
				    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
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
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q40, _q20, _p1 };
							    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
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
					    if (gimple_simplify_19 (res_op, seq, valueize, type, captures))
					      return true;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
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
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      switch (TREE_CODE (_q61))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q61))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_NOT_EXPR:
								    {
								      tree _q80 = gimple_assign_rhs1 (_a4);
								      _q80 = do_valueize (valueize, _q80);
								      if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
									    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
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
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
								    {
								      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
									    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q20 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q21 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q20 };
			if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q21 };
			if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
			  return true;
		      }
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
				    case BIT_NOT_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q21, _p1 };
					  if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
				    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q20, _p1 };
				    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		  tree _q21_pops[1];
		  if (gimple_nop_convert (_q21, _q21_pops, valueize))
		    {
		      tree _q40 = _q21_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _p1 };
					if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
			      case BIT_IOR_EXPR:
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
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q21, _p0 };
							    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
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
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q21, _p0 };
							    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					      return true;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q20 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
			if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q20 };
			if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
			  return true;
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
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
					    if (gimple_simplify_19 (res_op, seq, valueize, type, captures))
					      return true;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_22 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
						if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
										if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
								if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
							if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
							if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
					      case BIT_IOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
							if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
							if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
					if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
			if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
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
					  case BIT_NOT_EXPR:
					    {
					      tree _q50 = gimple_assign_rhs1 (_a2);
					      _q50 = do_valueize (valueize, _q50);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q31, _p1 };
						if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
			{
			  tree _q31_pops[1];
			  if (gimple_nop_convert (_q31, _q31_pops, valueize))
			    {
			      tree _q50 = _q31_pops[0];
			      switch (TREE_CODE (_q50))
			        {
				case SSA_NAME:
				  if (gimple *_d2 = get_def (valueize, _q50))
				    {
				      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				        switch (gimple_assign_rhs_code (_a2))
					  {
					  case BIT_NOT_EXPR:
					    {
					      tree _q60 = gimple_assign_rhs1 (_a2);
					      _q60 = do_valueize (valueize, _q60);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _p1 };
						if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q31, _p1 };
					  if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q30, _p1 };
					  if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
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
				    case BIT_NOT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q31, _p0 };
					  if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		  {
		    tree _q31_pops[1];
		    if (gimple_nop_convert (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			switch (TREE_CODE (_q50))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q50))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q60 = gimple_assign_rhs1 (_a2);
					_q60 = do_valueize (valueize, _q60);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _p0 };
					  if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q31, _p0 };
				    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q30, _p0 };
				    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
					case BIT_NOT_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q41, _p0 };
					      if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		      {
			tree _q41_pops[1];
			if (gimple_nop_convert (_q41, _q41_pops, valueize))
			  {
			    tree _q60 = _q41_pops[0];
			    switch (TREE_CODE (_q60))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q60))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case BIT_NOT_EXPR:
					  {
					    tree _q70 = gimple_assign_rhs1 (_a2);
					    _q70 = do_valueize (valueize, _q70);
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q40, _p0 };
					      if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q41, _p0 };
					if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
		      switch (TREE_CODE (_q41))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q41))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q40, _p0 };
					if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
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
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  {
								    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
								    if (gimple_simplify_25 (res_op, seq, valueize, type, captures))
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
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
						    if (gimple_simplify_25 (res_op, seq, valueize, type, captures))
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
					  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
					  if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
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
	      case BIT_NOT_EXPR:
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
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
						    if (gimple_simplify_25 (res_op, seq, valueize, type, captures))
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
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_25 (res_op, seq, valueize, type, captures))
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
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1 };
		    if (gimple_simplify_27 (res_op, seq, valueize, type, captures))
		      return true;
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_28 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_28 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
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
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
					if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
					if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
					if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
					if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
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
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			if (gimple_simplify_28 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_28 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
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
								  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
									if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
									if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
									if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
									if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
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
			      case BIT_XOR_EXPR:
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
							if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q30 };
							if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q30 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
					      case BIT_XOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
							if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
							if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
					if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
			if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
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
			      case BIT_XOR_EXPR:
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
							      case BIT_XOR_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
								  if (tree_swap_operands_p (_q70, _q71))
								    std::swap (_q70, _q71);
								  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q71 };
									if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q70 };
									if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q71 };
									if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q70 };
									if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
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
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q61 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q61 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q60 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
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
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_31 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		    if (gimple_simplify_32 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q61 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q60 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q61 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q60 };
							if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
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
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_30 (res_op, seq, valueize, type, captures))
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
			    if (gimple_simplify_33 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			      return true;
			  }
		        }
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
						const enum tree_code op = BIT_XOR_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1924;
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
next_after_fail1924:;
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
						const enum tree_code op = BIT_XOR_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1925;
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
next_after_fail1925:;
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LT_EXPR, GE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LT_EXPR, GE_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LE_EXPR, GT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LE_EXPR, GT_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, EQ_EXPR, NE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, EQ_EXPR, NE_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, NE_EXPR, EQ_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, NE_EXPR, EQ_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GE_EXPR, LT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GE_EXPR, LT_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GT_EXPR, LE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GT_EXPR, LE_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLT_EXPR, GE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLT_EXPR, GE_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLE_EXPR, GT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLE_EXPR, GT_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGT_EXPR, LE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGT_EXPR, LE_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGE_EXPR, LT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGE_EXPR, LT_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
										    if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LT_EXPR, GE_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LT_EXPR, GE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LE_EXPR, GT_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LE_EXPR, GT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, EQ_EXPR, NE_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, EQ_EXPR, NE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, NE_EXPR, EQ_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, NE_EXPR, EQ_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GE_EXPR, LT_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GE_EXPR, LT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GT_EXPR, LE_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GT_EXPR, LE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLT_EXPR, GE_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLT_EXPR, GE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLE_EXPR, GT_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLE_EXPR, GT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGT_EXPR, LE_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGT_EXPR, LE_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGE_EXPR, LT_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGE_EXPR, LT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
										  if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
										if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
						const enum tree_code op = BIT_XOR_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1926;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1926:;
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
						const enum tree_code op = BIT_XOR_EXPR;
						gimple_seq *lseq = seq;
						if (lseq
						    && (!single_use (captures[0])
						        || !single_use (captures[3])))
						  lseq = NULL;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1927;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  res_op->ops[0] = captures[1];
						  res_op->ops[1] = captures[2];
						  res_op->ops[2] = captures[4];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1927:;
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LT_EXPR, GE_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LE_EXPR, GT_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, EQ_EXPR, NE_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, NE_EXPR, EQ_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GE_EXPR, LT_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, GT_EXPR, LE_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLT_EXPR, GE_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNLE_EXPR, GT_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGT_EXPR, LE_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNGE_EXPR, LT_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, UNEQ_EXPR, LTGT_EXPR))
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
										    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LTGT_EXPR, UNEQ_EXPR))
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
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (gimple_truth_valued_p (_q20, valueize))
		    {
		      if (gimple_truth_valued_p (_q21, valueize))
			{
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case EQ_EXPR:
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
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1928;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1928;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1928:;
						  }
					        }
					    }
					  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
					    {
					      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1929;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1929;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1929:;
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
	      case EQ_EXPR:
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
				      if (gimple_truth_valued_p (_q50, valueize))
					{
					  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					    {
					      if (gimple_truth_valued_p (_q51, valueize))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1930;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1930;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1930:;
						  }
					        }
					    }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if (gimple_truth_valued_p (_q50, valueize))
					{
					  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					    {
					      if (gimple_truth_valued_p (_q51, valueize))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1931;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1931;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1931:;
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
{
  tree _p0_pops[1];
  if (gimple_logical_inverted_value (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (gimple_truth_valued_p (_p1, valueize))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		if (gimple_simplify_34 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
		  return true;
	      }
	    }
        }
    }
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1 };
			if (gimple_simplify_37 (res_op, seq, valueize, type, captures))
			  return true;
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
			tree _q30_pops[1];
			if (gimple_nop_convert (_q30, _q30_pops, valueize))
			  {
			    tree _q40 = _q30_pops[0];
			    switch (TREE_CODE (_q31))
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
						  tree _q70 = gimple_assign_rhs1 (_a2);
						  _q70 = do_valueize (valueize, _q70);
						  tree _q71 = gimple_assign_rhs2 (_a2);
						  _q71 = do_valueize (valueize, _q71);
						  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
						    {
						      switch (TREE_CODE (_q71))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q71 };
							      if (gimple_simplify_39 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
				{
				  tree _p1_pops[1];
				  if (gimple_nop_convert (_p1, _p1_pops, valueize))
				    {
				      tree _q70 = _p1_pops[0];
				      switch (TREE_CODE (_q70))
				        {
					case SSA_NAME:
					  if (gimple *_d2 = get_def (valueize, _q70))
					    {
					      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					        switch (gimple_assign_rhs_code (_a2))
						  {
						  case MULT_EXPR:
						    {
						      tree _q80 = gimple_assign_rhs1 (_a2);
						      _q80 = do_valueize (valueize, _q80);
						      tree _q81 = gimple_assign_rhs2 (_a2);
						      _q81 = do_valueize (valueize, _q81);
						      if (tree_swap_operands_p (_q80, _q81))
						        std::swap (_q80, _q81);
						      {
							tree _q80_pops[1];
							if (gimple_nop_convert (_q80, _q80_pops, valueize))
							  {
							    tree _q90 = _q80_pops[0];
							    switch (TREE_CODE (_q81))
							      {
							      case INTEGER_CST:
							        {
								  {
								    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q70, _q90, _q81 };
								    if (gimple_simplify_38 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
				    }
				}
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
					if (gimple_simplify_40 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					  return true;
				      }
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
    }
}
if (gimple_truth_valued_p (_p0, valueize))
  {
    {
      tree _p1_pops[1];
      if (gimple_logical_inverted_value (_p1, _p1_pops, valueize))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		if (gimple_simplify_34 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
		  return true;
	      }
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
		    if (gimple_simplify_27 (res_op, seq, valueize, type, captures))
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			if (gimple_simplify_37 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_41 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_XOR_EXPR))
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
	      case LT_EXPR:
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
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1932;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1932:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
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
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1933;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1933:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
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
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1934;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1934:;
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
	      case LE_EXPR:
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
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1935;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1935:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
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
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1936;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1936:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
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
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1937;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1937:;
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
	      case GT_EXPR:
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
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1938;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1938:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1939;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1939:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1940;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1940:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1941;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1941:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1942;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1942:;
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
	      case GE_EXPR:
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
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1943;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1943:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1944;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1944:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1945;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1945:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1946;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1946:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1947;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1947:;
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
	      case EQ_EXPR:
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
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1948;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1948:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1949;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1949:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1950;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1950:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1951;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1951:;
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
	      case NE_EXPR:
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
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1952;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1952:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1953;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1953:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1954;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1954:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1955;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1955:;
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
					switch (TREE_CODE (_q51))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50, _q51 };
						if (gimple_simplify_42 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						  return true;
					      }
					      break;
					    }
				          default:;
				          }
				        break;
				      }
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
						    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q51 };
						    if (gimple_simplify_43 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
			      if (gimple_simplify_44 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			        return true;
			    }
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
			      case BIT_XOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (gimple_zero_one_valued_p (_q21, valueize))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
					    if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
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
				case BIT_XOR_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    if (tree_swap_operands_p (_q40, _q41))
				      std::swap (_q40, _q41);
				    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					  if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
					    return true;
					}
				      }
				    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					  if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
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
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q51, _p0, _q21 };
						    if (gimple_simplify_43 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
		      {
			tree _p1_pops[1];
			if (gimple_nop_convert (_p1, _p1_pops, valueize))
			  {
			    tree _q50 = _p1_pops[0];
			    switch (TREE_CODE (_q50))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q50))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case MULT_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    tree _q61 = gimple_assign_rhs2 (_a2);
					    _q61 = do_valueize (valueize, _q61);
					    if (tree_swap_operands_p (_q60, _q61))
					      std::swap (_q60, _q61);
					    {
					      tree _q60_pops[1];
					      if (gimple_nop_convert (_q60, _q60_pops, valueize))
					        {
						  tree _q70 = _q60_pops[0];
						  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
						    {
						      switch (TREE_CODE (_q61))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q61, _p0, _q21 };
							      if (gimple_simplify_39 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
							        return true;
							    }
							    break;
							  }
						        default:;
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
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
			      if (gimple_simplify_44 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
		  case MULT_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      {
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			      {
				switch (TREE_CODE (_q41))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
					if (gimple_simplify_40 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					  return true;
				      }
				      break;
				    }
			          default:;
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
						    if (gimple_simplify_46 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			      if (gimple_simplify_47 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
			      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			      if (gimple_simplify_47 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1956;
						{
						  res_op->set_op (BIT_XOR_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1956:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1957;
						{
						  res_op->set_op (BIT_XOR_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1957:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1958;
						{
						  res_op->set_op (BIT_XOR_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1958:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1959;
						{
						  res_op->set_op (BIT_XOR_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1959:;
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
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
					    if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
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
				case BIT_XOR_EXPR:
				  {
				    tree _q50 = gimple_assign_rhs1 (_a2);
				    _q50 = do_valueize (valueize, _q50);
				    tree _q51 = gimple_assign_rhs2 (_a2);
				    _q51 = do_valueize (valueize, _q51);
				    if (tree_swap_operands_p (_q50, _q51))
				      std::swap (_q50, _q51);
				    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
					  if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
					    return true;
					}
				      }
				    if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
					  if (gimple_simplify_45 (res_op, seq, valueize, type, captures))
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
 && (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1960;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1960;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1960;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1960:;
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
 && (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1961;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1961;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1961;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1961:;
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
 && (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1962;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1962;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1962;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1962:;
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
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
			  return true;
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
				  case LT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_49 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
					  }
				        }
				      break;
				    }
				  case GE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_50 (res_op, seq, valueize, type, captures))
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
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
			  return true;
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
				  case GE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_49 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
					  }
				        }
				      break;
				    }
				  case LT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _p0, _q20 };
					    if (gimple_simplify_50 (res_op, seq, valueize, type, captures))
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
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
			  return true;
		      }
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
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_48 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
			  return true;
		      }
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
		  if (uniform_integer_cst_p (_q21))
		    {
		      if (uniform_integer_cst_p (_q22))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
			    if (gimple_simplify_52 (res_op, seq, valueize, type, captures))
			      return true;
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
	      case CFN_PARITY:
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
				case CFN_PARITY:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_51 (res_op, seq, valueize, type, captures, CFN_PARITY))
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
	      case CFN_BUILT_IN_PARITYL:
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
				case CFN_BUILT_IN_PARITYL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_51 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYL))
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
	      case CFN_BUILT_IN_PARITYIMAX:
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
				case CFN_BUILT_IN_PARITYIMAX:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_51 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYIMAX))
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
	      case CFN_BUILT_IN_PARITY:
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
				case CFN_BUILT_IN_PARITY:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_51 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITY))
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
	      case CFN_BUILT_IN_PARITYLL:
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
				case CFN_BUILT_IN_PARITYLL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_51 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
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
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  if (uniform_integer_cst_p (_q31))
		    {
		      if (uniform_integer_cst_p (_q32))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
			    if (gimple_simplify_52 (res_op, seq, valueize, type, captures))
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1963;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1963;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1963:;
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
gimple_simplify_CFN_BUILT_IN_FMAXF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_605 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF32X))
      return true;
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
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2560;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF32X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2560;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1175, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2560:;
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
gimple_simplify_COMPLEX_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case REALPART_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
				      if ((TREE_CODE (_q40) == SSA_NAME
				           || is_gimple_min_invariant (_q40)))
				        {
					  _q40 = do_valueize (valueize, _q40);
					  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2565;
						{
						  tree tem;
						  tem = captures[0];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1181, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2565:;
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
  return false;
}

bool
gimple_simplify_UNLE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
 && (TREE_CODE_CLASS (UNLE_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2579;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2579;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2579;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2579:;
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
 && (TREE_CODE_CLASS (UNLE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2580;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2580;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2580;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2580:;
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
 && (TREE_CODE_CLASS (UNLE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2581;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2581;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2581;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2581:;
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
	if (gimple_simplify_635 (res_op, seq, valueize, type, captures, UNLE_EXPR))
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
				    if (gimple_simplify_274 (res_op, seq, valueize, type, captures, UNLE_EXPR, LE_EXPR))
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
				    if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNLE_EXPR, UNGE_EXPR))
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
		      if (gimple_simplify_278 (res_op, seq, valueize, type, captures, UNLE_EXPR, UNGE_EXPR))
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
	  if (gimple_simplify_633 (res_op, seq, valueize, type, captures, UNLE_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_MUL_OVERFLOW (gimple_match_op *res_op, gimple_seq *seq,
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		    if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_MUL_OVERFLOW))
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
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		    if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_MUL_OVERFLOW))
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
gimple_simplify_CFN_BUILT_IN_POWF32X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_427 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32X))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_428 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LDEXPL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_649 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_650 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2597;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1187, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2597:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBLNF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_649 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_650 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2602;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1187, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2602:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1)
{
  switch (code.get_rep())
    {
    case BIT_XOR_EXPR:
      return gimple_simplify_BIT_XOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case PLUS_EXPR:
      return gimple_simplify_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_PLUS_EXPR:
      return gimple_simplify_POINTER_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MINUS_EXPR:
      return gimple_simplify_MINUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_IOR_EXPR:
      return gimple_simplify_BIT_IOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_DIFF_EXPR:
      return gimple_simplify_POINTER_DIFF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MULT_EXPR:
      return gimple_simplify_MULT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EQ_EXPR:
      return gimple_simplify_EQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case NE_EXPR:
      return gimple_simplify_NE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGN:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNL:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF16:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_COPYSIGN:
      return gimple_simplify_CFN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_DIV_EXPR:
      return gimple_simplify_TRUNC_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_DIV_EXPR:
      return gimple_simplify_CEIL_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_DIV_EXPR:
      return gimple_simplify_FLOOR_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_DIV_EXPR:
      return gimple_simplify_ROUND_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EXACT_DIV_EXPR:
      return gimple_simplify_EXACT_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_MOD_EXPR:
      return gimple_simplify_FLOOR_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RDIV_EXPR:
      return gimple_simplify_RDIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LT_EXPR:
      return gimple_simplify_LT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LE_EXPR:
      return gimple_simplify_LE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GT_EXPR:
      return gimple_simplify_GT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GE_EXPR:
      return gimple_simplify_GE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_MOD_EXPR:
      return gimple_simplify_CEIL_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_MOD_EXPR:
      return gimple_simplify_ROUND_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_MOD_EXPR:
      return gimple_simplify_TRUNC_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LSHIFT_EXPR:
      return gimple_simplify_LSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RSHIFT_EXPR:
      return gimple_simplify_RSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF:
      return gimple_simplify_CFN_BUILT_IN_POWF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POW:
      return gimple_simplify_CFN_BUILT_IN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWL:
      return gimple_simplify_CFN_BUILT_IN_POWL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_POW:
      return gimple_simplify_CFN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIF:
      return gimple_simplify_CFN_BUILT_IN_POWIF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWI:
      return gimple_simplify_CFN_BUILT_IN_POWI (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIL:
      return gimple_simplify_CFN_BUILT_IN_POWIL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTF:
      return gimple_simplify_CFN_BUILT_IN_HYPOTF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOT:
      return gimple_simplify_CFN_BUILT_IN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTL:
      return gimple_simplify_CFN_BUILT_IN_HYPOTL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_HYPOT:
      return gimple_simplify_CFN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_AND_EXPR:
      return gimple_simplify_BIT_AND_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MIN_EXPR:
      return gimple_simplify_MIN_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MAX_EXPR:
      return gimple_simplify_MAX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF:
      return gimple_simplify_CFN_BUILT_IN_FMINF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMIN:
      return gimple_simplify_CFN_BUILT_IN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINL:
      return gimple_simplify_CFN_BUILT_IN_FMINL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF16:
      return gimple_simplify_CFN_BUILT_IN_FMINF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32:
      return gimple_simplify_CFN_BUILT_IN_FMINF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64:
      return gimple_simplify_CFN_BUILT_IN_FMINF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128:
      return gimple_simplify_CFN_BUILT_IN_FMINF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32X:
      return gimple_simplify_CFN_BUILT_IN_FMINF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64X:
      return gimple_simplify_CFN_BUILT_IN_FMINF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128X:
      return gimple_simplify_CFN_BUILT_IN_FMINF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMIN:
      return gimple_simplify_CFN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF:
      return gimple_simplify_CFN_BUILT_IN_FMAXF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAX:
      return gimple_simplify_CFN_BUILT_IN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXL:
      return gimple_simplify_CFN_BUILT_IN_FMAXL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF16:
      return gimple_simplify_CFN_BUILT_IN_FMAXF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMAX:
      return gimple_simplify_CFN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case LROTATE_EXPR:
      return gimple_simplify_LROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RROTATE_EXPR:
      return gimple_simplify_RROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case COMPLEX_EXPR:
      return gimple_simplify_COMPLEX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNORDERED_EXPR:
      return gimple_simplify_UNORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ORDERED_EXPR:
      return gimple_simplify_ORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLT_EXPR:
      return gimple_simplify_UNLT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLE_EXPR:
      return gimple_simplify_UNLE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGT_EXPR:
      return gimple_simplify_UNGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGE_EXPR:
      return gimple_simplify_UNGE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNEQ_EXPR:
      return gimple_simplify_UNEQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LTGT_EXPR:
      return gimple_simplify_LTGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_ADD_OVERFLOW:
      return gimple_simplify_CFN_ADD_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_SUB_OVERFLOW:
      return gimple_simplify_CFN_SUB_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_MUL_OVERFLOW:
      return gimple_simplify_CFN_MUL_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF16:
      return gimple_simplify_CFN_BUILT_IN_POWF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32:
      return gimple_simplify_CFN_BUILT_IN_POWF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64:
      return gimple_simplify_CFN_BUILT_IN_POWF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128:
      return gimple_simplify_CFN_BUILT_IN_POWF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32X:
      return gimple_simplify_CFN_BUILT_IN_POWF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64X:
      return gimple_simplify_CFN_BUILT_IN_POWF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128X:
      return gimple_simplify_CFN_BUILT_IN_POWF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPF:
      return gimple_simplify_CFN_BUILT_IN_LDEXPF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXP:
      return gimple_simplify_CFN_BUILT_IN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPL:
      return gimple_simplify_CFN_BUILT_IN_LDEXPL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_LDEXP:
      return gimple_simplify_CFN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBN:
      return gimple_simplify_CFN_BUILT_IN_SCALBN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLN:
      return gimple_simplify_CFN_BUILT_IN_SCALBLN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNL (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_ORIF_EXPR:
      return gimple_simplify_TRUTH_ORIF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_OR_EXPR:
      return gimple_simplify_TRUTH_OR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FNMA (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_665 (res_op, seq, valueize, type, captures))
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
				    if (gimple_simplify_666 (res_op, seq, valueize, type, captures))
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
		    if (gimple_simplify_665 (res_op, seq, valueize, type, captures))
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2823;
			{
			  res_op->set_op (CFN_FNMS, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1250, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2823:;
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
				    if (gimple_simplify_666 (res_op, seq, valueize, type, captures))
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
gimple_simplify_VEC_PERM_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
				  switch (TREE_CODE (_p2))
				    {
				    case VECTOR_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
					  if (gimple_simplify_692 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR))
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
				  switch (TREE_CODE (_p2))
				    {
				    case VECTOR_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
					  if (gimple_simplify_692 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR))
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
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  {
 tree op0 = captures[0], op1 = captures[1], op2 = captures[2];
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (op0));
 vec_perm_builder builder;
	      if (tree_to_vec_perm_builder (&builder, op2)
)
		{
		  {
 poly_uint64 nelts = TYPE_VECTOR_SUBPARTS (type);
 bool single_arg = (op0 == op1);
 vec_perm_indices sel (builder, single_arg ? 1 : 2, nelts);
		      if (sel.series_p (0, 1, 0, 1)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2825;
			  {
			    tree tem;
			    tem =  op0;
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1252, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2825:;
			}
		      else
			{
			  if (sel.series_p (0, 1, nelts, 1)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2826;
			      {
				tree tem;
				tem =  op1;
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1253, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2826:;
			    }
			  else
			    {
			      {
 if (!single_arg)
 {
 if (sel.all_from_input_p (0))
 op1 = op0;
 else if (sel.all_from_input_p (1))
 {
 op0 = op1;
 sel.rotate_inputs (1);
 }
 else if (known_ge (poly_uint64 (sel[0]), nelts))
 {
 std::swap (op0, op1);
 sel.rotate_inputs (1);
 }
 }
 gassign *def;
 tree cop0 = op0, cop1 = op1;
 if (TREE_CODE (op0) == SSA_NAME
 && (def = dyn_cast <gassign *> (SSA_NAME_DEF_STMT (op0)))
 && gimple_assign_rhs_code (def) == CONSTRUCTOR)
 cop0 = gimple_assign_rhs1 (def);
 if (TREE_CODE (op1) == SSA_NAME
 && (def = dyn_cast <gassign *> (SSA_NAME_DEF_STMT (op1)))
 && gimple_assign_rhs_code (def) == CONSTRUCTOR)
 cop1 = gimple_assign_rhs1 (def);
 tree t;
				  if ((TREE_CODE (cop0) == VECTOR_CST
 || TREE_CODE (cop0) == CONSTRUCTOR)
 && (TREE_CODE (cop1) == VECTOR_CST
 || TREE_CODE (cop1) == CONSTRUCTOR)
 && (t = fold_vec_perm (type, cop0, cop1, sel))
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2827;
				      {
					tree tem;
					tem =  t;
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1254, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2827:;
				    }
				  else
				    {
				      {
 bool changed = (op0 == op1 && !single_arg);
 tree ins = NULL_TREE;
 unsigned at = 0;
 if (op_mode != BLKmode
 && (TREE_CODE (cop0) == VECTOR_CST
 || TREE_CODE (cop0) == CONSTRUCTOR
 || TREE_CODE (cop1) == VECTOR_CST
 || TREE_CODE (cop1) == CONSTRUCTOR))
 {
 bool insert_first_p = sel.series_p (1, 1, nelts + 1, 1);
 if (insert_first_p)
 {
 at = 0;
 if ((ins = fold_read_from_vector (cop0, sel[0])))
 op0 = op1;
 }
 if (!insert_first_p || (!ins && maybe_eq (nelts, 2u)))
 {
 unsigned int encoded_nelts = sel.encoding ().encoded_nelts ();
 for (at = 0; at < encoded_nelts; ++at)
 if (maybe_ne (sel[at], at))
 break;
 if (at < encoded_nelts
 && (known_eq (at + 1, nelts)
 || sel.series_p (at + 1, 1, at + 1, 1)))
 {
 if (known_lt (poly_uint64 (sel[at]), nelts))
 ins = fold_read_from_vector (cop0, sel[at]);
 else
 ins = fold_read_from_vector (cop1, sel[at] - nelts);
 }
 }
 }
 if (!ins && sel.encoding () != builder)
 {
 tree oldop2 = op2;
 if (sel.ninputs () == 2
 || can_vec_perm_const_p (result_mode, op_mode, sel, false))
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel);
 else
 {
 vec_perm_indices sel2 (builder, 2, nelts);
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false))
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel2);
 else
 op2 = vec_perm_indices_to_tree (TREE_TYPE (op2), sel);
 }
 if (!operand_equal_p (op2, oldop2, 0))
 changed = true;
 }
					  if (ins
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2828;
					      {
						res_op->set_op (BIT_INSERT_EXPR, type, 3);
						res_op->ops[0] =  op0;
						res_op->ops[1] =  ins;
						res_op->ops[2] =  bitsize_int (at * vector_element_bits (type));
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1255, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail2828:;
					    }
					  else
					    {
					      if (changed
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2829;
						  {
						    res_op->set_op (VEC_PERM_EXPR, type, 3);
						    res_op->ops[0] =  op0;
						    res_op->ops[1] =  op1;
						    res_op->ops[2] =  op2;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1256, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2829:;
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
        break;
      }
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
				  case VEC_PERM_EXPR:
				    {
				      tree _q30 = gimple_assign_rhs1 (_a2);
				      _q30 = do_valueize (valueize, _q30);
				      tree _q31 = gimple_assign_rhs2 (_a2);
				      _q31 = do_valueize (valueize, _q31);
				      tree _q32 = gimple_assign_rhs3 (_a2);
				      _q32 = do_valueize (valueize, _q32);
				      switch (TREE_CODE (_q32))
				        {
					case VECTOR_CST:
					  {
					    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
					      {
						switch (TREE_CODE (_p2))
						  {
						  case VECTOR_CST:
						    {
						      {
							tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q32, _p2 };
							if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
							  {
							    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 1);
								if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
 && TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))
 == TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[1])))
)
								  {
								    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 1, nelts);
 for (int i = 0; i < nelts; i++)
 builder2.quick_push (sel0[sel1[i].to_constant ()]);
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
									if (op0
)
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2830;
									    {
									      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
									      {
										tree _o1[3], _r1;
										_o1[0] = captures[2];
										_o1[1] = captures[3];
										_o1[2] =  op0;
										gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
										tem_op.resimplify (lseq, valueize);
										_r1 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r1) goto next_after_fail2830;
										res_op->ops[0] = _r1;
									      }
									      res_op->resimplify (lseq, valueize);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1257, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail2830:;
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
			if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case VECTOR_CST:
			        {
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _q22, _p2 };
				    if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				      {
					{
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 1);
					    if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
 && TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[0])))
 == TYPE_SIZE (TREE_TYPE (TREE_TYPE (captures[1])))
)
					      {
						{
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 1, nelts);
 for (int i = 0; i < nelts; i++)
 builder2.quick_push (sel0[sel1[i].to_constant ()]);
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
						    if (op0
)
						      {
							gimple_seq *lseq = seq;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2831;
							{
							  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							  {
							    tree _o1[3], _r1;
							    _o1[0] = captures[2];
							    _o1[1] = captures[3];
							    _o1[2] =  op0;
							    gimple_match_op tem_op (res_op->cond.any_else (), VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2831;
							    res_op->ops[0] = _r1;
							  }
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1257, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2831:;
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
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (gimple_vec_same_elem_p (_p0, valueize))
  {
    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p2 };
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2832;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2832:;
	    }
	  else
	    {
	      {
 tree elem = uniform_vector_p (captures[0]);
		  if (elem
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2833;
		      {
			tree tem;
			tem =  build_vector_from_val (type, elem);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1259, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2833:;
		    }
	      }
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
	      case VEC_PERM_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  switch (TREE_CODE (_q32))
		    {
		    case VECTOR_CST:
		      {
			switch (TREE_CODE (_p2))
			  {
			  case VECTOR_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
				if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				  {
				    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[2]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 2);
					if (tree_to_vec_perm_builder (&builder0, captures[4])
 && tree_to_vec_perm_builder (&builder1, captures[5])
)
					  {
					    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 2, nelts);
 bool use_1 = false, use_2 = false;
 for (int i = 0; i < nelts; i++)
 {
 if (known_lt ((poly_uint64)sel1[i], sel1.nelts_per_input ()))
 builder2.quick_push (sel1[i]);
 else
 {
 poly_uint64 j = sel0[(sel1[i] - sel1.nelts_per_input ())
 .to_constant ()];
 if (known_lt (j, sel0.nelts_per_input ()))
 use_1 = true;
 else
 {
 use_2 = true;
 j -= sel0.nelts_per_input ();
 }
 builder2.quick_push (j + sel1.nelts_per_input ());
 }
 }
						if (use_1 ^ use_2
)
						  {
						    {
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[1])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
							if (op0
)
							  {
							    if (use_1
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2834;
								{
								  res_op->set_op (VEC_PERM_EXPR, type, 3);
								  res_op->ops[0] = captures[0];
								  res_op->ops[1] = captures[2];
								  res_op->ops[2] =  op0;
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1260, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2834:;
							      }
							    else
							      {
								if (use_2
)
								  {
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2835;
								    {
								      res_op->set_op (VEC_PERM_EXPR, type, 3);
								      res_op->ops[0] = captures[0];
								      res_op->ops[1] = captures[3];
								      res_op->ops[2] =  op0;
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2835:;
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
			switch (TREE_CODE (_p2))
			  {
			  case VECTOR_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _p2 };
				if (TYPE_VECTOR_SUBPARTS (type).is_constant ()
)
				  {
				    {
 machine_mode result_mode = TYPE_MODE (type);
 machine_mode op_mode = TYPE_MODE (TREE_TYPE (captures[1]));
 int nelts = TYPE_VECTOR_SUBPARTS (type).to_constant ();
 vec_perm_builder builder0;
 vec_perm_builder builder1;
 vec_perm_builder builder2 (nelts, nelts, 2);
					if (tree_to_vec_perm_builder (&builder0, captures[3])
 && tree_to_vec_perm_builder (&builder1, captures[5])
)
					  {
					    {
 vec_perm_indices sel0 (builder0, 2, nelts);
 vec_perm_indices sel1 (builder1, 2, nelts);
 bool use_1 = false, use_2 = false;
 for (int i = 0; i < nelts; i++)
 {
 if (known_ge ((poly_uint64)sel1[i], sel1.nelts_per_input ()))
 builder2.quick_push (sel1[i]);
 else
 {
 poly_uint64 j = sel0[sel1[i].to_constant ()];
 if (known_lt (j, sel0.nelts_per_input ()))
 use_1 = true;
 else
 {
 use_2 = true;
 j -= sel0.nelts_per_input ();
 }
 builder2.quick_push (j);
 }
 }
						if (use_1 ^ use_2
)
						  {
						    {
 vec_perm_indices sel2 (builder2, 2, nelts);
 tree op0 = NULL_TREE;
 if (can_vec_perm_const_p (result_mode, op_mode, sel2, false)
 || (single_use (captures[0])
 ? (!can_vec_perm_const_p (result_mode, op_mode, sel0, false)
 || !can_vec_perm_const_p (result_mode, op_mode, sel1, false))
 : !can_vec_perm_const_p (result_mode, op_mode, sel1, false)))
 op0 = vec_perm_indices_to_tree (TREE_TYPE (captures[5]), sel2);
							if (op0
)
							  {
							    if (use_1
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2836;
								{
								  res_op->set_op (VEC_PERM_EXPR, type, 3);
								  res_op->ops[0] = captures[1];
								  res_op->ops[1] = captures[4];
								  res_op->ops[2] =  op0;
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2836:;
							      }
							    else
							      {
								if (use_2
)
								  {
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2837;
								    {
								      res_op->set_op (VEC_PERM_EXPR, type, 3);
								      res_op->ops[0] = captures[2];
								      res_op->ops[1] = captures[4];
								      res_op->ops[2] =  op0;
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2837:;
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
#pragma GCC diagnostic pop
