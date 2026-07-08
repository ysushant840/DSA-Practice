// lastOccuranceBinary.cpp
#include<iostream>
using namespace std;
int lastOccurance(int arr[],int n, int key)
int start=0;
int end =n -1;
int mid=start+(end-start)/2;
int ans =-1;
while(start <= end){
    if(arr[mid]==key){
        ans =mid;
        end=mid+1;
    }
    else if (key>arr[mid]){
        start=mid +1;
    }
    else if (key<arr [mid]){
        start =mid -1;
    }
return 0;
}

int main (){
    int even[6]={2,3,4,5,6,7};
    cout<<"last occurance of " << (even,3,4);
}