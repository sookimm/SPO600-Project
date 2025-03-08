/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_truth_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 20, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case ORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNEQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ANDIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_OR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ORIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
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
tree_bitwise_induction_p (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case BIT_AND_EXPR:
    case BIT_IOR_EXPR:
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree _p0_pops[1];
	  if (tree_nop_convert (_p0, _p0_pops))
	    {
	      tree _q20 = _p0_pops[0];
	      switch (TREE_CODE (_q20))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      CASE_CONVERT:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q50 = TREE_OPERAND (_q40, 0);
				tree _q51 = TREE_OPERAND (_q40, 1);
				if (integer_onep (_q50))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p1, _q50 };
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					res_ops[2] = captures[2];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
			    return true;
			  }
			}
		      }
		    break;
		  }
	        default:;
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
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  switch (TREE_CODE (_q50))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q60 = TREE_OPERAND (_q50, 0);
				tree _q61 = TREE_OPERAND (_q50, 1);
				if (integer_onep (_q60))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q61, _p0, _q60 };
				      {
					res_ops[0] = captures[0];
					res_ops[1] = captures[1];
					res_ops[2] = captures[2];
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
			    return true;
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      switch (TREE_CODE (_q20))
	        {
		CASE_CONVERT:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    switch (TREE_CODE (_q30))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _p1, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_onep (_q50))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _p0, _q50 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q40))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _p1, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _p0, _q40 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
	switch (TREE_CODE (_p0))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      if (integer_onep (_q20))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _p1, _q20 };
		    {
		      res_ops[0] = captures[0];
		      res_ops[1] = captures[1];
		      res_ops[2] = captures[2];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _p0, _q30 };
		    {
		      res_ops[0] = captures[0];
		      res_ops[1] = captures[1];
		      res_ops[2] = captures[2];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
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
    case BIT_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case BIT_XOR_EXPR:
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
		      case LSHIFT_EXPR:
		        {
			  tree _q40 = TREE_OPERAND (_q30, 0);
			  tree _q41 = TREE_OPERAND (_q30, 1);
			  if (integer_onep (_q40))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q41, _q21, _q40 };
				{
				  res_ops[0] = captures[0];
				  res_ops[1] = captures[1];
				  res_ops[2] = captures[2];
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
		case LSHIFT_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    if (integer_onep (_q30))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q21, _q30 };
			  {
			    res_ops[0] = captures[0];
			    res_ops[1] = captures[1];
			    res_ops[2] = captures[2];
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
      {
	tree _p0_pops[1];
	if (tree_nop_convert (_p0, _p0_pops))
	  {
	    tree _q20 = _p0_pops[0];
	    switch (TREE_CODE (_q20))
	      {
	      case BIT_XOR_EXPR:
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
			  case LSHIFT_EXPR:
			    {
			      tree _q50 = TREE_OPERAND (_q40, 0);
			      tree _q51 = TREE_OPERAND (_q40, 1);
			      if (integer_onep (_q50))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _q31, _q50 };
				    {
				      res_ops[0] = captures[0];
				      res_ops[1] = captures[1];
				      res_ops[2] = captures[2];
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
		    case LSHIFT_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q30, 0);
			tree _q41 = TREE_OPERAND (_q30, 1);
			if (integer_onep (_q40))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q41, _q31, _q40 };
			      {
				res_ops[0] = captures[0];
				res_ops[1] = captures[1];
				res_ops[2] = captures[2];
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
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
      }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_37 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail250;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail250;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  captures[3] = _r1;
		}
		res_op0 = unshare_expr (captures[3]);
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[1];
		tree _r;
		_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 139, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail250:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_46 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail259;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[0];
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 147, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail259:;
    }
  return NULL_TREE;
}

tree
generic_simplify_51 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail266;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 154, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail266:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_54 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail271;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail271;
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
		tree _r;
		_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 159, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail271:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_59 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail278;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      _r3 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    _r2 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o2[1]), _o2[0], _o2[1], _o2[2]);
	    _o1[0] = _r2;
	  }
	  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 166, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail278:;
    }
  return NULL_TREE;
}

tree
generic_simplify_62 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[1]) == SSA_NAME && num_imm_uses (captures[1]) == 2
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail281;
      {
	if (! tree_invariant_p (captures[2])) goto next_after_fail281;
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = unshare_expr (captures[2]);
	    _o2[1] = captures[2];
	    _o2[2] = captures[4];
	    _r2 = fold_build3_loc (loc, VEC_PERM_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1], _o2[2]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[5];
	tree _r;
	_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 169, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail281:;
    }
  return NULL_TREE;
}

tree
generic_simplify_68 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail287;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail287;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 175, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail287:;
  return NULL_TREE;
}

tree
generic_simplify_72 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail291;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_one_cst (type);
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 178, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail291:;
    }
  return NULL_TREE;
}

tree
generic_simplify_79 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail302;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail302;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 183, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail302:;
  return NULL_TREE;
}

tree
generic_simplify_86 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail309;
	  {
	    tree res_op0;
	    res_op0 =  wascmp
 ? constant_boolean_node (true, type)
 : build_all_ones_cst (TREE_TYPE (captures[0]));
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 188, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail309:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_97 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail320;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail320;
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
next_after_fail320:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail321;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail321;
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
next_after_fail321:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_107 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail334;
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
next_after_fail334:;
    }
  return NULL_TREE;
}

tree
generic_simplify_118 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail348;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 213, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail348:;
  return NULL_TREE;
}

tree
generic_simplify_124 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail358;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail358;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 223, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail358:;
  return NULL_TREE;
}

tree
generic_simplify_130 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail382;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail382;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, cmp, type, _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[3];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 240, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail382:;
  return NULL_TREE;
}

tree
generic_simplify_134 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail386;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail386;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail386;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 242, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail386:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail387;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail387;
	  {
	    tree _r;
	    _r =  constant_boolean_node (true, type);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 243, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail387:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_141 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail407;
	  if (TREE_SIDE_EFFECTS (captures[7])) goto next_after_fail407;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail407;
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
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 207, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail407:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_145 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail411;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail411;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 246, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail411:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_152 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail418;
  {
    if (! tree_invariant_p (captures[3])) goto next_after_fail418;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = unshare_expr (captures[3]);
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[4];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail418;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 252, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail418:;
  return NULL_TREE;
}

tree
generic_simplify_162 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail428;
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
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 262, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail428:;
    }
  return NULL_TREE;
}

