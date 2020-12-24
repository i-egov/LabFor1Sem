// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include "tools.h"

DynamicString *parseArgv(int n, char **argv) {
    DynamicString *string = initString();

    for (int i = 2; i < n - 1 ; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++j) {
            addString(string, argv[i][j]);
        }
        addString(string, *" ");
    }
    stripEndMuttable(string->string);
    
    return string;
}