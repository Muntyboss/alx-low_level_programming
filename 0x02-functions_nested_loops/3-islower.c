#include <stdio.h>
#include <ctype.h>

int _islower(int c) {
    if (islower(c)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char ch = 'a';
    if (_islower(ch)) {
        printf("%c is a lowercase character.\n", ch);
    } else {
        printf("%c is not a lowercase character.\n", ch);
    }
    return 0;
}

