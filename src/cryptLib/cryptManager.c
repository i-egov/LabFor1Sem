#include "cryptManager.h"



void caser_crypt(char *string, char *key, int encode){
    // Создаём копию строки для дальнейшего её изменения
    char* res = malloc((strlen(string) + 1) * sizeof(char));
    strcpy(res, string);
    // Проверяем если в Key содержаться буквы то завершаем процесс
    if (is_numbers(key) == 0){
        printf("The key must be a number.\n");
        return;
    }
    int key_int = atoi(key) * (-1);
    // Если включён режим кодировки то приводим res к нижнему регистру
    if (encode == 1){
        string_lowwer_muttable(res);
        key_int = key_int * (-1);
    }
    // Применяем алгоритм
    ceaser_muttable(res, key_int);
    printf("Result: %s\n", res);
}

void xor_crypt(char *string, char *key, int encoder) {
    // Создаём копию строки для дальнейшего её изменения
    char* res = malloc((strlen(string) + 1) * sizeof(char));
    strcpy(res, string);
    // Проверяем содержаться ли в ключе что то кроме символов
    if (is_chars(key) == 0){
        printf("The key must be in English letters.\n");
        return;
    }
    // Если включён режим кодировки то приводим строку к нижнему регистру
    if (encoder == 1){
        string_lowwer_muttable(res);
    }
    // Применяем алгоритм
    xor_muttable(res, key);
    printf("Result: %s \n", res);
}