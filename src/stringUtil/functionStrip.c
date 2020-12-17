#include "functionStrip.h"

void strip_end_muttable(char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    while (str[i] == ' ') {
        ++i;
    }
    while (str[j] == ' ') {
        ++j;
    }
    for (int k = 0; k < j; ++k, ++i) {
        str[k] = str[i];
    }
    str[j - 1] = '\0';
}

char* strip_end_imuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    strip_end_muttable(res);

    return res;
}

void strip_beginning_muttable(char* str) {
    int i;
    int j;

    for (i = j = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            str[++j] = str[i];
        }
    }
}

char* strip_beginning_imuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    strip_beginning_muttable(res);

    return res;
}