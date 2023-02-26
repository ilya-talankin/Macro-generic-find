#ifndef ALL_FINDS_OVERLOADS_H_
#define ALL_FINDS_OVERLOADS_H_

#ifdef T
#undef T
#endif

/*Для создания функции find(type[], int, ) нужно раскомментировать блок и заменить type на требуемый тип
#define T type
#include "find_template.h"
#ifdef T
#undef T
#endif
*/

#define T float
#include "make_find_func.h"
#ifdef T
#undef T
#endif

#define T double
#include "make_find_func.h"
#ifdef T
#undef T
#endif

#define T char
#include "make_find_func.h"
#ifdef T
#undef T
#endif

#define T int
#include "make_find_func.h"
#ifdef T
#undef T
#endif

#define T uint64_t
#include "make_find_func.h"

#endif //ALL_FINDS_OVERLOADS_H_
