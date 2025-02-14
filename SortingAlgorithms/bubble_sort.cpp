#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {11, 5, 8, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]); 

    
    cout << "Unexpected list: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    bubble_sort(arr, n);

    
    cout << "Expected list: ";
	for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