tree
generic_simplify_169 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail436;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail436;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail436;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail436:;
    }
  return NULL_TREE;
}

tree
generic_simplify_179 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail447;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail447;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 278, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail447:;
  return NULL_TREE;
}

tree
generic_simplify_185 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail455;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail455;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail455:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_194 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail465;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, SIN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail465;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 292, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail465:;
    }
  return NULL_TREE;
}

tree
generic_simplify_199 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail470;
  {
    tree _r;
    _r =  constant_boolean_node (op == NE_EXPR ? true : false, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 297, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail470:;
  return NULL_TREE;
}

tree
generic_simplify_206 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && integer_nonzerop (captures[2])
 && !TREE_OVERFLOW (captures[2])
 && !TREE_OVERFLOW (captures[3])
)
    {
      {
 tree lo, hi; bool neg_overflow;
 enum tree_code code = fold_div_compare (cmp, captures[2], captures[3], &lo, &hi,
 &neg_overflow);
	  if (code == LT_EXPR || code == GE_EXPR
)
	    {
	      if (TREE_OVERFLOW (lo)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail480;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail480;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail480;
		  {
		    tree _r;
		    _r =  build_int_cst (type, (code == LT_EXPR) ^ neg_overflow);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 306, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail480:;
		}
	      else
		{
		  if (code == LT_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail481;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail481;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail481;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail481:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail482;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail482;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail482;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 308, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail482:;
		    }
		}
	    }
	  else
	    {
	      if (code == LE_EXPR || code == GT_EXPR
)
		{
		  if (TREE_OVERFLOW (hi)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail483;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail483;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail483;
		      {
			tree _r;
			_r =  build_int_cst (type, (code == LE_EXPR) ^ neg_overflow);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 309, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail483:;
		    }
		  else
		    {
		      if (code == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail484;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail484;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail484;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 310, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail484:;
			}
		      else
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail485;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail485;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail485;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 311, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail485:;
			}
		    }
		}
	      else
		{
		  if (!lo && !hi
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail486;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail486;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail486;
		      {
			tree _r;
			_r =  build_int_cst (type, code == NE_EXPR);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 312, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail486:;
		    }
		  else
		    {
		      if (code == EQ_EXPR && !hi
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail487;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail487;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail487;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  lo;
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 313, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail487:;
			}
		      else
			{
			  if (code == EQ_EXPR && !lo
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail488;
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail488;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail488;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree res_op1;
				res_op1 =  hi;
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 314, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail488:;
			    }
			  else
			    {
			      if (code == NE_EXPR && !hi
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail489;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail489;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail489;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree res_op1;
				    res_op1 =  lo;
				    tree _r;
				    _r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 315, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail489:;
				}
			      else
				{
				  if (code == NE_EXPR && !lo
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail490;
				      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail490;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail490;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree res_op1;
					res_op1 =  hi;
					tree _r;
					_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 316, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail490:;
				    }
				  else
				    {
				      if (1
)
					{
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail491;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail491;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail491;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail491;
					  {
					    tree _r;
					    _r =  build_range_check (UNKNOWN_LOCATION, type, captures[1], code == EQ_EXPR,
 lo, hi);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 317, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail491:;
					}
				      else
					{
					  {
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 hi = fold_convert (etype, hi);
 lo = fold_convert (etype, lo);
 hi = const_binop (MINUS_EXPR, etype, hi, lo);
 }
					      if (etype && hi && !TREE_OVERFLOW (hi)
)
						{
						  if (code == EQ_EXPR
)
						    {
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail492;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail492;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail492;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 318, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail492:;
						    }
						  else
						    {
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail493;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail493;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail493;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 319, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail493:;
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
generic_simplify_259 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off; tree base;
 tree addr = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
      if (SSA_NAME_IS_DEFAULT_DEF (captures[1])
 && TREE_CODE (SSA_NAME_VAR (captures[1])) == PARM_DECL
 && (base = get_base_address (TREE_OPERAND (addr, 0)))
 && TREE_CODE (base) == VAR_DECL
 && auto_var_in_fn_p (base, current_function_decl)
)
	{
	  if (cmp == NE_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail617;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail617;
	      {
		tree _r;
		_r =  constant_boolean_node (true, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 433, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail617:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail618;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail618;
	      {
		tree _r;
		_r =  constant_boolean_node (false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 434, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail618:;
	    }
	}
      else
	{
	  if ((base = get_addr_base_and_unit_offset (TREE_OPERAND (addr, 0), &off))
 && TREE_CODE (base) == MEM_REF
 && TREE_OPERAND (base, 0) == captures[1]
)
	    {
	      {
 off += mem_ref_offset (base).force_shwi ();
		  if (known_ne (off, 0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail619;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail619;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 435, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail619:;
		    }
		  else
		    {
		      if (known_eq (off, 0)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail620;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail620;
			  {
			    tree _r;
			    _r =  constant_boolean_node (cmp == EQ_EXPR, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 436, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail620:;
			}
		    }
	      }
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_269 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail630;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail630;
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
	    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 446, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail630:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_275 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[2], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (cmp == EQ_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail643;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail643;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail643;
	      {
		tree _r;
		_r =  constant_boolean_node (known_eq (off0, off1), type);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail643:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail644;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail644;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail644;
		  {
		    tree _r;
		    _r =  constant_boolean_node (known_ne (off0, off1), type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 450, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail644:;
		}
	      else
		{
		  if (cmp == LT_EXPR && (known_lt (off0, off1) || known_ge (off0, off1))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail645;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail645;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail645;
		      {
			tree _r;
			_r =  constant_boolean_node (known_lt (off0, off1), type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 451, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail645:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR && (known_le (off0, off1) || known_gt (off0, off1))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail646;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail646;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail646;
			  {
			    tree _r;
			    _r =  constant_boolean_node (known_le (off0, off1), type);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 452, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail646:;
			}
		      else
			{
			  if (cmp == GE_EXPR && (known_ge (off0, off1) || known_lt (off0, off1))
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail647;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail647;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail647;
			      {
				tree _r;
				_r =  constant_boolean_node (known_ge (off0, off1), type);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 453, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail647:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR && (known_gt (off0, off1) || known_le (off0, off1))
)
				{
				  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail648;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail648;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail648;
				  {
				    tree _r;
				    _r =  constant_boolean_node (known_gt (off0, off1), type);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 454, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail648:;
				}
			    }
			}
		    }
		}
	    }
	}
      else
	{
	  if (equal == 0
)
	    {
	      if (cmp == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail649;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail649;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail649;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 455, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail649:;
		}
	      else
		{
		  if (cmp == NE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail650;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail650;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail650;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 456, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail650:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_288 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (captures[0])))
 && can_compare_p (cmp == EQ_EXPR ? EQ : NE, TYPE_MODE (TREE_TYPE (captures[0])),
 ccp_jump)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail682;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail682;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 488, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail682:;
    }
  return NULL_TREE;
}

tree
generic_simplify_293 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail688;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 494, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail688:;
    }
  return NULL_TREE;
}

tree
generic_simplify_298 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail693;
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
next_after_fail693:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail694;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail694;
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
next_after_fail694:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_315 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail713;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 517, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail713:;
    }
  return NULL_TREE;
}

tree
generic_simplify_323 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (! HONOR_NANS (captures[1])
 && ! HONOR_INFINITIES (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail723;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, COS, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail723;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 527, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail723:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_331 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail732;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == LT_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 536, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail732:;
    }
  return NULL_TREE;
}

tree
generic_simplify_337 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail739;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 543, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail739:;
    }
  return NULL_TREE;
}

tree
generic_simplify_343 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail746;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail746;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail746;
	      {
		tree _r;
		_r =  constant_boolean_node (wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (cmp == LT_EXPR || cmp == LE_EXPR), type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail746:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail747;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail747;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail747;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 551, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail747:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_354 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[2]) && !TREE_OVERFLOW (captures[3])
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (rop, captures[3], captures[2]);
	  if (TREE_OVERFLOW (res)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail790;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail790;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail790;
	      {
		tree _r;
 fold_overflow_warning (("assuming signed overflow does not occur "
 "when simplifying conditional to constant"),
 WARN_STRICT_OVERFLOW_CONDITIONAL);
 bool less = cmp == LE_EXPR || cmp == LT_EXPR;
 bool ovf_high = wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (op == MINUS_EXPR);		_r = 
 constant_boolean_node (less == ovf_high, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail790:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  {
 fold_overflow_warning (("assuming signed overflow does not occur "
 "when changing X +- C1 cmp C2 to "
 "X cmp C2 -+ C1"),
 WARN_STRICT_OVERFLOW_COMPARISON);
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail791;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail791;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail791;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  res;
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 578, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail791:;
		  }
		}
	    }
      }
    }
  else
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
	{
	  {
 wide_int max = wi::max_value (TREE_TYPE (captures[1]));
 wide_int min = wi::min_value (TREE_TYPE (captures[1]));
 wide_int c2 = rop == PLUS_EXPR
 ? wi::add (wi::to_wide (captures[3]), wi::to_wide (captures[2]))
 : wi::sub (wi::to_wide (captures[3]), wi::to_wide (captures[2]));
	      if (((cmp == LE_EXPR || cmp == GT_EXPR) && wi::eq_p (c2, max))
 || ((cmp == LT_EXPR || cmp == GE_EXPR) && wi::eq_p (c2, min))
)
		{
		  {
 wide_int c1 = rop == PLUS_EXPR
 ? wi::add (wi::bit_not (c2), wi::to_wide (captures[2]))
 : wi::sub (wi::bit_not (c2), wi::to_wide (captures[2]));
 tree c1_cst = wide_int_to_tree (TREE_TYPE (captures[1]), c1);
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail792;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail792;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail792;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  c1_cst;
			tree _r;
			_r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 579, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail792:;
		  }
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_369 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((
0
 || !sanitize_flags_p (SANITIZE_SHIFT_EXPONENT))
 && (TYPE_UNSIGNED (type)
 || shift == LSHIFT_EXPR
 || tree_expr_nonnegative_p (captures[0]))
 && wi::ges_p (wi::to_wide (uniform_integer_cst_p (captures[1])),
 element_precision (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail815;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail815:;
    }
  return NULL_TREE;
}

tree
generic_simplify_376 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      {
 tree mask = int_const_binop (shift, fold_convert (type, captures[3]), captures[4]);
	  if (mask
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail825;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail825;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail825;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, shift, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  mask;
		tree _r;
		_r = fold_build2_loc (loc, bit_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 607, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail825:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_382 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && types_match (captures[1], type) && int_fits_type_p (captures[2], type)
 && TYPE_SIGN (TREE_TYPE (captures[0])) == TYPE_SIGN (type)
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail836;
      {
	tree res_op0;
	res_op0 = captures[1];
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
	_r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 617, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail836:;
    }
  return NULL_TREE;
}

tree
generic_simplify_387 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail853;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 622, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail853:;
    }
  return NULL_TREE;
}

tree
generic_simplify_390 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (coshs),
 const combined_fn ARG_UNUSED (atanhs),
 const combined_fn ARG_UNUSED (sqrts))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!flag_errno_math
)
    {
      {
 tree t_one = build_one_cst (type);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail856;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail856;
	    tree res_op0;
	    res_op0 =  t_one;
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = unshare_expr (captures[1]);
		  _r3 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = captures[1];
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail856;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 625, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail856:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_394 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 629, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail860:;
  return NULL_TREE;
}

tree
generic_simplify_395 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail861;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 630, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail861:;
  return NULL_TREE;
}

tree
generic_simplify_400 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail866;
	  {
	    tree _r;
	    _r =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 635, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail866:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_407 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail873;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail873;
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
next_after_fail873:;
  return NULL_TREE;
}

tree
generic_simplify_415 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail881;
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
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 649, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail881:;
  return NULL_TREE;
}

tree
generic_simplify_419 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail885;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail885;
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
next_after_fail885:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_429 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[4]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && operand_equal_p (captures[2], captures[4]))
)
    {
      {
 int cmp = 0;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[4]) == INTEGER_CST)
 cmp = tree_int_cst_compare (captures[2], captures[4]);
	  if ((code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
	    {
	      if ((cmp < 0) || (cmp == 0 && code1 == LT_EXPR)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail914;
		  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail914;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail914;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 671, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail914:;
		}
	      else
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail915;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail915;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail915;
		  {
		    tree _r;
		    _r = captures[3];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 672, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail915:;
		}
	    }
	  else
	    {
	      if ((code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
		{
		  if ((cmp > 0) || (cmp == 0 && code1 == GT_EXPR)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail916;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail916;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail916;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 673, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail916:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail917;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail917;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail917;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 674, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail917:;
		    }
		}
	      else
		{
		  if (cmp == 0
 && ((code1 == LE_EXPR && code2 == GE_EXPR)
 || (code1 == GE_EXPR && code2 == LE_EXPR))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail918;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail918;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail918;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 675, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail918:;
		    }
		  else
		    {
		      if (cmp <= 0
 && (code1 == LT_EXPR || code1 == LE_EXPR)
 && (code2 == GT_EXPR || code2 == GE_EXPR)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail919;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail919;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail919;
			  {
			    tree _r;
			    _r =  constant_boolean_node (false, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 676, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail919:;
			}
		      else
			{
			  if (cmp >= 0
 && (code1 == GT_EXPR || code1 == GE_EXPR)
 && (code2 == LT_EXPR || code2 == LE_EXPR)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail920;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail920;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail920;
			      {
				tree _r;
				_r =  constant_boolean_node (false, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 677, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail920:;
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
generic_simplify_447 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail957;
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
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 686, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail957:;
  return NULL_TREE;
}

tree
generic_simplify_450 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail960;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail960:;
  return NULL_TREE;
}

tree
generic_simplify_452 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail962;
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
next_after_fail962:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_460 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1)
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[0]));
	  if (ic == icmp
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail970;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 697, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail970:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail971;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 = captures[1];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail971:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_473 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail987;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail987;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail987:;
  return NULL_TREE;
}

tree
generic_simplify_476 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree_code code = minmax_from_comparison (cmp, captures[0], captures[3], captures[0], captures[1]);
      if (code == MIN_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail990;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail990;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail990;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail990:;
	}
      else
	{
	  if (code == MAX_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail991;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail991;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail991;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail991:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_496 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1016;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1016;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1016:;
  return NULL_TREE;
}

tree
generic_simplify_502 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1028;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1028;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1028;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1028:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1029;
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1029;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1029;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1029:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1030;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1030;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1030;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1030:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1031;
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1031;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1031;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1031:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_521 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1056;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1056;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1056:;
  return NULL_TREE;
}

tree
generic_simplify_528 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1063;
	  {
	    tree res_op0;
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[4];
	      _o1[5] = captures[5];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 6, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      if (!_r1)
	        goto next_after_fail1063;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1063:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_536 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1071;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 778, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1071:;
  return NULL_TREE;
}

tree
generic_simplify_543 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sins),
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
      if (SCALAR_FLOAT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1078;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail1078;
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = unshare_expr (captures[1]);
		_r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		_o1[0] = _r2;
	      }
	      _o1[1] =  t_cst;
	      _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = unshare_expr (captures[1]);
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[2], _r3;
		  {
		    tree _o4[2], _r4;
		    _o4[0] = unshare_expr (captures[1]);
		    _o4[1] = unshare_expr (captures[1]);
		    _r4 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o4[0]), _o4[0], _o4[1]);
		    _o3[0] = _r4;
		  }
		  _o3[1] =  t_one;
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		_r2 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o2[0]), 1, _o2[0]);
		if (!_r2)
		  goto next_after_fail1078;
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_one;
	      _o1[1] = captures[1];
	      _r1 = maybe_build_call_expr_loc (loc, copysigns, TREE_TYPE (_o1[0]), 2, _o1[0], _o1[1]);
	      if (!_r1)
	        goto next_after_fail1078;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 785, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1078:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_570 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1105;
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
	  goto next_after_fail1105;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 812, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1105:;
  }
  return NULL_TREE;
}

tree
generic_simplify_580 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1116;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != type1)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, type1, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
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
	      goto next_after_fail1116;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 818, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1116:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_NOT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		tree res = generic_simplify_447 (loc, type, _p0, captures);
		if (res) return res;
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
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
		tree res = generic_simplify_447 (loc, type, _p0, captures);
		if (res) return res;
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		tree res = generic_simplify_448 (loc, type, _p0, captures);
		if (res) return res;
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
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
		tree res = generic_simplify_448 (loc, type, _p0, captures);
		if (res) return res;
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1152;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[1];
		  tree _r;
		  _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 845, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1152:;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1153;
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
	    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 846, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1153:;
	}
	if (integer_each_onep (_q21))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_449 (loc, type, _p0, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		tree res = generic_simplify_450 (loc, type, _p0, captures);
		if (res) return res;
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		tree res = generic_simplify_450 (loc, type, _p0, captures);
		if (res) return res;
	      }
	      break;
	    }
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
		    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1154;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1154;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[1];
			_r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			res_op0 = _r1;
		      }
		      tree res_op1;
		      res_op1 =  const_unop (NEGATE_EXPR, type, captures[2]);
		      tree _r;
		      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 847, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1154:;
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
	    tree res = generic_simplify_451 (loc, type, _p0, captures);
	    if (res) return res;
	  }
        }
        break;
      }
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1155;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1155;
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 848, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1155:;
	    }
	  else
	    {
	      if (INTEGRAL_TYPE_P (type)
 && !wi::neg_p (tree_nonzero_bits (captures[1]))
)
		{
		  {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1156;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[1];
			      if (TREE_TYPE (_o3[0]) != stype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			    if (EXPR_P (_r2))
			      goto next_after_fail1156;
			    _o1[0] = _r2;
			  }
			  _o1[1] = captures[2];
			  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 849, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1156:;
		  }
		}
	    }
	}
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
		      tree res = generic_simplify_452 (loc, type, _p0, captures);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_452 (loc, type, _p0, captures);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1157;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 850, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1157:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		tree res = generic_simplify_453 (loc, type, _p0, captures);
		if (res) return res;
	      }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_each_onep (_q31))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_449 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_all_onesp (_q31))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_451 (loc, type, _p0, captures);
		    if (res) return res;
		  }
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		      tree res = generic_simplify_454 (loc, type, _p0, captures);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q30))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
		      tree res = generic_simplify_455 (loc, type, _p0, captures);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q31))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
		      tree res = generic_simplify_455 (loc, type, _p0, captures);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case RSHIFT_EXPR:
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
		      case BIT_NOT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
			    tree res = generic_simplify_456 (loc, type, _p0, captures);
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
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
		      tree res = generic_simplify_456 (loc, type, _p0, captures);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LROTATE_EXPR:
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
		      case BIT_NOT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
			    tree res = generic_simplify_457 (loc, type, _p0, captures, LROTATE_EXPR);
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
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
		      tree res = generic_simplify_457 (loc, type, _p0, captures, LROTATE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case RROTATE_EXPR:
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
		      case BIT_NOT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
			    tree res = generic_simplify_457 (loc, type, _p0, captures, RROTATE_EXPR);
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
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
		      tree res = generic_simplify_457 (loc, type, _p0, captures, RROTATE_EXPR);
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  tree res = generic_simplify_453 (loc, type, _p0, captures);
	  if (res) return res;
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		tree res = generic_simplify_454 (loc, type, _p0, captures);
		if (res) return res;
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		tree res = generic_simplify_455 (loc, type, _p0, captures);
		if (res) return res;
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
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		tree res = generic_simplify_455 (loc, type, _p0, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	if (tree_truth_valued_p (_q20))
	  {
	    if (tree_truth_valued_p (_q21))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1158;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = captures[2];
			  _r1 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 851, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1158:;
		    }
		}
	      }
	  }
        break;
      }
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		tree res = generic_simplify_458 (loc, type, _p0, captures, MIN_EXPR, MAX_EXPR);
		if (res) return res;
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
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
		tree res = generic_simplify_458 (loc, type, _p0, captures, MIN_EXPR, MAX_EXPR);
		if (res) return res;
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
		tree res = generic_simplify_458 (loc, type, _p0, captures, MAX_EXPR, MIN_EXPR);
		if (res) return res;
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
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
		tree res = generic_simplify_458 (loc, type, _p0, captures, MAX_EXPR, MIN_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case LROTATE_EXPR:
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
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
		      tree res = generic_simplify_459 (loc, type, _p0, captures, LROTATE_EXPR);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_459 (loc, type, _p0, captures, LROTATE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case RROTATE_EXPR:
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
		case BIT_NOT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
		      tree res = generic_simplify_459 (loc, type, _p0, captures, RROTATE_EXPR);
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
		tree res = generic_simplify_459 (loc, type, _p0, captures, RROTATE_EXPR);
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
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1159;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1159;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1159;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 827, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1159:;
	}
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	  if (res) return res;
	}
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	  if (res) return res;
	}
        break;
      }
    case ORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNLT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNLE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNGE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  tree res = generic_simplify_460 (loc, type, _p0, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_TRUNC_DIV_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	if (res) return res;
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
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (integer_onep (_q50))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q50, _q51 };
			  tree res = generic_simplify_298 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q41 };
		    tree res = generic_simplify_298 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q40, _q41 };
		    tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q31 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_302 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_301 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
      if (res) return res;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_303 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case ABS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case TRUNC_DIV_EXPR:
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
		      tree res = generic_simplify_306 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  tree res = generic_simplify_308 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
	      if (res) return res;
	    }
	  }
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
				tree res = generic_simplify_310 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR);
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1583;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1583;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1583;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1583:;
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1584;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1584;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1584;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1584;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1584:;
	    }
	}
        break;
      }
    default:;
    }
