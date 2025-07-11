#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 5, 9, 10, 7, 6, 3};
    int size = 7;

    reverse(arr,size);

    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}