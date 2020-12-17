#ifndef SU_F_STPRIP_INCLUDED
#define SU_F_STPRIP_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Removing spaces at the end of a line with changing the pointer
void strip_end_muttable(char* str);

// Remove spaces at the end of a line without changing the pointer
char* strip_end_imuttable(const char* str);

// Removing spaces at the beginning of a line with changing the pointer
void strip_beginning_muttable(char* str);

// Remove spaces at the beginning of a line without changing the pointer
char* strip_beginning_imuttable(const char* str);

#endif