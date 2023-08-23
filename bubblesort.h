void bubbleSort(int arr[], int size) {
    // Loop over the size of array
    for (int i=0;i<size;i++) {
        // Used to iterate over the needed values using size - i - 1 which helps with optimization
        for (int j=0;j<size-i-1;j++) {
            // Check if the current value is greater than the next value (n+1)
            if(arr[j]>arr[j+1]) {
                // Creates a temporary variable and swaps the values
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
}
