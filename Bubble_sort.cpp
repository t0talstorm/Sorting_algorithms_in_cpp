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

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped, then the array is sorted
        if (!swapped) {
            break;
        }
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
    
    // Sort the array using bubble sort
    bubbleSort(arr, n);
    
    // Print the sorted array
    printArray(arr, n, "Sorted array");
    
    return 0;
}

/*
OUTPUT : 
Enter the number of elements: 5 
Enter 5 elements: 7 4 9 5 3 
Unsorted array: 7 4 9 5 3 
Sorted array: 3 4 5 7 9
*/