if (integer_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && !integer_zerop (captures[1])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[1]))
)
	{
	  if (TYPE_UNSIGNED (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1585;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[1];
		  _o1[1] =  build_one_cst (type);
		  _r1 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 980, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1585:;
	    }
	  else
	    {
	      if (!canonicalize_math_p ()
)
		{
		  {
 tree utype = unsigned_type_for (type);
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1586;
		      {
			if (! tree_invariant_p (captures[1])) goto next_after_fail1586;
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = unshare_expr (captures[1]);
			      if (TREE_TYPE (_o3[0]) != utype)
				{
				  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				}
			      else
			        _r3 = _o3[0];
			      _o2[0] = _r3;
			    }
			    _o2[1] =  build_one_cst (utype);
			    _r2 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (utype, 2);
			  _r1 = fold_build2_loc (loc, LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 = captures[1];
			tree res_op2;
			res_op2 =  build_zero_cst (type);
			tree _r;
			_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 981, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1586:;
		  }
		}
	    }
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
 && (TREE_CODE_CLASS (TRUNC_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1587;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1587;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1587;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1587;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1587:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_ROUND_DIV_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_302 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_301 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
      if (res) return res;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_303 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case ABS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_304 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
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
	      tree res = generic_simplify_305 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	      if (res) return res;
	    }
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_307 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_309 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
	      if (res) return res;
	    }
	  }
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
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
				tree res = generic_simplify_310 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR);
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1594;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1594;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1594;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1594:;
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1595;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1595;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1595;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1595;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1595:;
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
 && (TREE_CODE_CLASS (ROUND_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1596;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1596;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1596;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ROUND_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1596;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1596:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_RDIV_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1603;
	    {
	      tree _r;
	      _r =  build_one_cst (type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1603:;
	  }
      }
    }
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_319 (loc, type, _p0, _p1, captures);
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
	      tree res = generic_simplify_319 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	      switch (TREE_CODE (_q40))
	        {
		case ABS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  tree res = generic_simplify_320 (loc, type, _p0, _p1, captures);
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
	  case ABS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			  tree res = generic_simplify_320 (loc, type, _p0, _p1, captures);
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case ABS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_320 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_320 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  if (real_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
	  {
	    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1604;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1604;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = non_lvalue_loc (loc, res_op0);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1604:;
	  }
      }
    }
  if (real_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
	  {
	    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1605;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1605;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 984, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1605:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
	  if (flag_reciprocal_math
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1606;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 985, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1606:;
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
	switch (TREE_CODE (_q31))
	  {
	  case REAL_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		if (flag_reciprocal_math
)
		  {
		    {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[3]);
			if (tem
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1607;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1607;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[0];
				_o1[1] =  tem;
				_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 = captures[2];
			      tree _r;
			      _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 986, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1607:;
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
    case RDIV_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
	  if (flag_reciprocal_math
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1608;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[2];
		  _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 987, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1608:;
	    }
	}
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1609;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1609:;
	}
        break;
      }
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1610;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1610;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  tem;
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1610:;
			}
		  }
		}
	      else
		{
		  if (REAL_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1611;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1611;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  inverse;
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 990, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1611:;
			    }
		      }
		    }
		}
	    }
	}
        break;
      }
    case COMPLEX_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1612;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1612;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  tem;
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1612:;
			}
		  }
		}
	      else
		{
		  if (COMPLEX_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1613;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1613;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  inverse;
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 990, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1613:;
			    }
		      }
		    }
		}
	    }
	}
        break;
      }
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (optimize
)
	    {
	      if (flag_reciprocal_math
 && !real_zerop (captures[1])
)
		{
		  {
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
		      if (tem
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1614;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1614;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  tem;
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 989, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1614:;
			}
		  }
		}
	      else
		{
		  if (VECTOR_CST != COMPLEX_CST
)
		    {
		      {
 tree inverse = exact_inverse (type, captures[1]);
			  if (inverse
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1615;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1615;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  inverse;
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 990, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1615:;
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1616;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1616;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1616;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1616:;
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1617;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1617;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1617;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1617;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1617:;
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
 && (TREE_CODE_CLASS (RDIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1618;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1618;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1618;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1618;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1618:;
	    }
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    tree res = generic_simplify_321 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1619;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1619;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1619:;
			}
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    tree res = generic_simplify_321 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1620;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1620;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1620:;
			}
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1621;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1621;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1621:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXP10F:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1622;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1622;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1622:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1623;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1623;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1623:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_CBRT:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1624;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRT, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1624;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1624:;
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
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1625;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1625;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1625:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1626;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1626;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1626:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1627;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1627;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1627:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    tree res = generic_simplify_321 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1628;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRT, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1628;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1628:;
			}
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1629;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_EXP, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1629;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1629:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_POW10F:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1630;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1630;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1630:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_POW10L:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1631;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1631;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1631:;
		  }
	      }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1632;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_EXP2, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1632;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1632:;
		  }
	      }
	    }
	  break;
	case CFN_SQRT:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    tree res = generic_simplify_321 (loc, type, _p0, _p1, captures, CFN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1633;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_SQRT, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1633;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1633:;
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
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1634;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_EXP10, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1634;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1634:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_CBRTF:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1635;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1635;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1635:;
			}
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CBRTL:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RDIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q40, _q41 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1636;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[4];
				_o2[1] = captures[3];
				_r2 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1636;
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 991, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1636:;
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
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1637;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1637;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1637:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1638;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1638;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1638:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1639;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1639;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1639:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_POW10:
	  if (call_expr_nargs (_p1) == 1)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		if (flag_unsafe_math_optimizations
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1640;
		    {
		      tree res_op0;
		      res_op0 = captures[0];
		      tree res_op1;
		      {
			tree _o1[1], _r1;
			{
			  tree _o2[1], _r2;
			  _o2[0] = captures[2];
			  _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
			  _o1[0] = _r2;
			}
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1640;
			res_op1 = _r1;
		      }
		      tree _r;
		      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 992, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1640:;
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
	case CFN_BUILT_IN_SINHF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSHF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_324 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_COSHF, CFN_BUILT_IN_TANHF);
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
	case CFN_BUILT_IN_SINHL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSHL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_324 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINHL, CFN_BUILT_IN_COSHL, CFN_BUILT_IN_TANHL);
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
	case CFN_BUILT_IN_TANHF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SINHF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_325 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANHF, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_COSHF);
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
	case CFN_BUILT_IN_TANHL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SINHL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_325 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANHL, CFN_BUILT_IN_SINHL, CFN_BUILT_IN_COSHL);
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
	case CFN_BUILT_IN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SIN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_326 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN, CFN_BUILT_IN_TAN);
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
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  tree res = generic_simplify_328 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SIN:
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
				tree res = generic_simplify_322 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_COS, CFN_BUILT_IN_TAN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    case CFN_BUILT_IN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_323 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS);
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
		    case CFN_BUILT_IN_SIN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_327 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_SIN, CFN_BUILT_IN_COS);
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
		    case CFN_BUILT_IN_SINF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_326 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF, CFN_BUILT_IN_TANF);
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
		    case CFN_BUILT_IN_SINL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_326 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL, CFN_BUILT_IN_TANL);
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  tree res = generic_simplify_328 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  tree res = generic_simplify_328 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SINF:
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
				tree res = generic_simplify_322 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_TANF);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    case CFN_BUILT_IN_TANF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_323 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF);
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
	case CFN_BUILT_IN_SINH:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSH:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_324 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINH, CFN_BUILT_IN_COSH, CFN_BUILT_IN_TANH);
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
	case CFN_BUILT_IN_SINL:
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
				tree res = generic_simplify_322 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_TANL);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    case CFN_BUILT_IN_TANL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_323 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SINL, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL);
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
		    case CFN_BUILT_IN_SINF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_327 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_SINF, CFN_BUILT_IN_COSF);
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
	case CFN_BUILT_IN_TANH:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SINH:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_325 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANH, CFN_BUILT_IN_SINH, CFN_BUILT_IN_COSH);
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
		    case CFN_BUILT_IN_SINL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_327 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_SINL, CFN_BUILT_IN_COSL);
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
		    case CFN_SIN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_326 (loc, type, _p0, _p1, captures, CFN_COS, CFN_SIN, CFN_TAN);
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
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  tree res = generic_simplify_328 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_SIN:
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
				tree res = generic_simplify_322 (loc, type, _p0, _p1, captures, CFN_SIN, CFN_COS, CFN_TAN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    case CFN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_323 (loc, type, _p0, _p1, captures, CFN_SIN, CFN_TAN, CFN_COS);
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
		    case CFN_SIN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_327 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_SIN, CFN_COS);
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
	case CFN_SINH:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_COSH:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_324 (loc, type, _p0, _p1, captures, CFN_SINH, CFN_COSH, CFN_TANH);
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
	case CFN_TANH:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SINH:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_325 (loc, type, _p0, _p1, captures, CFN_TANH, CFN_SINH, CFN_COSH);
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
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		tree res = generic_simplify_329 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		tree res = generic_simplify_329 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		tree res = generic_simplify_329 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		tree res = generic_simplify_329 (loc, type, _p0, _p1, captures, CFN_POW);
		if (res) return res;
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
generic_simplify_GE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	      if (real_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		    tree res = generic_simplify_330 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_331 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
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
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_332 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
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
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case EXACT_DIV_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
				      tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
			  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, GE_EXPR);
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
    case TRUNC_DIV_EXPR:
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
		      tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_333 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
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
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			  tree res = generic_simplify_334 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
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
		    tree res = generic_simplify_336 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_337 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
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
		    tree res = generic_simplify_210 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    tree res = generic_simplify_211 (loc, type, _p0, _p1, captures, GE_EXPR);
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
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
	      tree res = generic_simplify_335 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
	      tree res = generic_simplify_209 (loc, type, _p0, _p1, captures, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, GE_EXPR, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, GE_EXPR, BIT_IOR_EXPR);
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
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (tree_expr_nonnegative_p (_q30))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, LE_EXPR, BIT_AND_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    if (tree_expr_nonnegative_p (_q31))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		  tree res = generic_simplify_338 (loc, type, _p0, _p1, captures, LE_EXPR, BIT_AND_EXPR);
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
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
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
		      tree res = generic_simplify_339 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR, BIT_AND_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MIN_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MIN_EXPR, GE_EXPR);
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_340 (loc, type, _p0, _p1, captures, MAX_EXPR, LE_EXPR);
	      if (res) return res;
	    }
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
		      tree res = generic_simplify_339 (loc, type, _p0, _p1, captures, MAX_EXPR, GE_EXPR, BIT_IOR_EXPR);
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
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1652;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1652;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1652;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1652:;
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
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1653;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1653;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1653;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1653;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1653:;
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
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1654;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1654;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1654;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, GE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1654;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1654:;
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
      tree res = generic_simplify_341 (loc, type, _p0, _p1, captures, GE_EXPR, GT_EXPR);
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
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		    tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_241 (loc, type, _p0, _p1, captures, GE_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
		    tree res = generic_simplify_245 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
      }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
	    tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
	case BIT_NOT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
		    tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, GE_EXPR);
		    if (res) return res;
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
			tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, GE_EXPR);
			if (res) return res;
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	  if (CONSTANT_CLASS_P (_p1))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
		tree res = generic_simplify_244 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_246 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, PLUS_EXPR, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q21 };
		    tree res = generic_simplify_342 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
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
		      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, MINUS_EXPR, GE_EXPR);
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
		      tree res = generic_simplify_248 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case REAL_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		if (res) return res;
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
		      tree res = generic_simplify_343 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	  case EXACT_DIV_EXPR:
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
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			    tree res = generic_simplify_344 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_257 (loc, type, _p0, _p1, captures, GE_EXPR);
	  if (res) return res;
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
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, GE_EXPR);
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
	if (uniform_integer_cst_p (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
	      tree res = generic_simplify_345 (loc, type, _p0, _p1, captures, GE_EXPR);
	      if (res) return res;
	    }
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
	    if (res) return res;
	  }
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
		      tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, GE_EXPR);
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
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
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
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, GE_EXPR);
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
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, GE_EXPR);
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
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, GE_EXPR);
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
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, CFN_SQRT, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_250 (loc, type, _p0, _p1, captures, CFN_SQRT, GE_EXPR);
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
  if (uniform_integer_cst_p (_p1))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
	tree res = generic_simplify_346 (loc, type, _p0, _p1, captures, GE_EXPR);
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
			  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			switch (TREE_CODE (_q41))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0, _q41 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	      break;
	    }
          default:;
          }
        break;
      }
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0, _q31 };
		    tree res = generic_simplify_342 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
	      tree res = generic_simplify_348 (loc, type, _p0, _p1, captures, LE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_minus_onep (_q21))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			tree res = generic_simplify_349 (loc, type, _p0, _p1, captures, GE_EXPR);
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
    case REALPART_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
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
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
			  tree res = generic_simplify_350 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
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
        break;
      }
    default:;
    }
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
	      case CFN_ADD_OVERFLOW:
	        if (call_expr_nargs (_q20) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    tree _q31 = CALL_EXPR_ARG (_q20, 1);
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			  tree res = generic_simplify_351 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q31, _q30 };
			  tree res = generic_simplify_351 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
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
        break;
      }
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_all_onesp (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _p1 };
	      tree res = generic_simplify_352 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MULT_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_353 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOGF:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOGL:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG2:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_EXP10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LOG10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2F:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2L:
	        if (call_expr_nargs (_p1) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR);
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
    case PLUS_EXPR:
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
		      tree res = generic_simplify_354 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, GE_EXPR, LE_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_354 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, GE_EXPR, LE_EXPR);
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
		      tree res = generic_simplify_281 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_CTZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR);
		      if (res) return res;
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZL);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_CTZ:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_356 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, CFN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG, CFN_EXP, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG2, CFN_EXP2, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZLL);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_LOG10, CFN_EXP10, GE_EXPR);
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_365 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
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
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_364 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR);
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
  return NULL_TREE;
}

