#ifndef CODER_H_INCLUDED
#define CODER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Шифрование по методу цезаря с изменением строки
void ceaserMuttable(char* str, int n) ;

//Шифрование по методу цезаря без изменением строки
char* ceaserImuttable(const char* str, int n);

//Шифрование по методу XOR с изменением строки
void xorMuttable(char* str, const char* key);

//Шифрование по методу XOR без изменением строки
char* xorImuttable(const char* str, const char* key);

#endif
