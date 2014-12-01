#pragma once

#include "diff_types.h"

typedef unsigned (*data_fetcher)(
    void * source, unsigned n_items, char * buffer);

hunk * const bdiff(
    unsigned const sample_size, data_fetcher const df, void * const a,
    void * const b);
