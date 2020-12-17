#include "functionChecks.h"

int is_chars(const char* str) {
    int result = 0;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z' || *str == ' ') {
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