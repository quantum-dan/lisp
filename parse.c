// Parsing functions
#include <string.h>

int find_position(char *string, char token, int len) {
    int i;
    for (i = 0; i < len; ++i) {
        if (string[i] == token) {
            return i;
            break;
        }
    }
    return -1;
}

int find_nth_position(char *string, char token, int len, int count) {
    // Finds the position of the nth token
    int i;
    int found = 0;
    for (i = 0; i < len; ++i) {
        if (string[i] == token) {
            ++found;
            if (found == count) {
                return i;
                break;
            }
        }
    }
    return -1;
}

int count_item(char *string, char token, int len) {
    int i;
    int total = 0;
    for (i = 0; i < len; ++i) {
        if (string[i] == token) ++total;
    }
    return total;
}

int find_between(char *string, char start, char end, int len, char *buffer) {
    // Finds the string in between two tokens
    int starts = find_position(string, start, len);
    int ends = find_position(string, end, len);
    if (starts != -1 && ends != -1) {
        strcpy(buffer, string + starts + 1);
        buffer[ends - starts - 1] = 0;
        return ends - starts - 1;
    }
    return -1;
}

int find_between_nested(char *string, char start, char end, int len, char *buffer) {
    // Finds the string in between the two outermost tokens (allows for nesting)
    int starts = find_position(string, start, len);
    int start_count = count_item(string, start, len);
    int ends = find_nth_position(string, end, len, start_count);
    if (starts != -1 && ends != -1) {
        strcpy(buffer, string + starts + 1);
        buffer[ends - starts - 1] = 0;
        return ends - starts - 1;
    }
    return -1;
}
