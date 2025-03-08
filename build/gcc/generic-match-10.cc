/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_nop_convert (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 0, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
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
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1, __FILE__, __LINE__, false);
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
tree_with_known_nonzero_bits (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case BIT_IOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_with_known_nonzero_bits_1 (_p0))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 39, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
	if (tree_with_known_nonzero_bits_1 (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 39, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    default:;
    }
if (tree_with_known_nonzero_bits_1 (t))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      {
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 40, __FILE__, __LINE__, false);
	return true;
      }
    }
  }
  return false;
}

bool
tree_signed_integer_sat_trunc (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case COND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	tree _p2 = TREE_OPERAND (t, 2);
	switch (TREE_CODE (_p0))
	  {
	  case GT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case PLUS_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_q30))
		      {
		      CASE_CONVERT:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
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
					case BIT_XOR_EXPR:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    tree _q81 = TREE_OPERAND (_p1, 1);
					    switch (TREE_CODE (_q80))
					      {
					      case INTEGER_CST:
					        {
						  switch (TREE_CODE (_q81))
						    {
						    case NEGATE_EXPR:
						      {
							tree _q100 = TREE_OPERAND (_q81, 0);
							switch (TREE_CODE (_q100))
							  {
							  CASE_CONVERT:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      switch (TREE_CODE (_q110))
							        {
								case LT_EXPR:
								  {
								    tree _q120 = TREE_OPERAND (_q110, 0);
								    tree _q121 = TREE_OPERAND (_q110, 1);
								    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
								      {
									if (integer_zerop (_q121))
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
						{
						  tree _q81_pops[1];
						  if (tree_nop_convert (_q81, _q81_pops))
						    {
						      tree _q100 = _q81_pops[0];
						      switch (TREE_CODE (_q100))
						        {
							case NEGATE_EXPR:
							  {
							    tree _q110 = TREE_OPERAND (_q100, 0);
							    {
							      tree _q110_pops[1];
							      if (tree_nop_convert (_q110, _q110_pops))
							        {
								  tree _q120 = _q110_pops[0];
								  switch (TREE_CODE (_q120))
								    {
								    CASE_CONVERT:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									switch (TREE_CODE (_q130))
									  {
									  case LT_EXPR:
									    {
									      tree _q140 = TREE_OPERAND (_q130, 0);
									      tree _q141 = TREE_OPERAND (_q130, 1);
									      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
										{
										  if (integer_zerop (_q141))
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
							    }
							    break;
							  }
						        default:;
						        }
						    }
						}
					          break;
					        }
					      case NEGATE_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  switch (TREE_CODE (_q90))
						    {
						    CASE_CONVERT:
						      {
							tree _q100 = TREE_OPERAND (_q90, 0);
							switch (TREE_CODE (_q100))
							  {
							  case LT_EXPR:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      tree _q111 = TREE_OPERAND (_q100, 1);
							      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
								{
								  if (integer_zerop (_q111))
								    {
								      switch (TREE_CODE (_q81))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
					  {
					    tree _q80_pops[1];
					    if (tree_nop_convert (_q80, _q80_pops))
					      {
						tree _q90 = _q80_pops[0];
						switch (TREE_CODE (_q90))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q100 = TREE_OPERAND (_q90, 0);
						      {
							tree _q100_pops[1];
							if (tree_nop_convert (_q100, _q100_pops))
							  {
							    tree _q110 = _q100_pops[0];
							    switch (TREE_CODE (_q110))
							      {
							      CASE_CONVERT:
							        {
								  tree _q120 = TREE_OPERAND (_q110, 0);
								  switch (TREE_CODE (_q120))
								    {
								    case LT_EXPR:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									tree _q131 = TREE_OPERAND (_q120, 1);
									if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
									  {
									    if (integer_zerop (_q131))
									      {
										switch (TREE_CODE (_q81))
										  {
										  case INTEGER_CST:
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q31))
			    {
			    CASE_CONVERT:
			      {
				tree _q50 = TREE_OPERAND (_q31, 0);
				switch (TREE_CODE (_q21))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					case BIT_XOR_EXPR:
					  {
					    tree _q80 = TREE_OPERAND (_p1, 0);
					    tree _q81 = TREE_OPERAND (_p1, 1);
					    switch (TREE_CODE (_q80))
					      {
					      case INTEGER_CST:
					        {
						  switch (TREE_CODE (_q81))
						    {
						    case NEGATE_EXPR:
						      {
							tree _q100 = TREE_OPERAND (_q81, 0);
							switch (TREE_CODE (_q100))
							  {
							  CASE_CONVERT:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      switch (TREE_CODE (_q110))
							        {
								case LT_EXPR:
								  {
								    tree _q120 = TREE_OPERAND (_q110, 0);
								    tree _q121 = TREE_OPERAND (_q110, 1);
								    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
								      {
									if (integer_zerop (_q121))
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
						{
						  tree _q81_pops[1];
						  if (tree_nop_convert (_q81, _q81_pops))
						    {
						      tree _q100 = _q81_pops[0];
						      switch (TREE_CODE (_q100))
						        {
							case NEGATE_EXPR:
							  {
							    tree _q110 = TREE_OPERAND (_q100, 0);
							    {
							      tree _q110_pops[1];
							      if (tree_nop_convert (_q110, _q110_pops))
							        {
								  tree _q120 = _q110_pops[0];
								  switch (TREE_CODE (_q120))
								    {
								    CASE_CONVERT:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									switch (TREE_CODE (_q130))
									  {
									  case LT_EXPR:
									    {
									      tree _q140 = TREE_OPERAND (_q130, 0);
									      tree _q141 = TREE_OPERAND (_q130, 1);
									      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
										{
										  if (integer_zerop (_q141))
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
							    }
							    break;
							  }
						        default:;
						        }
						    }
						}
					          break;
					        }
					      case NEGATE_EXPR:
					        {
						  tree _q90 = TREE_OPERAND (_q80, 0);
						  switch (TREE_CODE (_q90))
						    {
						    CASE_CONVERT:
						      {
							tree _q100 = TREE_OPERAND (_q90, 0);
							switch (TREE_CODE (_q100))
							  {
							  case LT_EXPR:
							    {
							      tree _q110 = TREE_OPERAND (_q100, 0);
							      tree _q111 = TREE_OPERAND (_q100, 1);
							      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
								{
								  if (integer_zerop (_q111))
								    {
								      switch (TREE_CODE (_q81))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p2))
									      {
									      CASE_CONVERT:
									        {
										  tree _q150 = TREE_OPERAND (_p2, 0);
										  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
										    {
										      {
											tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
											if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
											  {
											    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
											      {
												{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
												    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
												      {
													{
													  res_ops[0] = captures[0];
													  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
					  {
					    tree _q80_pops[1];
					    if (tree_nop_convert (_q80, _q80_pops))
					      {
						tree _q90 = _q80_pops[0];
						switch (TREE_CODE (_q90))
						  {
						  case NEGATE_EXPR:
						    {
						      tree _q100 = TREE_OPERAND (_q90, 0);
						      {
							tree _q100_pops[1];
							if (tree_nop_convert (_q100, _q100_pops))
							  {
							    tree _q110 = _q100_pops[0];
							    switch (TREE_CODE (_q110))
							      {
							      CASE_CONVERT:
							        {
								  tree _q120 = TREE_OPERAND (_q110, 0);
								  switch (TREE_CODE (_q120))
								    {
								    case LT_EXPR:
								      {
									tree _q130 = TREE_OPERAND (_q120, 0);
									tree _q131 = TREE_OPERAND (_q120, 1);
									if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
									  {
									    if (integer_zerop (_q131))
									      {
										switch (TREE_CODE (_q81))
										  {
										  case INTEGER_CST:
										    {
										      switch (TREE_CODE (_p2))
										        {
											CASE_CONVERT:
											  {
											    tree _q170 = TREE_OPERAND (_p2, 0);
											    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
											      {
												{
												  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
												  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
												    {
												      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
													{
													  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
													      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
														{
														  {
														    res_ops[0] = captures[0];
														    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, false);
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
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_94 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail317;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, rop, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 195, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail317:;
    }
  return NULL_TREE;
}

tree
generic_simplify_104 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail331;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 201, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail331:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_112 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail340;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
		{
		  _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		}
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    _r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[7]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[7]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 204, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail340:;
    }
  return NULL_TREE;
}

tree
generic_simplify_121 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail354;
  {
    if (! tree_invariant_p (captures[1])) goto next_after_fail354;
    tree res_op0;
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = unshare_expr (captures[1]);
	_o2[1] = captures[4];
	_r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 219, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail354:;
  return NULL_TREE;
}

tree
generic_simplify_129 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail381;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail381;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, cmp, type, _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[4];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail381:;
  return NULL_TREE;
}

tree
generic_simplify_135 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail388;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail388;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail388;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail388:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail389;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail389;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail389;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 226, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail389:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail390;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail390;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail390;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 227, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail390:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail391;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail391;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail391;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    res_op1 = captures[5];
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 228, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail391:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail392;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail392;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail392;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				res_op1 = captures[5];
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 229, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail392:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail393;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail393;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail393;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
				    tree res_op1;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					{
					  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					}
				      else
				        _r1 = _o1[0];
				      res_op1 = _r1;
				    }
				    tree _r;
				    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 230, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail393:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail394;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail394;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail394;
				      {
					tree res_op0;
					res_op0 = captures[4];
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					    {
					      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					    }
					  else
					    _r1 = _o1[0];
					  res_op1 = _r1;
					}
					tree _r;
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 231, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail394:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_168 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[0]));
      if (ic == icmp
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail434;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail434;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail434:;
	}
      else
	{
	  if (ic == ncmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail435;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail435;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail435:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_181 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail449;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail449;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail449:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail450;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail450;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail450:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_192 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail463;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, LDEXP, type, 2, res_op0, res_op1);
		if (!_r)
		  goto next_after_fail463;
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 290, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail463:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_203 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (captures[0]) >= element_precision (captures[1])
 && types_match (captures[1], captures[3])
)
    {
      if (wi::lt_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail474;
	      {
		tree res_op0;
		res_op0 = captures[3];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 301, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail474:;
	    }
	  else
	    {
	      if (tree_expr_nonzero_p (captures[1]) && tree_expr_nonzero_p (captures[3])
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail475;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 302, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail475:;
		  }
		}
	    }
	}
      else
	{
	  if (wi::gt_p (wi::to_wide (captures[2]), 1, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	    {
	      if (TYPE_UNSIGNED (TREE_TYPE (captures[1])) || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail476;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[3];
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail476:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail477;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 304, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail477:;
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_227 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail519;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail519;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail519;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail519;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 344, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail519:;
	    }
	  else
	    {
	      if (TYPE_UNSIGNED (t0)
)
		{
		  if ((c3 & wi::arshift (sb, c1 - 1)) != 0
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail520;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail520;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail520;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail520;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 345, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail520:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail521;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail521;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail521;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail521;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  wide_int_to_tree (t0, c3 << c1);
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 346, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail521:;
		    }
		}
	      else
		{
		  {
 wide_int smask = wi::arshift (sb, c1);
		      if ((c2 & smask) == 0
)
			{
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail522;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail522;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail522;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail522;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 =  wide_int_to_tree (t0, c3 << c1);
			    tree _r;
			    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 347, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail522:;
			}
		      else
			{
			  if ((c3 & smask) == 0
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail523;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail523;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail523;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail523;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[2];
				  _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree res_op1;
				res_op1 =  wide_int_to_tree (t0, c3 << c1);
				tree _r;
				_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail523:;
			    }
			  else
			    {
			      if ((c2 & smask) != (c3 & smask)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail524;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail524;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail524;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail524;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == NE_EXPR, type);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 349, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail524:;
				}
			      else
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail525;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail525;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail525;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail525;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      _o1[0] = captures[2];
				      _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree res_op1;
				    res_op1 =  wide_int_to_tree (t0, (c3 << c1) | sb);
				    tree _r;
				    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 350, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail525:;
				}
			    }
			}
		  }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_258 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3])) != 0
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail616;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (TREE_SIDE_EFFECTS (captures[3]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 432, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail616:;
    }
  return NULL_TREE;
}

tree
generic_simplify_261 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail622;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 438, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail622:;
  return NULL_TREE;
}

tree
generic_simplify_264 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail625;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	_r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	if (EXPR_P (_r2))
	  goto next_after_fail625;
	_o1[1] = _r2;
      }
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 441, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail625:;
  return NULL_TREE;
}

tree
generic_simplify_267 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail628;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = captures[1];
	_o2[1] = captures[4];
	_r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 444, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail628:;
  return NULL_TREE;
}

tree
generic_simplify_273 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail634;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail634;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 448, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail634:;
    }
  return NULL_TREE;
}

tree
generic_simplify_278 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner),
 const enum tree_code ARG_UNUSED (outer))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool cst1 = integer_onep (captures[1]);
 bool cst0 = integer_zerop (captures[1]);
 bool innereq = inner == EQ_EXPR;
 bool outereq = outer == EQ_EXPR;
      if (innereq ? cst0 : cst1
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail653;
	  {
	    tree _r;
	    _r =  constant_boolean_node (!outereq, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 459, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail653:;
	}
      else
	{
	  if (innereq ? cst1 : cst0
)
	    {
	      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
 tree ucst1 = build_one_cst (utype);
		  if (!outereq
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail654;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  ucst1;
			tree _r;
			_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 460, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail654:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail655;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  ucst1;
			tree _r;
			_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 461, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail655:;
		    }
	      }
	    }
	  else
	    {
	      {
 tree value = build_int_cst (TREE_TYPE (captures[0]), !innereq);
		  if (outereq
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail656;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  value;
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 462, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail656:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail657;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  value;
			tree _r;
			_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 463, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail657:;
		    }
	      }
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_286 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rep),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail678;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail678;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, rep, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 484, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail678:;
  return NULL_TREE;
}

tree
generic_simplify_290 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail684;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail684;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail684:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail685;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail685;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail685:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_299 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail695;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 499, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail695:;
	}
      else
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail696;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 500, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail696:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_313 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail711;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail711;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 515, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail711:;
  return NULL_TREE;
}

tree
generic_simplify_322 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (TAN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail722;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TAN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail722;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 526, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail722:;
    }
  return NULL_TREE;
}

tree
generic_simplify_329 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail729;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = maybe_build_call_expr_loc (loc, POW, TREE_TYPE (_o1[0]), 2, _o1[0], _o1[1]);
	  if (!_r1)
	    goto next_after_fail729;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 533, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail729:;
    }
  return NULL_TREE;
}

tree
generic_simplify_338 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (bitop == BIT_AND_EXPR || tree_expr_nonnegative_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail740;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == GE_EXPR || cmp == LE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 544, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail740:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST && wi::neg_p (wi::to_wide (captures[1]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail741;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == LT_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 545, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail741:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_349 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail784;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail784;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[0];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail784:;
    }
  return NULL_TREE;
}

tree
generic_simplify_353 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (neg_cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 tree tem = const_binop (RDIV_EXPR, type, captures[2], captures[1]);
	  if (tem
 && !(REAL_VALUE_ISINF (TREE_REAL_CST (tem))
 || (real_zerop (tem) && !real_zerop (captures[1])))
)
	    {
	      if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[1]))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail788;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail788;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail788;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  tem;
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 575, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail788:;
		}
	      else
		{
		  if (real_less (TREE_REAL_CST_PTR (captures[1]), &dconst0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail789;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail789;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail789;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  tem;
			tree _r;
			_r = fold_build2_loc (loc, neg_cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 576, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail789:;
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_360 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail802;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail802;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[0];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail802:;
    }
  return NULL_TREE;
}

tree
generic_simplify_364 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs),
 const combined_fn ARG_UNUSED (exps),
 const enum tree_code ARG_UNUSED (cmp))
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail806;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, exps, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail806;
	      if (EXPR_P (_r1))
	        goto next_after_fail806;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 589, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail806:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_370 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail816;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] =  build_minus_one_cst (type);
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 599, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail816:;
    }
  return NULL_TREE;
}

tree
generic_simplify_378 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail827;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_minus_one_cst (type);
	      _o1[1] = captures[1];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 608, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail827:;
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
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail828;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail828;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (TREE_TYPE (_o1[0]) != stype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 609, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail828:;
		    }
	      }
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_386 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail849;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 618, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail849:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail850;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != utype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[4];
		    if (TREE_TYPE (_o2[0]) != utype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 619, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail850:;
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
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail851;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail851;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail851;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 620, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail851:;
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail852;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail852;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail852;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 621, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail852:;
				}
			  }
			}
		  }
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_418 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!canonicalize_math_p ()
)
    {
      if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail884;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail884;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail884:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_428 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail907;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail907;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail907;
	      {
		tree _r;
		_r = captures[0];
		if (TREE_SIDE_EFFECTS (captures[4]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail907:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail908;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail908;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail908;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail908:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail909;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail909;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail909;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 666, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail909:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail910;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail910;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail910;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 667, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail910:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail911;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail911;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
				    {
				      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
				    }
				  else
				    _r1 = _o1[0];
				  res_op1 = _r1;
				}
				tree _r;
				_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 668, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail911:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail912;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail912;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail912;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
				    tree res_op1;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					{
					  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					}
				      else
				        _r1 = _o1[0];
				      res_op1 = _r1;
				    }
				    tree _r;
				    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail912:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail913;
				      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail913;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail913;
				      {
					tree res_op0;
					res_op0 = captures[4];
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					    {
					      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					    }
					  else
					    _r1 = _o1[0];
					  res_op1 = _r1;
					}
					tree _r;
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail913:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_456 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail966;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != shift_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 691, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail966:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_463 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && wi::to_wide (captures[1]) == element_precision (type) - 1
)
    {
      {
 tree stype = TREE_TYPE (captures[0]);
 tree ntype = TYPE_UNSIGNED (stype) ? signed_type_for (stype)
 : unsigned_type_for (stype);
	  if (VECTOR_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail974;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o2[0]);
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 701, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail974:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail975;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (TREE_TYPE (_o2[0]) != ntype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, ntype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 702, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail975:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_483 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1000;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1000;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1000;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1000:;
  return NULL_TREE;
}

tree
generic_simplify_488 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq),
 const combined_fn ARG_UNUSED (sign))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (neeq == NE_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1005;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1005;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1005:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1006;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1006;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1006:;
    }
  return NULL_TREE;
}

tree
generic_simplify_497 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1017;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1017;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1017:;
  return NULL_TREE;
}

tree
generic_simplify_503 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
1
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1032;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1032;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1032;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1032:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1033;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1033;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1033;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1033:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1034;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1034;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1034;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1034:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1035;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1035;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1035;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1035:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_522 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1057;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1057;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1057;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1057;
  {
    tree _r;
    _r = captures[3];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1057:;
  return NULL_TREE;
}

tree
generic_simplify_530 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1065;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[7];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[5];
	      _o1[6] = captures[6];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail1065;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1065:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_539 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1074;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, logs, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail1074;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 781, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1074:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_551 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1086;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1086:;
  return NULL_TREE;
}

tree
generic_simplify_559 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIGNBIT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1094;
  {
    tree _r;
    _r =  integer_zero_node;
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 801, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1094:;
  return NULL_TREE;
}

tree
generic_simplify_565 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1100;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1100;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1100:;
    }
  return NULL_TREE;
}

tree
generic_simplify_575 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != type0)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type0, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail1110;
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1110:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_586 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (plusminus),
 const enum tree_code ARG_UNUSED (minusplus))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!VECTOR_INTEGER_TYPE_P (type)
 && !FLOAT_WORDS_BIG_ENDIAN
 && (operand_equal_p (captures[0], captures[2], 0)
 ? operand_equal_p (captures[1], captures[3], 0)
 : operand_equal_p (captures[0], captures[3], 0) && operand_equal_p (captures[1], captures[2], 0))
)
    {
      {
 vec_perm_builder builder;
	  if (tree_to_vec_perm_builder (&builder, captures[4])
)
	    {
	      {
 poly_uint64 nelts = TYPE_VECTOR_SUBPARTS (type);
 vec_perm_indices sel (builder, 2, nelts);
 machine_mode vec_mode = TYPE_MODE (type);
 machine_mode wide_mode;
 scalar_mode wide_elt_mode;
 poly_uint64 wide_nunits;
 scalar_mode inner_mode = GET_MODE_INNER (vec_mode);
		  if (VECTOR_MODE_P (vec_mode)
 && sel.series_p (0, 2, 0, 2)
 && sel.series_p (1, 2, nelts + 1, 2)
 && GET_MODE_2XWIDER_MODE (inner_mode).exists (&wide_elt_mode)
 && multiple_p (GET_MODE_NUNITS (vec_mode), 2, &wide_nunits)
 && related_vector_mode (vec_mode, wide_elt_mode,
 wide_nunits).exists (&wide_mode)
)
		    {
		      {
 tree stype
 = lang_hooks.types.type_for_mode (GET_MODE_INNER (wide_mode),
 TYPE_UNSIGNED (type));
 tree ntype = build_vector_type_for_mode (stype, wide_mode);
 const struct real_format *fmt_old = FLOAT_MODE_FORMAT (vec_mode);
 const struct real_format *fmt_new = FLOAT_MODE_FORMAT (wide_mode);
			  if (TYPE_MODE (stype) != BLKmode
 && VECTOR_TYPE_P (ntype)
 && fmt_old != NULL
 && fmt_new != NULL
)
			    {
			      {
 if (known_eq (GET_MODE_NUNITS (wide_mode), 1)
 && !target_supports_op_p (ntype, NEGATE_EXPR, optab_vector))
 ntype = stype;
				  if (fmt_new->signbit_rw
 == fmt_old->signbit_rw + GET_MODE_UNIT_BITSIZE (vec_mode)
 && fmt_new->signbit_rw == fmt_new->signbit_ro
 && targetm.can_change_mode_class (TYPE_MODE (ntype),
 TYPE_MODE (type), ALL_REGS)
 && ((optimize_vectors_before_lowering_p ()
 && VECTOR_TYPE_P (ntype))
 || target_supports_op_p (ntype, NEGATE_EXPR, optab_vector))
)
				    {
				      if (plusminus == PLUS_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1122;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[3];
						  _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  _o2[0] = _r3;
						}
						_r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						_o1[0] = _r2;
					      }
					      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 = captures[2];
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[0]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (TREE_SIDE_EFFECTS (captures[4]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 822, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1122:;
					}
				      else
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1123;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, ntype, _o3[0]);
						  _o2[0] = _r3;
						}
						_r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						_o1[0] = _r2;
					      }
					      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (TREE_SIDE_EFFECTS (captures[4]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 823, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1123:;
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
  return NULL_TREE;
}

tree
generic_simplify_CONJ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		tree res = generic_simplify_515 (loc, type, _p0, captures);
		if (res) return res;
	      }
	      break;
	    }
	  case COMPLEX_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		{
 tree itype = TREE_TYPE (type);
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1241;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			if (TREE_TYPE (_o1[0]) != itype)
			  {
			    _r1 = fold_build1_loc (loc, NOP_EXPR, itype, _o1[0]);
			  }
			else
			  _r1 = _o1[0];
			res_op0 = _r1;
		      }
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[3];
			  if (TREE_TYPE (_o2[0]) != itype)
			    {
			      _r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
			    }
			  else
			    _r2 = _o2[0];
			  _o1[0] = _r2;
			}
			_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, COMPLEX_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1241:;
		}
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_515 (loc, type, _p0, captures);
	  if (res) return res;
	}
        break;
      }
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  {
 tree itype = TREE_TYPE (type);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1242;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != itype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, itype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (TREE_TYPE (_o2[0]) != itype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, COMPLEX_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1242:;
	  }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_MINUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1269;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1269;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1269:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (fold_real_zero_addition_p (type, captures[0], captures[1], 1)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1270;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = non_lvalue_loc (loc, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 898, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1270:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR);
		      if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, MINUS_EXPR, MINUS_EXPR);
		      if (res) return res;
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!FLOAT_TYPE_P (type)
 || (!tree_expr_maybe_nan_p (captures[0])
 && !tree_expr_maybe_infinite_p (captures[0])
 && (!HONOR_SIGN_DEPENDENT_ROUNDING (type)
 || !HONOR_SIGNED_ZEROS (type)))
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1271;
	    {
	      tree _r;
	      _r =  build_zero_cst (type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 899, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1271:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
			    {
			      if ((_q51 == _q61 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q61, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q61 };
				    tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q51))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q51, 0);
			  tree _q71 = TREE_OPERAND (_q51, 1);
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q20, 0))
			    {
			      if ((_q71 == _q50 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q50, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q71, _q20, _q50 };
				    tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
				    if (res) return res;
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
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q20, _q51 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q40 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
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
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q51 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _p0, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _p0, _q40 };
			      tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			      if (res) return res;
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _q41, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _p0, _q41 };
			tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		{
		  if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q30, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q30 };
			tree res = generic_simplify_38 (loc, type, _p0, _p1, captures);
			if (res) return res;
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
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		      {
			if (integer_onep (_q41))
			  {
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q50 };
				  tree res = generic_simplify_39 (loc, type, _p0, _p1, captures);
				  if (res) return res;
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
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q31))
		      {
			if ((_q21 == _q41 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q41, 0) && types_match (_q21, _q41)))
			  {
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q20, _q30, _q40 };
				  tree res = generic_simplify_39 (loc, type, _p0, _p1, captures);
				  if (res) return res;
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures);
			      if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				if (~wi::to_wide (captures[2]) == wi::to_wide (captures[4])
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1272;
				    {
				      if (! tree_invariant_p (captures[4])) goto next_after_fail1272;
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = unshare_expr (captures[4]);
					_r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[4];
				      tree _r;
				      _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
				      if (TREE_SIDE_EFFECTS (captures[2]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 900, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1272:;
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	    {
	      tree _q50_pops[1];
	      if (tree_nop_convert (_q50, _q50_pops))
	        {
		  tree _q60 = _q50_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
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
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
		{
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
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
      }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		if (!TYPE_OVERFLOW_SANITIZED (type)
)
		  {
		    {
 tree utype = unsigned_type_for (type);
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1273;
			{
			  tree res_op0;
			  {
			    tree _o1[2], _r1;
			    {
			      tree _o2[1], _r2;
			      _o2[0] = captures[1];
			      if (TREE_TYPE (_o2[0]) != utype)
				{
				  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
				}
			      else
			        _r2 = _o2[0];
			      _o1[0] = _r2;
			    }
			    {
			      tree _o2[1], _r2;
			      _o2[0] = captures[0];
			      if (TREE_TYPE (_o2[0]) != utype)
				{
				  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
				}
			      else
			        _r2 = _o2[0];
			      _o1[1] = _r2;
			    }
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    res_op0 = _r1;
			  }
			  tree _r;
			  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 901, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1273:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1274;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1274:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1275;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1275:;
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_all_onesp (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		        break;
		      }
		    default:;
		    }
		{
		  tree _p1_pops[1];
		  if (tree_nop_convert (_p1, _p1_pops))
		    {
		      tree _q70 = _p1_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
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
	    }
          default:;
          }
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    {
		      tree _p1_pops[1];
		      if (tree_nop_convert (_p1, _p1_pops))
		        {
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
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
	        }
	      default:;
	      }
	  }
      }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_44 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_44 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1276:;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1277;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1277:;
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q31))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
				      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    {
		      tree _p1_pops[1];
		      if (tree_nop_convert (_p1, _p1_pops))
		        {
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
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
	        }
	      default:;
	      }
	  {
	    tree _q30_pops[1];
	    if (tree_nop_convert (_q30, _q30_pops))
	      {
		tree _q40 = _q30_pops[0];
		switch (TREE_CODE (_q40))
		  {
		  case BIT_AND_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      tree _q51 = TREE_OPERAND (_q40, 1);
		      if (integer_all_onesp (_q31))
			{
			  switch (TREE_CODE (_p1))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_p1, 0);
				tree _q91 = TREE_OPERAND (_p1, 1);
				if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				  {
				    if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				  {
				    if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					  tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			        break;
			      }
			    default:;
			    }
			{
			  tree _p1_pops[1];
			  if (tree_nop_convert (_p1, _p1_pops))
			    {
			      tree _q90 = _p1_pops[0];
			      switch (TREE_CODE (_q90))
			        {
				case BIT_IOR_EXPR:
				  {
				    tree _q100 = TREE_OPERAND (_q90, 0);
				    tree _q101 = TREE_OPERAND (_q90, 1);
				    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
				      {
					if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				    if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
				      {
					if ((_q101 == _q50 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q50, 0) && types_match (_q101, _q50)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					      tree res = generic_simplify_43 (loc, type, _p0, _p1, captures);
					      if (res) return res;
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
		    }
	          default:;
	          }
	      }
	  }
	    break;
	  }
	case BIT_AND_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
		{
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
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
	  {
	    tree _p1_pops[1];
	    if (tree_nop_convert (_p1, _p1_pops))
	      {
		tree _q60 = _p1_pops[0];
		switch (TREE_CODE (_q60))
		  {
		  case PLUS_EXPR:
		    {
		      tree _q70 = TREE_OPERAND (_q60, 0);
		      tree _q71 = TREE_OPERAND (_q60, 1);
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    {
		      tree _q70_pops[1];
		      if (tree_nop_convert (_q70, _q70_pops))
		        {
			  tree _q80 = _q70_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				  {
				    if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				if ((_q90 == _q31 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q31, 0) && types_match (_q90, _q31)))
				  {
				    if ((_q91 == _q30 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q30, 0) && types_match (_q91, _q30)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_42 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
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
	  }
	    break;
	  }
        default:;
        }
    }
}
  if (tree_negate_expr_p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (!FIXED_POINT_TYPE_P (type)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1278;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree res_op1;
	      {
		tree _o1[1], _r1;
		_o1[0] = captures[1];
		_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		res_op1 = _r1;
	      }
	      tree _r;
	      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1278:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p1, _q40, _q51, _q20 };
			  tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q51, _p1, _q40, _q50, _q20 };
			  tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
			  if (res) return res;
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _p1, _q40, _q20 };
		    tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[1], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1279;
					{
					  tree res_op0;
					  res_op0 =  build_int_cst_type (type, diff);
					  tree res_op1;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (TREE_TYPE (_o1[0]) != type)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op1 = _r1;
					  }
					  tree _r;
					  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 907, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1279:;
				      }
				}
			      }
			  }
		          break;
		        }
		      default:;
		      }
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1280;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 908, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1280:;
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
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[2], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1281;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    if (TREE_TYPE (_o1[0]) != type)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  build_int_cst_type (type, diff);
					  tree _r;
					  _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 909, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1281:;
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case ADDR_EXPR:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1282;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1282:;
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
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case SSA_NAME:
        {
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1283;
		{
		  tree res_op0;
		  res_op0 = captures[1];
		  tree res_op1;
		  res_op1 = captures[0];
		  tree _r;
		  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1283:;
	      }
	  }
          break;
        }
      default:;
      }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _q30, _q41, _p0 };
		    tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
		    tree res = generic_simplify_45 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q30, _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
	      tree res = generic_simplify_46 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1284;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1284:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1285;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1285:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1286;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1286:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1287;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1287:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1288;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 913, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1288:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1289;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 914, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1289:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[3];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 915, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1290:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
			{
			  tree res_op0;
			  res_op0 = captures[3];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1291:;
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
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		tree res = generic_simplify_47 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_47 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		    tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q31_pops[1];
	      if (tree_nop_convert (_q31, _q31_pops))
	        {
		  tree _q50 = _q31_pops[0];
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
			tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		  tree res = generic_simplify_48 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_49 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case PLUS_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		  tree res = generic_simplify_50 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_51 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_52 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_52 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (CONSTANT_CLASS_P (_q20))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_21 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_each_onep (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_54 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
			  tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
		    tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
		    tree res = generic_simplify_55 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  if (!TYPE_SATURATING (type)
)
			    {
			      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
				{
				  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1292;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (TREE_SIDE_EFFECTS (captures[2]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 917, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1292:;
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
			  tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
			  tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
			  if (res) return res;
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (integer_each_onep (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_54 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_16 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    if (CONSTANT_CLASS_P (_q30))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_17 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
        default:;
        }
    }
}
if (CONSTANT_CLASS_P (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
	  if (CONSTANT_CLASS_P (_q30))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		tree res = generic_simplify_53 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	    }
          break;
        }
      default:;
      }
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (CONSTANT_CLASS_P (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_53 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  }
if (integer_all_onesp (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (!TYPE_SATURATING (type)
)
	{
	  if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	    {
	      if (TREE_CODE (type) != COMPLEX_TYPE
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1293;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1293;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree _r;
		    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1293:;
		}
	    }
	}
    }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
		    tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
		    tree res = generic_simplify_56 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case POINTER_PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1294;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[1], _r2;
						_o2[0] = captures[1];
						if (TREE_TYPE (_o2[0]) != utype)
						  {
						    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
						  }
						else
						  _r2 = _o2[0];
						_o1[0] = _r2;
					      }
					      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 919, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1294:;
				      }
				    }
				  else
				    {
				      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1295;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (TREE_TYPE (_o1[0]) != type)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 920, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1295:;
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
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_57 (loc, type, _p0, _p1, captures);
				if (res) return res;
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
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				if (!TYPE_SATURATING (type)
)
				  {
				    if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
				      {
					if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
					  {
					    {
 tree utype = unsigned_type_for (type);
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
						{
						  tree res_op0;
						  {
						    tree _o1[2], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (TREE_TYPE (_o2[0]) != utype)
							{
							  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
							}
						      else
						        _r2 = _o2[0];
						      _o1[0] = _r2;
						    }
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[2];
						      if (TREE_TYPE (_o2[0]) != utype)
							{
							  _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
							}
						      else
						        _r2 = _o2[0];
						      _o1[1] = _r2;
						    }
						    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    res_op0 = _r1;
						  }
						  tree _r;
						  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						  if (TREE_SIDE_EFFECTS (captures[3]))
						    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 921, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1296:;
					    }
					  }
					else
					  {
					    if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0
 && TREE_CODE (captures[2]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[2]) == 0)
)
					      {
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
						{
						  tree res_op0;
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[1];
						    if (TREE_TYPE (_o1[0]) != type)
						      {
							_r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						      }
						    else
						      _r1 = _o1[0];
						    res_op0 = _r1;
						  }
						  tree res_op1;
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    if (TREE_TYPE (_o1[0]) != type)
						      {
							_r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						      }
						    else
						      _r1 = _o1[0];
						    res_op1 = _r1;
						  }
						  tree _r;
						  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
						  if (TREE_SIDE_EFFECTS (captures[3]))
						    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1297:;
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
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
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
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (tree_zero_one_valued_p (_q31))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
			tree res = generic_simplify_58 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q30))
	{
	  switch (TREE_CODE (_q31))
	    {
	    case MINUS_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q31, 0);
		tree _q51 = TREE_OPERAND (_q31, 1);
		if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
		      tree res = generic_simplify_58 (loc, type, _p0, _p1, captures);
		      if (res) return res;
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
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
	      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1298;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1298;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1298:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1299;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1299;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1299;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1299:;
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1300;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1300:;
    }
  }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (fold_real_zero_addition_p (type, captures[1], captures[0], 0)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1301:;
	}
    }
  }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1302;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1302;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1302;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1302:;
	    }
	}
	if (integer_each_onep (_q31))
	  {
	    if (integer_zerop (_q32))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		  tree res = generic_simplify_59 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      tree _q42 = TREE_OPERAND (_q30, 2);
	      if (integer_each_onep (_q41))
		{
		  if (integer_zerop (_q42))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
			tree res = generic_simplify_59 (loc, type, _p0, _p1, captures);
			if (res) return res;
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
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RDIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				          }
				        break;
				      default:;
				      }
				    break;
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTLL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				          }
				        break;
				      default:;
				      }
				    break;
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				          }
				        break;
				      default:;
				      }
				    break;
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTIMAX:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				          }
				        break;
				      default:;
				      }
				    break;
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      default:;
					      }
				          }
				        break;
				      default:;
				      }
				    break;
			          default:;
			          }
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (tree_vec_same_elem_p (_q31))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
			tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q30))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
			tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOGF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOGL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG2);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_LOG10);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MAX_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_q31))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
				{
 auto i = wi::neg (wi::to_wide (captures[2]));
				    if (wi::popcount (i) == 1
 && (wi::to_wide (captures[1])) == (i - 1)
)
				      {
					if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1303;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
					    {
					      tree res_op0;
					      res_op0 = captures[0];
					      tree res_op1;
					      res_op1 = captures[1];
					      tree _r;
					      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1303:;
					  }
					else
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1304;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1304;
					    {
					      if (! tree_invariant_p (captures[0])) goto next_after_fail1304;
					      if (! tree_invariant_p (captures[1])) goto next_after_fail1304;
					      tree res_op0;
					      {
						tree _o1[2], _r1;
						_o1[0] = unshare_expr (captures[0]);
						_o1[1] = unshare_expr (captures[1]);
						_r1 = fold_build2_loc (loc, LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
						res_op0 = _r1;
					      }
					      tree res_op1;
					      res_op1 = unshare_expr (captures[0]);
					      tree res_op2;
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[0];
						_o1[1] = captures[1];
						_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						res_op2 = _r1;
					      }
					      tree _r;
					      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1304:;
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
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
		    {
		      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
			    if (VECTOR_INTEGER_TYPE_P (type)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1305;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    captures[3] = _r1;
				  }
				  res_op0 = unshare_expr (captures[3]);
				  tree res_op1;
				  res_op1 = captures[3];
				  tree res_op2;
				  res_op2 = captures[1];
				  tree _r;
				  _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1305:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q22))
	      {
	      case VECTOR_CST:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_PERM_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			tree _q62 = TREE_OPERAND (_p1, 2);
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
					tree res = generic_simplify_37 (loc, type, _p0, _p1, captures, MINUS_EXPR);
					if (res) return res;
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
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_LSHIFT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case TRUNC_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, TRUNC_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_368 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, FLOOR_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_369 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1665;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1665;
				  {
				    tree res_op0;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      if (TREE_TYPE (_o1[0]) != type)
					{
					  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
					}
				      else
				        _r1 = _o1[0];
				      res_op0 = _r1;
				    }
				    tree res_op1;
				    res_op1 =  wide_int_to_tree (type,
 wi::lshift (wone, wi::to_wide (captures[2])));
				    tree _r;
				    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1665:;
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1666;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[1];
					if (TREE_TYPE (_o1[0]) != type)
					  {
					    _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
					  }
					else
					  _r1 = _o1[0];
					res_op0 = _r1;
				      }
				      tree res_op1;
				      {
					tree _o1[2], _r1;
					_o1[0] =  build_minus_one_cst (type);
					_o1[1] = captures[2];
					_r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op1 = _r1;
				      }
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 996, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1666:;
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
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_370 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case RSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			tree res = generic_simplify_370 (loc, type, _p0, _p1, captures);
			if (res) return res;
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
}
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1667;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[3];
			    tree _r;
			    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 997, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1667:;
			}
		      else
			{
			  {
 tree utype = unsigned_type_for (type);
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1668;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  {
				    tree _o2[2], _r2;
				    {
				      tree _o3[1], _r3;
				      _o3[0] = captures[0];
				      if (TREE_TYPE (_o3[0]) != utype)
					{
					  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
					}
				      else
				        _r3 = _o3[0];
				      _o2[0] = _r3;
				    }
				    _o2[1] = captures[2];
				    _r2 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree _r;
				_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 998, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1668:;
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
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_371 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_372 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_373 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_374 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_375 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
		      if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
			    if (res) return res;
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
			    if (res) return res;
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			    tree res = generic_simplify_376 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
			    if (res) return res;
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
		      if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
		      if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
		      tree res = generic_simplify_377 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
		      if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1669;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1669;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1669;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1669:;
		      }
		  }
	        }
	      break;
	    }
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1670;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1670;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1670;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1670;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1670:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1671;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1671;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1671;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1671;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1671:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
		    {
		      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
			    if (VECTOR_INTEGER_TYPE_P (type)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1672;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    captures[3] = _r1;
				  }
				  res_op0 = unshare_expr (captures[3]);
				  tree res_op1;
				  res_op1 = captures[3];
				  tree res_op2;
				  res_op2 = captures[1];
				  tree _r;
				  _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1672:;
			      }
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
  return NULL_TREE;
}

tree
generic_simplify_MIN_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_495 (loc, type, _p0, _p1, captures, MIN_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_496 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MIN_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
	      tree res = generic_simplify_497 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_498 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_499 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_499 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (INTEGRAL_TYPE_P (type)
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1702;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1702:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1703;
	    {
	      tree _r;
	      _r = captures[0];
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1703:;
	  }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1704;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1704:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1705;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1705;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1705:;
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
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1706;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1706:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1707;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1707;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1707:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1708;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1708:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1709;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1709:;
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
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1710;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1710:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1711;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1711:;
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_500 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
			    if (res) return res;
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
		      tree res = generic_simplify_501 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
		      if (res) return res;
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case ADDR_EXPR:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
		      tree res = generic_simplify_502 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
		      if (res) return res;
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
		tree res = generic_simplify_503 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1712;
		    {
		      tree res_op0;
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			_r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1712:;
		  }
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_504 (loc, type, _p0, _p1, captures, MIN_EXPR, MAX_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1713;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1713;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1713;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1713:;
		      }
		  }
	        }
	      break;
	    }
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1714;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1714;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1714;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1714;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1714:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1715;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1715;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1715;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1715;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1715:;
	    }
	}
        break;
      }
    default:;
    }
  if (tree_zero_one_valued_p (_p0))
    {
      if (tree_zero_one_valued_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    tree res = generic_simplify_505 (loc, type, _p0, _p1, captures, MIN_EXPR, BIT_AND_EXPR);
	    if (res) return res;
	  }
        }
    }
  return NULL_TREE;
}

tree
generic_simplify_UNLT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1742;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1742;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1742;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1742:;
		      }
		  }
	        }
	      break;
	    }
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1743;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1743;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1743;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1743;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1743:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1744;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1744;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1744;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1744;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1744:;
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
	tree res = generic_simplify_535 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNLT_EXPR, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_UNEQ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1754;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1754;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1754;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1754:;
		      }
		  }
	        }
	      break;
	    }
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1755;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1755;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1755;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1755;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1755:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1756;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1756;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1756;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1756;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1756:;
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
	tree res = generic_simplify_536 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNEQ_EXPR, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_INSERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case BIT_FIELD_REF:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1941;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1941;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1941;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
			  res_op1 = _r1;
			}
			tree res_op2;
			res_op2 =  vec_perm_indices_to_tree (build_vector_type (ssizetype, nunits),
 sel);
			tree _r;
			_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
			if (TREE_SIDE_EFFECTS (captures[3]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1086, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1941:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0, tree _p1, tree _p2)
{
  switch (code)
    {
    case COND_EXPR:
      return generic_simplify_COND_EXPR (loc, code, type, _p0, _p1, _p2);
    case VEC_COND_EXPR:
      return generic_simplify_VEC_COND_EXPR (loc, code, type, _p0, _p1, _p2);
    case BIT_FIELD_REF:
      return generic_simplify_BIT_FIELD_REF (loc, code, type, _p0, _p1, _p2);
    case BIT_INSERT_EXPR:
      return generic_simplify_BIT_INSERT_EXPR (loc, code, type, _p0, _p1, _p2);
    case VEC_PERM_EXPR:
      return generic_simplify_VEC_PERM_EXPR (loc, code, type, _p0, _p1, _p2);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}

tree
generic_simplify (location_t, enum tree_code,
                  const tree, tree, tree, tree, tree, tree, tree, tree)
{
  return NULL_TREE;
}
void
generic_dump_logs (const char *file1, int line1_id, const char *file2, int line2, bool simplify)
{
  static int dbg_line_numbers[1099] = {
	/* 0 */ 161, 164, 173, 175, 178, 181, 183, 189, 197, 195, 
	/* 10 */ 199, 201, 938, 940, 2078, 2084, 2086, 2089, 2094, 2097, 
	/* 20 */ 2310, 2314, 2316, 2318, 2320, 2322, 2324, 2326, 2353, 2369, 
	/* 30 */ 2377, 2359, 2917, 2919, 2921, 2928, 2925, 2935, 2937, 2944, 
	/* 40 */ 2941, 3125, 3135, 3146, 3151, 3156, 3189, 3194, 3160, 3164, 
	/* 50 */ 3168, 3172, 3200, 3206, 3212, 3176, 3221, 3225, 3250, 3256, 
	/* 60 */ 3278, 3262, 3291, 3230, 3234, 3244, 3238, 3295, 3311, 3346, 
	/* 70 */ 3323, 3364, 3371, 3413, 3380, 3389, 3404, 3398, 3426, 3435, 
	/* 80 */ 3444, 3453, 3463, 5623, 8813, 8834, 11010, 11013, 11018, 11233, 
	/* 90 */ 11236, 11257, 11262, 8633, 254, 281, 282, 493, 1306, 1442, 
	/* 100 */ 1778, 1828, 1833, 1937, 1896, 3983, 3921, 2432, 2464, 4026, 
	/* 110 */ 4027, 4031, 4032, 4042, 4046, 4050, 4065, 4068, 4072, 3998, 
	/* 120 */ 4001, 4006, 4153, 4159, 4165, 4347, 4348, 4374, 4393, 4412, 
	/* 130 */ 4755, 5522, 6770, 8261, 8336, 9939, 9987, 10001, 11037, 11350, 
	/* 140 */ 922, 928, 1422, 1431, 1914, 1905, 1852, 2581, 3934, 3974, 
	/* 150 */ 3979, 3980, 3988, 3989, 3992, 4009, 4084, 4087, 4091, 4173, 
	/* 160 */ 4195, 4233, 4244, 4283, 4298, 4761, 6780, 8341, 9997, 11041, 
	/* 170 */ 1312, 1316, 1408, 1417, 1447, 1452, 1494, 1479, 1486, 1509, 
	/* 180 */ 1510, 1514, 1515, 1536, 1991, 1541, 1548, 1568, 1671, 1695, 
	/* 190 */ 1785, 1790, 1800, 1810, 1924, 1983, 2011, 2021, 2023, 2224, 
	/* 200 */ 2243, 2251, 2256, 2261, 2277, 2267, 2268, 4469, 4482, 4492, 
	/* 210 */ 2291, 2302, 2305, 2337, 2415, 2444, 2446, 2451, 2453, 2574, 
	/* 220 */ 2994, 2996, 3542, 3557, 3575, 3758, 3759, 3760, 3765, 3770, 
	/* 230 */ 3776, 3782, 3814, 3815, 3820, 3821, 3826, 3831, 3835, 3884, 
	/* 240 */ 3898, 3547, 3566, 3568, 3552, 4506, 4518, 7427, 9210, 1457, 
	/* 250 */ 1462, 1573, 1578, 1795, 1885, 1805, 1949, 1815, 1820, 1943, 
	/* 260 */ 1995, 1956, 1962, 2555, 1969, 2029, 4767, 6839, 6841, 6890, 
	/* 270 */ 6898, 10084, 10090, 461, 467, 499, 1251, 1271, 1276, 2070, 
	/* 280 */ 2071, 2108, 2590, 5508, 5515, 5565, 5568, 5618, 8254, 8668, 
	/* 290 */ 8498, 8505, 8662, 8707, 8712, 329, 885, 2342, 2569, 2608, 
	/* 300 */ 2618, 2657, 2663, 2666, 2671, 2836, 2687, 2689, 2690, 2693, 
	/* 310 */ 2695, 2696, 2698, 2700, 2702, 2704, 2706, 2708, 2722, 2723, 
	/* 320 */ 2757, 2842, 2867, 2783, 2810, 2850, 2855, 2880, 2887, 2953, 
	/* 330 */ 3856, 4697, 4705, 4708, 4714, 4717, 4744, 5052, 5053, 5087, 
	/* 340 */ 5091, 5220, 5060, 5061, 5105, 5108, 5109, 5114, 5117, 5120, 
	/* 350 */ 5121, 5073, 5076, 5265, 5269, 5274, 5533, 5683, 5687, 6850, 
	/* 360 */ 6866, 6868, 6880, 6910, 6916, 6917, 6932, 6933, 6937, 6955, 
	/* 370 */ 6960, 6992, 7000, 7010, 7019, 7023, 7029, 7036, 7052, 7056, 
	/* 380 */ 7060, 7067, 7068, 7073, 7074, 7081, 7082, 7084, 7085, 7101, 
	/* 390 */ 7112, 7124, 7128, 7130, 7135, 7138, 7141, 7149, 7211, 7212, 
	/* 400 */ 7216, 7217, 7224, 7228, 7232, 7235, 7241, 7242, 7246, 7249, 
	/* 410 */ 7256, 7276, 7279, 7282, 7285, 7334, 7337, 7341, 7348, 7354, 
	/* 420 */ 7362, 7371, 7372, 7470, 7480, 7519, 7525, 7541, 7554, 7556, 
	/* 430 */ 7558, 7584, 7626, 7605, 7606, 7613, 7615, 7631, 7637, 7642, 
	/* 440 */ 7651, 7657, 7663, 7668, 7673, 7705, 7782, 7687, 7697, 7820, 
	/* 450 */ 7822, 7824, 7826, 7828, 7830, 7834, 7836, 7859, 7882, 7994, 
	/* 460 */ 8001, 8002, 8010, 8011, 8174, 9254, 9256, 9344, 9346, 9347, 
	/* 470 */ 9353, 9369, 9371, 9373, 9391, 9392, 9724, 9727, 9741, 9750, 
	/* 480 */ 9814, 9815, 9869, 9871, 9947, 10356, 10358, 10360, 10792, 6846, 
	/* 490 */ 6857, 6859, 6967, 473, 1224, 1245, 8618, 8623, 8628, 533, 
	/* 500 */ 534, 545, 550, 557, 566, 574, 583, 629, 632, 820, 
	/* 510 */ 973, 999, 1030, 594, 850, 854, 859, 865, 869, 877, 
	/* 520 */ 965, 745, 755, 757, 759, 8248, 8673, 8695, 8678, 8683, 
	/* 530 */ 8688, 8702, 8736, 8741, 807, 810, 1646, 2631, 2634, 2731, 
	/* 540 */ 2743, 2825, 2769, 2796, 2908, 2911, 4735, 4727, 6804, 8104, 
	/* 550 */ 7384, 7387, 7413, 7414, 7907, 7909, 7911, 7913, 7917, 7919, 
	/* 560 */ 7921, 7923, 7927, 7932, 7939, 7944, 7964, 7966, 7968, 7970, 
	/* 570 */ 8117, 8125, 8135, 8143, 8153, 8275, 8277, 9268, 9287, 9327, 
	/* 580 */ 9792, 9794, 9795, 9850, 9853, 9855, 2647, 6794, 7457, 8349, 
	/* 590 */ 8354, 10377, 10379, 10381, 10383, 10387, 911, 947, 1296, 4873, 
	/* 600 */ 4943, 4946, 4954, 5021, 5023, 5024, 5025, 5232, 4924, 4933, 
	/* 610 */ 5737, 5740, 5741, 5749, 2235, 3867, 3872, 4639, 9093, 9095, 
	/* 620 */ 9126, 9161, 11294, 1188, 8566, 8587, 1197, 8310, 8316, 8613, 
	/* 630 */ 9040, 1211, 1215, 8608, 8791, 1390, 1474, 1522, 1467, 1499, 
	/* 640 */ 1530, 1563, 1604, 1615, 1626, 1638, 2476, 1867, 1875, 1880, 
	/* 650 */ 2003, 2332, 2596, 3121, 5191, 5209, 5210, 5708, 5714, 5762, 
	/* 660 */ 3512, 3514, 3524, 3526, 3631, 3632, 3633, 3638, 3643, 3649, 
	/* 670 */ 3655, 3687, 3688, 3693, 3694, 3699, 3704, 3708, 3532, 3537, 
	/* 680 */ 3582, 6982, 7430, 9196, 9198, 9982, 1553, 1558, 2534, 1726, 
	/* 690 */ 2539, 5243, 2514, 2545, 2549, 5257, 4682, 6831, 6833, 2115, 
	/* 700 */ 2153, 2176, 2177, 2519, 3959, 9667, 3503, 4797, 4840, 4853, 
	/* 710 */ 6245, 6247, 6249, 6459, 6463, 6471, 6498, 6500, 6349, 6352, 
	/* 720 */ 6514, 6518, 6576, 4785, 4804, 4811, 4817, 4823, 4829, 6582, 
	/* 730 */ 6714, 9227, 9228, 6724, 10144, 10152, 7735, 7736, 7750, 7751, 
	/* 740 */ 4525, 4529, 4539, 4557, 4622, 4624, 4626, 4628, 4677, 9218, 
	/* 750 */ 4543, 4550, 4535, 4649, 4658, 4661, 4860, 4993, 5003, 8203, 
	/* 760 */ 8206, 8225, 5659, 5671, 5674, 5678, 10586, 10592, 10600, 10606, 
	/* 770 */ 10615, 10621, 10629, 10635, 10681, 10689, 8026, 6975, 6971, 8184, 
	/* 780 */ 8191, 8326, 8331, 8432, 8529, 8546, 8578, 8598, 8603, 8854, 
	/* 790 */ 8831, 8810, 8639, 8643, 8934, 8944, 8951, 8960, 8978, 8985, 
	/* 800 */ 8966, 9233, 9239, 9657, 9663, 9660, 9671, 9677, 9685, 9691, 
	/* 810 */ 9699, 9705, 9759, 9962, 9977, 10243, 10246, 10051, 10065, 10078, 
	/* 820 */ 10762, 10776, 10867, 10868, 219, 2035, 2045, 5794, 2054, 1138, 
	/* 830 */ 2487, 3102, 5285, 5287, 5297, 5389, 5400, 5413, 5436, 5446, 
	/* 840 */ 5455, 5467, 5493, 5802, 6199, 1723, 1737, 1744, 1766, 1773, 
	/* 850 */ 2347, 2562, 2040, 2049, 2058, 2124, 2128, 2159, 2165, 3946, 
	/* 860 */ 6757, 3954, 9681, 9695, 9709, 5302, 5311, 5323, 5333, 5339, 
	/* 870 */ 5811, 5348, 5345, 5631, 5639, 5647, 5650, 5634, 5642, 5653, 
	/* 880 */ 5665, 237, 727, 2400, 4604, 5580, 5586, 5588, 5829, 5840, 
	/* 890 */ 5849, 11309, 3001, 3005, 242, 3022, 3026, 3038, 260, 297, 
	/* 900 */ 1426, 1732, 1840, 1847, 1857, 1862, 2134, 3046, 3058, 3052, 
	/* 910 */ 3064, 2145, 2752, 2777, 2804, 2788, 2815, 4207, 4179, 4254, 
	/* 920 */ 4263, 4306, 4317, 5593, 5604, 11275, 11276, 1651, 1656, 7420, 
	/* 930 */ 10740, 10744, 1679, 1684, 2527, 3847, 247, 300, 2761, 3071, 
	/* 940 */ 3078, 3085, 3091, 4216, 3096, 4272, 4320, 4329, 5596, 373, 
	/* 950 */ 304, 341, 350, 358, 432, 447, 455, 646, 686, 982, 
	/* 960 */ 1176, 1181, 1279, 1282, 1382, 2390, 5609, 8283, 8289, 8480, 
	/* 970 */ 8730, 2507, 6006, 6014, 7487, 8058, 8084, 8085, 2497, 8052, 
	/* 980 */ 609, 612, 736, 765, 771, 777, 785, 790, 795, 838, 
	/* 990 */ 842, 8295, 8301, 7976, 896, 1337, 4889, 1326, 1329, 1361, 
	/* 1000 */ 1372, 4866, 4938, 5031, 1396, 1585, 1661, 1689, 2282, 5037, 
	/* 1010 */ 5038, 7424, 11282, 4564, 4568, 4596, 4597, 4670, 4575, 4579, 
	/* 1020 */ 4587, 4588, 4975, 5628, 8034, 8036, 8043, 8045, 6979, 6478, 
	/* 1030 */ 6483, 6551, 6557, 6566, 6567, 4773, 5780, 5782, 6589, 6595, 
	/* 1040 */ 6598, 6607, 6611, 6616, 6645, 6650, 6711, 6658, 6663, 6721, 
	/* 1050 */ 7765, 7767, 6680, 6681, 6682, 6732, 6701, 6702, 6703, 6744, 
	/* 1060 */ 6745, 7796, 7801, 6624, 5786, 5788, 6025, 6027, 9399, 9405, 
	/* 1070 */ 9410, 9419, 9421, 9441, 9486, 9489, 9490, 9522, 9528, 9530, 
	/* 1080 */ 9531, 9587, 9588, 9609, 9614, 9619, 9649, 10891, 10893, 10928, 
	/* 1090 */ 11002, 11005, 11090, 11025, 11031, 11159, 11161, 11223, 11225
  };

  fprintf (dump_file, "%s %s:%d, %s:%d\n",
	  simplify ? "Applying pattern" : "Matching expression", file1, dbg_line_numbers[line1_id], file2, line2);
}

#pragma GCC diagnostic pop
