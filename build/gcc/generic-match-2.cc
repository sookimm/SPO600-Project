/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_logical_inverted_value (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 23, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	if (tree_truth_valued_p (_p0))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 24, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 25, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 26, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	      }
	  }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 27, __FILE__, __LINE__, false);
		    return true;
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
tree_signed_integer_sat_sub (tree t, tree *res_ops)
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
	  case LT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_q30))
		      {
		      case BIT_XOR_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q31))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q31, 0);
				tree _q71 = TREE_OPERAND (_q31, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
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
				    }
				  }
				if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
							      {
								tree _q130 = _q101_pops[0];
								if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
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
				    }
				  }
			        break;
			      }
			    default:;
			    }
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      switch (TREE_CODE (_q31))
						        {
							case BIT_XOR_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    tree _q121 = TREE_OPERAND (_q31, 1);
							    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
							      {
								if ((_q121 == _q100 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q100, 0) && types_match (_q121, _q100)))
								  {
								    if (integer_zerop (_q21))
								      {
									{
									  tree _p1_pops[1];
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
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
									  if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 78, __FILE__, __LINE__, false);
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
	  case GE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_q30))
		      {
		      case BIT_XOR_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  switch (TREE_CODE (_q31))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q31, 0);
				tree _q71 = TREE_OPERAND (_q31, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
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
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
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
				    }
				  }
				if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
				  {
				    {
				      tree _q71_pops[1];
				      if (tree_nop_convert (_q71, _q71_pops))
				        {
					  tree _q90 = _q71_pops[0];
					  switch (TREE_CODE (_q90))
					    {
					    case MINUS_EXPR:
					      {
						tree _q100 = TREE_OPERAND (_q90, 0);
						tree _q101 = TREE_OPERAND (_q90, 1);
						{
						  tree _q100_pops[1];
						  if (tree_nop_convert (_q100, _q100_pops))
						    {
						      tree _q110 = _q100_pops[0];
						      if ((_q110 == _q41 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q41, 0) && types_match (_q110, _q41)))
							{
							  {
							    tree _q101_pops[1];
							    if (tree_nop_convert (_q101, _q101_pops))
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
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
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
				    }
				  }
			        break;
			      }
			    default:;
			    }
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      switch (TREE_CODE (_q31))
						        {
							case BIT_XOR_EXPR:
							  {
							    tree _q120 = TREE_OPERAND (_q31, 0);
							    tree _q121 = TREE_OPERAND (_q31, 1);
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
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
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
									      if (tree_signed_integer_sat_val (_p2, _p2_pops))
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
											      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, false);
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
	  case BIT_AND_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case LT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_q30))
		      {
		      case BIT_XOR_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  {
			    tree _q41_pops[1];
			    if (tree_nop_convert (_q41, _q41_pops))
			      {
				tree _q60 = _q41_pops[0];
				switch (TREE_CODE (_q60))
				  {
				  case MINUS_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      {
					tree _q70_pops[1];
					if (tree_nop_convert (_q70, _q70_pops))
					  {
					    tree _q80 = _q70_pops[0];
					    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					      {
						{
						  tree _q71_pops[1];
						  if (tree_nop_convert (_q71, _q71_pops))
						    {
						      tree _q100 = _q71_pops[0];
						      if (integer_zerop (_q31))
							{
							  switch (TREE_CODE (_q21))
							    {
							    case LT_EXPR:
							      {
								tree _q130 = TREE_OPERAND (_q21, 0);
								tree _q131 = TREE_OPERAND (_q21, 1);
								switch (TREE_CODE (_q130))
								  {
								  case BIT_XOR_EXPR:
								    {
								      tree _q140 = TREE_OPERAND (_q130, 0);
								      tree _q141 = TREE_OPERAND (_q130, 1);
								      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
									{
									  if ((_q141 == _q100 && ! TREE_SIDE_EFFECTS (_q141)) || (operand_equal_p (_q141, _q100, 0) && types_match (_q141, _q100)))
									    {
									      if (integer_zerop (_q131))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
							        break;
							      }
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
			  }
			  if (integer_zerop (_q31))
			    {
			      switch (TREE_CODE (_q21))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q21, 0);
				    tree _q81 = TREE_OPERAND (_q21, 1);
				    switch (TREE_CODE (_q80))
				      {
				      case BIT_XOR_EXPR:
				        {
					  tree _q90 = TREE_OPERAND (_q80, 0);
					  tree _q91 = TREE_OPERAND (_q80, 1);
					  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
					    {
					      {
						tree _q91_pops[1];
						if (tree_nop_convert (_q91, _q91_pops))
						  {
						    tree _q110 = _q91_pops[0];
						    switch (TREE_CODE (_q110))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q120 = TREE_OPERAND (_q110, 0);
							  tree _q121 = TREE_OPERAND (_q110, 1);
							  {
							    tree _q120_pops[1];
							    if (tree_nop_convert (_q120, _q120_pops))
							      {
								tree _q130 = _q120_pops[0];
								if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
								  {
								    {
								      tree _q121_pops[1];
								      if (tree_nop_convert (_q121, _q121_pops))
								        {
									  tree _q150 = _q121_pops[0];
									  if ((_q150 == _q41 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q41, 0) && types_match (_q150, _q41)))
									    {
									      if (integer_zerop (_q81))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
					      }
					    }
					  if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
					    {
					      {
						tree _q91_pops[1];
						if (tree_nop_convert (_q91, _q91_pops))
						  {
						    tree _q110 = _q91_pops[0];
						    switch (TREE_CODE (_q110))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q120 = TREE_OPERAND (_q110, 0);
							  tree _q121 = TREE_OPERAND (_q110, 1);
							  {
							    tree _q120_pops[1];
							    if (tree_nop_convert (_q120, _q120_pops))
							      {
								tree _q130 = _q120_pops[0];
								if ((_q130 == _q41 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q41, 0) && types_match (_q130, _q41)))
								  {
								    {
								      tree _q121_pops[1];
								      if (tree_nop_convert (_q121, _q121_pops))
								        {
									  tree _q150 = _q121_pops[0];
									  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
									    {
									      if (integer_zerop (_q81))
										{
										  {
										    tree _p1_pops[1];
										    if (tree_signed_integer_sat_val (_p1, _p1_pops))
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
													if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, false);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q30))
		          {
			  case CFN_SUB_OVERFLOW:
			    if (call_expr_nargs (_q30) == 2)
    {
				tree _q40 = CALL_EXPR_ARG (_q30, 0);
				tree _q41 = CALL_EXPR_ARG (_q30, 1);
				if (integer_zerop (_q21))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_signed_integer_sat_val (_p1, _p1_pops))
				        {
					  tree _q80 = _p1_pops[0];
					  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
					    {
					      switch (TREE_CODE (_p2))
					        {
						case REALPART_EXPR:
						  {
						    tree _q100 = TREE_OPERAND (_p2, 0);
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
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 81, __FILE__, __LINE__, false);
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
				        }
				    }
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
generic_simplify_105 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail332;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail332;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail332:;
  return NULL_TREE;
}

tree
generic_simplify_111 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitop == BIT_AND_EXPR
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail338;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 205, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail338:;
    }
  else
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail339;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 206, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail339:;
    }
  return NULL_TREE;
}

tree
generic_simplify_120 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail350;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail350;
	  {
	    tree res_op0;
	    {
	      tree _o1[3], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[6];
	      _o1[2] = captures[9];
	      _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[4];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 215, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail350:;
	}
      else
	{
	  if (integer_minus_onep (captures[4])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail351;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail351;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[6];
		tree res_op2;
		res_op2 = captures[9];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail351:;
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail352;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail352;
	      {
		tree res_op0;
		{
		  tree _o1[3], _r1;
		  _o1[0] = captures[1];
		  _o1[1] = captures[9];
		  _o1[2] = captures[6];
		  _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[5];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail352:;
	    }
	  else
	    {
	      if (integer_minus_onep (captures[5])
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail353;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail353;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[9];
		    tree res_op2;
		    res_op2 = captures[6];
		    tree _r;
		    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail353:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_139 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail405;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail405;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail405;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 244, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail405:;
  return NULL_TREE;
}

tree
generic_simplify_142 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail408;
	  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail408;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail408;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != t)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, t, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 208, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail408:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_146 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail412;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail412;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 247, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail412:;
  return NULL_TREE;
}

tree
generic_simplify_149 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail415;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 249, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail415:;
  return NULL_TREE;
}

tree
generic_simplify_153 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail419;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 253, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail419:;
  return NULL_TREE;
}

tree
generic_simplify_158 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail424;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 258, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail424:;
  return NULL_TREE;
}

tree
generic_simplify_164 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (opo),
 const enum tree_code ARG_UNUSED (opi))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail430;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 264, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail430:;
  return NULL_TREE;
}

tree
generic_simplify_172 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail440;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail440;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 273, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail440:;
    }
  return NULL_TREE;
}

tree
generic_simplify_177 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail445;
  {
    if (! tree_invariant_p (captures[1])) goto next_after_fail445;
    tree res_op0;
    res_op0 = unshare_expr (captures[1]);
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 276, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail445:;
  return NULL_TREE;
}

tree
generic_simplify_188 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_widest_int factor;
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && multiple_p (wi::to_poly_widest (captures[3]), wi::to_widest (captures[1]), &factor)
)
	{
	  {
 wi::overflow_type overflow;
 wide_int mul;
	      if (types_match (type, TREE_TYPE (captures[2]))
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[3]) == INTEGER_CST
 && (mul = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[3]),
 TYPE_SIGN (type), &overflow),
 !overflow)
 && (TYPE_UNSIGNED (type)
 || known_eq (factor, 1)
 || (get_range_pos_neg (captures[0])
 | (((op == PLUS_EXPR) ^ (tree_int_cst_sgn (captures[2]) < 0))
 ? 1 : 2)) != 3)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail458;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (type, factor);
		      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (type, mul);
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 285, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail458:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (type);
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail459;
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
			    _o2[1] =  wide_int_to_tree (utype, factor);
			    _r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[3];
			      if (TREE_TYPE (_o3[0]) != utype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      if (TREE_TYPE (_o3[0]) != utype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[1] = _r3;
			    }
			    _r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail459:;
		  }
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_217 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::bit_and_not (get_known_nonzero_bits (captures[1]),
 get_nonzero_bits (captures[0])) != 0
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail504;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 329, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail504:;
    }
  return NULL_TREE;
}

tree
generic_simplify_223 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail512;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail512;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail512;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail512;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR ? false : true, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 337, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail512:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail513;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail513;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail513;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail513;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_int_cst (TREE_TYPE (captures[1]), c1 - c2);
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 338, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail513:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_232 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (TREE_TYPE (captures[1])) != COMPLEX_TYPE
 && (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (captures[1])))
 || !target_supports_op_p (TREE_TYPE (captures[1]), TRUNC_DIV_EXPR,
 optab_vector)
 || target_supports_op_p (TREE_TYPE (captures[1]), TRUNC_MOD_EXPR,
 optab_vector))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail531;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 356, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail531:;
    }
  return NULL_TREE;
}

tree
generic_simplify_238 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail538;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail538;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 362, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail538:;
    }
  return NULL_TREE;
}

tree
generic_simplify_244 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail549;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (TREE_TYPE (_o1[0]) != otype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, otype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 373, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail549:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_249 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail568;
	      {
		tree _r;
		_r =  constant_boolean_node (false, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail568:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR || !HONOR_NANS (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail569;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 392, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail569:;
		}
	      else
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail570;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  build_real (TREE_TYPE (captures[0]), dconst0);
		    tree _r;
		    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 393, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail570:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail571;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 394, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail571:;
		}
	      else
		{
		  if (cmp == GE_EXPR && !HONOR_NANS (captures[0])
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail572;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 395, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail572:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail573;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[1];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 396, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail573:;
			}
		      else
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail574;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[1];
			    tree _r;
			    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 397, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail574:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail575;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 398, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail575:;
				}
			      else
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail576;
				  {
				    tree _r;
				    _r =  constant_boolean_node (false, type);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 399, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail576:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail577;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 400, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail577:;
				    }
				  else
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail578;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 401, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail578:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail579;
				  {
				    tree _r;
				    _r =  constant_boolean_node (true, type);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 402, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail579:;
				}
			      else
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail580;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 403, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail580:;
				    }
				  else
				    {
				      if (! HONOR_INFINITIES (captures[0])
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail581;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    res_op1 =  build_real (TREE_TYPE (captures[0]), dconst0);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 404, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail581:;
					}
				      else
					{
					  if (1
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail582;
					      {
						if (! tree_invariant_p (captures[0])) goto next_after_fail582;
						tree res_op0;
						{
						  tree _o1[2], _r1;
						  _o1[0] = unshare_expr (captures[0]);
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
						  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree res_op1;
						{
						  tree _o1[2], _r1;
						  _o1[0] = captures[0];
						  _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
						  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
						  res_op1 = _r1;
						}
						tree _r;
						_r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail582:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail583;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail583:;
				    }
				  else
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail584;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  build_real (TREE_TYPE (captures[0]), c2);
					tree _r;
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 407, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail584:;
				    }
				}
			      else
				{
				  if (ncmp != ERROR_MARK &&
1
)
				    {
				      if (ncmp == LT_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail585;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail585;
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = unshare_expr (captures[0]);
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      _r1 = fold_build2_loc (loc, LT_EXPR, type, _o1[0], _o1[1]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 408, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail585:;
					}
				      else
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail586;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail586;
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = unshare_expr (captures[0]);
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
					      _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[0];
					      _o1[1] =  build_real (TREE_TYPE (captures[0]), c2);
					      _r1 = fold_build2_loc (loc, LE_EXPR, type, _o1[0], _o1[1]);
					      res_op1 = _r1;
					    }
					    tree _r;
					    _r = fold_build2_loc (loc, TRUTH_ANDIF_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 409, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail586:;
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
generic_simplify_309 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail707;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 511, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail707:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_314 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail712;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 516, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail712:;
    }
  return NULL_TREE;
}

tree
generic_simplify_324 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail724;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TANH, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail724;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 528, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail724:;
    }
  return NULL_TREE;
}

tree
generic_simplify_330 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (neg_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!HONOR_SIGNED_ZEROS (captures[1]) && !HONOR_INFINITIES (captures[1])
)
	{
	  if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail730;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 534, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail730:;
	    }
	  else
	    {
	      if (real_less (TREE_REAL_CST_PTR (captures[0]), &dconst0)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail731;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, neg_op, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 535, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail731:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_341 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == 1
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail744;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst) - 1));
	    tree _r;
	    _r = fold_build2_loc (loc, acmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 548, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail744:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_350 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail785;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, out, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 572, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail785:;
    }
  return NULL_TREE;
}

tree
generic_simplify_356 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool ok = true;
 HOST_WIDE_INT val = 0;
 if (!tree_fits_shwi_p (captures[3]))
 ok = false;
 else
 {
 val = tree_to_shwi (captures[3]);
 if (op == GT_EXPR || op == LE_EXPR)
 {
 if (val == HOST_WIDE_INT_MAX)
 ok = false;
 else
 val++;
 }
 }
 HOST_WIDE_INT zero_val = tree_to_shwi (captures[2]);
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
 if (prec > MAX_FIXED_MODE_SIZE)
 ok = false;
      if (val <= 0
)
	{
	  if (ok && zero_val >= val
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail796;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail796;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail796:;
	    }
	}
      else
	{
	  if (val >= prec
)
	    {
	      if (ok && zero_val < val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail797;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail797;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail797;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail797:;
		}
	    }
	  else
	    {
	      if (ok && (zero_val < 0 || zero_val >= prec)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail798;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail798;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail798;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (val, false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  build_zero_cst (type0);
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 585, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail798:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_368 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_pow2p (captures[3]) && tree_int_cst_sgn (captures[3]) > 0
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail814;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail814;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[2];
	    _o2[1] =  build_int_cst (TREE_TYPE (captures[2]),
 1);
	    _r2 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, shift, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail814:;
    }
  return NULL_TREE;
}

tree
generic_simplify_374 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail820;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  tem;
	    tree _r;
	    _r = fold_build2_loc (loc, shiftrotate, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 602, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail820:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_381 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((integer_zerop (captures[1]) || integer_onep (captures[1]))
)
    {
      if ((eqne == EQ_EXPR) ^ integer_zerop (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail834;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 615, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail834:;
	}
      else
	{
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail835;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_one_cst (type);
		tree _r;
		_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 616, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail835:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_385 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail845;
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
next_after_fail845:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail846;
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
next_after_fail846:;
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
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail847;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail847;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail847;
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
next_after_fail847:;
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail848;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail848;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail848;
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
next_after_fail848:;
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
generic_simplify_416 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 || bitwise_inverted_equal_p (captures[1], captures[2], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
	  {
	    tree _r;
	    _r =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 650, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail882:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_427 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail900;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail900;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail900;
	      {
		tree _r;
		_r = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail900:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail901;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail901;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail901;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail901:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail902;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail902;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail902;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 666, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail902:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail903;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail903;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail903;
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
next_after_fail903:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail904;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail904;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail904;
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
next_after_fail904:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail905;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail905;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail905;
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
next_after_fail905:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail906;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail906;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail906;
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
next_after_fail906:;
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
generic_simplify_455 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail965;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 694, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail965:;
    }
  return NULL_TREE;
}

tree
generic_simplify_458 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail968;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, maxmin, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail968:;
  return NULL_TREE;
}

tree
generic_simplify_466 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (!HONOR_SIGN_DEPENDENT_ROUNDING (type) && single_use (captures[0])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail978;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree res_op2;
	    res_op2 = captures[3];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	    if (!_r)
	      goto next_after_fail978;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail978:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_475 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail989;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail989:;
  return NULL_TREE;
}

tree
generic_simplify_482 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail999;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail999;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail999;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail999:;
  return NULL_TREE;
}

tree
generic_simplify_485 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1002;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1002;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1002;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 728, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1002:;
  return NULL_TREE;
}

tree
generic_simplify_491 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_widest (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[3])) - 1
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1009;
      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1009;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1009;
      {
	tree _r;
	_r = captures[2];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 735, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1009:;
    }
  return NULL_TREE;
}

tree
generic_simplify_499 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1019;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 743, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1019:;
    }
  return NULL_TREE;
}

tree
generic_simplify_505 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (logic))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1037;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, logic, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 749, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1037:;
  return NULL_TREE;
}

tree
generic_simplify_508 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1040;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 752, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1040:;
    }
  return NULL_TREE;
}

tree
generic_simplify_514 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_MAX_VALUE (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (TREE_TYPE (captures[0])))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1047;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      {
		tree _o2[2], _r2;
		_o2[0] =  TYPE_MAX_VALUE (TREE_TYPE (captures[1]));
		_o2[1] = captures[2];
		_r2 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		if (EXPR_P (_r2))
		  goto next_after_fail1047;
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 759, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1047:;
	}
      else
	{
	  if (TYPE_MIN_VALUE (TREE_TYPE (captures[1]))
)
	    {
	      if (integer_minus_onep (captures[2])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1048;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  TYPE_MIN_VALUE (TREE_TYPE (captures[1]));
		      _r1 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 760, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1048:;
		}
	      else
		{
		  {
 tree div = fold_convert (TREE_TYPE (captures[1]), captures[2]);
 tree lo = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MIN_VALUE (TREE_TYPE (captures[1])), div);
 tree hi = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MAX_VALUE (TREE_TYPE (captures[1])), div);
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 if (wi::neg_p (wi::to_wide (div)))
 std::swap (lo, hi);
 lo = fold_convert (etype, lo);
 hi = fold_convert (etype, hi);
 hi = int_const_binop (MINUS_EXPR, hi, lo);
 }
		      if (etype
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1049;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1049;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[1];
				  if (TREE_TYPE (_o3[0]) != etype)
				    {
				      _r3 = fold_build1_loc (loc, NOP_EXPR, etype, _o3[0]);
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] =  lo;
				_r2 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _o1[1] =  hi;
			      _r1 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 761, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1049:;
			}
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_546 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1081;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1081:;
  return NULL_TREE;
}

tree
generic_simplify_553 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1088;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, tos, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail1088;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1088:;
    }
  return NULL_TREE;
}

tree
generic_simplify_561 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1096;
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
	  goto next_after_fail1096;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 803, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1096:;
    }
  return NULL_TREE;
}

tree
generic_simplify_571 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1106;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != t)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, t, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ctz, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail1106;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1106:;
  }
  return NULL_TREE;
}

tree
generic_simplify_581 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1117;
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
	    _r = maybe_build_call_expr_loc (loc, parity, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1117;
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 819, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1117:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_ABSU_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ABSU_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1160;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1160;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 852, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1160:;
		  }
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
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1161;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 853, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1161:;
	}
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1162;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1162;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1162;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1162:;
	}
        break;
      }
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1163;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1163:;
    }
  }
  return NULL_TREE;
}

