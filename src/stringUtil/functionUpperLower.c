#include "functionUpperLower.h"

void string_upper_muttable(char* str) {
    for (int i = 0; str[i]; ++i) {
        str[i] = toupper(str[i]);
    }
}

char* string_upper_imuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    string_upper_muttable(res);
    
    return res;
}

void string_lowwer_muttable(char* str) {
   for (int i = 0; str[i]; ++i) {
        str[i] = tolower(str[i]);
    }
}

char* string_lowwer_imuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    string_lowwer_muttable(res);

    return res;
}