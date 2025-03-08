/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_maybe_cmp (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
    case LE_EXPR:
    case EQ_EXPR:
    case NE_EXPR:
    case GE_EXPR:
    case GT_EXPR:
    case UNORDERED_EXPR:
    case ORDERED_EXPR:
    case UNLT_EXPR:
    case UNLE_EXPR:
    case UNGT_EXPR:
    case UNGE_EXPR:
    case UNEQ_EXPR:
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 5, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case LT_EXPR:
	  case LE_EXPR:
	  case EQ_EXPR:
	  case NE_EXPR:
	  case GE_EXPR:
	  case GT_EXPR:
	  case UNORDERED_EXPR:
	  case ORDERED_EXPR:
	  case UNLT_EXPR:
	  case UNLE_EXPR:
	  case UNGT_EXPR:
	  case UNGE_EXPR:
	  case UNEQ_EXPR:
	  case LTGT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
		  {
		    {
		      res_ops[0] = captures[0];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 6, __FILE__, __LINE__, false);
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
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 7, __FILE__, __LINE__, false);
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
tree_unsigned_integer_sat_sub (tree t, tree *res_ops)
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
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    if (integer_zerop (_p2))
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 56, __FILE__, __LINE__, false);
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
	  case GE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q60))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				  {
				    switch (TREE_CODE (_q61))
				      {
				      CASE_CONVERT:
				        {
					  tree _q90 = TREE_OPERAND (_q61, 0);
					  if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
					    {
					      if (integer_zerop (_p2))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						      {
							if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
							  {
							    {
							      res_ops[0] = captures[0];
							      res_ops[1] = captures[1];
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					  {
					    if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
					      {
						{
						  res_ops[0] = captures[0];
						  res_ops[1] = captures[1];
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      switch (TREE_CODE (_q51))
			        {
				CASE_CONVERT:
				  {
				    tree _q80 = TREE_OPERAND (_q51, 0);
				    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				      {
					if (integer_zerop (_p2))
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						{
						  if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
						    {
						      {
							res_ops[0] = captures[0];
							res_ops[1] = captures[1];
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				    {
				      if (TYPE_UNSIGNED (TREE_TYPE (captures[0])) && types_match (captures[0], captures[1])
)
					{
					  {
					    res_ops[0] = captures[0];
					    res_ops[1] = captures[1];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, false);
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
	  case EQ_EXPR:
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
				    switch (TREE_CODE (_p1))
				      {
				      case REALPART_EXPR:
				        {
					  tree _q80 = TREE_OPERAND (_p1, 0);
					  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
					    {
					      if (integer_zerop (_p2))
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
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 58, __FILE__, __LINE__, false);
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
				    if (integer_zerop (_p1))
				      {
					switch (TREE_CODE (_p2))
					  {
					  case REALPART_EXPR:
					    {
					      tree _q90 = TREE_OPERAND (_p2, 0);
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
							      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 59, __FILE__, __LINE__, false);
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
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_p1, 0);
			  tree _q51 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q50))
			    {
			    case INTEGER_CST:
			      {
				if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _q21 };
					  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					    {
					      if (types_match (type, captures[1])
)
						{
						  {
 unsigned precision = TYPE_PRECISION (type);
 wide_int max = wi::mask (precision, false, precision);
 wide_int c0 = wi::to_wide (captures[0]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c0_add_1 = wi::add (c0, wi::uhwi (1, precision));
						      if (wi::eq_p (c2, max) && wi::eq_p (c0_add_1, max)
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 60, __FILE__, __LINE__, false);
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
	  case LE_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_p1, 0);
			  tree _q51 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q50))
			    {
			    case INTEGER_CST:
			      {
				if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _q21 };
					  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					    {
					      if (types_match (type, captures[1]) && int_fits_type_p (captures[0], type)
)
						{
						  {
 unsigned precision = TYPE_PRECISION (type);
 wide_int max = wi::mask (precision, false, precision);
 wide_int c0 = wi::to_wide (captures[0]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c2_add_1 = wi::add (c2, wi::uhwi (1, precision));
 bool equal_p = wi::eq_p (c0, c2);
 bool less_than_1_p = !wi::eq_p (c2, max) && wi::eq_p (c2_add_1, c0);
						      if (equal_p || less_than_1_p
)
							{
							  {
							    res_ops[0] = captures[0];
							    res_ops[1] = captures[1];
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 61, __FILE__, __LINE__, false);
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
	    if (integer_onep (_q21))
	      {
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
			      if (integer_onep (_q51))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
					  {
					    if (types_match (type, captures[1])
)
					      {
						{
						  res_ops[0] = captures[0];
						  res_ops[1] = captures[1];
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 62, __FILE__, __LINE__, false);
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
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case MULT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case GT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
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
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 63, __FILE__, __LINE__, false);
					      return true;
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
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
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
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 64, __FILE__, __LINE__, false);
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
	  CASE_CONVERT:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case GT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				      {
					if (types_match (type, captures[0], captures[1])
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 63, __FILE__, __LINE__, false);
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
		case GE_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
				      {
					if (types_match (type, captures[0], captures[1])
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 64, __FILE__, __LINE__, false);
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
	  case REALPART_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_q20))
		    {
		    case CFN_SUB_OVERFLOW:
		      if (call_expr_nargs (_q20) == 2)
    {
			  tree _q30 = CALL_EXPR_ARG (_q20, 0);
			  tree _q31 = CALL_EXPR_ARG (_q20, 1);
			  switch (TREE_CODE (_p1))
			    {
			    case BIT_XOR_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_p1, 0);
				tree _q61 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q60))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  if (integer_onep (_q61))
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
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 65, __FILE__, __LINE__, false);
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
	        default:;
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    if (integer_onep (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REALPART_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  switch (TREE_CODE (_q60))
				    {
				    case CALL_EXPR:
				      switch (get_call_combined_fn (_q60))
				        {
					case CFN_SUB_OVERFLOW:
					  if (call_expr_nargs (_q60) == 2)
    {
					      tree _q80 = CALL_EXPR_ARG (_q60, 0);
					      tree _q81 = CALL_EXPR_ARG (_q60, 1);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q80, _q81, _q30 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 65, __FILE__, __LINE__, false);
							  return true;
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
    case BIT_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case REALPART_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_q20))
		    {
		    case CFN_SUB_OVERFLOW:
		      if (call_expr_nargs (_q20) == 2)
    {
			  tree _q30 = CALL_EXPR_ARG (_q20, 0);
			  tree _q31 = CALL_EXPR_ARG (_q20, 1);
			  switch (TREE_CODE (_p1))
			    {
			    case PLUS_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_p1, 0);
				tree _q61 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q60))
				  {
				  case IMAGPART_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
					{
					  if (integer_minus_onep (_q61))
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
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 66, __FILE__, __LINE__, false);
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
		case IMAGPART_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    if (integer_minus_onep (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REALPART_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  switch (TREE_CODE (_q60))
				    {
				    case CALL_EXPR:
				      switch (get_call_combined_fn (_q60))
				        {
					case CFN_SUB_OVERFLOW:
					  if (call_expr_nargs (_q60) == 2)
    {
					      tree _q80 = CALL_EXPR_ARG (_q60, 0);
					      tree _q81 = CALL_EXPR_ARG (_q60, 1);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q80, _q81, _q30 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
							  res_ops[0] = captures[0];
							  res_ops[1] = captures[1];
							  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 66, __FILE__, __LINE__, false);
							  return true;
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
    case PLUS_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p0))
	  {
	  case MAX_EXPR:
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
			    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
			      {
				if (types_match (type, captures[1]) && int_fits_type_p (captures[1], type)
)
				  {
				    {
 unsigned precision = TYPE_PRECISION (type);
 wide_int c1 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int sum = wi::add (c1, c2);
					if (wi::eq_p (sum, wi::uhwi (0, precision))
)
					  {
					    {
					      res_ops[0] = captures[0];
					      res_ops[1] = captures[1];
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 67, __FILE__, __LINE__, false);
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
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_69 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail288;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 176, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail288:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_78 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail301;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail301;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail301:;
  return NULL_TREE;
}

tree
generic_simplify_84 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail307;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail307;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 185, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail307:;
  return NULL_TREE;
}

tree
generic_simplify_90 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail313;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 192, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail313:;
  return NULL_TREE;
}

tree
generic_simplify_98 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail322;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail322;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 197, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail322:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail323;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail323;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[4];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 198, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail323:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_108 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail335;
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
next_after_fail335:;
    }
  return NULL_TREE;
}

tree
generic_simplify_119 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail349;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail349;
      {
	tree res_op0;
	{
	  tree _o1[3], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  _o1[2] = captures[5];
	  _r1 = fold_build3_loc (loc, COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_one_cst (type);
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail349:;
    }
  return NULL_TREE;
}

tree
generic_simplify_127 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail367;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail367;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail367;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail367:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail368;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail368;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail368;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 226, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail368:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail369;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail369;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail369;
		      {
			tree _r;
			_r = captures[0];
			if (TREE_SIDE_EFFECTS (captures[4]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 227, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail369:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail370;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail370;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail370;
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
next_after_fail370:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail371;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail371;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail371;
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
next_after_fail371:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail372;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail372;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail372;
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
next_after_fail372:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail373;
				      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail373;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail373;
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
next_after_fail373:;
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
generic_simplify_160 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail426;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 260, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail426:;
  return NULL_TREE;
}

tree
generic_simplify_166 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail432;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail432:;
    }
  return NULL_TREE;
}

tree
generic_simplify_174 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail442;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail442;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 274, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail442:;
    }
  return NULL_TREE;
}

tree
generic_simplify_182 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail451;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail451;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail451:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail452;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail452;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail452:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_193 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (LDEXP))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (real_equal (TREE_REAL_CST_PTR (captures[1]), &dconst1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail464;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, LDEXP, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail464;
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 291, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail464:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_201 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[1])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail472;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 299, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail472:;
    }
  return NULL_TREE;
}

tree
generic_simplify_208 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail495;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[3]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 321, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail495:;
    }
  return NULL_TREE;
}

tree
generic_simplify_214 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[1]);
      if (ptr_difference_const (captures[0], captures[2], &diff)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail501;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_int_cst_type (inner_type, diff);
	      _o1[1] = captures[1];
	      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, neeq, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 326, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail501:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_225 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail516;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail516;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail516;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]),
 wi::exact_log2 (wi::to_wide (captures[1])));
	tree _r;
	_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail516:;
    }
  return NULL_TREE;
}

tree
generic_simplify_228 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail526;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail526;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail526;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 351, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail526:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail527;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail527;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail527;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_int_cst (TREE_TYPE (captures[1]), cand);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 352, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail527:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_239 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail539;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[3];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 363, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail539:;
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail540;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 364, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail540:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail541;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 365, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail541:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_250 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sq),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && ! flag_errno_math
)
    {
      if (! HONOR_NANS (captures[0])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail587;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 410, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail587:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_254 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (cmp == EQ_EXPR
 || cmp == NE_EXPR
 || TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail600;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 423, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail600:;
    }
  return NULL_TREE;
}

tree
generic_simplify_256 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail602;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail602;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  force_fit_type (TREE_TYPE (captures[1]),
 wide_int::from (wi::to_wide (captures[2]),
 MAX (TYPE_PRECISION (TREE_TYPE (captures[2])),
 TYPE_PRECISION (TREE_TYPE (captures[1]))),
 TYPE_SIGN (TREE_TYPE (captures[2]))),
 0, TREE_OVERFLOW (captures[2]));
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 425, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail602:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail603;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail603;
	      {
		tree res_op0;
		res_op0 = captures[1];
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
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 426, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail603:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 427, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail604:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail605;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (TREE_SIDE_EFFECTS (captures[3]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 428, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail605:;
				}
			      else
				{
				  if (cmp == LT_EXPR || cmp == LE_EXPR
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail606;
				      {
					tree _r;
					_r =  constant_boolean_node (above ? true : false, type);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (TREE_SIDE_EFFECTS (captures[3]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail606:;
				    }
				  else
				    {
				      if (cmp == GT_EXPR || cmp == GE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
					  {
					    tree _r;
					    _r =  constant_boolean_node (above ? false : true, type);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 430, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail607:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail608;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
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
		      _o1[0] = captures[3];
		      if (TREE_TYPE (_o1[0]) != newtype)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 431, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail608:;
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_282 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail670;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (TREE_TYPE (_o1[0]) != stype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  build_zero_cst (stype);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 476, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail670:;
	  }
	}
      else
	{
	  if (wi::to_wide (captures[2]) == TYPE_PRECISION (TREE_TYPE (captures[1])) - 1
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail671;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_one_cst (TREE_TYPE (captures[1]));
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 477, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail671:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_289 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail683;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail683;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail683:;
    }
  return NULL_TREE;
}

tree
generic_simplify_295 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail690;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 496, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail690:;
  return NULL_TREE;
}

tree
generic_simplify_297 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail692;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 498, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail692:;
  return NULL_TREE;
}

tree
generic_simplify_304 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_zero_cst (type);
	  _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_minus_one_cst (type);
	tree res_op2;
	res_op2 =  build_one_cst (type);
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 505, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail701:;
    }
  return NULL_TREE;
}

tree
generic_simplify_311 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail709;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, trunc_divmod, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 513, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail709:;
    }
  return NULL_TREE;
}

tree
generic_simplify_317 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && wi::multiple_of_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail715;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 519, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail715:;
    }
  return NULL_TREE;
}

tree
generic_simplify_326 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (TAN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail726;
      {
	tree res_op0;
	res_op0 =  build_one_cst (type);
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = maybe_build_call_expr_loc (loc, TAN, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail726;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 530, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail726:;
    }
  return NULL_TREE;
}

tree
generic_simplify_334 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail736;
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
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 540, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail736:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_345 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail750;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 554, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail750:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail751;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail751;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 555, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail751:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail752;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 556, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail752:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail753;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail753;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 = captures[2];
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 557, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail753:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail754;
		      {
			tree _r;
			_r =  constant_boolean_node (false, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 558, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail754:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail755;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail755;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 559, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail755:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail756;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 560, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail756:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail757;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail757;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 561, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail757:;
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
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail758;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail758;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 562, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail758:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail759;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail759;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 563, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail759:;
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
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail760;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail760;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 564, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail760:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail761;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail761;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 565, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail761:;
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail762;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (TREE_TYPE (_o1[0]) != st)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  build_zero_cst (st);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail762:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail763;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (TREE_TYPE (_o1[0]) != st)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 =  build_zero_cst (st);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 567, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail763:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail764;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
						      res_op0 = _r1;
						    }
						    tree res_op1;
						    res_op1 =  build_zero_cst (st);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[2]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 568, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail764:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail765;
						      {
							tree res_op0;
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  build_zero_cst (st);
							tree _r;
							_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
							if (TREE_SIDE_EFFECTS (captures[2]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 569, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail765:;
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
  return NULL_TREE;
}

tree
generic_simplify_401 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail867;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 636, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail867:;
    }
  return NULL_TREE;
}

tree
generic_simplify_406 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail872;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail872;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[5];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 641, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail872:;
  return NULL_TREE;
}

tree
generic_simplify_414 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail880;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 648, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail880:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_420 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
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
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail886;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail886;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail886;
	      {
		tree _r;
		_r =  wide_int_to_tree (type, (wi::to_wide (captures[1])
 & (bitpos / BITS_PER_UNIT)));
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 653, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail886:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_430 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail921;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail921;
      {
	tree _r;
	_r =  constant_boolean_node (false, type);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 660, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail921:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail922;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail922;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail922;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 661, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail922:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_434 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail927;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail927;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail927;
	      {
		tree _r;
		_r = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail927:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail928;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail928;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail928;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail928:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail929;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail929;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail929;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 666, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail929:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail930;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail930;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail930;
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
next_after_fail930:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail931;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail931;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail931;
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
next_after_fail931:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail932;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail932;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail932;
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
next_after_fail932:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail933;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail933;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail933;
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
next_after_fail933:;
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
generic_simplify_465 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (!TYPE_OVERFLOW_SANITIZED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail977;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 704, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail977:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_474 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail988;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail988;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail988;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail988:;
  return NULL_TREE;
}

tree
generic_simplify_477 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree from_type = TREE_TYPE (captures[0]), to_type = TREE_TYPE (captures[1]);
      if (types_match (from_type, to_type)
 || (TYPE_UNSIGNED (from_type)
 && !TYPE_UNSIGNED (to_type)
 && TYPE_PRECISION (from_type) == TYPE_PRECISION (to_type)
 && integer_zerop (captures[1])
 && (cmp == LT_EXPR || cmp == GE_EXPR))
)
	{
	  {
 wi::overflow_type overflow = wi::OVF_NONE;
 enum tree_code code, cmp_code = cmp;
 wide_int real_c1;
 wide_int c1 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c3 = wi::to_wide (captures[3]);
 signop sgn = TYPE_SIGN (from_type);
 if (!types_match (from_type, to_type))
 {
 if (cmp_code == LT_EXPR)
 cmp_code = GT_EXPR;
 if (cmp_code == GE_EXPR)
 cmp_code = LE_EXPR;
 c1 = wi::max_value (to_type);
 }
 if (op == PLUS_EXPR)
 real_c1 = wi::sub (c3, c2, sgn, &overflow);
 else
 real_c1 = wi::add (c3, c2, sgn, &overflow);
 code = cmp_code;
 if (!overflow || !TYPE_OVERFLOW_UNDEFINED (from_type))
 {
 if (!wi::cmp (wi::sub (real_c1, 1, sgn, &overflow), c1, sgn)
 && !overflow)
 {
 if (cmp_code == LE_EXPR)
 code = LT_EXPR;
 if (cmp_code == GT_EXPR)
 code = GE_EXPR;
 }
 if (!wi::cmp (wi::add (real_c1, 1, sgn, &overflow), c1, sgn)
 && !overflow)
 {
 if (cmp_code == LT_EXPR)
 code = LE_EXPR;
 if (cmp_code == GE_EXPR)
 code = GT_EXPR;
 }
 if (code != cmp_code || !wi::cmp (real_c1, c1, sgn))
 {
 if (cmp_code == LT_EXPR || cmp_code == LE_EXPR)
 code = MIN_EXPR;
 if (cmp_code == GT_EXPR || cmp_code == GE_EXPR)
 code = MAX_EXPR;
 }
 }
	      if (code == MAX_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail992;
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail992;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail992;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail992;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail992;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (from_type, real_c1);
		      _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (from_type, c2);
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail992:;
		}
	      else
		{
		  if (code == MIN_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail993;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail993;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail993;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail993;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail993;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  _o1[1] =  wide_int_to_tree (from_type, real_c1);
			  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  wide_int_to_tree (from_type, c2);
			tree _r;
			_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail993:;
		    }
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_506 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1038;
  {
    tree _r;
    _r = captures[1];
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 750, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1038:;
  return NULL_TREE;
}

tree
generic_simplify_512 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1044;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 756, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1044:;
  return NULL_TREE;
}

tree
generic_simplify_519 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1054;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1054;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1054;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1054:;
  return NULL_TREE;
}

tree
generic_simplify_526 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1061;
	  {
	    tree res_op0;
	    {
	      tree _o1[5], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, cond_op, TREE_TYPE (_o1[1]), 5, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      if (!_r1)
	        goto next_after_fail1061;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 768, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1061:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_535 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1070;
  {
    tree res_op0;
    res_op0 = unshare_expr (captures[0]);
    tree res_op1;
    res_op1 = captures[0];
    tree _r;
    _r = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 777, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1070:;
  return NULL_TREE;
}

tree
generic_simplify_542 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (tans),
 const combined_fn ARG_UNUSED (atans))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1077;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1077:;
    }
  return NULL_TREE;
}

tree
generic_simplify_548 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1083;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = maybe_build_call_expr_loc (loc, tos, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail1083;
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1083:;
    }
  return NULL_TREE;
}

tree
generic_simplify_557 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1092;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, lfn, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1092;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 799, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1092:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_568 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1103;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1103;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 810, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1103:;
    }
  return NULL_TREE;
}

tree
generic_simplify_578 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1113;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1113;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 815, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1113:;
	    }
	  else
	    {
	      if (wi::popcount (nz) == 1
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1114;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1114;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (TREE_TYPE (_o2[0]) != utype)
			      {
				_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (integer_type_node,
 wi::ctz (nz));
			  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1114:;
		  }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_FLOAT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
1
 && type == TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1183;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1183:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
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
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1184;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1184:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1185;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1185:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1186;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1186:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1187;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1187:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1188;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1188:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1189;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 840, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1189:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1190;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1190:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
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
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1191;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1191:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1192;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1192:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1193;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1193:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1194;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1194:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1195;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1195:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1196;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 840, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1196:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1197;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1197:;
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
  return NULL_TREE;
}

tree
generic_simplify_BIT_IOR_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1306;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 881, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1306:;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
		    tree res = generic_simplify_63 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_64 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
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
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_65 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_all_onesp (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_66 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
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
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
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
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_68 (loc, type, _p0, _p1, captures);
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
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q21, _q20 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
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
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
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
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q41 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q31 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _p0, _q30 };
		    tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
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
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
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
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q31, _q30 };
	  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures);
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
	if (integer_minus_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_73 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_minus_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_74 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_75 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_76 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
	      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
	      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
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
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
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
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case EQ_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_81 (loc, type, _p0, _p1, captures);
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
        break;
      }
    case BIT_XOR_EXPR:
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
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q61 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q60 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q61 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q60 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q71 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q70 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q71 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q70 };
			      tree res = generic_simplify_82 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case EQ_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
    }
}
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1307:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1308;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1308;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 928, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1308:;
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
	      {
		tree _q40_pops[1];
		if (tree_maybe_bit_not (_q40, _q40_pops))
		  {
		    tree _q50 = _q40_pops[0];
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	      break;
	    }
          default:;
          }
	{
	  tree _q20_pops[1];
	  if (tree_maybe_bit_not (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
		      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
  {
    tree _p1_pops[1];
    if (tree_maybe_bit_not (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  {
    tree _p0_pops[1];
    if (tree_maybe_bit_not (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  tree res = generic_simplify_86 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_87 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q41 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q20, _q30 };
		    tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _q31 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q31, _q30 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q30, _q31 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q31, _q30 };
				    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		if (res) return res;
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			    {
			      if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			    {
			      if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
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
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
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
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
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
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
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
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
			    tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
		      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
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
		      case BIT_AND_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
	  case BIT_IOR_EXPR:
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
			  tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
			  tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
		    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q51, _q20 };
			  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _q50, _q20 };
			  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q20 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _q20 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _p0 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
	      tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _q30, _p0 };
	      tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q50 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	  if (res) return res;
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
	  case BIT_IOR_EXPR:
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
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q71 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q70 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q71 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q70 };
				tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q61 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q60 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q61 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q60 };
			  tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q61 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q60 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q61 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q60 };
			  tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
	  tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p0, _q21 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q51, _p0, _q20 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q50, _p0, _q21 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20 };
		    tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q30, _p0, _q31 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q31, _p0, _q30 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q30, _p0, _q31 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q31, _p0, _q30 };
			  tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q40))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      {
		tree _q31_pops[1];
		if (tree_nop_convert (_q31, _q31_pops))
		  {
		    tree _q50 = _q31_pops[0];
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q31))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q31))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				tree _q71 = TREE_OPERAND (_p1, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    switch (TREE_CODE (_q71))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q71 };
					    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					    if (res) return res;
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
			{
			  tree _p1_pops[1];
			  if (tree_nop_convert (_p1, _p1_pops))
			    {
			      tree _q70 = _p1_pops[0];
			      switch (TREE_CODE (_q70))
			        {
				case MULT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    {
				      tree _q80_pops[1];
				      if (tree_nop_convert (_q80, _q80_pops))
				        {
					  tree _q90 = _q80_pops[0];
					  switch (TREE_CODE (_q81))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q70, _q90, _q81 };
						  tree res = generic_simplify_114 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
			    }
			}
			  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
				tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	    }
          default:;
          }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case BIT_AND_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q41))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_113 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
    }
}
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1309;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1309;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1309;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1309:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1310;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1310;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1310:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
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
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1311;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1311;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1311;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1311:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1312;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1312;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1312:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      tree _q42 = TREE_OPERAND (_q21, 2);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_120 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q60 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q61 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
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
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q60 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q61 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
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
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _p0, _q21 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q20, _p0, _q21 };
			  tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, BIT_IOR_EXPR);
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _p0, _q21 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, GT_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _p0, _q20 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LT_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GT_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LT_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GT_EXPR);
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
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_131 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_131 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q51 };
			tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_133 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_133 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_137 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_137 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, LE_EXPR);
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
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_139 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
			tree res = generic_simplify_140 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q51 };
			tree res = generic_simplify_140 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, EQ_EXPR);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q51))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50, _q51 };
			    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LSHIFT_EXPR:
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
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
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
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
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
				tree captures[6] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q51, _p0, _q21 };
				tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
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
	    {
	      tree _p1_pops[1];
	      if (tree_nop_convert (_p1, _p1_pops))
	        {
		  tree _q50 = _p1_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case MULT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree _q60_pops[1];
			  if (tree_nop_convert (_q60, _q60_pops))
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
					  tree res = generic_simplify_115 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					  if (res) return res;
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
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
}
if (tree_truth_valued_p (_p0))
  {
    {
      tree _p1_pops[1];
      if (tree_logical_inverted_value (_p1, _p1_pops))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
  }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
		    tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
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
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case MULT_EXPR:
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
		      switch (TREE_CODE (_q41))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			      if (res) return res;
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
		case LSHIFT_EXPR:
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
				tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
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
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case LSHIFT_EXPR:
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1313;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1313:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1314:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1315;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1315:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1316;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 884, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1316:;
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
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1317;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1317;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1317;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1317:;
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
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1318;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1318;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1318;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1318:;
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
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1319;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1319;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1319;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1319;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1319:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case UNORDERED_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q50 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q50, 0) && types_match (_q51, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			if (types_match (captures[0], captures[1])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 929, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1320:;
			  }
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q51 };
			tree res = generic_simplify_146 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
			tree res = generic_simplify_146 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case UNORDERED_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			tree res = generic_simplify_147 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _p0, _q20 };
			tree res = generic_simplify_147 (loc, type, _p0, _p1, captures);
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1321;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1321;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1321;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1321:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1322;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1322;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1322;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1322;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1322:;
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
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1323;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1323;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1323:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1324;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1324;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1324;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1324:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1325;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1325;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1325;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1325:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1326;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1326;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1326;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1326;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1326:;
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
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1327;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1327;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1327;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1327:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1328;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1328;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1328;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1328;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1328:;
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1329;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1329;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1329;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1329:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1330;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1330;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1330;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1330;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1330:;
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
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1331;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1331;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1331;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1331:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1332;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1332;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1332;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1332;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1332:;
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1333;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1333;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1333;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1333:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1334;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1334;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1334;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1334;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1334:;
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
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
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
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1335;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1335;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1335;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1335:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1336;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1336;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1336;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1336;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1336:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1337;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1337:;
			      }
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
#pragma GCC diagnostic pop
