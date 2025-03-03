int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;  // Return 0 for invalid or even-length arrays
    }
    //using for-loop to find the minum number after each changement
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;  
            }
        }
        // change the current element and minimum number
        if (min_index != i) {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }

    // return the median
    return array[n / 2];
}