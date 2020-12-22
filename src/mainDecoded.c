// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include <stdio.h>
#include <string.h>
#include "dynamicString/tools.h"
#include "cryptLib/cryptManager.h"

int main(int argc, char* argv[]) {


    char* method= argv[1];
    char* key = argv[argc - 1];
    // We read the data required for encryption
    // For this we use the dynamic string package
    char *string = parseArgv(argc, argv);


    // Attribute check
    if (strcmp(method, "--caesar") == 0) {
        caserCryptManager(string, key, 0);
    }
    else if (strcmp(method, "--xor") == 0) {
        xorCryptManager(string, key, 0);
    }
    else {
        printf("Incorrect encoding method.\n");
    }
}
