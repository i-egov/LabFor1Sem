// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include <stdio.h>
#include <string.h>
#include "dynamicString/tools.h"
#include "cryptLib/cryptManager.h"

int main(int argc, char* argv[]) {
    DynamicString *method = initString();
    DynamicString *string = initString();
    DynamicString *key = initString();
    int strMethodSize;
    int strStringSize;
    int strKeySize;


    switch (argc) {
        case 1:
            printf("We found that you did not transfer "
                   "the key and encryption method\n");
            printf("Please, enter method: --caesar or --xor: ");
            readToString(method);
            printf("Please enter string: ");
            readToString(string);
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        case 2:
            printf("we noticed that you did not enter the encryption string and key!\n");
            strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            printf("Please enter string: ");
            readToString(string);
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        case 3:
            printf("We noticed that you did not enter the encryption key\n");
            strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            strStringSize = strlen(argv[2]);
            for (int strElement = 0; strElement < strStringSize; ++ strElement) {
                addString(string, argv[2][strElement]);
            }
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        default:
            printf("You rewrite more than 3 arguments, that's enough to run the algorithm\n");
            strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            parseArgv(string, argc, argv);

            int idKey = argc - 1;
            strKeySize = strlen(argv[idKey]);
            for (int strElement = 0; strElement < strKeySize; ++ strElement) {
                addString(key, argv[idKey][strElement]);
            }
    }



    // Attribute check
    if (strcmp(method->string, "--caesar") == 0) {
        caserCryptManager(string->string, key->string, 0);
    }
    else if (strcmp(method->string, "--xor") == 0) {
        xorCryptManager(string->string, key->string, 0);
    }
    else {
        printf("Incorrect encoding method.\n");
    }
    return 0;
}
