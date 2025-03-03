int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;  // Return 0 if the size is less than 1
    }

    int count = 0;

    // Iterate through the array and count occurrences of the given number
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}