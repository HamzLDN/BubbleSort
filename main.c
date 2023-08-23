#include <stdio.h>
#include "bubblesort.h"
// 12 4



int main() {
    printf("Original Array\n");
    int arr[] = {9,5,3,6,1,2,4,8,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i= 0; i< size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nBubble sorted array\n");
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}