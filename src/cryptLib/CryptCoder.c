// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include "CryptCoder.h"

void ceaserMuttable(char* str, int n) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str += n;
            if (*str > 'z') {
                *str = 'a' + *str % 'z' - 1;
            }
            else if (*str < 'a') {
                *str = 'z' - ('a' % *str) + 1;
            }
        }
        ++str;
    }
}

char* ceaserImuttable(const char* str, int n) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    ceaserMuttable(res, n);
	return res;
}

void xorMuttable(char* str, const char* key) {
    for (int i = 0; i <= strlen(str); ++i) {
        str[i] = str[i] ^ key[i % strlen(key)];
    }
}

char* xorImuttable(const char* str, const char* key) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    xorMuttable(res, key);
    return res;
}
