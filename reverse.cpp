#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start = 0 , end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    // 2 pointer approach
    int arr[] = {4, 5, 9, 10, 7, 6, 3};
    int size = 7;
    
    ReverseArray(arr, size);

    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    return 0;
}