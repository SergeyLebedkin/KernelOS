#ifndef MATH_H
#define MATH_H

// Floating-point type
typedef float float_t ; // float_t
typedef double double_t; // double_t

// Extern math error handling
extern int math_errhandling; // Error handling

// Classify floating-point value
#define FP_SUBNORMAL (-2) // Sub-normal value (underflow)
#define FP_NORMAL    (-1) // Normal value (none of the above)
#define FP_ZERO      0 // Value of zero
#define FP_INFINITE  1 // Positive or negative infinity (overflow)
#define FP_NAN       2 // Not-A-Number

// On domain error: errno is set to EDOM.
// On range error (including pole error, overflow, and possibly underflow): errno is set to ERANGE.
#define MATH_ERRNO 1
// On domain error: FE_INVALID is raised.
// On pole error: FE_DIVBYZERO is raised.
// On overflow: FE_OVERFLOW is raised.
// On underflow: FE_UNDERFLOW may be raised.
#define MATH_ERREXCEPT 2

// Special values the ilogb function may return
#define FP_ILOGB0   0x80000000 // x is zero
#define FP_ILOGBNAN 0x7fffffff // x is NaN

// The possible values returned by fpclassify.
#define INFINITY  ((float)(1e+300 * 1e+300)) // Infinity
#define HUGE_VAL  ((double)INFINITY) // Huge value (double)
#define HUGE_VALF ((float)INFINITY) // Huge value (float)
#define HUGE_VALL ((long double)INFINITY) // Huge value (long double)
#define NAN       ((float)(INFINITY * 0.0F)) // Not-A-Number

// Trigonometric functions (double)
double cos(double x); // Compute cosine
double sin(double x); // Compute sine
double tan(double x); // Compute tangent
double acos(double x); // Compute arc cosine
double asin(double x); // Compute arc sine
double atan(double x); // Compute arc tangent
double atan2(double y, double x); // Compute arc tangent with two parameters

// Hyperbolic functions (double)
double cosh(double x); // Compute hyperbolic cosine
double sinh(double x); // Compute hyperbolic sine
double tanh(double x); // Compute hyperbolic tangent
double acosh(double x); // Compute area hyperbolic cosine
double asinh(double x); // Compute area hyperbolic sine
double atanh(double x); // Compute area hyperbolic tangent

// Exponential and logarithmic functions (double)
double exp(double x); // Compute exponential function
double frexp(double x, int* exp); // Get significand and exponent
double ldexp(double x, int exp); // Generate value from significand and exponent
double log(double x); // Compute natural logarithm
double log10(double x); // Compute common logarithm
double modf(double x, double* intpart); // Break into fractional and integral parts
double exp2(double x); // Compute binary exponential function
double expm1(double x); // Compute exponential minus one
double log1p(double x); // Compute logarithm plus one
double log2(double x); // Compute binary logarithm
double logb(double x); // Compute floating-point base logarithm
double scalbn(double x, int n); // Scale significand using floating-point base exponent
double scalbln(double x, long int n); // Scale significand using floating-point base exponent(long)

// Power functions (double)
double pow(double base, double exponent); // Raise to power
double sqrt(double x); // Compute square root
double cbrt(double x); // Compute cubic root
double hypot(double x, double y); // Compute hypotenuse

// Error and gamma functions (double)
double erf(double x); // Compute error function
double erfc(double x); // Compute complementary error function
double tgamma(double x); // Compute gamma function
double lgamma(double x); // Compute log-gamma function

// Rounding and remainder functions (double)
double ceil(double x); // Round up value
double floor(double x); // Round down value
double fmod(double numer, double denom); // Compute remainder of division
double trunc(double x); // Truncate value
double round(double x); // Round to nearest
double rint(double x); // Round to integral value
double nearbyint(double x); // Round to nearby integral value
double remainder(double numer, double denom); // Compute remainder(IEC 60559)
double remquo(double numer, double denom, int* quot); // Compute remainder and quotient

// Floating-point manipulation functions (double)
double copysign(double x, double y); // Copy sign
double nan(const char* tagp); // Generate quiet NaN
double nextafter(double x, double y); // Next representable value
double nexttoward(double x, double y); // Next representable value toward precise value

