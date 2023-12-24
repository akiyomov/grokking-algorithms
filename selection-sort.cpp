#include<iostream>

using namespace std;

int findSmallest(int arr[], int start, int size){
    int smallest_index = start;
    for(int i = start + 1; i < size; ++i)
        if (arr[i] < arr[smallest_index]) {
            smallest_index = i;
        }
    return smallest_index;
}

void selectionSort(int arr[], int size){
    for (int i = 0; i < size - 1; ++i){
        int smallest_index = findSmallest(arr, i, size);
        if (i != smallest_index) {
            int temp = arr[i];
            arr[i] = arr[smallest_index];
            arr[smallest_index] = temp;
        }
    }
}


int main(){
    int arr[]{5,3,6,2,10};
    int size  = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
