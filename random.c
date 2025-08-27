#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* rand_string(char* s, int size) {
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; i++) {
        s[i] = alphabet[rand() % 26];
    }
    s[size] = '\0';
    return s;
}