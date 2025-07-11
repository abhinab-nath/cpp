#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target){
    for(int i=0; i<=size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[]={1, 20, 50, 97, 54, 69, 71};
    int size = 7;

    cout<< linearsearch(arr,size,69);
}