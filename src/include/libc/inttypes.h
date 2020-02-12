#ifndef INTTYPES_H
#define INTTYPES_H

// Integer type with the maximum width supported.
typedef long long          intmax_t;
typedef unsigned long long uintmax_t;

// Integer type with a width of exactly 8, 16, 32, or 64 bits.
// For signed types, negative values are represented using 2's complement.
// No padding bits.
// Optional: These typedefs are not defined if no types with such characteristics exist.*
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

// Integer type with a minimum of 8, 16, 32, or 64 bits.
// No other integer type exists with lesser size and at least the specified width.
typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

// Integer type with a minimum of 8, 16, 32, or 64 bits.
// At least as fast as any other integer type with at least the specified width.
typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

// Integer type capable of holding a value converted from a void pointer and then be converted back to that type with a value that compares equal to the original pointer.
// Optional: These typedefs may not be defined in some library implementations.*
typedef intmax_t  intptr_t;
typedef uintmax_t uintptr_t;

// Limits of cstdint types
#define INTMAX_MIN  INT64_MIN
#define INTMAX_MAX  INT64_MAX
#define UINTMAX_MAX UINT64_MAX

#define INT8_MIN         (-127)
#define INT16_MIN        (-32767)
#define INT32_MIN        (-2147483647)
#define INT64_MIN        (-9223372036854775807)

#define INT8_MAX         127
#define INT16_MAX        32767
#define INT32_MAX        2147483647
#define INT64_MAX        9223372036854775807

#define UINT8_MAX        0xff
#define UINT16_MAX       0xffff
#define UINT32_MAX       0xffffffff
#define UINT64_MAX       0xffffffffffffffff

#define INT_LEAST8_MIN   INT8_MIN
#define INT_LEAST16_MIN  INT16_MIN
#define INT_LEAST32_MIN  INT32_MIN
#define INT_LEAST64_MIN  INT64_MIN
#define INT_LEAST8_MAX   INT8_MAX
#define INT_LEAST16_MAX  INT16_MAX
#define INT_LEAST32_MAX  INT32_MAX
#define INT_LEAST64_MAX  INT64_MAX
#define UINT_LEAST8_MAX  UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX

#define INT_FAST8_MIN    INT8_MIN
#define INT_FAST16_MIN   INT32_MIN
#define INT_FAST32_MIN   INT32_MIN
#define INT_FAST64_MIN   INT64_MIN
#define INT_FAST8_MAX    INT8_MAX
#define INT_FAST16_MAX   INT32_MAX
#define INT_FAST32_MAX   INT32_MAX
#define INT_FAST64_MAX   INT64_MAX
#define UINT_FAST8_MAX   UINT8_MAX
#define UINT_FAST16_MAX  UINT32_MAX
#define UINT_FAST32_MAX  UINT32_MAX
#define UINT_FAST64_MAX  UINT64_MAX

#define INTPTR_MIN  INT64_MIN
#define INTPTR_MAX  INT64_MAX
#define UINTPTR_MAX UINT64_MAX

// Limits of other standard integral types
#define SIZE_MAX       UINTPTR_MAX
#define PTRDIFF_MIN    INTPTR_MIN
#define PTRDIFF_MAX    INTPTR_MAX
#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX
#define WCHAR_MIN      0x0000
#define WCHAR_MAX      0xffff
#define WINT_MIN       0x0000
#define WINT_MAX       0xffff

// These function-like macros expand to integer constants suitable to initialize objects of the types above
#define INTMAX_C(x)  ((intmax_t)x)
#define UINTMAX_C(x) ((uintmax_t)x)
#define INT8_C(x)    ((int8_t)x)
#define INT16_C(x)   ((int16_t)x)
#define INT32_C(x)   ((int32_t)x)
#define INT64_C(x)   ((int64_t)x)
#define UINT8_C(x)   ((uint8_t)x)
#define UINT16_C(x)  ((uint16_t)x)
#define UINT32_C(x)  ((uint32_t)x)
#define UINT64_C(x)  ((uint64_t)x)

#endif // INTTYPES_H