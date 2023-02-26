#include "templates.h"
#include "all_finds_overloads.h"
#ifdef T
#undef T
#endif

#define T float
#include "make_find_func.c"
#ifdef T
#undef T
#endif

#define T double
#include "make_find_func.c"
#ifdef T
#undef T
#endif

#define T char
#include "make_find_func.c"
#ifdef T
#undef T
#endif

#define T int
#include "make_find_func.c"
#ifdef T
#undef T
#endif

#define T uint64_t
#include "make_find_func.c"
