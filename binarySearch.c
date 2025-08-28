#include <stdio.h>

// Bubble Sort function
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Binary Search function
int binarySearch(int a[], int n, int target) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == target) {
            return mid;  // return index
        }
        else if (a[mid] > target) {
            high = mid - 1;  // search left
        }
        else {
            low = mid + 1;   // search right
        }
    }
    return -1; // not found
}

int main() {
    int a[100], target, n, i, result;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements into array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort array
    bubbleSort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Search element
    printf("Enter an element to find: ");
    scanf("%d", &target);

    result = binarySearch(a, n, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
