#include <stdio.h>

int main() {
    printf("While Loop - Print 1 to 5:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    
    printf("For Loop - Multiplication Table of 5:\n");
    for (int j = 1; j <= 10; j++) {
        printf("5 * %d = %d\n", j, 5 * j);
    }
    printf("\n");
    
    printf("Do-While Loop - Print 1 to 3:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 3);
    printf("\n\n");
    
    printf("Nested Loop - Pattern:\n");
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= a; b++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
