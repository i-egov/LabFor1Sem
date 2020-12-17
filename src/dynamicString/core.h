#ifndef DYNAMIC_STRING_H
#define DYNAMIC_STRING_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char* string;
    long currentSize;
    long currentlyUsed;
} DynamicString;

DynamicString* init_string();
void add_string(DynamicString* string, char symbol);
void free_string(DynamicString* string);

#endif