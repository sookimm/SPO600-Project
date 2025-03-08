/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_logical_inverted_value (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
	      case TRUTH_NOT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
		      res_ops[0] = captures[0];
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 24, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  if (gimple_truth_valued_p (_p0, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 25, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 26, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		    }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (gimple_truth_valued_p (_p0, valueize))
		    {
		      if (integer_truep (_p1))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			    {
			      res_ops[0] = captures[0];
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 27, __FILE__, __LINE__, false);
			      return true;
			    }
			  }
		        }
		    }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (gimple_truth_valued_p (_p0, valueize))
		    {
		      if (integer_truep (_p1))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			    {
			      res_ops[0] = captures[0];
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 28, __FILE__, __LINE__, false);
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
gimple_signed_integer_sat_sub (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q31))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q31))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q70 = gimple_assign_rhs1 (_a5);
										  _q70 = do_valueize (valueize, _q70);
										  tree _q71 = gimple_assign_rhs2 (_a5);
										  _q71 = do_valueize (valueize, _q71);
										  if (tree_swap_operands_p (_q70, _q71))
										    std::swap (_q70, _q71);
										  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
										  if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q41 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q41, 0) && types_match (_q160, _q41)))
																	    {
																	      if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
								        }
								      break;
								    default:;
								    }
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															tree _q121 = gimple_assign_rhs2 (_a6);
															_q121 = do_valueize (valueize, _q121);
															if (tree_swap_operands_p (_q120, _q121))
															  std::swap (_q120, _q121);
															if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															  {
															    if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
															if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															  {
															    if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q31))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q31))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q70 = gimple_assign_rhs1 (_a5);
										  _q70 = do_valueize (valueize, _q70);
										  tree _q71 = gimple_assign_rhs2 (_a5);
										  _q71 = do_valueize (valueize, _q71);
										  if (tree_swap_operands_p (_q70, _q71))
										    std::swap (_q70, _q71);
										  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
										  if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q41 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q41, 0) && types_match (_q170, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
								        }
								      break;
								    default:;
								    }
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															tree _q121 = gimple_assign_rhs2 (_a6);
															_q121 = do_valueize (valueize, _q121);
															if (tree_swap_operands_p (_q120, _q121))
															  std::swap (_q120, _q121);
															if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															  {
															    if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
															if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															  {
															    if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													if (integer_zerop (_q31))
													  {
													    switch (TREE_CODE (_q21))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q21))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															case LT_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    tree _q131 = gimple_assign_rhs2 (_a6);
															    _q131 = do_valueize (valueize, _q131);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case BIT_XOR_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    if (tree_swap_operands_p (_q140, _q141))
																	      std::swap (_q140, _q141);
																	    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	      {
																		if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
																	    if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
																	      {
																		if ((_q141 == _q40 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q40, 0) && types_match (_q141, _q40)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
								  if (integer_zerop (_q31))
								    {
								      switch (TREE_CODE (_q21))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q21))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case LT_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case BIT_XOR_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if (tree_swap_operands_p (_q90, _q91))
												        std::swap (_q90, _q91);
												      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case MINUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q91 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
												      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case MINUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q41 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q41, 0) && types_match (_q180, _q41)))
																				{
																				  if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q91 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
								  case CFN_SUB_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									        {
										  tree _q80 = _p1_pops[0];
										  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
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
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
													  if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
													    {
													      {
														tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
														if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
														  {
														    if (types_match (type, captures[0], captures[1])
)
														      {
															{
															  res_ops[0] = captures[0];
															  res_ops[1] = captures[1];
															  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
			      default:;
			      }
		        }
		      break;
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
					    case BIT_AND_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								switch (TREE_CODE (_q31))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q31))
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
										if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
										if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q41 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q41, 0) && types_match (_q160, _q41)))
																	  {
																	    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
								      }
								    break;
							          default:;
							          }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      tree _q121 = gimple_assign_rhs2 (_a5);
														      _q121 = do_valueize (valueize, _q121);
														      if (tree_swap_operands_p (_q120, _q121))
														        std::swap (_q120, _q121);
														      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															{
															  if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
														      if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															{
															  if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
					    case BIT_AND_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								switch (TREE_CODE (_q31))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q31))
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
										if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
										if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q41 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q41, 0) && types_match (_q170, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
								      }
								    break;
							          default:;
							          }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      tree _q121 = gimple_assign_rhs2 (_a5);
														      _q121 = do_valueize (valueize, _q121);
														      if (tree_swap_operands_p (_q120, _q121))
														        std::swap (_q120, _q121);
														      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															{
															  if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
														      if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															{
															  if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
		    case BIT_AND_EXPR:
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
					    case LT_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      if (integer_zerop (_q31))
													{
													  switch (TREE_CODE (_q21))
													    {
													    case SSA_NAME:
													      if (gimple *_d5 = get_def (valueize, _q21))
													        {
														  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
														    switch (gimple_assign_rhs_code (_a5))
														      {
														      case LT_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  tree _q131 = gimple_assign_rhs2 (_a5);
															  _q131 = do_valueize (valueize, _q131);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case BIT_XOR_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  if (tree_swap_operands_p (_q140, _q141))
																	    std::swap (_q140, _q141);
																	  if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	    {
																	      if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
																	  if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
																	    {
																	      if ((_q141 == _q40 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q40, 0) && types_match (_q141, _q40)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
								if (integer_zerop (_q31))
								  {
								    switch (TREE_CODE (_q21))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q21))
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
										    switch (TREE_CODE (_q80))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q80))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case BIT_XOR_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    if (tree_swap_operands_p (_q90, _q91))
												      std::swap (_q90, _q91);
												    if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case MINUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q91 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
												    if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case MINUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q41 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q41, 0) && types_match (_q180, _q41)))
																			      {
																				if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q91 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
								case CFN_SUB_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									      {
										tree _q80 = _p1_pops[0];
										if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
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
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
													if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
													  {
													    {
													      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
														{
														  if (types_match (type, captures[0], captures[1])
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q31))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q31))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q70 = gimple_assign_rhs1 (_a5);
										  _q70 = do_valueize (valueize, _q70);
										  tree _q71 = gimple_assign_rhs2 (_a5);
										  _q71 = do_valueize (valueize, _q71);
										  if (tree_swap_operands_p (_q70, _q71))
										    std::swap (_q70, _q71);
										  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
										  if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q41 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q41, 0) && types_match (_q160, _q41)))
																	    {
																	      if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
								        }
								      break;
								    default:;
								    }
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															tree _q121 = gimple_assign_rhs2 (_a6);
															_q121 = do_valueize (valueize, _q121);
															if (tree_swap_operands_p (_q120, _q121))
															  std::swap (_q120, _q121);
															if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															  {
															    if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
															if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															  {
															    if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    {
																      tree _p1_pops[1];
																      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																        {
																	  tree _q160 = _p1_pops[0];
																	  if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	    {
																	      if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			  return true;
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
					      case BIT_AND_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q31))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q31))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case BIT_XOR_EXPR:
									        {
										  tree _q70 = gimple_assign_rhs1 (_a5);
										  _q70 = do_valueize (valueize, _q70);
										  tree _q71 = gimple_assign_rhs2 (_a5);
										  _q71 = do_valueize (valueize, _q71);
										  if (tree_swap_operands_p (_q70, _q71))
										    std::swap (_q70, _q71);
										  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
										  if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										    {
										      {
											tree _q71_pops[1];
											if (gimple_nop_convert (_q71, _q71_pops, valueize))
											  {
											    tree _q90 = _q71_pops[0];
											    switch (TREE_CODE (_q90))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _q90))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													case MINUS_EXPR:
													  {
													    tree _q100 = gimple_assign_rhs1 (_a6);
													    _q100 = do_valueize (valueize, _q100);
													    tree _q101 = gimple_assign_rhs2 (_a6);
													    _q101 = do_valueize (valueize, _q101);
													    {
													      tree _q100_pops[1];
													      if (gimple_nop_convert (_q100, _q100_pops, valueize))
													        {
														  tree _q110 = _q100_pops[0];
														  if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														    {
														      {
															tree _q101_pops[1];
															if (gimple_nop_convert (_q101, _q101_pops, valueize))
															  {
															    tree _q130 = _q101_pops[0];
															    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q41 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q41, 0) && types_match (_q170, _q41)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
								        }
								      break;
								    default:;
								    }
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													switch (TREE_CODE (_q31))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q31))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case BIT_XOR_EXPR:
														      {
															tree _q120 = gimple_assign_rhs1 (_a6);
															_q120 = do_valueize (valueize, _q120);
															tree _q121 = gimple_assign_rhs2 (_a6);
															_q121 = do_valueize (valueize, _q121);
															if (tree_swap_operands_p (_q120, _q121))
															  std::swap (_q120, _q121);
															if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															  {
															    if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
															if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															  {
															    if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															      {
																if (integer_zerop (_q21))
																  {
																    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																      {
																	{
																	  tree _p2_pops[1];
																	  if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	    {
																	      tree _q170 = _p2_pops[0];
																	      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																		{
																		  {
																		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			  return true;
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
							      case BIT_XOR_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  {
								    tree _q41_pops[1];
								    if (gimple_nop_convert (_q41, _q41_pops, valueize))
								      {
									tree _q60 = _q41_pops[0];
									switch (TREE_CODE (_q60))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q60))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case MINUS_EXPR:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											tree _q71 = gimple_assign_rhs2 (_a5);
											_q71 = do_valueize (valueize, _q71);
											{
											  tree _q70_pops[1];
											  if (gimple_nop_convert (_q70, _q70_pops, valueize))
											    {
											      tree _q80 = _q70_pops[0];
											      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
												{
												  {
												    tree _q71_pops[1];
												    if (gimple_nop_convert (_q71, _q71_pops, valueize))
												      {
													tree _q100 = _q71_pops[0];
													if (integer_zerop (_q31))
													  {
													    switch (TREE_CODE (_q21))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q21))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															case LT_EXPR:
															  {
															    tree _q130 = gimple_assign_rhs1 (_a6);
															    _q130 = do_valueize (valueize, _q130);
															    tree _q131 = gimple_assign_rhs2 (_a6);
															    _q131 = do_valueize (valueize, _q131);
															    switch (TREE_CODE (_q130))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q130))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case BIT_XOR_EXPR:
																	  {
																	    tree _q140 = gimple_assign_rhs1 (_a7);
																	    _q140 = do_valueize (valueize, _q140);
																	    tree _q141 = gimple_assign_rhs2 (_a7);
																	    _q141 = do_valueize (valueize, _q141);
																	    if (tree_swap_operands_p (_q140, _q141))
																	      std::swap (_q140, _q141);
																	    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	      {
																		if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
																	    if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
																	      {
																		if ((_q141 == _q40 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q40, 0) && types_match (_q141, _q40)))
																		  {
																		    if (integer_zerop (_q131))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
								  if (integer_zerop (_q31))
								    {
								      switch (TREE_CODE (_q21))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q21))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case LT_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case BIT_XOR_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if (tree_swap_operands_p (_q90, _q91))
												        std::swap (_q90, _q91);
												      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case MINUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																				{
																				  if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q91 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
												      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
													{
													  {
													    tree _q91_pops[1];
													    if (gimple_nop_convert (_q91, _q91_pops, valueize))
													      {
														tree _q110 = _q91_pops[0];
														switch (TREE_CODE (_q110))
														  {
														  case SSA_NAME:
														    if (gimple *_d7 = get_def (valueize, _q110))
														      {
															if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															  switch (gimple_assign_rhs_code (_a7))
															    {
															    case MINUS_EXPR:
															      {
																tree _q120 = gimple_assign_rhs1 (_a7);
																_q120 = do_valueize (valueize, _q120);
																tree _q121 = gimple_assign_rhs2 (_a7);
																_q121 = do_valueize (valueize, _q121);
																{
																  tree _q120_pops[1];
																  if (gimple_nop_convert (_q120, _q120_pops, valueize))
																    {
																      tree _q130 = _q120_pops[0];
																      if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																	{
																	  {
																	    tree _q121_pops[1];
																	    if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	      {
																		tree _q150 = _q121_pops[0];
																		if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		  {
																		    if (integer_zerop (_q81))
																		      {
																			{
																			  tree _p1_pops[1];
																			  if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			    {
																			      tree _q180 = _p1_pops[0];
																			      if ((_q180 == _q41 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q41, 0) && types_match (_q180, _q41)))
																				{
																				  if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				    {
																				      {
																					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q91 };
																					if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					  {
																					    {
																					      res_ops[0] = captures[0];
																					      res_ops[1] = captures[1];
																					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					      return true;
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
								  case CFN_SUB_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (integer_zerop (_q21))
									  {
									    {
									      tree _p1_pops[1];
									      if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									        {
										  tree _q80 = _p1_pops[0];
										  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
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
												      tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												      if ((TREE_CODE (_q100) == SSA_NAME
												           || is_gimple_min_invariant (_q100)))
												        {
													  _q100 = do_valueize (valueize, _q100);
													  if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
													    {
													      {
														tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
														if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
														  {
														    if (types_match (type, captures[0], captures[1])
)
														      {
															{
															  res_ops[0] = captures[0];
															  res_ops[1] = captures[1];
															  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
			      default:;
			      }
		        }
		      break;
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
					    case BIT_AND_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								switch (TREE_CODE (_q31))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q31))
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
										if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
										if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q41 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q41, 0) && types_match (_q160, _q41)))
																	  {
																	    if ((_p2 == _q71 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q71, 0) && types_match (_p2, _q71)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
								      }
								    break;
							          default:;
							          }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      tree _q121 = gimple_assign_rhs2 (_a5);
														      _q121 = do_valueize (valueize, _q121);
														      if (tree_swap_operands_p (_q120, _q121))
														        std::swap (_q120, _q121);
														      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															{
															  if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
														      if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															{
															  if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  {
																    tree _p1_pops[1];
																    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																      {
																	tree _q160 = _p1_pops[0];
																	if ((_q160 == _q40 && ! TREE_SIDE_EFFECTS (_q160)) || (operand_equal_p (_q160, _q40, 0) && types_match (_q160, _q40)))
																	  {
																	    if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 77, __FILE__, __LINE__, false);
																			return true;
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
					    case BIT_AND_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								switch (TREE_CODE (_q31))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q31))
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
										if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
										if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
										  {
										    {
										      tree _q71_pops[1];
										      if (gimple_nop_convert (_q71, _q71_pops, valueize))
										        {
											  tree _q90 = _q71_pops[0];
											  switch (TREE_CODE (_q90))
											    {
											    case SSA_NAME:
											      if (gimple *_d5 = get_def (valueize, _q90))
											        {
												  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												    switch (gimple_assign_rhs_code (_a5))
												      {
												      case MINUS_EXPR:
												        {
													  tree _q100 = gimple_assign_rhs1 (_a5);
													  _q100 = do_valueize (valueize, _q100);
													  tree _q101 = gimple_assign_rhs2 (_a5);
													  _q101 = do_valueize (valueize, _q101);
													  {
													    tree _q100_pops[1];
													    if (gimple_nop_convert (_q100, _q100_pops, valueize))
													      {
														tree _q110 = _q100_pops[0];
														if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
														  {
														    {
														      tree _q101_pops[1];
														      if (gimple_nop_convert (_q101, _q101_pops, valueize))
														        {
															  tree _q130 = _q101_pops[0];
															  if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q71 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q71, 0) && types_match (_p1, _q71)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q41 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q41, 0) && types_match (_q170, _q41)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q71 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
								      }
								    break;
							          default:;
							          }
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      switch (TREE_CODE (_q31))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q31))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case BIT_XOR_EXPR:
														    {
														      tree _q120 = gimple_assign_rhs1 (_a5);
														      _q120 = do_valueize (valueize, _q120);
														      tree _q121 = gimple_assign_rhs2 (_a5);
														      _q121 = do_valueize (valueize, _q121);
														      if (tree_swap_operands_p (_q120, _q121))
														        std::swap (_q120, _q121);
														      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
															{
															  if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
														      if ((_q120 == _q100 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q100, 0) && types_match (_q120, _q100)))
															{
															  if ((_q121 == _q40 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q40, 0) && types_match (_q121, _q40)))
															    {
															      if (integer_zerop (_q21))
																{
																  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
																    {
																      {
																	tree _p2_pops[1];
																	if (gimple_signed_integer_sat_val (_p2, _p2_pops, valueize))
																	  {
																	    tree _q170 = _p2_pops[0];
																	    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																	      {
																		{
																		  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																		  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
																			return true;
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
		    case BIT_AND_EXPR:
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
					    case LT_EXPR:
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
							    case BIT_XOR_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								if (tree_swap_operands_p (_q40, _q41))
								  std::swap (_q40, _q41);
								{
								  tree _q41_pops[1];
								  if (gimple_nop_convert (_q41, _q41_pops, valueize))
								    {
								      tree _q60 = _q41_pops[0];
								      switch (TREE_CODE (_q60))
								        {
									case SSA_NAME:
									  if (gimple *_d4 = get_def (valueize, _q60))
									    {
									      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									        switch (gimple_assign_rhs_code (_a4))
										  {
										  case MINUS_EXPR:
										    {
										      tree _q70 = gimple_assign_rhs1 (_a4);
										      _q70 = do_valueize (valueize, _q70);
										      tree _q71 = gimple_assign_rhs2 (_a4);
										      _q71 = do_valueize (valueize, _q71);
										      {
											tree _q70_pops[1];
											if (gimple_nop_convert (_q70, _q70_pops, valueize))
											  {
											    tree _q80 = _q70_pops[0];
											    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
											      {
												{
												  tree _q71_pops[1];
												  if (gimple_nop_convert (_q71, _q71_pops, valueize))
												    {
												      tree _q100 = _q71_pops[0];
												      if (integer_zerop (_q31))
													{
													  switch (TREE_CODE (_q21))
													    {
													    case SSA_NAME:
													      if (gimple *_d5 = get_def (valueize, _q21))
													        {
														  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
														    switch (gimple_assign_rhs_code (_a5))
														      {
														      case LT_EXPR:
														        {
															  tree _q130 = gimple_assign_rhs1 (_a5);
															  _q130 = do_valueize (valueize, _q130);
															  tree _q131 = gimple_assign_rhs2 (_a5);
															  _q131 = do_valueize (valueize, _q131);
															  switch (TREE_CODE (_q130))
															    {
															    case SSA_NAME:
															      if (gimple *_d6 = get_def (valueize, _q130))
															        {
																  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																    switch (gimple_assign_rhs_code (_a6))
																      {
																      case BIT_XOR_EXPR:
																        {
																	  tree _q140 = gimple_assign_rhs1 (_a6);
																	  _q140 = do_valueize (valueize, _q140);
																	  tree _q141 = gimple_assign_rhs2 (_a6);
																	  _q141 = do_valueize (valueize, _q141);
																	  if (tree_swap_operands_p (_q140, _q141))
																	    std::swap (_q140, _q141);
																	  if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																	    {
																	      if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
																	  if ((_q140 == _q100 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q100, 0) && types_match (_q140, _q100)))
																	    {
																	      if ((_q141 == _q40 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q40, 0) && types_match (_q141, _q40)))
																		{
																		  if (integer_zerop (_q131))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q41 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q41, 0) && types_match (_p2, _q41)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q100, _q41 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
								if (integer_zerop (_q31))
								  {
								    switch (TREE_CODE (_q21))
								      {
								      case SSA_NAME:
								        if (gimple *_d4 = get_def (valueize, _q21))
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
										    switch (TREE_CODE (_q80))
										      {
										      case SSA_NAME:
										        if (gimple *_d5 = get_def (valueize, _q80))
										          {
											    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											      switch (gimple_assign_rhs_code (_a5))
												{
												case BIT_XOR_EXPR:
												  {
												    tree _q90 = gimple_assign_rhs1 (_a5);
												    _q90 = do_valueize (valueize, _q90);
												    tree _q91 = gimple_assign_rhs2 (_a5);
												    _q91 = do_valueize (valueize, _q91);
												    if (tree_swap_operands_p (_q90, _q91))
												      std::swap (_q90, _q91);
												    if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case MINUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q40 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q40, 0) && types_match (_q180, _q40)))
																			      {
																				if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q91 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
												    if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
												      {
													{
													  tree _q91_pops[1];
													  if (gimple_nop_convert (_q91, _q91_pops, valueize))
													    {
													      tree _q110 = _q91_pops[0];
													      switch (TREE_CODE (_q110))
													        {
														case SSA_NAME:
														  if (gimple *_d6 = get_def (valueize, _q110))
														    {
														      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														        switch (gimple_assign_rhs_code (_a6))
															  {
															  case MINUS_EXPR:
															    {
															      tree _q120 = gimple_assign_rhs1 (_a6);
															      _q120 = do_valueize (valueize, _q120);
															      tree _q121 = gimple_assign_rhs2 (_a6);
															      _q121 = do_valueize (valueize, _q121);
															      {
																tree _q120_pops[1];
																if (gimple_nop_convert (_q120, _q120_pops, valueize))
																  {
																    tree _q130 = _q120_pops[0];
																    if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
																      {
																	{
																	  tree _q121_pops[1];
																	  if (gimple_nop_convert (_q121, _q121_pops, valueize))
																	    {
																	      tree _q150 = _q121_pops[0];
																	      if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																		{
																		  if (integer_zerop (_q81))
																		    {
																		      {
																			tree _p1_pops[1];
																			if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
																			  {
																			    tree _q180 = _p1_pops[0];
																			    if ((_q180 == _q41 && ! TREE_SIDE_EFFECTS (_q180)) || (operand_equal_p (_q180, _q41, 0) && types_match (_q180, _q41)))
																			      {
																				if ((_p2 == _q91 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q91, 0) && types_match (_p2, _q91)))
																				  {
																				    {
																				      tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q91 };
																				      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																					{
																					  {
																					    res_ops[0] = captures[0];
																					    res_ops[1] = captures[1];
																					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
																					    return true;
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
								case CFN_SUB_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (integer_zerop (_q21))
									{
									  {
									    tree _p1_pops[1];
									    if (gimple_signed_integer_sat_val (_p1, _p1_pops, valueize))
									      {
										tree _q80 = _p1_pops[0];
										if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
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
												    tree _q100 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
												    if ((TREE_CODE (_q100) == SSA_NAME
												         || is_gimple_min_invariant (_q100)))
												      {
													_q100 = do_valueize (valueize, _q100);
													if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
													  {
													    {
													      tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													      if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
														{
														  if (types_match (type, captures[0], captures[1])
)
														    {
														      {
															res_ops[0] = captures[0];
															res_ops[1] = captures[1];
															if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
gimple_simplify_571 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1458;
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
			if (!_r2) goto next_after_fail1458;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1458;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1458:;
		}
	      else
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1459;
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
			      if (!_r3) goto next_after_fail1459;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1459;
			_o1[0] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1459;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 815, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1459:;
		}
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1460;
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
		if (!_r2) goto next_after_fail1460;
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1460;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1460:;
	}
    }
  return false;
}

bool
gimple_simplify_587 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 ifn = IFN_CTZ;
 else if (direct_internal_fn_supported_p (IFN_CTZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH))
 ifn = IFN_CTZ;
      if (ifn == IFN_CTZ
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1484;
	  {
	    res_op->set_op (CFN_CTZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 828, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1484:;
	}
  }
  return false;
}

bool
gimple_simplify_593 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1490;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1490;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1490:;
    }
  return false;
}

bool
gimple_simplify_602 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1511;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1511:;
    }
  return false;
}

bool
gimple_simplify_607 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (orotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 auto prec = element_precision (TREE_TYPE (captures[0]));
      if (prec == wi::to_wide (captures[2])
)
	{
	  if (expr_not_equal_to (captures[3], wi::uhwi (prec,
 TYPE_PRECISION (TREE_TYPE (captures[3]))))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1516;
	      {
		res_op->set_op (orotate, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] = captures[3];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 846, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1516:;
	    }
	  else
	    {
	      if (single_use (captures[1])
 && pow2p_hwi (prec)
 && cfun
 && ((cfun->curr_properties & PROP_last_full_fold) != 0
 || !flag_tree_vrp
 || optimize_debug)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1517;
		  {
		    res_op->set_op (orotate, type, 2);
		    res_op->ops[0] = captures[0];
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[3];
		      _o1[1] =  build_int_cst (TREE_TYPE (captures[3]), prec - 1);
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1517;
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 847, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1517:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_625 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1537;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[5], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1537;
		_o1[4] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), cond_op, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1537;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 862, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1537:;
	}
  }
  return false;
}

bool
gimple_simplify_632 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1544;
  {
    res_op->set_op (cond_op, type, 5);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[0];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1544;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[3];
    res_op->ops[2] = captures[4];
    res_op->ops[3] = captures[5];
    res_op->ops[4] = captures[6];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 869, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1544:;
  return false;
}

bool
gimple_simplify_641 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (tans),
 const combined_fn ARG_UNUSED (atans))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1553;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1553:;
    }
  return false;
}

bool
gimple_simplify_647 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1559;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), tos, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1559;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1559:;
    }
  return false;
}

bool
gimple_simplify_656 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ifn),
 const combined_fn ARG_UNUSED (lfn),
 const combined_fn ARG_UNUSED (llfn))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (TYPE_PRECISION (long_long_integer_type_node)
 == TYPE_PRECISION (long_integer_type_node)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1568;
	  {
	    res_op->set_op (lfn, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1568:;
	}
    }
  return false;
}

bool
gimple_simplify_666 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1578;
      {
	res_op->set_op (CFN_FMS, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1578:;
    }
  return false;
}

bool
gimple_simplify_675 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
1
 || !TREE_SIDE_EFFECTS (captures[3]))
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1589;
	      {
		res_op->set_op (popcount, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1589;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1589:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_683 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || ((TYPE_PRECISION (TREE_TYPE (captures[0]))
 - TYPE_PRECISION (TREE_TYPE (captures[1]))) & 1) == 0)
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_PARITY;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 1);
 }
 type0 = unsigned_type_for (type0);
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_PARITY, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_PARITY;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_PARITY,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (unsigned_type_node))
 cfn = CFN_BUILT_IN_PARITY;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_unsigned_type_node))
 cfn = CFN_BUILT_IN_PARITYLL;
 }
	  if (cfn == CFN_PARITY
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1600;
	      {
		res_op->set_op (CFN_PARITY, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1600;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 920, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1600:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_PARITY
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1601;
		  {
		    res_op->set_op (CFN_BUILT_IN_PARITY, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1601;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 921, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1601:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_PARITYLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1602;
		      {
			res_op->set_op (CFN_BUILT_IN_PARITYLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1602;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1602:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COSHF (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn coss = CFN_BUILT_IN_COSHF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1651;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1651:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSHF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1652;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1652:;
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_COSHF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_COSHF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_COSHF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_ATANHF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_425 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSHF, CFN_BUILT_IN_ATANHF, CFN_BUILT_IN_SQRTF))
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
		      if (gimple_simplify_423 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_COSHF))
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
gimple_simplify_CFN_BUILT_IN_CCOSL (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1674;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOSL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1674:;
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
gimple_simplify_CFN_BUILT_IN_CABSF (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1678;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSF, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1678:;
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1679;
		    {
		      res_op->set_op (CFN_BUILT_IN_CABSF, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1679:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1680;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1680:;
		      }
		    }
		  if (real_zerop (_q20))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1681;
			{
			  res_op->set_op (ABS_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1681:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1682;
			    {
			      res_op->set_op (MULT_EXPR, type, 2);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail1682;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] =  build_real_truncate (type, dconst_sqrt2 ());
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1682:;
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
gimple_simplify_FIX_TRUNC_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
0
 && type == TREE_TYPE (captures[0]))
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1728;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 943, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1728:;
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
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
			if (((
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1729;
			    {
			      res_op->set_op (FIX_TRUNC_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1729:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1730;
				{
				  res_op->set_op (FIX_TRUNC_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 945, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1730:;
			      }
			    else
			      {
				if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1731;
				    {
				      res_op->set_op (FIX_TRUNC_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 946, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1731:;
				  }
				else
				  {
				    if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
				      {
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1732;
					{
					  res_op->set_op (FIX_TRUNC_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1732:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1733;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 948, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1733:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1734;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1734;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1734:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1735;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1735:;
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
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
			if (((
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1736;
			    {
			      res_op->set_op (FIX_TRUNC_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1736:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1737;
				{
				  res_op->set_op (FIX_TRUNC_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 945, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1737:;
			      }
			    else
			      {
				if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1738;
				    {
				      res_op->set_op (FIX_TRUNC_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 946, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1738:;
				  }
				else
				  {
				    if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
				      {
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1739;
					{
					  res_op->set_op (FIX_TRUNC_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1739:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1740;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 948, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1740:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1741;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1741;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1741:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1742;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1742:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LOGF (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF))
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
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF))
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1773;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1773;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1773:;
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP10F)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1774;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1774;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1774:;
			      }
			    }
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1775;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1775:;
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
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_POWF))
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_POW10F)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1776;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1776;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1776:;
			      }
			    }
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1777;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1777;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1777:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1778;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOGF, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1778;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1778:;
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
gimple_simplify_CFN_LOG2 (gimple_match_op *res_op, gimple_seq *seq,
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
			  if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_LOG2))
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
		      if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_LOG2))
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
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_EXP)
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1813;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1813;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1813:;
			      }
			    }
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
		      if (gimple_simplify_640 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_POW))
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1814;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 999, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1814:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1815;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1815;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1815:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1816;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_LOG2, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1816;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1816:;
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
gimple_simplify_CFN_BUILT_IN_EXPF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOGF:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1839;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1839:;
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
gimple_simplify_CFN_EXP (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_LOG:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1842;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1842:;
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
gimple_simplify_CFN_BUILT_IN_EXP2L (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOG2L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1845;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1845:;
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
gimple_simplify_CFN_BUILT_IN_EXP10 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOG10:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1848;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1000, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1848:;
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
gimple_simplify_CFN_BUILT_IN_SQRTF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_SQRTF:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1854;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real (type, dconst_quarter ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1001, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1854:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1855;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1855;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1855:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1856;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1856;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1856:;
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
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1857;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1857;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1857;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1857:;
			}
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1858;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1858;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1858:;
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
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1859;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real_truncate (type, dconst_sixth ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1004, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1859:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1860;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1860;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1860:;
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
gimple_simplify_CFN_SIN (gimple_match_op *res_op, gimple_seq *seq,
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_SIN, CFN_ATAN, CFN_SQRT, CFN_COPYSIGN))
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
gimple_simplify_CFN_BUILT_IN_TRUNCL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_647 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCL, CFN_BUILT_IN_TRUNC))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_646 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCL, CFN_BUILT_IN_TRUNCF))
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
	      case CFN_BUILT_IN_TRUNCL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCL))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF32 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_FLOORF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32, CFN_BUILT_IN_TRUNCF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_FLOOR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_FLOOR:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_FLOOR))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_FLOOR))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_648 (res_op, seq, valueize, type, captures, CFN_FLOOR, CFN_TRUNC))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_CEILF128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF128))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF16 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF16))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF128X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128X))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF32X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_NEARBYINTF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32X))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF32 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_RINTF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF32))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_RINT (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_RINT))
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
      if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_RINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ICEILL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_ICEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_ICEILF))
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
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_LCEILL, CFN_BUILT_IN_LLCEILL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IRINTL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_651 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_IRINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_IRINTF))
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
      if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_LRINTL, CFN_BUILT_IN_LLRINTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLCEIL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_652 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEIL, CFN_BUILT_IN_LLCEILF))
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
      if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEIL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEIL, CFN_BUILT_IN_LCEIL, CFN_BUILT_IN_LLCEIL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_IFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_653 (res_op, seq, valueize, type, captures, CFN_IFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_IFLOOR))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_IFLOOR, CFN_LFLOOR, CFN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ICEILF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILF, CFN_BUILT_IN_LCEILF, CFN_BUILT_IN_LLCEILF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_IROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_654 (res_op, seq, valueize, type, captures, CFN_IROUND))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_655 (res_op, seq, valueize, type, captures, CFN_IROUND, CFN_LROUND, CFN_LLROUND))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLRINTF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_657 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_656 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTF, CFN_BUILT_IN_LRINTF, CFN_BUILT_IN_LLRINTF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CTZ (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_671 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
		    if (gimple_simplify_672 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
		    if (gimple_simplify_673 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
			if (gimple_simplify_669 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
			if (gimple_simplify_670 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
gimple_simplify_CFN_BUILT_IN_POPCOUNTIMAX (gimple_match_op *res_op, gimple_seq *seq,
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
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
				    if (gimple_simplify_675 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_674 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_676 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_678 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_677 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTIMAX))
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
    if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FFSL (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FFSL))
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
      if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FFSL, CFN_BUILT_IN_CTZL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_XOR (gimple_match_op *res_op, gimple_seq *seq,
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
					      if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_XOR))
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
			  if (gimple_simplify_690 (res_op, seq, valueize, type, captures, CFN_REDUC_XOR))
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
		    if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_REDUC_XOR))
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
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1915;
			  {
			    res_op->set_op (BIT_XOR_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_XOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1915;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_XOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1915;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1915:;
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
gimple_simplify_POINTER_PLUS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1983;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1983:;
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
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1984;
		    {
		      res_op->set_op (POINTER_PLUS_EXPR, type, 2);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1984;
			res_op->ops[1] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1031, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1984:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1985;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1032, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1985:;
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
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
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
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q50 };
									if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
0
 && type == TREE_TYPE (captures[3])))
)
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1986;
									    {
									      tree tem;
									      tem = captures[3];
									      res_op->set_value (tem);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1033, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail1986:;
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
			      case POINTER_DIFF_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
					if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1987;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[3];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1034, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1987:;
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
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q31))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q31))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _p1, _q40 };
							if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
0
 && type == TREE_TYPE (captures[3])))
)
							  {
							    gimple_seq *lseq = seq;
							    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1988;
							    {
							      tree tem;
							      tem = captures[3];
							      res_op->set_value (tem);
							      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1033, __FILE__, __LINE__, true);
							      return true;
							    }
next_after_fail1988:;
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
	      case POINTER_DIFF_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
			if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1989;
			    {
			      res_op->set_op (NOP_EXPR, type, 1);
			      res_op->ops[0] = captures[3];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1034, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1989:;
			  }
		      }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
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
			      case BIT_AND_EXPR:
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
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      switch (TREE_CODE (_q41))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
							      {
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[1]));
								  gimple_seq *lseq = seq;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1990;
								  {
								    res_op->set_op (BIT_AND_EXPR, type, 2);
								    res_op->ops[0] = captures[0];
								    res_op->ops[1] =  algn;
								    res_op->resimplify (lseq, valueize);
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1035, __FILE__, __LINE__, true);
								    return true;
								  }
next_after_fail1990:;
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
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_NE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
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
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_220 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_220 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case CEIL_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_221 (res_op, seq, valueize, type, captures, NE_EXPR, CEIL_MOD_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case FLOOR_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_221 (res_op, seq, valueize, type, captures, NE_EXPR, FLOOR_MOD_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case ROUND_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_221 (res_op, seq, valueize, type, captures, NE_EXPR, ROUND_MOD_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_221 (res_op, seq, valueize, type, captures, NE_EXPR, TRUNC_MOD_EXPR))
			      return true;
			  }
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
		  if (gimple_zero_one_valued_p (_q20, valueize))
		    {
		      switch (TREE_CODE (_q21))
		        {
			case INTEGER_CST:
			  {
			    if (integer_zerop (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  if (tree_fits_shwi_p (captures[1])
 && tree_to_shwi (captures[1]) > 0
 && tree_to_shwi (captures[1]) < TYPE_PRECISION (TREE_TYPE (captures[0]))
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2211;
				      {
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->ops[0] = captures[0];
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1111, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2211:;
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_224 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_224 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_224 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_224 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					      if (gimple_simplify_225 (res_op, seq, valueize, type, captures, NE_EXPR))
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
								    case EXACT_DIV_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
									      if (gimple_simplify_226 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q41))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q41))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
							if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
							if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      tree _q40 = _p1_pops[0];
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
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
							    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
							    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	        }
	      case EXACT_DIV_EXPR:
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
				    case EXACT_DIV_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					      if (gimple_simplify_226 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	          break;
	        }
	      case TRUNC_DIV_EXPR:
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_229 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2212;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2212:;
					  }
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2213;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2213:;
					  }
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2214;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2214:;
					  }
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2215;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2215:;
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
			      CASE_CONVERT:
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
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
							if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      CASE_CONVERT:
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
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
							if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
			if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
			if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case POINTER_PLUS_EXPR:
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_230 (res_op, seq, valueize, type, captures, NE_EXPR))
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
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
							if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
					if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
					if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
			if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
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
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2216;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1051, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2216:;
					  }
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2217;
					    {
					      res_op->set_op (NE_EXPR, type, 2);
					      res_op->ops[0] = captures[2];
					      res_op->ops[1] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2217:;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			if (gimple_simplify_232 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					if (gimple_simplify_233 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
					if (gimple_simplify_234 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		if (gimple_simplify_222 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  case PLUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      switch (TREE_CODE (_q31))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q31))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
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
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
							    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
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
						  CASE_CONVERT:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
							    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  CASE_CONVERT:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
					      return true;
					  }
				        }
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
			      return true;
			  }
		        }
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
			    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
			      return true;
			  }
		        }
		      break;
		    }
		  case POINTER_PLUS_EXPR:
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
				  CASE_CONVERT:
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
						  CASE_CONVERT:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
							    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
					    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
					    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		if (gimple_simplify_222 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
					if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
			if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
			if (gimple_simplify_228 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  case PLUS_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      switch (TREE_CODE (_q41))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q41))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
					    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
			      return true;
			  }
		        }
		      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
			    if (gimple_simplify_227 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case POINTER_PLUS_EXPR:
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
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
							if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
					if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case POINTER_PLUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
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
						      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
							    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
					    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case POINTER_PLUS_EXPR:
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
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
					if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
			if (gimple_simplify_231 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  case POINTER_PLUS_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
					    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			    if (gimple_simplify_235 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case ADDR_EXPR:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				    if (gimple_simplify_236 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case POINTER_PLUS_EXPR:
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
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
				    if (gimple_simplify_236 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			  if (gimple_simplify_236 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case ADDR_EXPR:
			        {
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case POINTER_PLUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
								    if (gimple_simplify_237 (res_op, seq, valueize, type, captures, NE_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
							  if (gimple_simplify_237 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		    case ADDR_EXPR:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case POINTER_PLUS_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
							  if (gimple_simplify_237 (res_op, seq, valueize, type, captures, NE_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
						if (gimple_simplify_237 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case POINTER_PLUS_EXPR:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			tree _q31 = gimple_assign_rhs2 (_a1);
			_q31 = do_valueize (valueize, _q31);
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			  if (gimple_simplify_236 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_232 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_238 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
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
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case MINUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case INTEGER_CST:
						      {
							switch (TREE_CODE (_q51))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q51))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
									  {
									    {
									      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
									      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_q31))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q31))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							switch (TREE_CODE (_p1))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _p1))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
									  {
									    {
									      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
									      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
							if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					      case MINUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case INTEGER_CST:
						      {
							if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_q41))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q41))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_q21))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q21))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
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
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_q41))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q41))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
							  {
							    {
							      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
							      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
					      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			      if (gimple_simplify_239 (res_op, seq, valueize, type, captures, NE_EXPR))
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2218;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2218:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2219;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2219:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2220;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2220:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2221;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2221:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2222;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2222:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2223;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2223:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2224;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2224:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2225;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2225:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2226;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2226:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2227;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2227:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2228;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2228:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2229;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2229:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2230;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2230:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2231;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2231:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2232;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2232:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2233;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2233:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2234;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2234:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2235;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2235:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2236;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2236:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2237;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2237:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2238;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2238:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2239;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2239:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2240;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2240:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2241;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2241:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2242;
						{
						  res_op->set_op (NE_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2242:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2243;
						{
						  res_op->set_op (NE_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2243:;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MIN_EXPR, NE_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MIN_EXPR, NE_EXPR, GT_EXPR))
			  return true;
		      }
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2244;
						{
						  res_op->set_op (NE_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2244:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2245;
						{
						  res_op->set_op (NE_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2245:;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MAX_EXPR, NE_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MAX_EXPR, NE_EXPR, LT_EXPR))
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
if (gimple_with_possible_nonzero_bits (_p0, valueize))
  {
    if (gimple_with_known_nonzero_bits (_p1, valueize))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_240 (res_op, seq, valueize, type, captures, NE_EXPR))
	    return true;
	}
      }
  }
if (gimple_with_known_nonzero_bits (_p0, valueize))
  {
    if (gimple_with_possible_nonzero_bits (_p1, valueize))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_240 (res_op, seq, valueize, type, captures, NE_EXPR))
	    return true;
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
	      case MIN_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MIN_EXPR, NE_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MIN_EXPR, NE_EXPR, GT_EXPR))
			  return true;
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MAX_EXPR, NE_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_242 (res_op, seq, valueize, type, captures, MAX_EXPR, NE_EXPR, LT_EXPR))
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
	      case MIN_EXPR:
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
				if (gimple_simplify_243 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				if (gimple_simplify_244 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_245 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_pow2p (_q30))
				    {
				      if (integer_pow2p (_q21))
					{
					  if (integer_zerop (_p1))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
						if (gimple_simplify_246 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR))
						  return true;
					      }
					    }
				        }
				    }
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
						      if (gimple_simplify_247 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  if (integer_onep (_q30))
				    {
				      if (integer_pow2p (_q21))
					{
					  if (integer_zerop (_p1))
					    {
					      {
						tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q21 };
						if (gimple_simplify_248 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_pow2p (_q30))
				    {
				      if (integer_pow2p (_q21))
					{
					  if (integer_zerop (_p1))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
						if (gimple_simplify_249 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR))
						  return true;
					      }
					    }
				        }
				    }
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
						      if (gimple_simplify_250 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  case LSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (integer_onep (_q40))
					{
					  if (integer_pow2p (_q21))
					    {
					      if (integer_zerop (_p1))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q41, _q21 };
						    if (gimple_simplify_248 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR))
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
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_251 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case LROTATE_EXPR:
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
			      case LROTATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_252 (res_op, seq, valueize, type, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR))
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
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_253 (res_op, seq, valueize, type, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR))
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
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (gimple_simplify_254 (res_op, seq, valueize, type, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR))
			    return true;
			}
		        break;
		      }
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RROTATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_252 (res_op, seq, valueize, type, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR))
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
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_253 (res_op, seq, valueize, type, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR))
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
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (gimple_simplify_254 (res_op, seq, valueize, type, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR))
			    return true;
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2246;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2246;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2246;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2246:;
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2247;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2247;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2247;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2247:;
		      }
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
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_BSWAP128:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
					if (gimple_simplify_256 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case INTEGER_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_257 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
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
				case CFN_BUILT_IN_BSWAP16:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
					if (gimple_simplify_256 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case INTEGER_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_257 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
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
				case CFN_BUILT_IN_BSWAP32:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
					if (gimple_simplify_256 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case INTEGER_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_257 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
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
				case CFN_BUILT_IN_BSWAP64:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
					if (gimple_simplify_256 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case INTEGER_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_257 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64))
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2248;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2248;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2248;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2248:;
		      }
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
				  if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
				    {
				      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
					    const enum tree_code eqne = NE_EXPR;
					    if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2249;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  {
						    tree _o1[2], _r1;
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[0];
						      if (COMPARISON_CLASS_P (_o2[0]))
						        {
						          if (!seq) return false;
						          _o2[0] = gimple_build (seq, TREE_CODE (_o2[0]), TREE_TYPE (_o2[0]), TREE_OPERAND (_o2[0], 0), TREE_OPERAND (_o2[0], 1));
						        }
						      _o2[1] = captures[3];
						      if (COMPARISON_CLASS_P (_o2[1]))
						        {
						          if (!seq) return false;
						          _o2[1] = gimple_build (seq, TREE_CODE (_o2[1]), TREE_TYPE (_o2[1]), TREE_OPERAND (_o2[1], 0), TREE_OPERAND (_o2[1], 1));
						        }
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2249;
						      _o1[0] = _r2;
						    }
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[1];
						      _o2[1] = captures[2];
						      gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2249;
						      _o1[1] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2249;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  constant_boolean_node (eqne == NE_EXPR, type);
						  res_op->ops[2] =  constant_boolean_node (eqne != NE_EXPR, type);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1105, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2249:;
					      }
					  }
				        }
				    }
				  if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
				    {
				      if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
					    const enum tree_code eqne = NE_EXPR;
					    if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2250;
						{
						  res_op->set_op (COND_EXPR, type, 3);
						  {
						    tree _o1[2], _r1;
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[0];
						      if (COMPARISON_CLASS_P (_o2[0]))
						        {
						          if (!seq) return false;
						          _o2[0] = gimple_build (seq, TREE_CODE (_o2[0]), TREE_TYPE (_o2[0]), TREE_OPERAND (_o2[0], 0), TREE_OPERAND (_o2[0], 1));
						        }
						      _o2[1] = captures[3];
						      if (COMPARISON_CLASS_P (_o2[1]))
						        {
						          if (!seq) return false;
						          _o2[1] = gimple_build (seq, TREE_CODE (_o2[1]), TREE_TYPE (_o2[1]), TREE_OPERAND (_o2[1], 0), TREE_OPERAND (_o2[1], 1));
						        }
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2250;
						      _o1[0] = _r2;
						    }
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[1];
						      _o2[1] = captures[2];
						      gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, type, _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2250;
						      _o1[1] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2250;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  constant_boolean_node (eqne != NE_EXPR, type);
						  res_op->ops[2] =  constant_boolean_node (eqne == NE_EXPR, type);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1106, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2250:;
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
				  if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
				    {
				      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
					    const enum tree_code eqne = NE_EXPR;
					    if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2251;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  {
						    tree _o1[2], _r1;
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[0];
						      _o2[1] = captures[3];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2251;
						      _o1[0] = _r2;
						    }
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[1];
						      _o2[1] = captures[2];
						      gimple_match_op tem_op (res_op->cond.any_else (), NE_EXPR, type, _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2251;
						      _o1[1] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2251;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  constant_boolean_node (eqne == NE_EXPR, type);
						  res_op->ops[2] =  constant_boolean_node (eqne != NE_EXPR, type);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1105, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2251:;
					      }
					  }
				        }
				    }
				  if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
				    {
				      if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
					    const enum tree_code eqne = NE_EXPR;
					    if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2252;
						{
						  res_op->set_op (VEC_COND_EXPR, type, 3);
						  {
						    tree _o1[2], _r1;
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[0];
						      _o2[1] = captures[3];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2252;
						      _o1[0] = _r2;
						    }
						    {
						      tree _o2[2], _r2;
						      _o2[0] = captures[1];
						      _o2[1] = captures[2];
						      gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, type, _o2[0], _o2[1]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2252;
						      _o1[1] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2252;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  constant_boolean_node (eqne != NE_EXPR, type);
						  res_op->ops[2] =  constant_boolean_node (eqne == NE_EXPR, type);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1106, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2252:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
			  return true;
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
			  return true;
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_313 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
			  return true;
		      }
		    }
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_314 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
			  return true;
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_260 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
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
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_261 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_263 (res_op, seq, valueize, type, captures, NE_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_262 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_315 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					  if (gimple_simplify_265 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					  if (gimple_simplify_265 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	  if (gimple_simplify_265 (res_op, seq, valueize, type, captures, NE_EXPR))
	    return true;
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_268 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      tree _q40 = _p1_pops[0];
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
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
					if (gimple_simplify_268 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      if (gimple_simplify_267 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
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
  if (gimple_maybe_bit_not (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	if (gimple_simplify_265 (res_op, seq, valueize, type, captures, NE_EXPR))
	  return true;
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
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
					if (gimple_simplify_266 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			  tree _q50 = _p1_pops[0];
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
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
					    if (gimple_simplify_266 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		    if (CONSTANT_CLASS_P (_p1))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			  if (gimple_simplify_267 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_269 (res_op, seq, valueize, type, captures, NE_EXPR))
	    return true;
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_270 (res_op, seq, valueize, type, captures, PLUS_EXPR, NE_EXPR))
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_270 (res_op, seq, valueize, type, captures, MINUS_EXPR, NE_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_271 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				    if (gimple_simplify_274 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_275 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
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
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (gimple_simplify_276 (res_op, seq, valueize, type, captures, NE_EXPR))
			    return true;
			}
		        break;
		      }
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
				    if (gimple_simplify_277 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
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
		      if (gimple_simplify_278 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
		        return true;
		    }
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (zerop (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code eqne = NE_EXPR;
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2253;
			{
			  res_op->set_op (eqne, type, 2);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1107, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2253:;
		      }
		    }
	          break;
	        }
	      case ABSU_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (zerop (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code eqne = NE_EXPR;
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2254;
			{
			  res_op->set_op (eqne, type, 2);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1107, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2254:;
		      }
		    }
	          break;
	        }
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
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_279 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		    if (gimple_simplify_280 (res_op, seq, valueize, type, captures, NE_EXPR))
		      return true;
		  }
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
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
						if (gimple_simplify_281 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      break;
		    default:;
		    }
	          break;
	        }
	      case ADDR_EXPR:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			  if (gimple_simplify_282 (res_op, seq, valueize, type, captures, NE_EXPR))
			    return true;
			}
		        break;
		      }
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
				if (gimple_simplify_281 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case BIT_XOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_283 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_284 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_284 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_273 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, NE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, NE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTL:
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
				case CFN_BUILT_IN_SQRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_273 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, NE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, NE_EXPR))
			      return true;
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
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_273 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, NE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, NE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_SQRT:
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
				case CFN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_273 (res_op, seq, valueize, type, captures, CFN_SQRT, NE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_272 (res_op, seq, valueize, type, captures, CFN_SQRT, NE_EXPR))
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		if (gimple_simplify_282 (res_op, seq, valueize, type, captures, NE_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_XOR_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_284 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_284 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case BIT_AND_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_285 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_285 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_285 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_285 (res_op, seq, valueize, type, captures, NE_EXPR))
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
						  switch (TREE_CODE (_q31))
						    {
						    case INTEGER_CST:
						      {
							switch (TREE_CODE (_p1))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _p1))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q31 };
									      if (gimple_simplify_286 (res_op, seq, valueize, type, captures, NE_EXPR))
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
					      case BIT_AND_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      CASE_CONVERT:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
								    {
								      switch (TREE_CODE (_q51))
								        {
									case INTEGER_CST:
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q51 };
									      if (gimple_simplify_286 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case BIT_IOR_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_287 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_287 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case BIT_IOR_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_287 (res_op, seq, valueize, type, captures, NE_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
			if (gimple_simplify_287 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
						if (gimple_simplify_288 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				if (gimple_simplify_288 (res_op, seq, valueize, type, captures, NE_EXPR))
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
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      if (integer_zerop (_p1))
	{
	  {
	    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, NE_EXPR))
	      return true;
	  }
        }
    }
}
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_289 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, NE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		  if (integer_pow2p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR))
			      return true;
			  }
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
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					    if (gimple_simplify_292 (res_op, seq, valueize, type, captures, GE_EXPR, NE_EXPR, LT_EXPR))
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
					    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
					    if (gimple_simplify_293 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR))
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
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					    if (gimple_simplify_292 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, LT_EXPR))
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
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR))
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
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    if (gimple_simplify_295 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
		    if (gimple_simplify_295 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  if (integer_pow2p (_q21))
				    {
				      if (integer_zerop (_p1))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
					    if (gimple_simplify_296 (res_op, seq, valueize, type, captures, NE_EXPR, LT_EXPR))
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
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _q21 };
			    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, NE_EXPR, LT_EXPR))
			      return true;
			  }
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
			      case ADDR_EXPR:
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
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
								    if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
						    if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
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
		    case ADDR_EXPR:
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
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
						if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
						  return true;
					      }
					      break;
					    }
				          default:;
				          }
				        break;
				      }
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					  if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				if (gimple_simplify_298 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      case ADDR_EXPR:
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
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
						    if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
				    if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
			  if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
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
    case ADDR_EXPR:
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
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
				if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
			  if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		if (gimple_simplify_299 (res_op, seq, valueize, type, captures, NE_EXPR))
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
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_300 (res_op, seq, valueize, type, captures, NE_EXPR))
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
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_301 (res_op, seq, valueize, type, captures, NE_EXPR))
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
			      case NE_EXPR:
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
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					      if (gimple_simplify_302 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
					        return true;
					    }
					  }
				        break;
				      }
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
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					      if (gimple_simplify_302 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR))
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
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case INTEGER_CST:
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
					      if (gimple_simplify_302 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
					        return true;
					    }
					    break;
					  }
				        default:;
				        }
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
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case INTEGER_CST:
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
					      if (gimple_simplify_302 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR))
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
      if (TREE_CODE (TREE_TYPE (captures[0])) == BOOLEAN_TYPE
 && types_match (type, TREE_TYPE (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2255;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1112, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2255:;
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
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			      const enum tree_code cmp = NE_EXPR;
			      const enum tree_code icmp = GT_EXPR;
			      {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
				  if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
				    {
				      {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
					    {
					      if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2256;
						  {
						    res_op->set_op (icmp, type, 2);
						    res_op->ops[0] = captures[1];
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1109, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2256:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2257;
						  {
						    res_op->set_op (icmp, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2257;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2257:;
						}
					    }
				      }
				    }
			      }
			    }
			  }
		        break;
		      }
		    case INTEGER_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			      const enum tree_code cmp = NE_EXPR;
			      const enum tree_code icmp = GT_EXPR;
			      {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
				  if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
				    {
				      {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
					    {
					      if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2258;
						  {
						    res_op->set_op (icmp, type, 2);
						    res_op->ops[0] = captures[1];
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1109, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2258:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2259;
						  {
						    res_op->set_op (icmp, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2259;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2259:;
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
		  switch (TREE_CODE (_q20))
		    {
		    case VECTOR_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			      const enum tree_code cmp = NE_EXPR;
			      const enum tree_code icmp = GT_EXPR;
			      {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
				  if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
				    {
				      {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
					    {
					      if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2260;
						  {
						    res_op->set_op (icmp, type, 2);
						    res_op->ops[0] = captures[1];
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1109, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2260:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2261;
						  {
						    res_op->set_op (icmp, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2261;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2261:;
						}
					    }
				      }
				    }
			      }
			    }
			  }
		        break;
		      }
		    case INTEGER_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			      const enum tree_code cmp = NE_EXPR;
			      const enum tree_code icmp = GT_EXPR;
			      {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
				  if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
				    {
				      {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
					    {
					      if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2262;
						  {
						    res_op->set_op (icmp, type, 2);
						    res_op->ops[0] = captures[1];
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1109, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2262:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2263;
						  {
						    res_op->set_op (icmp, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, utype, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2263;
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  csts;
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2263:;
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
	      case RSHIFT_EXPR:
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
			      case MULT_EXPR:
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
						  switch (TREE_CODE (_q31))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q31))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      CASE_CONVERT:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  switch (TREE_CODE (_q21))
								    {
								    case INTEGER_CST:
								      {
									if (integer_zerop (_p1))
									  {
									    {
									      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q60, _q21 };
									      if (gimple_simplify_303 (res_op, seq, valueize, type, captures, NE_EXPR))
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
				if (gimple_simplify_304 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, NE_EXPR))
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
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_304 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, NE_EXPR))
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
		  switch (TREE_CODE (_q20))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_305 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CLZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_306 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_308 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFS:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_311 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_FFS))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_REDUC_IOR:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_312 (res_op, seq, valueize, type, captures, NE_EXPR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_311 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_FFSIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_310 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNT))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CLZL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_306 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_308 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_CTZL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_311 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_FFSL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_310 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTLL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_308 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_CTZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_310 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR, CFN_POPCOUNT))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_CLZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_306 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR, CFN_CLZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_307 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_CTZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_308 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_309 (res_op, seq, valueize, type, captures, NE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_FFS:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_311 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_FFS))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_310 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CLZIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_306 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_310 (res_op, seq, valueize, type, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CLZLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_306 (res_op, seq, valueize, type, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZLL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_308 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_CTZLL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_311 (res_op, seq, valueize, type, captures, NE_EXPR, CFN_BUILT_IN_FFSLL))
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
  return false;
}

bool
gimple_simplify_LSHIFT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
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
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_power_of_two_cand (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
			  if (gimple_simplify_396 (res_op, seq, valueize, type, captures, LSHIFT_EXPR, TRUNC_MOD_EXPR))
			    return true;
			}
		      }
		  }
	          break;
	        }
	      case FLOOR_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree _q31_pops[1];
		    if (gimple_power_of_two_cand (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
			  if (gimple_simplify_396 (res_op, seq, valueize, type, captures, LSHIFT_EXPR, FLOOR_MOD_EXPR))
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
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_397 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
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
			      case LT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_zerop (_q31))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case INTEGER_CST:
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					      if (TYPE_SIGN (TREE_TYPE (captures[0])) == SIGNED
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (TREE_TYPE (captures[0])) - 1)
)
						{
						  {
 wide_int wone = wi::one (TYPE_PRECISION (type));
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2373;
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
							      if (!_r1) goto next_after_fail2373;
							    }
							  else
							    _r1 = _o1[0];
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  wide_int_to_tree (type,
 wi::lshift (wone, wi::to_wide (captures[2])));
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1132, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2373:;
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
					      case RSHIFT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  switch (TREE_CODE (_q41))
						    {
						    case INTEGER_CST:
						      {
							if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
							  {
							    {
							      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
							      if (wi::ltu_p (wi::to_wide (captures[2]), element_precision (type))
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) >= TYPE_PRECISION (type)
 || wi::geu_p (wi::to_wide (captures[2]),
 TYPE_PRECISION (type)
 - TYPE_PRECISION (TREE_TYPE (captures[0]))))
)
								{
								  gimple_seq *lseq = seq;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2374;
								  {
								    res_op->set_op (BIT_AND_EXPR, type, 2);
								    {
								      tree _o1[1], _r1;
								      _o1[0] = captures[1];
								      if (type != TREE_TYPE (_o1[0])
								          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									{
									  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
									  tem_op.resimplify (lseq, valueize);
									  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									  if (!_r1) goto next_after_fail2374;
								        }
								      else
								        _r1 = _o1[0];
								      res_op->ops[0] = _r1;
								    }
								    {
								      tree _o1[2], _r1;
								      _o1[0] =  build_minus_one_cst (type);
								      _o1[1] = captures[2];
								      gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								      tem_op.resimplify (lseq, valueize);
								      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								      if (!_r1) goto next_after_fail2374;
								      res_op->ops[1] = _r1;
								    }
								    res_op->resimplify (lseq, valueize);
								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1133, __FILE__, __LINE__, true);
								    return true;
								  }
next_after_fail2374:;
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
					    switch (TREE_CODE (_p1))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						    if (gimple_simplify_398 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (gimple_simplify_399 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if (gimple_with_possible_nonzero_bits (_q20, valueize))
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
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				    if (gimple_simplify_398 (res_op, seq, valueize, type, captures))
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
		  case RSHIFT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  if (gimple_simplify_399 (res_op, seq, valueize, type, captures))
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
}
if (integer_onep (_p0))
  {
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
		    switch (TREE_CODE (_q30))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
			    if (INTEGRAL_TYPE_P (type)
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
 && single_use (captures[1])
)
			      {
				if (TYPE_UNSIGNED (type)
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2375;
				    {
				      res_op->set_op (RSHIFT_EXPR, type, 2);
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[2];
					gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2375;
					res_op->ops[0] = _r1;
				      }
				      res_op->ops[1] = captures[3];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1134, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2375:;
				  }
				else
				  {
				    {
 tree utype = unsigned_type_for (type);
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2376;
					{
					  res_op->set_op (NOP_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    {
					      tree _o2[2], _r2;
					      {
						tree _o3[1], _r3;
						_o3[0] = captures[0];
						if (utype != TREE_TYPE (_o3[0])
						    && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
						  {
						    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r3) goto next_after_fail2376;
						  }
						else
						  _r3 = _o3[0];
						_o2[0] = _r3;
					      }
					      _o2[1] = captures[2];
					      gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
					      tem_op.resimplify (lseq, valueize);
					      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r2) goto next_after_fail2376;
					      _o1[0] = _r2;
					    }
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2376;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1135, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2376:;
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
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_400 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_401 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
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
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    if (gimple_simplify_403 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (gimple_simplify_404 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
	      return true;
	  }
	}
      break;
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_402 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
	    return true;
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (gimple_simplify_405 (res_op, seq, valueize, type, captures, LSHIFT_EXPR))
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
					  case INTEGER_CST:
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
						if (gimple_simplify_406 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, LSHIFT_EXPR))
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
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
						if (gimple_simplify_406 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LSHIFT_EXPR))
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
			      case BIT_IOR_EXPR:
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
						if (gimple_simplify_406 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, LSHIFT_EXPR))
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
				if (gimple_simplify_407 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, LSHIFT_EXPR))
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
			switch (TREE_CODE (_p1))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
				if (gimple_simplify_407 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, LSHIFT_EXPR))
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
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
				if (gimple_simplify_407 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, LSHIFT_EXPR))
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2377;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2377;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2377;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2377:;
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2378;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2378;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2378;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2378:;
		      }
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2379;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2379;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2379;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2379:;
		      }
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2380;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2380;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2380:;
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
gimple_simplify_CFN_POW (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2436;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1141, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2436:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2437;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1141, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2437:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
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
			if (gimple_simplify_427 (res_op, seq, valueize, type, captures, CFN_POW))
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2438;
			  {
			    res_op->set_op (CFN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2438;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1143, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2438:;
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
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2439;
			      {
				res_op->set_op (CFN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2439;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1144, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2439:;
			    }
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2440;
			  {
			    res_op->set_op (CFN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2440;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1143, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2440:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2441;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2441;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1142, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2441:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2442;
			  {
			    res_op->set_op (CFN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2442;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1143, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2442:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_426 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_POW))
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_429 (res_op, seq, valueize, type, captures, CFN_POW, CFN_EXP, CFN_LOG, CFN_EXP2, CFN_LOG2))
	    return true;
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_428 (res_op, seq, valueize, type, captures, CFN_POW))
        return true;
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_430 (res_op, seq, valueize, type, captures, CFN_POW))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWIL (gimple_match_op *res_op, gimple_seq *seq,
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2467;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1151, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2467:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2468;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1151, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2468:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
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
			if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			  {
			    if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
			      {
				if (single_use (captures[0])
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2469;
				    {
				      res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				      res_op->ops[0] = captures[2];
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2469;
					res_op->ops[1] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2469:;
				  }
			      }
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
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2470;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2470:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2471;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2471:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2472;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2472:;
			      }
			  }
		          break;
		        }
		      default:;
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
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2473;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2473:;
			      }
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2474;
		      {
			res_op->set_op (CFN_BUILT_IN_LDEXPL, type, 2);
			res_op->ops[0] =  build_one_cst (type);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
			  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2474;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1154, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2474:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
	{
	  if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
	    {
	      if (! HONOR_NANS (type) && ! HONOR_SIGNED_ZEROS (type)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2475;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1155, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2475:;
		}
	    }
	}
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_431 (res_op, seq, valueize, type, captures))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (wi::to_wide (captures[1]) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2476;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1156, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2476:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2477;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1157, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2477:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2478;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1158, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2478:;
		    }
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
gimple_simplify_MIN_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_589 (res_op, seq, valueize, type, captures, MIN_EXPR))
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
	      case MIN_EXPR:
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
			if (gimple_simplify_590 (res_op, seq, valueize, type, captures, MIN_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_590 (res_op, seq, valueize, type, captures, MIN_EXPR))
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
	      case MIN_EXPR:
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
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			if (gimple_simplify_591 (res_op, seq, valueize, type, captures, MIN_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
			if (gimple_simplify_591 (res_op, seq, valueize, type, captures, MIN_EXPR))
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
	      case MAX_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_592 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_592 (res_op, seq, valueize, type, captures))
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
	      case MAX_EXPR:
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_592 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
			if (gimple_simplify_592 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_593 (res_op, seq, valueize, type, captures))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_593 (res_op, seq, valueize, type, captures))
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
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (INTEGRAL_TYPE_P (type)
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2514;
	{
	  tree tem;
	  tem = captures[1];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1171, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2514:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2515;
	    {
	      tree tem;
	      tem = captures[0];
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1172, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2515:;
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
	      case PLUS_EXPR:
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
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
				{
				  if (tree_int_cst_sgn (captures[2]) > 0
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2516;
				      {
					tree tem;
					tem = captures[0];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1173, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2516:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2517;
				      {
					tree tem;
					tem = captures[1];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1174, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2517:;
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
		    case INTEGER_CST:
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
				{
				  if (tree_int_cst_sgn (captures[2]) > 0
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2518;
				      {
					tree tem;
					tem = captures[0];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1173, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2518:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2519;
				      {
					tree tem;
					tem = captures[1];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1174, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2519:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2520;
						{
						  res_op->set_op (MIN_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2520:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2521;
						{
						  res_op->set_op (MIN_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2521:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2522;
						{
						  res_op->set_op (MIN_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2522:;
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
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2523;
						{
						  res_op->set_op (MIN_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2523:;
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
			      case ADDR_EXPR:
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
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
								    if (gimple_simplify_594 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
							  if (gimple_simplify_594 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					          break;
					        }
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
						    if (gimple_simplify_595 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
					  if (gimple_simplify_595 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
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
		    case ADDR_EXPR:
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
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
							  if (gimple_simplify_594 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
						if (gimple_simplify_594 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
						  return true;
					      }
					      break;
					    }
				          default:;
				          }
				        break;
				      }
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
					  if (gimple_simplify_595 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
				if (gimple_simplify_595 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
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
	      case ADDR_EXPR:
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
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
						    if (gimple_simplify_596 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
					  if (gimple_simplify_596 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			          break;
			        }
			      case ADDR_EXPR:
			        {
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
				    if (gimple_simplify_597 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
			  if (gimple_simplify_597 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			    return true;
			}
		        break;
		      }
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2524;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2524;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1175, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2524:;
				      }
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_598 (res_op, seq, valueize, type, captures, MIN_EXPR, MAX_EXPR))
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2525;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2525;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2525;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2525:;
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2526;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2526;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2526;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2526:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
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
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
					  if (gimple_simplify_596 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
				if (gimple_simplify_596 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case ADDR_EXPR:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
			  if (gimple_simplify_597 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		if (gimple_simplify_597 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2527;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2527;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2527;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2527:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  if (gimple_zero_one_valued_p (_p0, valueize))
    {
      if (gimple_zero_one_valued_p (_p1, valueize))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (gimple_simplify_599 (res_op, seq, valueize, type, captures, MIN_EXPR, BIT_AND_EXPR))
	      return true;
	  }
        }
    }
  return false;
}

bool
gimple_simplify_CFN_FMAX (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_FMAX))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_FMAX))
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
	  if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_FMAX))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_605 (res_op, seq, valueize, type, captures, CFN_FMAX))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2563;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_FMIN, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2563;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1175, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2563:;
				      }
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
gimple_simplify_UNLT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2576;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2576;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2576;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2576:;
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2577;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2577;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2577;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2577:;
		      }
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
 && (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2578;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2578;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNLT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2578;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2578:;
		      }
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
	if (gimple_simplify_634 (res_op, seq, valueize, type, captures, UNLT_EXPR))
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
				    if (gimple_simplify_274 (res_op, seq, valueize, type, captures, UNLT_EXPR, LT_EXPR))
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
				    if (gimple_simplify_277 (res_op, seq, valueize, type, captures, UNLT_EXPR, UNGT_EXPR))
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
		      if (gimple_simplify_278 (res_op, seq, valueize, type, captures, UNLT_EXPR, UNGT_EXPR))
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
	  if (gimple_simplify_633 (res_op, seq, valueize, type, captures, UNLT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_ADD_OVERFLOW (gimple_match_op *res_op, gimple_seq *seq,
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
		    if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_ADD_OVERFLOW))
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
		    if (gimple_simplify_637 (res_op, seq, valueize, type, captures, CFN_ADD_OVERFLOW))
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
gimple_simplify_CFN_BUILT_IN_POWF64 (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_427 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF64))
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
      if (gimple_simplify_428 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF64))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LDEXPF (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2595;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1187, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2595:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBN (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2600;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1187, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2600:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_TRUTH_ORIF_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case LE_EXPR:
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
			      case POINTER_PLUS_EXPR:
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
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case LE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
									if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
									  {
									    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
									      {
										if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
										      const enum tree_code cmp = LE_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2605;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2605;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2605;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2605:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2606;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2606;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2606;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2606;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2606:;
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
						    case GE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
									    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
									      {
										if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
										      const enum tree_code cmp = LE_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2607;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2607;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2607;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2607:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2608;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2608;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2608;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2608;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2608:;
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
	      case LT_EXPR:
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
			      case POINTER_PLUS_EXPR:
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
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
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
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
									if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
									  {
									    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
									      {
										if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
										      const enum tree_code cmp = LT_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2609;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2609;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2609;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2609:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2610;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2610;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2610;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2610;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2610:;
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
						    case GT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
									    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
									      {
										if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
										      const enum tree_code cmp = LT_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2611;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2611;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2611;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2611:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2612;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2612;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2612;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2612;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2612:;
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
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q41))
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
						    case LE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
									if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									  {
									    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
									      {
										if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
										      const enum tree_code cmp = LE_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2613;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2613;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2613;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2613:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2614;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2614;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2614;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2614;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2614:;
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
						    case GE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
									    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
									      {
										if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
										      const enum tree_code cmp = LE_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2615;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2615;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2615;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2615:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2616;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2616;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2616;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2616;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2616:;
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
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q41))
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
						    case LT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
									if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									  {
									    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
									      {
										if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
										      const enum tree_code cmp = LT_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2617;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2617;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2617;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2617:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2618;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2618;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2618;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2618;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2618:;
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
						    case GT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
									    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
									      {
										if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
										  {
										    {
										      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
										      const enum tree_code cmp = LT_EXPR;
										      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
											{
											  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
											      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
												{
												  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
												      if (cmp == LT_EXPR
)
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2619;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2619;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2619;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2619:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2620;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _o1[1], _r1;
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2620;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														gimple_match_op tem_op (res_op->cond.any_else (), POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
														tem_op.resimplify (lseq, valueize);
														_r2 = maybe_push_res_to_seq (&tem_op, lseq);
														if (!_r2) goto next_after_fail2620;
														_o1[0] = _r2;
													      }
													      if (sizetype != TREE_TYPE (_o1[0])
													          && !useless_type_conversion_p (sizetype, TREE_TYPE (_o1[0])))
														{
														  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, sizetype, _o1[0]);
														  tem_op.resimplify (lseq, valueize);
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2620;
													        }
													      else
													        _r1 = _o1[0];
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2620:;
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
  return false;
}
#pragma GCC diagnostic pop
