#include<iostream>
using namsespace std;

// 1-> even 
// 0->odd

bool isEeven(int a){
    // for odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}


int main(){
    int num;
    cin>>num;
    if isEeven(num)){
        cout<<"no is even"<<endl;

    }
    else {
        cout<<"no is odd"<<endl;
    }
}