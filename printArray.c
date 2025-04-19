#include <stdio.h>
int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr;
    // Input using ptr
    printf("Enter elements: \n");
    for (ptr = arr; ptr < arr + size; ptr++) {
        scanf("%d", ptr);
    }
    // Output using ptr
    printf("Display elements: ");
    for (ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    return 0;
}
