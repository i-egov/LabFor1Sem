// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include <stdio.h>
#include <string.h>
#include "dynamicString/core.h"
#include "cryptLib/cryptManager.h"

int main(int argc, char* argv[]) {
    char* method= argv[1];
    char* key = argv[argc - 1];
    // We read the data required for encryption
    // For this we use the dynamic string package
    char *string = parse_argv(argc, argv);


    // Attribute check
    if (strcmp(method, "--caesar") == 0) {
        caser_crypt(string, key, 1);
    }
    else if (strcmp(method, "--xor") == 0) {
        xor_crypt(string, key, 1);
    }
    else {
        printf("Incorrect encoding method.\n");
    }
}