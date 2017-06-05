#include "zstd/lib/zstd.h"
#include "zstd/lib/dictBuilder/zdict.h"

/* This file is used to generate bindings for both headers.
 * Just run the following command to generate the bindings:

bindgen zstd.h --ctypes-prefix ::libc --blacklist-type max_align_t --no-unstable-rust --use-core -- -DZSTD_STATIC_LINKING_ONLY > src/bindings.rs

Or use the `bindgen` feature, which will create the bindings automatically.

*/