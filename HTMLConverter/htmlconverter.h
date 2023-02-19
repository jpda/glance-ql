#if defined(__x86_64__)
#include "htmlconverter-amd64.h"

#elif defined(__aarch64__)
#include "htmlconverter-arm64.h"

#else
#error("unsupported arch")

#endif
