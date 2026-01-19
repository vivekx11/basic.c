#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char data[100];
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Writing to file
    printf("Writing data to file...\n");
    fp = fopen("data.txt", "w");
    
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    
    fprintf(fp, "Hello, File I/O!\n");
    fprintf(fp, "This is basic file operations\n");
    
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "Number %d: %d\n", i + 1, numbers[i]);
    }
    
    fclose(fp);
    printf("Data written successfully!\n\n");
    
    // Reading from file
    printf("Reading data from file...\n");
    fp = fopen("data.txt", "r");
    
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
    
    fclose(fp);
    printf("\nFile read successfully!\n");
    
    return 0;
}
