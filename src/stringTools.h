#ifndef STRING_TOOLS_INCLUDED
#define STRING_TOOLS_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Checking strings for letters
int is_chars(const char* str);

// Checking strings for digits
int is_numbers(const char* str);

// Remove all spaces in the string and change the passed pointer
void space_delete_muttable(char* str);

// Remove all spaces in the string without changing the passed pointer
char* space_delete_imuttable(const char* str);

// Removing spaces at the end of a line with changing the pointer
void strip_end_muttable(char* str);

// Remove spaces at the end of a line without changing the pointer
char* strip_end_imuttable(const char* str);

// Removing spaces at the beginning of a line with changing the pointer
void strip_beginning_muttable(char* str);

// Remove spaces at the beginning of a line without changing the pointer
char* strip_beginning_imuttable(const char* str);

// Uppercase string with pointer change
void string_upper_muttable(char* str);

// Converting a string to uppercase without changing the pointer
char* string_upper_imuttable(const char* str);

// Convert string to lowercase with pointer change
void string_lowwer_muttable(char* str);

// Convert string to lowercase without changing the pointer
char* string_lowwer_imuttable(const char* str);


#endif