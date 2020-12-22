// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include "stringTools.h"

int isChars(const char* str) {
    for (int i = 0; i < strlen(str); ++i) {
        if (isalpha(str[i])) {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int isNumbers(const char* str) {
    for (int i = 0; i < strlen(str); ++i) {
        if (isdigit(str[i])) {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

void spaceDeleteMuttable(char* str) {
    int j = 0;
    for (int i = 0; i < strlen(str); ++i){
        if (str[i] == ' ' ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9')) {
            str[j] = str[i];
            ++j;
        }
    }
    str[j] = '\0';
}

char* spaceDeleteImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    spaceDeleteMuttable(res);

    return res;
}

void stripEndMuttable(char* str) {
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

char* stripEndImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    stripEndMuttable(res);

    return res;
}

void stripBeginningMuttable(char* str) {
    int i;
    int j;

    for (i = j = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            str[++j] = str[i];
        }
    }
}

char* stripBeginningImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    stripBeginningMuttable(res);

    return res;
}

void stringUpperMuttable(char* str) {
    for (int i = 0; str[i]; ++i) {
        str[i] = toupper(str[i]);
    }
}

char* stringUpperImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    stringUpperMuttable(res);

    return res;
}

void stringLowwerMuttable(char* str) {
    for (int i = 0; str[i]; ++i) {
        str[i] = tolower(str[i]);
    }
}

char* stringLowwerImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    stringLowwerMuttable(res);

    return res;
}