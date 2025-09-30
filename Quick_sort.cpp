// Name: Aditya Sinha 
// PRN: 24070123006
// Branch: EnTC A1

#include <iostream>
using namespace std;

void printArray(int arr[], int n, string label) {
    cout << label << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Choose the rightmost element as pivot
    int pivot = arr[high];
    
    // Index of smaller element (indicates the right position of pivot)
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            // Swap elements
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    // Swap pivot with element at i+1
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1); // Return position of pivot
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pivotIndex = partition(arr, low, high);
        
        // Recursively sort elements before and after partition
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print the unsorted array
    printArray(arr, n, "Unsorted array");
    
    // Sort the array using quick sort
    quickSort(arr, 0, n - 1);
    
    // Print the sorted array
    printArray(arr, n, "Sorted array");
    
    return 0;
}
/*
OUTPUT:
Enter the number of elements: 5
Enter 5 elements: 7 4 9 5 3 
Unsorted array: 7 4 9 5 3 
Sorted array: 3 4 5 7 9
*/