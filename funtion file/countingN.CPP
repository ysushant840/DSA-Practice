#include<iostream>
using namespace std;

// FUNCTION signature
 void printCounting (int n){
    // function body
    for( int i=0;i<n;i++){
        cout<< i <<endl;

    }
 }


 int main()
 {
    int n;
    cin>>n;
    // function call
    printCounting(n);
    return 0;
 }