#include <stdio.h>
#include <stdlib.h>
#include "parse.h"

int test_parse(char *string);

int main() {
    char* input = (char*)malloc(100);
    char output[100] = {0};
    for (int i = 0; i < 10; ++i) {
        fgets(input, 100, stdin);
        find_between_nested(input, '(', ')', 100, output);
        printf("%s\n", output);
    }
}

