/*
** @file lld.h
**
** @brief This file defines the LLL enumeration and performs static assertions 
**        on LLL entries.
**        It also provides the lTable_t type and definition of the gt table.
**
*/
#pragma once

typedef enum {
    #define LLL(name, ...) TT_##name,
    #include "ll.h"
    #undef LLL
    NUM_LLL
} LLL_t;

#define LLL(name, p1, p2, p3)    \
    _Static_assert(p1 < p2, "p1 must be less than p2 for " #name); \
    _Static_assert(p2 < p3, "p2 must be less than p3 for " #name); \
    _Static_assert(((p1) + (p2)) < p3, "p1 + p2 must be less than p3 for " #name);
#include "ll.h"
#undef LLL

typedef struct {
    const char *name;
    int p1;
    int p2; 
    int p3;
} lTable_t ;

extern const lTable_t gt[NUM_LLL];


