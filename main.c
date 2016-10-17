#include <stdio.h>
#include <stdlib.h>
#include <parse.h>
#include <string.h>

int test_parse(char *string);

int main() {
    char *string = (char *)malloc(100);
    scanf("%20c", string);
    test_parse(string);
    return 0;
}

int test_parse(char *string) {
    char *buffer = (char *)malloc(strlen(string));
    int s = find_between(string, '(', ')', strlen(string), buffer);
    if (s == -1) return -1;
    int result = split(buffer, ' ', strlen(buffer));
    if (buffer[0] == 'p') {
        printf("%s\n", buffer + result);
    } else {
        printf("Failed!\n");
    }
    return 0;
}
