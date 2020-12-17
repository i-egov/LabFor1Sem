#include "functionSpaceDelete.h"

void space_delete_muttable(char* str) {
    int j = 0;
    for (int i = 0; i < strlen(str); ++i){
        if (str[i] == ' ' ||
            str[i] >= 'a' && str[i] <= 'z' ||
            str[i] >= 'A' && str[i] <= 'Z' ||
            str[i] >= '0' && str[i] <= '9') {
            str[j] = str[i];
            ++j;
        }
    }
    str[j] = '\0';
}

char* space_delete_imuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    space_delete_muttable(res);
    
    return res;
}