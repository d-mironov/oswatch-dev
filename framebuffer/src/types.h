#ifndef CORE_TYPES_H
#define CORE_TYPES_H

#include <stdint.h>

/**
 * Unsigned 8-bit integer
 */
typedef uint8_t     u8;
/**
 * Unsigned 16-bit integer
 */
typedef uint16_t    u16;
/**
 * Unsigned 32-bit integer
 */
typedef uint32_t    u32;
/**
 * Unsigned 64-bit integer
 */
typedef uint64_t    u64;

/**
 * Signed 8-bit integer
 */
typedef int8_t      s8;
/**
 * Signed 16-bit integer
 */
typedef int16_t     s16;
/**
 * Signed 32-bit integer
 */
typedef int32_t     s32;
/**
 * Signed 64-bit integer
 */
typedef int64_t     s64;

/**
 * Unsigned 8-bit integer
 */
typedef uint8_t     byte;

/**
 * 32-Bit Floating point number
 */
typedef float       f32;
/**
 * 64-Bit Floating point number
 */
typedef double      f64;

/**
 * String type
 */
typedef char*       str;

/**
 * `usize` type
 */
typedef u32         usize;


/**
 * -----------------------------------
 *
 * # 2-dimensional vector
 * `vec2`, `point_t`
 * -----------------------------------
 *
 *  `typedef struct`
 *
 *  Members:
 *  > `x[f32]`: x value of the vector
 *  > `y[f32]`: y value of the vector
 * -----------------------------------
 */
typedef struct _vec2 {
    f32 x;
    f32 y;
} vec2, point_t;

#define v2(x,y)         (vec2){.x = x, .y = y}

typedef struct euler {
    f32 roll;
    f32 pitch;
    f32 yaw;
} euler;

typedef struct _vec3 {
    f32 w;
    f32 x;
    f32 y;
    f32 z;
} vec4, quaternion;

struct time {
    u8 h;
    u8 min;
    u8 sec;
};

struct date {
    u8 day;
    u8 month;
    u32 year;
};



// static u32 _BIT[32] = {
//     (1 << 0),  (1 << 1),  (1 << 2),  (1 << 3),  (1 << 4),  (1 << 5),  (1 << 6),  (1 << 7),  (1 << 8),
//     (1 << 9),  (1 << 10), (1 << 11), (1 << 12), (1 << 13), (1 << 14), (1 << 15), (1 << 16), (1 << 17),
//     (1 << 18), (1 << 19), (1 << 20), (1 << 21), (1 << 22), (1 << 23), (1 << 24), (1 << 25), (1 << 26),
//     (1 << 27), (1 << 28), (1 << 29), (1 << 30), //(1 << 31) 
// };


#define BITS_PER_BYTE   8

// Return value `x` as a pointer
#define as_ptr(x)       (&x)

// Return value `x` as a pointer
#define ptr(x)          (&x)

// Dereference a pointer
#define deref(x)        (*x)

// Return the bitsize of a variable depending on `sizeof`
#define bitsizeof(x)    (sizeof(x) * BITS_PER_BYTE)

// Return the `n`-th bit
// #define bit(n)          (_BIT[n])

// Cast variable to the given type
#define as(T, x)        ((T) x)

// Create a new string with length `n`
#define str_new(n)      ((char[(n)]){})

// Create a byte array with length `n`
#define byte_arr(n)     ((byte[(n)]){})

// Increment the given number by 1
#define inc(x)          (++x)

// Decrement the given number by 1
#define dec(x)          (--x)


#endif  // TYMER_CORE_TYPES_H
