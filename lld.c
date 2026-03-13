
#include "lld.h"

/**
 * if you want to validate the LLL entries at compile time.
 */
#define LLL(name, p1, p2, p3)    \
    _Static_assert(sizeof(#name) < 20, "Name too long for gt.name");\
    _Static_assert(p1 < 100, "p1 must be less than 100");\
    _Static_assert(p2 < 100, "p2 must be less than 100 ");\
    _Static_assert((p1) + (p2) < (p3) && (p3) <= 100, "p3 must be less than 100");
    #include "ll.h"
#undef LLL

const lTable_t gt[NUM_LLL] =
{
    #define LLL(name, p1, p2, p3)    \
    { "TT_" #name,  p1, p2, p3 },
    #include "ll.h"
    #undef LLL
};
