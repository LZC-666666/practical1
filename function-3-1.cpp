#include <stdbool.h>

bool is_fanarray(int array[], int n) {
    if (n < 1) return false;

    // Check for the increasing part of the array
    for (int i = 0; i < n / 2; i++) {
        if (array[i] >= array[i + 1]) {
            return false;  // The first half must strictly increase
        }
    }

    // Check for the decreasing part of the array
    for (int i = n / 2; i < n - 1; i++) {
        if (array[i] <= array[i + 1]) {
            return false;  // The second half must strictly decrease
        }
    }

    return true;
}