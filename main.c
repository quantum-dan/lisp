#include <stdio.h>
#include <stdlib.h>
#include <parse.h>

int main() {
    char *strs[8] = {
        "(((abcdefg))",
        "(((abcdef)))",
        "(ab(cd)efgh)",
        "a(bcdefghij)",
        "(abcdefghi)j",
        "abcdefghijkl",
        "a(b(cdefg)))",
        "abc()defghij"
    };
    int len = 12;
    char start = '(';
    char end = ')';
    char *buffer = (char *)malloc(12);
    int result;
    for (int i = 0; i < 8; ++i) {
        result = find_between_nested(strs[i], start, end, len, buffer);
        printf("%s : %d %s\n", strs[i], result, buffer);
        buffer = (char *)malloc(12);
    }
    return 0;
}
