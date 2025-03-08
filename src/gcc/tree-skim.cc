#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree-pass.h"
#include "pass_manager.h"
#include "context.h"
#include "diagnostic-core.h"
#include "tree.h"
#include "tree-core.h"
#include "basic-block.h"
#include "gimple.h"
#include "gimple-iterator.h"

namespace {

/* Define the pass metadata */
const pass_data skim_pass_data = {
    GIMPLE_PASS,        // Pass type
    "tree-skim",        // Pass name
    OPTGROUP_NONE,      // No specific optimization group
    TV_TREE_OPS,        // Display category in -ftime-report
    0, 0, 0, 0          // No additional flags or properties
};

/* Define the pass class */
class skim_pass : public gimple_opt_pass {
public:
    skim_pass(gcc::context *ctxt) : gimple_opt_pass(skim_pass_data, ctxt) {}

    /* This determines whether the pass should run */
    bool gate(function *fun) override {
        return true; // Run for every function
    }

    /* This is the main logic of the pass */
    unsigned int execute(function *fun) override {
        fprintf(stderr, "Processing function: %s\n", function_name(fun));

        /* Count basic blocks */
        int basic_block_count = 0;
        basic_block bb;
        FOR_EACH_BB_FN(bb, fun) {
            basic_block_count++;
        }
        fprintf(stderr, "Number of basic blocks: %d\n", basic_block_count);

        /* Count GIMPLE statements */
        int gimple_stmt_count = 0;
        FOR_EACH_BB_FN(bb, fun) {
            for (gimple_stmt_iterator gsi = gsi_start_bb(bb);
                 !gsi_end_p(gsi);
                 gsi_next(&gsi)) {
                gimple_stmt_count++;
            }
        }
        fprintf(stderr, "Number of GIMPLE statements: %d\n", gimple_stmt_count);

        return 0;
    }
};

/* Register the pass in the GCC pass manager */
gimple_opt_pass *make_tree_skim(gcc::context *ctxt) {
    return new skim_pass(ctxt);
}

} // namespace
