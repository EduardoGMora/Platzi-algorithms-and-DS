#include <iostream>

using namespace std;

int print(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void insertionSort(int arr[], int n){
    if (n <= 1){
        return;
    }
    
    int currentvalue, i, j;

    for(i=1; i<n; i++){
        currentvalue = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>currentvalue){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = currentvalue;
    }
        
}


int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 1, 0, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Size of array: " << n << endl;

    cout << "Unsorted array: \n";
    print(arr, n);

    cout << "Sorted array: \n";
    insertionSort(arr, n);
    print(arr, n);

    
    return 0;
}