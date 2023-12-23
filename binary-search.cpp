#include <iostream>

using namespace std;

int binarySearch(const int arr[],int item,int size);

static int steps = 0;

int main(){
    int arr[128];
    int item = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i<size;++i){
        arr[i] = i;
    }
    int result  = binarySearch(arr,item,size);
    if (result < 0)
        cout << "Item not found";
    else
        cout << "Found item at index " << result << " in " << steps << " steps.";
    return 0;
}

int binarySearch(const int arr[],int item,int size){
    int low = 0;
    int high = size - 1;
    int mid, guess;
    while(low <= high){
        ++steps;
        mid = (low + high) / 2;
        guess  = arr[mid];
        if (guess == item)
            return mid;
        else if(guess > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}
