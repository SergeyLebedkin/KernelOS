#ifndef SETJMP_H
#define SETJMP_H

// Type to hold information to restore calling environment
typedef int jmp_buf[16];

// functions
int setjmp(jmp_buf env); // Save calling environment for long jump (macro)
void longjmp (jmp_buf env, int val); // Long jump (function)

#endif // SETJMP_H