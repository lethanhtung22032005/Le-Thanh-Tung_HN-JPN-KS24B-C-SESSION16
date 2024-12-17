#include <stdio.h>
#include <stdlib.h>

void addElement(int *arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    (*size)++;

    for (int i = *size - 1; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
}

int main() {
    int size = 5; 
    int arr[100] = {1, 2, 3, 4, 5};

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value = 10;     
    int position = 2;   
    addElement(arr, &size, value, position);

    printf("Mang sau khi them phan tu %d vao vi tri %d: ", value, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

