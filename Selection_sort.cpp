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

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the remaining unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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
    
    // Sort the array using selection sort
    selectionSort(arr, n);
    
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