#ifndef STDINT_H
#define STDINT_H

// signed integer types
typedef char      int8_t;
typedef short     int16_t;
typedef int       int32_t;
typedef long long int64_t;
typedef char      int_least8_t;
typedef short     int_least16_t;
typedef int       int_least32_t;
typedef long      int_least64_t;
typedef char      int_fast8_t;
typedef short     int_fast16_t;
typedef int       int_fast32_t;
typedef long long int_fast64_t;
typedef long long intmax_t;
typedef long long intptr_t;

// unsigned integer types
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned short     uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long uintptr_t;

//  int max limits
#define INTMAX_MIN -9223372036854775807
#define INTMAX_MAX  9223372036854775807
#define UINTMAX_MAX 18446744073709551615
// int 8 limits
#define INT8_MIN -127
#define INT8_MAX  127
#define UINT8_MAX 255
// int 16 limits
#define INT16_MIN -32767
#define INT16_MAX  32767
#define UINT16_MAX 65535
// int 32 limits
#define INT32_MIN -2147483647
#define INT32_MAX  2147483647
#define UINT32_MAX 4294967295
// int 64 limits
#define INT64_MIN -9223372036854775807
#define INT64_MAX  9223372036854775807
#define UINT64_MAX 18446744073709551615
// least int 8 limits
#define INT_LEAST8_MIN -127
#define INT_LEAST8_MAX  127
#define UINT_LEAST8_MAX 255
// least int 16 limits
#define INT_LEAST16_MIN -32767
#define INT_LEAST16_MAX  32767
#define UINT_LEAST16_MAX 65535
// least int 32 limits
#define INT_LEAST32_MIN -2147483647
#define INT_LEAST32_MAX  2147483647
#define UINT_LEAST32_MAX 4294967295
// least int 64 limits
#define INT_LEAST64_MIN -9223372036854775807
#define INT_LEAST64_MAX  9223372036854775807
#define UINT_LEAST64_MAX 18446744073709551615
// fast int 8 limits
#define INT_FAST8_MIN -127
#define INT_FAST8_MAX  127
#define UINT_FAST8_MAX 255
// fast int 16 limits
#define INT_FAST16_MIN -32767
#define INT_FAST16_MAX  32767
#define UINT_FAST16_MAX 65535
// fast int 32 limits
#define INT_FAST32_MIN -2147483647
#define INT_FAST32_MAX  2147483647
#define UINT_FAST32_MAX 4294967295
// fast int 64 limits
#define INT_FAST64_MIN -9223372036854775807
#define INT_FAST64_MAX  9223372036854775807
#define UINT_FAST64_MAX 18446744073709551615
// intptr limits
#define INTPTR_MIN  -32767
#define INTPTR_MAX   32767
#define UINTPTR_MAX  65535

// other types limits
#define SIZE_MAX        18446744073709551615
#define PTRDIFF_MIN    -65535
#define PTRDIFF_MAX     65535
#define SIG_ATOMIC_MIN -127
#define SIG_ATOMIC_MAX  127
#define WCHAR_MIN      -127
#define WCHAR_MAX       127
#define WINT_MIN       -32767
#define WINT_MAX        32767

// function-like macros
#define INTMAX_C(x)  ((intmax_t)x)
#define UINTMAX_C(x) ((uintmax_t)x)
#define INT8_C(x)    ((int8_t)x)
#define UINT8_C(x)   ((uint8_t)x)
#define INT16_C(x)   ((int16_t)x)
#define UINT16_C(x)  ((uint16_t)x)
#define INT32_C(x)   ((int32_t)x)
#define UINT32_C(x)  ((uint32_t)x)
#define INT64_C(x)   ((int64_t)x)
#define UINT64_C(x)  ((uint64_t)x)

#endif // STDINT_H