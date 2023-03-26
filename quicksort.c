#include <stdio.h>
void quicksort(int array[], int left, int right) {
    // pivot point, left and right pointers
    int pivot, i, j, temp;
    if (left < right) {
        // initialize pivot as left pointer
        pivot = left;
        // initialize left and right pointers
        i = left;
        j = right;
        while (i < j) {
            // increment left pointer while value at left pointer is less than or equal to pivot value
            while (array[i] <= array[pivot] && i <= right) {
                i++;
            }
            // decrement right pointer while value at right pointer is greater than pivot value
            while (array[j] > array[pivot]) {
                j--;
            }
            // check if left pointer is less than right pointer
            if (i < j) {
                // swap values at left and right pointers
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        // swap pivot value with value at right pointer
        temp = array[j];
        array[j] = array[pivot];
        array[pivot] = temp;
        // recursive call on left subarray
        quicksort(array, left, j - 1);
        // recursive call on right subarray
        quicksort(array, j + 1, right);
    }
}

int main() {
    // initialize array
    int array[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    int i;

    // sort array
    quicksort(array, 0, n - 1);

    // print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