// Minimum, maximum, difference functions (double)
double fdim(double x, double y); // Positive difference
double fmax(double x, double y); // Maximum value
double fmin(double x, double y); // Minimum value

// Other functions (double)
double fabs(double x); // Compute absolute value
double fma(double x, double y, double z); // Multiply-add

// Trigonometric functions (float)
float cosf(float x); // Compute cosine
float sinf(float x); // Compute sine
float tanf(float x); // Compute tangent
float acosf(float x); // Compute arc cosine
float asinf(float x); // Compute arc sine
float atanf(float x); // Compute arc tangent
float atan2f(float y, float x); // Compute arc tangent with two parameters

// Hyperbolic functions (float)
float coshf(float x); // Compute hyperbolic cosine
float sinhf(float x); // Compute hyperbolic sine
float tanhf(float x); // Compute hyperbolic tangent
float acoshf(float x); // Compute area hyperbolic cosine
float asinhf(float x); // Compute area hyperbolic sine
float atanhf(float x); // Compute area hyperbolic tangent

// Exponential and logarithmic functions (float)
float expf(float x); // Compute exponential function
float frexpf(float x, int* exp); // Get significand and exponent
float ldexpf(float x, int exp); // Generate value from significand and exponent
float logf(float x); // Compute natural logarithm
float log10f(float x); // Compute common logarithm
float modff(float x, float* intpart); // Break into fractional and integral parts
float exp2f(float x); // Compute binary exponential function
float expm1f(float x); // Compute exponential minus one
float log1pf(float x); // Compute logarithm plus one
float log2f(float x); // Compute binary logarithm
float logbf(float x); // Compute floating-point base logarithm
float scalbnf(float x, int n); // Scale significand using floating-point base exponent
float scalblnf(float x, long int n); // Scale significand using floating-point base exponent(long)

// Power functions (float)
float powf(float base, float exponent); // Raise to power
float sqrtf(float x); // Compute square root
float cbrtf(float x); // Compute cubic root
float hypotf(float x, float y); // Compute hypotenuse

// Error and gamma functions (float)
float erff(float x); // Compute error function
float erfcf(float x); // Compute complementary error function
float tgammaf(float x); // Compute gamma function
float lgammaf(float x); // Compute log-gamma function

// Rounding and remainder functions (float)
float ceilf(float x); // Round up value
float floorf(float x); // Round down value
float fmodf(float numer, float denom); // Compute remainder of division
float truncf(float x); // Truncate value
float roundf(float x); // Round to nearest
float rintf(float x); // Round to integral value
float nearbyintf(float x); // Round to nearby integral value
float remainderf(float numer, float denom); // Compute remainder(IEC 60559)
float remquof(float numer, float denom, int* quot); // Compute remainder and quotient

// Floating-point manipulation functions (float)
float copysignf(float x, float y); // Copy sign
float nanf(const char* tagp); // Generate quiet NaN
float nextafterf(float x, float y); // Next representable value
float nexttowardf(float x, float y); // Next representable value toward precise value

// Minimum, maximum, difference functions (float)
float fdimf(float x, float y); // Positive difference
float fmaxf(float x, float y); // Maximum value
float fminf(float x, float y); // Minimum value

// Other functions (float)
float fabsf(float x); // Compute absolute value
float fmaf(float x, float y, float z); // Multiply-add

// Trigonometric functions (long double)
long double cosl(long double x); // Compute cosine
long double sinl(long double x); // Compute sine
long double tanl(long double x); // Compute tangent
long double acosl(long double x); // Compute arc cosine
long double asinl(long double x); // Compute arc sine
long double atanl(long double x); // Compute arc tangent
long double atan2l(long double y, long double x); // Compute arc tangent with two parameters

// Hyperbolic functions (long double)
long double coshl(long double x); // Compute hyperbolic cosine
long double sinhl(long double x); // Compute hyperbolic sine
long double tanhl(long double x); // Compute hyperbolic tangent
long double acoshl(long double x); // Compute area hyperbolic cosine
long double asinhl(long double x); // Compute area hyperbolic sine
long double atanhl(long double x); // Compute area hyperbolic tangent

