#include <stdio.h>

// Algorithm for Insertion Sort:
// 1. Iterate through the array from the second element to the last element.
// 2. Store the current element in a variable called key.
// 3. Initialize a variable called j to the index of the previous element.
// 4. Compare the key with each element before it, moving the greater elements one position ahead.
// 5. Repeat step 4 until the key is in its correct position.
// 6. Insert the key into its correct position.
// 7. Repeat steps 2-6 for all elements in the array.

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
