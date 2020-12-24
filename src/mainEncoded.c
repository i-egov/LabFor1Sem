// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include <stdio.h>
#include <string.h>
#include "dynamicString/tools.h"
#include "cryptLib/cryptManager.h"

int main(int argc, char* argv[]) {
//    char* method= argv[1];
//    char* key = argv[argc - 1];
    switch (argc) {
        case 0:
            printf("We found that you did not transfer "
                   "the key and encryption method\n");
            printf("Please, enter method: --caesar or --xor: ");
            DynamicString *method = initString();
            readToString(method);
            DynamicString *string = initString();
            printf("Please enter string: ");
            readToString(string);
            DynamicString *key = initString();
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        case 1:
            printf("we noticed that you did not enter the encryption string and key!\n");
            DynamicString *method = initString();
            int strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            DynamicString *string = initString();
            printf("Please enter string: ");
            readToString(string);
            DynamicString *key = initString();
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        case 2:
            printf("We noticed that you did not enter the encryption key\n");
            int strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            DynamicString *string = initString();
            int strStringSize = strlen(argv[2]);
            for (int strElement = 0; strElement < strStringSize; ++ strElement) {
                addString(string, argv[2][strElement]);
            }
            DynamicString *key = initString();
            printf("Please enter appropriate key: ");
            readToString(key);
            break;
        default:
            printf("You rewrite more than 3 arguments, that's enough to run the algorithm\n");
            int strMethodSize = strlen(argv[1]);
            for (int strElement = 0; strElement < strMethodSize; ++ strElement) {
                addString(method, argv[1][strElement]);
            }
            DynamicString *string = parseArgv(argc, argv);

            DynamicString *key = initString();
            int idKey = argc - 1;
            int strKeySize = strlen(argv[idKey]);
            for (int strElement = 0; strElement < strKeySize; ++ strElement) {
                addString(key, argv[idKey][strElement]);
            }
    }


    // Attribute check
    if (strcmp(method, "--caesar") == 0) {
        caserCryptManager(string->string, key, 1);
    }
    else if (strcmp(method, "--xor") == 0) {
        xorCryptManager(string->string, key, 1);
    }
    else {
        printf("Incorrect encoding method.\n");
    }
    return 0;
}