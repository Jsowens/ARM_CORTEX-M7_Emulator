#ifndef __UTIL_H__
#define __UTIL_H__

#include <stdint.h>

namespace M7_CORE{
    // Single Bit Masks
    #define BIT_MASK(x)                     (BIT_MASK_##x)
    #define BIT_MASK_0                      0x1
    #define BIT_MASK_1                      0x2
    #define BIT_MASK_2                      0x4
    #define BIT_MASK_3                      0x8
    #define BIT_MASK_4                      0x10
    #define BIT_MASK_5                      0x20
    #define BIT_MASK_6                      0x40
    #define BIT_MASK_7                      0x80
    #define BIT_MASK_8                      0x100
    #define BIT_MASK_9                      0x200
    #define BIT_MASK_10                     0x400
    #define BIT_MASK_11                     0x800
    #define BIT_MASK_12                     0x1000
    #define BIT_MASK_13                     0x2000
    #define BIT_MASK_14                     0x4000
    #define BIT_MASK_15                     0x8000
    #define BIT_MASK_16                     0x10000
    #define BIT_MASK_17                     0x20000
    #define BIT_MASK_18                     0x40000
    #define BIT_MASK_19                     0x80000
    #define BIT_MASK_20                     0x100000
    #define BIT_MASK_21                     0x200000
    #define BIT_MASK_22                     0x400000
    #define BIT_MASK_23                     0x800000
    #define BIT_MASK_24                     0x1000000
    #define BIT_MASK_25                     0x2000000
    #define BIT_MASK_26                     0x4000000
    #define BIT_MASK_27                     0x8000000
    #define BIT_MASK_28                     0x10000000
    #define BIT_MASK_29                     0x20000000
    #define BIT_MASK_30                     0x40000000
    #define BIT_MASK_31                     0x80000000
}

#endif