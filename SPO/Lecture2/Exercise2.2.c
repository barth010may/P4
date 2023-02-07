// Write a program that implements quicksort using recursion

#include <stdio.h>
#include <stdlib.h>

int compare(const void*, const void*);

int main() {
    int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    
    qsort(array, 10, sizeof(int), compare);

    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

}

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
