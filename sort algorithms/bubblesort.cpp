#include <iostream>
#include <cstring>

using namespace std;

void cambiar_pos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int arr[], int n){
    if (n <= 1)
    {
        return;
    }
    


    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]<arr[j+1])
                cambiar_pos(&arr[j], &arr[j+1]);
        }
    }
}

int print(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90, 1, 0, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Size of array: " << n << endl;

    cout << "Unsorted array: \n";
    print(arr, n);

    cout << "Sorted array: \n";
    bubbleSort(arr, n);
    print(arr, n);

    
    return 0;
}