// Exponential and logarithmic functions (long double)
long double expl(long double x); // Compute exponential function
long double frexpl(long double x, int* exp); // Get significand and exponent
long double ldexpl(long double x, int exp); // Generate value from significand and exponent
long double logl(long double x); // Compute natural logarithm
long double log10l(long double x); // Compute common logarithm
long double modfl(long double x, long double* intpart); // Break into fractional and integral parts
long double exp2l(long double x); // Compute binary exponential function
long double expm1l(long double x); // Compute exponential minus one
long double log1pl(long double x); // Compute logarithm plus one
long double log2l(long double x); // Compute binary logarithm
long double logbl(long double x); // Compute long doubleing-point base logarithm
long double scalbnl(long double x, int n); // Scale significand using long doubleing-point base exponent
long double scalblnl(long double x, long int n); // Scale significand using long doubleing-point base exponent(long)

// Power functions (long double)
long double powl(long double base, long double exponent); // Raise to power
long double sqrtl(long double x); // Compute square root
long double cbrtl(long double x); // Compute cubic root
long double hypotl(long double x, long double y); // Compute hypotenuse

// Error and gamma functions (long double)
long double erfl(long double x); // Compute error function
long double erfcl(long double x); // Compute complementary error function
long double tgammal(long double x); // Compute gamma function
long double lgammal(long double x); // Compute log-gamma function

// Rounding and remainder functions (long double)
long double ceill(long double x); // Round up value
long double floorl(long double x); // Round down value
long double fmodl(long double numer, long double denom); // Compute remainder of division
long double truncl(long double x); // Truncate value
long double roundl(long double x); // Round to nearest
long double rintl(long double x); // Round to integral value
long double nearbyintl(long double x); // Round to nearby integral value
long double remainderl(long double numer, long double denom); // Compute remainder(IEC 60559)
long double remquol(long double numer, long double denom, int* quot); // Compute remainder and quotient

// Floating-point manipulation functions (double)
long double copysignl(long double x, long double y); // Copy sign
long double nanl(const char* tagp); // Generate quiet NaN
long double nextafterl(long double x, long double y); // Next representable value
long double nexttowardl(long double x, long double y); // Next representable value toward precise value

// Minimum, maximum, difference functions (long double)
long double fdiml(long double x, long double y); // Positive difference
long double fmaxl(long double x, long double y); // Maximum value
long double fminl(long double x, long double y); // Minimum value

// Other functions (long double)
long double fabsl(long double x); // Compute absolute value
long double fmal(long double x, long double y, long double z); // Multiply-add

// Exponential and logarithmic functions (all)
// Integer binary logarithm
int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);

// Rounding and remainder functions (all)
// Round to nearest and cast to long integer
long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
// Round to nearest and cast to long long integer
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);
// Round and cast to long integer
long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
// Round and cast to long long integer
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);

// Classification macro / functions (all)
// Classify floating-point value(macro/function)
int fpclassify(double x);
int fpclassifyf(float x);
int fpclassifyl(long double x);
// Is finite value (macro)
int isfinite(double x);
int isfinitef(float x);
int isfinitel(long double x);
// Is infinity(macro/function)
int isinf(double x);
int isinff(float x);
int isinfl(long double x);
// Is Not-A-Number(macro/function)
int isnan(double x);
int isnanf(float x);
int isnanl(long double x);
// Is normal(macro/function)
int isnormal(double x);
int isnormalf(float x);
int isnormall(long double x);
// Sign bit(macro/function)
int signbit(double x);
int signbitf(float x);
int signbitl(long double x);

// Comparison macro / functions (all)
// Is greater (macro)
int isgreater(double x, double y);
int isgreaterf(float x, float y);
int isgreaterl(long double x, long double y);
// Is greater or equal (macro)
int isgreaterequal(double x, double y);
int isgreaterequalf(float x, float y);
int isgreaterequall(long double x, long double y);
// Is less (macro)
int isless(double x, double y);
int islessf(float x, float y);
int islessl(long double x, long double y);
// Is less or equal (macro)
int islessequal(double x, double y);
int islessequalf(float x, float y);
int islessequall(long double x, long double y);
// Is less or greater (macro)
int islessgreater(double x, double y);
int islessgreaterf(float x, float y);
int islessgreaterl(long double x, long double y);
// Is unordered (macro)
int isunordered(double x, double y);
int isunorderedf(float x, float y);
int isunorderedl(long double x, long double y);

#endif // MATH_H