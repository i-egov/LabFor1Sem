#ifndef STRING_TOOLS_INCLUDED
#define STRING_TOOLS_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "dynamicString/core.h"

// Checking strings for letters
int isChars(const char* str);

// Checking strings for digits
int isNumbers(const char* str);

// Remove all spaces in the string and change the passed pointer
void spaceDeleteMuttable(char* str);

// Remove all spaces in the string without changing the passed pointer
char* spaceDeleteImuttable(const char* str);

// Removing spaces at the end of a line with changing the pointer
void stripEndMuttable(char* str);

// Remove spaces at the end of a line without changing the pointer
char* stripEndImuttable(const char* str);

// Removing spaces at the beginning of a line with changing the pointer
void stripBeginningMuttable(char* str);

// Remove spaces at the beginning of a line without changing the pointer
char* stripBeginningImuttable(const char* str);

// Uppercase string with pointer change
void stringUpperMuttable(char* str);

// Converting a string to uppercase without changing the pointer
char* stringUpperImuttable(const char* str);

// Convert string to lowercase with pointer change
void stringLowwerMuttable(char* str);

// Convert string to lowercase without changing the pointer
char* stringLowwerImuttable(const char* str);


#endif