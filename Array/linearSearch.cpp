#include<iostream>
using namespace std;
bool find(int arr[], int Size, int key){

         for(int i=0;i<Size;i++){
            if(arr[i]==key){
                return true;
            }
        }
        return false;
}



int main()
{
    int arr[5]={10,20,30,40,50};
    int Size=5;
    int key;

    cout<<"Enter the key"<<endl;
    cin>>key;

    if(find(arr,Size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}