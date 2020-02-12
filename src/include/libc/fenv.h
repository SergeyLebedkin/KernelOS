#ifndef FENV_H
#define FENV_H

// Floating-point exceptions type
typedef unsigned long fexcept_t;
// Floating-point environment type
typedef unsigned long fenv_t;

// extern default environment
extern const fenv_t fe_def_env;

// Floating-point exceptions
#define FE_DIVBYZERO  0x00000001 // Pole error exception (macro)
#define FE_INEXACT    0x00000002 // Inexact result exception (macro)
#define FE_INVALID    0x00000004 // Invalid argument exception (macro)
#define FE_OVERFLOW   0x00000008 // Overflow range error exception (macro)
#define FE_UNDERFLOW  0x00000010 // Underflow range error exception (macro)
#define FE_ALL_EXCEPT (FE_DIVBYZERO | FE_INEXACT | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW) // All exceptions (macro)

// Rounding directions
#define FE_DOWNWARD   0x00000001 // Downward rounding direction mode (macro)
#define FE_TONEAREST  0x00000002 // To-nearest rounding direction mode (macro)
#define FE_TOWARDZERO 0x00000003 // Toward-zero rounding direction mode (macro)
#define FE_UPWARD     0x00000004 // Upward rounding direction mode (macro)

// Default environment
#define FE_DFL_ENV (&fe_def_env) // Default environment (macro)

// Floating-point exceptions
int feclearexcept(int excepts); // Clear floating-point exceptions (function)
int feraiseexcept(int excepts); // Raise floating-point exception (function)
int fegetexceptflag(fexcept_t* flagp, int excepts); // Get floating-point exception flags (function)
int fesetexceptflag(const fexcept_t* flagp, int excepts); // Set floating-point exception flags (function)

// Rounding direction
int fegetround(void);     // Get rounding direction mode (function)
int fesetround(int rdir); // Set rounding direction mode (function)

// Entire environment
int fegetenv(fenv_t* envp);          // Get floating-point environment (function)
int fesetenv(const fenv_t* envp);    // Set floating-point environment (function)
int feholdexcept(fenv_t* envp);      // Hold floating-point exceptions (function)
int feupdateenv(const fenv_t* envp); // Update floating-point environment (function)

// Other
int fetestexcept(int excepts); // Test for floating-point exceptions (function)

#endif // FENV_H