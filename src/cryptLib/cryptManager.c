// Created by Egor Golikov and Egor Skorikov
// Worked together, nobody copied
#include "cryptManager.h"



void caserCryptManager(char *string, char *key, int encode) {
    // Создаём копию строки для дальнейшего её изменения
    char* res = malloc((strlen(string) + 1) * sizeof(char));
    strcpy(res, string);
    // Проверяем если в Key содержаться буквы то завершаем процесс
    if (isNumbers(key) == 0) {
        printf("The key must be a number.\n");
        return;
    }
    int keyInt = atoi(key) * (-1);
    // Если включён режим кодировки то приводим res к нижнему регистру
    if (encode == 1) {
        stringLowwerMuttable(res);
        keyInt = keyInt * (-1);
    }
    // Применяем алгоритм
    ceaserMuttable(res, keyInt);
    printf("Result: %s\n", res);
}

void xorCryptManager(char *string, char *key, int encoder) {
    // Создаём копию строки для дальнейшего её изменения
    char* res = malloc((strlen(string) + 1) * sizeof(char));
    strcpy(res, string);
    // Проверяем содержаться ли в ключе что то кроме символов
    if (isChars(key) == 0) {
        printf("The key must be in English letters.\n");
        return;
    }
    // Если включён режим кодировки то приводим строку к нижнему регистру
    if (encoder == 1) {
        stringLowwerMuttable(res);
    }
    // Применяем алгоритм
    xorMuttable(res, key);
    printf("Result: %s \n", res);
}