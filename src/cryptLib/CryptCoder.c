#include "CryptCoder.h"

void ceaser_muttable(char* str, int n) {
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

char* ceaser_imuttable(const char* str, int n) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    ceaser_muttable(res, n);
	return res;
}

void xor_muttable(char* str, const char* key) {
    for (int i = 0; i <= strlen(str); ++i) {
        str[i] = str[i] ^ key[i % strlen(key)];
    }
}

char* xor_imuttable(const char* str, const char* key) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    xor_muttable(res, key);
    return res;
}