#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void palindrome(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(rev == str){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"not a Palindrome"<<endl;
    }
}

int main(){
    string str;
    cout<< "Enter the word to check: ";
    cin>>str;
    palindrome(str);
}