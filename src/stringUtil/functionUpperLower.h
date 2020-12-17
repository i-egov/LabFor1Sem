#ifndef SU_F_UL_INCLUDED
#define SU_F_UL_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Uppercase string with pointer change
void string_upper_muttable(char* str);

// Converting a string to uppercase without changing the pointer
char* string_upper_imuttable(const char* str);

// Convert string to lowercase with pointer change
void string_lowwer_muttable(char* str);

// Convert string to lowercase without changing the pointer
char* string_lowwer_imuttable(const char* str);

#endif