tree
generic_simplify_LROTATE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_all_onesp (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_512 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_371 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_372 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_373 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_374 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
	  if (res) return res;
	}
        break;
      }
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1730;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1730;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  const_binop (MINUS_EXPR, TREE_TYPE (captures[1]),
 build_int_cst (TREE_TYPE (captures[1]),
 element_precision (type)), captures[1]);
	    tree _r;
	    _r = fold_build2_loc (loc, RROTATE_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1730:;
	}
        break;
      }
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
		tree res = generic_simplify_513 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR);
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
    case LROTATE_EXPR:
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
		      tree res = generic_simplify_375 (loc, type, _p0, _p1, captures, LROTATE_EXPR);
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
  return NULL_TREE;
}

tree
generic_simplify_COMPLEX_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case REALPART_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case IMAGPART_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1731;
		    {
		      tree _r;
		      _r = captures[0];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1731:;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_UNORDERED_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1732;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1732;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1732;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1732:;
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
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1733;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1733;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1733;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1733;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1733:;
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
 && (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1734;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1734;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1734;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1734;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1734:;
	    }
	}
        break;
      }
    default:;
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, UNORDERED_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, UNORDERED_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, UNORDERED_EXPR);
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
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (tree_expr_nan_p (captures[0]) || tree_expr_nan_p (captures[1])
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1735;
	{
	  tree _r;
	  _r =  constant_boolean_node (true, type);
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (TREE_SIDE_EFFECTS (captures[1]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1735:;
      }
    else
      {
	if (!tree_expr_maybe_nan_p (captures[0]) && !tree_expr_maybe_nan_p (captures[1])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1736;
	    {
	      tree _r;
	      _r =  constant_boolean_node (false, type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1025, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1736:;
	  }
      }
  }
  return NULL_TREE;
}

tree
generic_simplify_LTGT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
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
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1757;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1757;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1757;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1757:;
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
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1758;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1758;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1758;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1758;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1758:;
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
 && (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1759;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1759;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1759;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1759;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1759:;
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
	if (!flag_trapping_math || !tree_expr_maybe_nan_p (captures[0])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1760;
	    {
	      tree _r;
	      _r =  constant_boolean_node (false, type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1028, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1760:;
	  }
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
		tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, LTGT_EXPR, NE_EXPR);
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
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, LTGT_EXPR, LTGT_EXPR);
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
	    tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, LTGT_EXPR, LTGT_EXPR);
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
	  tree res = generic_simplify_534 (loc, type, _p0, _p1, captures, LTGT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_VEC_PERM_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	      switch (TREE_CODE (_p2))
	        {
		case VECTOR_CST:
		  {
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
		      tree res = generic_simplify_586 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR, MINUS_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_p2))
	        {
		case VECTOR_CST:
		  {
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51, _p2 };
		      tree res = generic_simplify_586 (loc, type, _p0, _p1, _p2, captures, MINUS_EXPR, PLUS_EXPR);
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
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1942;
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1942;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1942;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1942;
			  {
			    tree _r;
			    _r =  op0;
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1087, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1942:;
			}
		      else
			{
			  if (sel.series_p (0, 1, nelts, 1)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1943;
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1943;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1943;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1943;
			      {
				tree _r;
				_r =  op1;
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1088, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1943:;
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
				      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1944;
				      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1944;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1944;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1944;
				      {
					tree _r;
					_r =  t;
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1089, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1944:;
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
					      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1945;
					      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1945;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1945;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1945;
					      {
						tree res_op0;
						res_op0 =  op0;
						tree res_op1;
						res_op1 =  ins;
						tree res_op2;
						res_op2 =  bitsize_int (at * vector_element_bits (type));
						tree _r;
						_r = fold_build3_loc (loc, BIT_INSERT_EXPR, type, res_op0, res_op1, res_op2);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1090, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1945:;
					    }
					  else
					    {
					      if (changed
)
						{
						  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1946;
						  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1946;
						  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1946;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1946;
						  {
						    tree res_op0;
						    res_op0 =  op0;
						    tree res_op1;
						    res_op1 =  op1;
						    tree res_op2;
						    res_op2 =  op2;
						    tree _r;
						    _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1091, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1946:;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case VEC_PERM_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
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
						    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1947;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1947;
						    {
						      tree res_op0;
						      {
							tree _o1[3], _r1;
							_o1[0] = captures[2];
							_o1[1] = captures[3];
							_o1[2] =  op0;
							_r1 = fold_build3_loc (loc, VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
							res_op0 = _r1;
						      }
						      tree _r;
						      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						      if (TREE_SIDE_EFFECTS (captures[4]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
						      if (TREE_SIDE_EFFECTS (captures[5]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1092, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1947:;
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
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
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
					      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1948;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1948;
					      {
						tree res_op0;
						{
						  tree _o1[3], _r1;
						  _o1[0] = captures[2];
						  _o1[1] = captures[3];
						  _o1[2] =  op0;
						  _r1 = fold_build3_loc (loc, VEC_PERM_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1], _o1[2]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[4]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
						if (TREE_SIDE_EFFECTS (captures[5]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1092, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1948:;
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
if (tree_vec_same_elem_p (_p0))
  {
    if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p2 };
	  if (types_match (type, TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1949;
	      {
		tree _r;
		_r = captures[0];
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1093, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1949:;
	    }
	  else
	    {
	      {
 tree elem = uniform_vector_p (captures[0]);
		  if (elem
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1950;
		      {
			tree _r;
			_r =  build_vector_from_val (type, elem);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1094, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1950:;
		    }
	      }
	    }
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    case VEC_PERM_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
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
						      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1951;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1951;
						      {
							tree res_op0;
							res_op0 = captures[0];
							tree res_op1;
							res_op1 = captures[2];
							tree res_op2;
							res_op2 =  op0;
							tree _r;
							_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
							if (TREE_SIDE_EFFECTS (captures[3]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
							if (TREE_SIDE_EFFECTS (captures[4]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
							if (TREE_SIDE_EFFECTS (captures[5]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1095, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail1951:;
						    }
						  else
						    {
						      if (use_2
)
							{
							  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1952;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1952;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 = captures[3];
							    tree res_op2;
							    res_op2 =  op0;
							    tree _r;
							    _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
							    if (TREE_SIDE_EFFECTS (captures[2]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							    if (TREE_SIDE_EFFECTS (captures[4]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
							    if (TREE_SIDE_EFFECTS (captures[5]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail1952:;
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
  switch (TREE_CODE (_p0))
    {
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
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
						      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1953;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1953;
						      {
							tree res_op0;
							res_op0 = captures[1];
							tree res_op1;
							res_op1 = captures[4];
							tree res_op2;
							res_op2 =  op0;
							tree _r;
							_r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
							if (TREE_SIDE_EFFECTS (captures[2]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							if (TREE_SIDE_EFFECTS (captures[3]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
							if (TREE_SIDE_EFFECTS (captures[5]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail1953:;
						    }
						  else
						    {
						      if (use_2
)
							{
							  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1954;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1954;
							  {
							    tree res_op0;
							    res_op0 = captures[2];
							    tree res_op1;
							    res_op1 = captures[4];
							    tree res_op2;
							    res_op2 =  op0;
							    tree _r;
							    _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (TREE_SIDE_EFFECTS (captures[3]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
							    if (TREE_SIDE_EFFECTS (captures[5]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1098, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail1954:;
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
  return NULL_TREE;
}
#pragma GCC diagnostic pop
