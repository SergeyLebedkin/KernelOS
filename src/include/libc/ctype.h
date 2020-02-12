#ifndef CTYPE_H
#define CTYPE_H

// Character classification functions
int isalnum(int c);  // Check if character is alphanumeric
int isalpha(int c);  // Check if character is alphabetic
int isblank(int c);  // Check if character is blank (C++11)
int iscntrl(int c);  // Check if character is a control character
int isdigit(int c);  // Check if character is decimal digit
int isgraph(int c);  // Check if character has graphical representation
int islower(int c);  // Check if character is lowercase letter
int isprint(int c);  // Check if character is printable
int ispunct(int c);  // Check if character is a punctuation character
int isspace(int c);  // Check if character is a white-space
int isupper(int c);  // Check if character is uppercase letter
int isxdigit(int c); // Check if character is hexadecimal digit

// character conversion functions
int tolower(int c); // Convert uppercase letter to lowercase
int toupper(int c); // Convert lowercase letter to uppercase

#endif // CTYPE_H