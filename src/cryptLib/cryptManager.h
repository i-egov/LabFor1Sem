#ifndef CRYPT_MANAGER_STRING_H
#define CRYPT_MANAGER_STRING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../stringUtil/functionChecks.h"
#include "../stringUtil/functionStrip.h"
#include "../dynamicString/core.h"
#include "../stringUtil/functionUpperLower.h"

#include "CryptCoder.h"


// Обёртка для шифрования/дешифрования по алгоритму цезоря
void caser_crypt(char *string, char *key, int encode);

// Обёртка для шифрования/дешифрования по алгоритму XOR
void xor_crypt(char *string, char *key, int encoder);

#endif
