#include <stdio.h>
#include <stdlib.h>
#include <parse.h>

int main() {
    char *a = "stuff and things are cool";
    int result = 0;
    int len = 25;
    while (result != -1) {
        printf("%s\n", a);
        result = split(a, ' ', len);
        a = a + result;
        len = len - result;
    }
    return 0;
}
