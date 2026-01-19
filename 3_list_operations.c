#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int i;
    
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Sum of array elements: ");
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    
    printf("Average of array elements: %d\n", sum / size);
    
    printf("Maximum element: %d\n", arr[0]);
    for (i = 1; i < size; i++) {
        if (arr[i] > arr[0]) {
            arr[0] = arr[i];
        }
    }
    printf("Maximum: %d\n", arr[0]);
    
    return 0;
}
