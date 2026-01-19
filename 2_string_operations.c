#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char result[100];
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Length of str1: %ld\n", strlen(str1));
    printf("Length of str2: %ld\n", strlen(str2));
    
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    printf("Concatenated: %s\n", result);
    
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    
    return 0;
}
