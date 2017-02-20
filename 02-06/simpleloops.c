// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}

/*
1. for-loops 1, 3, and 4

2. for-loop 2

3. for-loop 5
*/
