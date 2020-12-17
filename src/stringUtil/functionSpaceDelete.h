#ifndef SU_F_SPACE_INCLUDED
#define SU_F_SPACE_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Remove all spaces in the string and change the passed pointer
void space_delete_muttable(char* str);

// Remove all spaces in the string without changing the passed pointer
char* space_delete_imuttable(const char* str);

#endif