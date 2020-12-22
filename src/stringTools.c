#include "stringTools.h"

int is_chars(const char* str) {
    int result = 0;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z' || 
            *str >= 'a' && *str <= 'z' || 
            *str == ' ') {
            result = 1;
        }
        else {
            result = 0;
            break;
        }
        ++str;
    }

    return result;
}

int is_numbers(const char* str) {
    int result = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9' || str[0] == '-') {
            result = 1;
        }
        else {
            result = 0;
            break;
        }
        ++str;
    }

    return result;
}

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