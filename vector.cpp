#include <iostream>
// to use vector first include vector
#include <vector>     // dynaminc in nature(no fixed size)
using namespace std;

int main(){
    //syntax-
    //vector<int> vec;  // size=0, gives error if cout
    //vector<int> vec = {1, 2, 3};

    vector<int> vec(3,0); // where 3 is size and 0 is the value which will be stored in each of the indexs

    //vector functions:- size, push_back, pop_back, front, back, at
    vec.push_back(6);    // size will become 4, and 6 will be stored
    vec.pop_back();      // last value will be deleted i.e 6
    cout<< vec.front();  // prints the first value
    cout<< vec.back();   // prints the last value
    cout<< vec.at(0);    // prints the value of given index
    cout<< vec.size();

    //for each loop
    for(int i : vec){
        cout << i << endl;
    }

    return 0;
}

// Static vs Dynamic memory allocation

//   STATIC                      DYNAMIC
// -compile time               -run time
// -fixed size                 -resize
// -array[5]                   -vector<int>vec
// -stack                      -heap


//the capacity of vector gets doubled(x2) every time we push an element
/* 
suppose there are two elements 1,0 in a vector and we push new element 2 to the
vector than the capacity will become 4 as it gets doubled (before pushing it was 2)
but the elements stored will be three i.e 0,1,2 (now size=3 and capacity=4)

if we push new element 3 to the vector then it will be stored as there is an empty slot
because capacity was 4 and now the size will also be 4.

again if we try to push new element 4 to the vector, then it will get doubled because
the previous capacity was 4 and now it is full because of the elements 0,1,2,3.
so after doubling the vector will have capacity= 8 (previously it was 4) and size=5.
*/