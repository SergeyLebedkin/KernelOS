#ifndef FLOAT_H
#define FLOAT_H

#define FLT_RADIX 2 // Base for all floating-point types (float, double and long double).

// Float constants
#define FLT_MANT_DIG   24     // Precision of significand, i.e. the number of digits that conform the significand.
#define FLT_DIG        6      // Number of decimal digits that can be rounded into a floating-point and back without change in the number of decimal digits.
#define FLT_MIN_EXP    (-125) // Minimum negative integer value for the exponent that generates a normalized floating-point number.
#define FLT_MIN_10_EXP (-37)  // Minimum negative integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define FLT_MAX_EXP    128    // Maximum integer value for the exponent that generates a normalized floating-point number.
#define FLT_MAX_10_EXP 38     // Maximum integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define FLT_MAX        3.402823466e+38f // Maximum finite representable floating-point number.
#define FLT_EPSILON    1.192092896e-07f // Difference between 1 and the least value greater than 1 that is representable.
#define FLT_MIN        1.175494351e-38f // Minimum representable positive floating-point number.

// Double constants
#define DBL_MANT_DIG   53      // Precision of significand, i.e. the number of digits that conform the significand.
#define DBL_DIG        15      // Number of decimal digits that can be rounded into a floating-point and back without change in the number of decimal digits.
#define DBL_MIN_EXP    (-1021) // Minimum negative integer value for the exponent that generates a normalized floating-point number.
#define DBL_MIN_10_EXP (-307)  // Minimum negative integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define DBL_MAX_EXP    1024    // Maximum integer value for the exponent that generates a normalized floating-point number.
#define DBL_MAX_10_EXP 308     // Maximum integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define DBL_MAX        1.7976931348623158e+308 // Maximum finite representable floating-point number.
#define DBL_EPSILON    2.2204460492503131e-016 // Difference between 1 and the least value greater than 1 that is representable.
#define DBL_MIN        2.2250738585072014e-308 // Minimum representable positive floating-point number.

// Long double constants
#define LDBL_MANT_DIG   DBL_MANT_DIG   // Precision of significand, i.e. the number of digits that conform the significand.
#define LDBL_DIG        DBL_DIG        // Number of decimal digits that can be rounded into a floating-point and back without change in the number of decimal digits.
#define LDBL_MIN_EXP    DBL_MIN_EXP    // Minimum negative integer value for the exponent that generates a normalized floating-point number.
#define LDBL_MIN_10_EXP DBL_MIN_10_EXP // Minimum negative integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define LDBL_MAX_EXP    DBL_MAX_EXP    // Maximum integer value for the exponent that generates a normalized floating-point number.
#define LDBL_MAX_10_EXP DBL_MAX_10_EXP // Maximum integer value for the exponent of a base-10 expression that would generate a normalized floating-point number.
#define LDBL_MAX        DBL_MAX        // Maximum finite representable floating-point number.
#define LDBL_EPSILON    DBL_EPSILON    // Difference between 1 and the least value greater than 1 that is representable.
#define LDBL_MIN        DBL_MIN        // Minimum representable positive floating-point number.

// Rounding behavior. Possible values:
// -1 undetermined
//  0 toward zero
//  1 to nearest
//  2 toward positive infinity
//  3 toward negative infinity
// Applies to all floating-point types (float, double and long double).
#define FLT_ROUNDS 0
// Properties of the evaluation format. Possible values:
// -1 undetermined
//  0 evaluate just to the range and precision of the type
//  1 evaluate float and double as double, and long double as long double.
//  2 evaluate all as long double Other negative values indicate an implementation-defined behavior.
// Applies to all floating-point types (float, double and long double)
#define FLT_EVAL_METHOD 0
// Number of decimal digits that can be rounded into a floating-point type and back again to the same decimal digits, without loss in precision.
#define DECIMAL_DIG 17

#endif // FLOAT_H