tree
generic_simplify_IMAGPART_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1228;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 877, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1228:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1229;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1229:;
	      }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = PLUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1230;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1230:;
	      }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = MINUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1231;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1231:;
	      }
	      break;
	    }
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1232;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1232;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1232:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1233;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1233;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1233:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1234;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1234;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1234:;
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
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1235;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1235:;
	}
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = PLUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1236;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1236:;
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = MINUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1237;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1237:;
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_MUL_OVERFLOW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (integer_nonzerop (_q21))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_514 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	      if (integer_nonzerop (_q20))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    tree res = generic_simplify_514 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1238;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1238;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1238:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1239;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1239;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1239:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPI:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1240;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1240;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1240:;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_MULT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1400;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, itype, _o2[0]);
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    _r2 = fold_build2_loc (loc, NE_EXPR, itype, _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1400:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1401;
      {
	tree _r;
	_r = captures[1];
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1401:;
    }
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1402;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1402:;
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1403;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1403;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 952, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1403:;
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1404;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1404;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 953, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1404:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1405;
						    {
						      tree res_op0;
						      {
							tree _o1[3], _r1;
							{
							  tree _o2[2], _r2;
							  {
							    tree _o3[1], _r3;
							    _o3[0] = captures[0];
							    _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
							    _o2[0] = _r3;
							  }
							  _o2[1] =  zeros;
							  _r2 = fold_build2_loc (loc, LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
							  _o1[0] = _r2;
							}
							_o1[1] =  ones;
							_o1[2] =  zeros;
							_r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
							res_op0 = _r1;
						      }
						      tree _r;
						      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						      if (TREE_SIDE_EFFECTS (captures[1]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						      if (TREE_SIDE_EFFECTS (captures[2]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						      if (TREE_SIDE_EFFECTS (captures[3]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 954, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1405:;
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
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1406;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1406;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1406:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1407;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1407;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1407:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1408;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1408;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1408:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1409;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1409;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1409:;
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
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1410;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1410:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1411;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1411;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1411:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1412;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1412;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1412:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1413;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1413;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1413:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1414;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1414:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1415;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1415;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1415:;
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
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1416;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1416;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1416:;
				  }
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1417;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1417;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1417:;
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
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1418;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1418;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1418:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1419;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1419:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1420;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1420;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1420:;
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
	      tree _q41 = TREE_OPERAND (_q30, 1);
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
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1421;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1421;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1421:;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			      if (res) return res;
			    }
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
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			      if (res) return res;
			    }
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
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, MULT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
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
		      {
 wi::overflow_type overflow;
 wide_int mul = wi::mul (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type), &overflow);
			  if (!overflow || TYPE_OVERFLOW_WRAPS (type)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1422;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1422;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1422;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  wide_int_to_tree (type, mul);
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 957, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1422:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1423;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1423;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1423;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1423;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] =  wide_int_to_tree (type, mul);
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1423:;
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
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1424;
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
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 959, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1424:;
		    }
		}
	      }
	  }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1425;
	      {
		if (! tree_invariant_p (captures[1])) goto next_after_fail1425;
		tree res_op0;
		res_op0 = unshare_expr (captures[1]);
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 960, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1425:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1426;
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
		  captures[2] = _r1;
		}
		res_op0 = unshare_expr (captures[2]);
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1426:;
	    }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
		    if (res) return res;
		  }
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
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q30))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
		    tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			tree res = generic_simplify_179 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
	      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	if (integer_onep (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
	      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_180 (loc, type, _p0, _p1, captures);
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
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_zerop (_q31))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  tree res = generic_simplify_180 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		  tree res = generic_simplify_179 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
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
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1427;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1427;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1427:;
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
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q22))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1428;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1428;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1428:;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1429;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1429;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1429:;
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1430;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1430;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1430:;
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
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1431;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1431;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1431;
				  {
				    tree res_op0;
				    res_op0 =  tem;
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1431:;
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q30_pops[1];
	    if (tree_nop_convert (_q30, _q30_pops))
	      {
		tree _q40 = _q30_pops[0];
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      switch (TREE_CODE (_q50))
		        {
			CASE_CONVERT:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    switch (TREE_CODE (_q60))
			      {
			      case LT_EXPR:
			        {
				  tree _q70 = TREE_OPERAND (_q60, 0);
				  tree _q71 = TREE_OPERAND (_q60, 1);
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree _p1_pops[1];
					    if (tree_nop_convert (_p1, _p1_pops))
					      {
						tree _q110 = _p1_pops[0];
						if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
						  {
						    {
						      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						      if (res) return res;
						    }
						  }
					      }
					  }
					  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    tree _q61 = TREE_OPERAND (_q50, 1);
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_nop_convert (_p1, _p1_pops))
				        {
					  tree _q100 = _p1_pops[0];
					  if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
				    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	      }
	  }
	    break;
	  }
        default:;
        }
      switch (TREE_CODE (_p1))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_p1, 0);
	    tree _q41 = TREE_OPERAND (_p1, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q41))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	  tree _q40 = _p1_pops[0];
	  switch (TREE_CODE (_q40))
	    {
	    case BIT_IOR_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q40, 0);
		tree _q51 = TREE_OPERAND (_q40, 1);
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q51))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q51))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	      {
		tree _q50_pops[1];
		if (tree_nop_convert (_q50, _q50_pops))
		  {
		    tree _q60 = _q50_pops[0];
		    switch (TREE_CODE (_q60))
		      {
		      case NEGATE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  switch (TREE_CODE (_q70))
			    {
			    CASE_CONVERT:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				switch (TREE_CODE (_q80))
				  {
				  case LT_EXPR:
				    {
				      tree _q90 = TREE_OPERAND (_q80, 0);
				      tree _q91 = TREE_OPERAND (_q80, 1);
				      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
					{
					  if (integer_zerop (_q91))
					    {
					      if (integer_onep (_q51))
						{
						  {
						    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
			    case LT_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if (integer_zerop (_q81))
				      {
					if (integer_onep (_q51))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		  }
	      }
	        break;
	      }
	    default:;
	    }
        }
    }
    }
}
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case LT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				  {
				    if (integer_zerop (_q71))
				      {
					if (integer_onep (_q41))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	        default:;
	        }
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  CASE_CONVERT:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      switch (TREE_CODE (_q70))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
				      {
					if (integer_zerop (_q81))
					  {
					    if (integer_onep (_q41))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
						  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_zerop (_q51))
			    {
			      if (integer_onep (_q21))
				{
				  {
				    tree _p1_pops[1];
				    if (tree_nop_convert (_p1, _p1_pops))
				      {
					tree _q90 = _p1_pops[0];
					if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_zerop (_q41))
		      {
			if (integer_onep (_q21))
			  {
			    {
			      tree _p1_pops[1];
			      if (tree_nop_convert (_p1, _p1_pops))
			        {
				  tree _q80 = _p1_pops[0];
				  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
			        }
			    }
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
				  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q21))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q21))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_181 (loc, type, _p0, _p1, captures);
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
	  }
      }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case LT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
      {
	tree _q30_pops[1];
	if (tree_nop_convert (_q30, _q30_pops))
	  {
	    tree _q40 = _q30_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					  tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if (tree_negate_expr_p (_q50))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_negate_expr_p (_p1))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_184 (loc, type, _p0, _p1, captures, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_q20))
	{
	  switch (TREE_CODE (_p1))
	    {
	    CASE_CONVERT:
	      {
		tree _q40 = TREE_OPERAND (_p1, 0);
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
			tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
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
		tree _q40 = TREE_OPERAND (_p1, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	        break;
	      }
	    default:;
	    }
        }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      if (tree_negate_expr_p (_q40))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
if (tree_negate_expr_p (_p0))
  {
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
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
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
	    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	    tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
          break;
        }
      default:;
      }
  }
if (tree_zero_one_valued_p (_p0))
  {
    if (tree_zero_one_valued_p (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1432;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1432:;
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
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_185 (loc, type, _p0, _p1, captures, LTGT_EXPR);
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
  switch (TREE_CODE (_p0))
    {
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1433;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1433:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1434;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1434:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1435;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1435:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1436;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1436:;
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
			  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
		    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
			  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
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
					  tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
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
					  tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
        break;
      }
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
		    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
	      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
		    tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			      tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
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
				    tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
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
			      tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1437;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1437;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1437:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures);
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1438;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1438;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1438;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1438:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1439;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1439;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1439;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1439;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1439:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1440;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1440;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1440;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1440;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1440:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_p1))
	      {
	      case CFN_BUILT_IN_LDEXPF:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1441;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1441;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1441:;
			      }
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
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1442;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1442;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1442:;
			      }
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
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1443;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1443;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1443:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1444;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1444;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1444;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1444:;
					}
				    }
				}
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
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1445;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1445;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1445;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1445:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1446;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1446;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1446;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1446:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1447;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1447;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1447;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1447:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1448;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1448;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1448;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1448:;
					}
				    }
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
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1449;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1449;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1449:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1450;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1450;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1450;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1450:;
					}
				    }
				}
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
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1451;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1451;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1451:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1452;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1452;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1452;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1452:;
					}
				    }
				}
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
	case CFN_BUILT_IN_CBRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1453;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1453;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1453:;
			      }
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
	case CFN_BUILT_IN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1454;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1454;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1454;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1454:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1455;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1455;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1455:;
			      }
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
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1456;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1456;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1456:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1457;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1457;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1457;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1457:;
					}
				    }
				}
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
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1458;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1458;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1458:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1459;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1459;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1459;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1459:;
					}
				    }
				}
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
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1460;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1460;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1460;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1460:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPF:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1461;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1461;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1461;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1461:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1462;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1462;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1462;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1462:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1463;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1463;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1463;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1463:;
					}
				    }
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
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1464;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1464;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1464;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1464:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1465;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1465;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1465;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1465:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1466;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1466;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1466;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1466:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1467;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1467;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1467;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1467:;
					}
				    }
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
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1468;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1468;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1468:;
			      }
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
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1469;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1469;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1469:;
			      }
			  }
		        }
		      break;
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1470;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1470;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1470;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1470:;
					}
				    }
				}
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
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1471;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1471;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1471;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1471:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1472;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1472;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1472;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1472:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1473;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1473;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1473;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1473:;
					}
				    }
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
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1474;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1474;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1474;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1474:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1475;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1475;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1475:;
			      }
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
	case CFN_BUILT_IN_POW10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1476;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1476;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1476;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1476:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1477;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1477;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1477:;
			      }
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
	case CFN_BUILT_IN_SQRTF128X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1478;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1478;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1478;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1478:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1479;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1479;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1479:;
			      }
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
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_190 (loc, type, _p0, _p1, captures, CFN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1480;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1480;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1480:;
			      }
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
	case CFN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1481;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1481;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1481;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1481:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1482;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1482;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1482:;
			      }
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
	case CFN_BUILT_IN_CBRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1483;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1483;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1483:;
			      }
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
	case CFN_BUILT_IN_CBRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1484;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1484;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1484:;
			      }
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
	case CFN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1485;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1485;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1485;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1485:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1486;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1486;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1486:;
			      }
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
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1487;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1487;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1487;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1487:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1488;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1488;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1488:;
			      }
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
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1489;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1489;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1489;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1489:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1490;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1490;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1490:;
			      }
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
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_192 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
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
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1491;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1491;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1491;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1491:;
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
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1492;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1492;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1492:;
			      }
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
		    }
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
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_COSF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_COSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_TANF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_TANL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
				if (res) return res;
			      }
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
	case CFN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
				if (res) return res;
			      }
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
	case CFN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_194 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
				if (res) return res;
			      }
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
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
      break;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1493;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1493:;
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
					tree res = generic_simplify_37 (loc, type, _p0, _p1, captures, MULT_EXPR);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_POWI:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWI:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1494;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWI, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1494;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1494:;
				  }
			      }
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
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
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
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
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
	case CFN_BUILT_IN_POWIF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1495;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIF, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1495;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1495:;
				  }
			      }
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
	case CFN_BUILT_IN_POWIL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1496;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIL, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1496;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1496:;
				  }
			      }
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
  return NULL_TREE;
}
#pragma GCC diagnostic pop
