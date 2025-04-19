#include <stdio.h>
int main() {
    int size;
    printf("Enter size = ");
    scanf("%d", &size);

    int arr[size];
    int *ptr;
    // User input
    printf("Enter elements : \n");
    for (ptr = arr; ptr < arr + size; ptr++) {
        scanf("%d", ptr);
    }
    // Reverse elements
    printf("\nReverse elements = ");
    for (ptr = arr + size - 1; ptr >= arr; ptr--) {
        printf("%d  ", *ptr);
    }
    return 0;
}