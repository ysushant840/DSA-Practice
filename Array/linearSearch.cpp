// // without function code 
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5]={10,20,30,40,50};
//     int key;
//     cin>>key;

//     bool found=false;
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             found=true;
//             break;
//         }
//     }
//     if (found) {
//         cout<<"element found";
//     }
//     else{
//         cout<<"Not found";
//     }
//     return 0;
// }





// // function using liner search 

// #include<iostream>
// using namespace std;
// bool find(int arr[], int Size, int key){

//          for(int i=0;i<Size;i++){
//             if(arr[i]==key){
//                 return true;
//             }
//         }
//         return false;
// }



// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     int Size=5;
//     int key;

//     cout<<"Enter the key"<<endl;
//     cin>>key;

//     if(find(arr,Size,key)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }

//     return 0;
// }









// count 2 element in the array
#include<iostream>
using namespace std;

    int main() {
    int arr[15] = {1,2,3,4,2,3,5,2,5,2,4,23,2,5,2};

    int key;
    cin >> key;
     int count = 0;

    for(int i = 0; i < 15; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << "Count = " << count;

    return 0;
}