#ifndef ERRNO_H
#define ERRNO_H

// Last error number
#define EDOM   0x00000001 // Domain error
#define EILSEQ 0x00000002 // Illegal sequence
#define ERANGE 0x00000003 // Range error

// extern errno
extern int errno; // Last error number

#endif // ERRNO_H