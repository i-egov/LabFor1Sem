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
    for (int i = 0, j = 0; str[i] != '\0'; ++i) {

        if (str[i] != ' ') {
            str[j] = str[i];
            ++j;
        }
        str[j] = '\0';
    }
}

char* spaceDeleteImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    spaceDeleteMuttable(res);

    return res;
}

void stripEndMuttable(char* str) {
    size_t size = strlen(str);
    char* end;
    int begin = 0;

    if(!size) {
        return;
    }

    end = str + size - 1;
    while(str[begin] == ' ') {
        ++begin;
    }

    while(end >= str && *end == ' ') {
        --end;
    }
    *(end + 1) = '\0';

    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = str[i + begin];
    }

}

char* stripEndImuttable(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    stripEndMuttable(res);

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