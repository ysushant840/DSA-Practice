// // #include<iostream>
// // using namespace std;
// // int main (){
// //     for(int i=0;i<5;i=i+1){
// //         cout<<"hello sushant"<<endl;
// //     }
// // }


// // #include<iostream>
// // using namespace std;
// // int main (){
// // for (int i=0; i<20; i=i+3){
// //     cout<<i<<endl;
// // }
// // }




// // #include<iostream>
// // using namespace std;
// // int main (){
// // for (int i=20; i>0; i=i-3){
// //     cout<<i<<endl;
// // }
// // }



// // #include<iostream>
// // using namespace std;
// // int main (){
// // for (int i=0; i<10; i=i+1){
// //     cout<<i*9<<endl;
// // }
// // }



// #include<iostream>
// using namespace std;
// int main (){
// for (int i=0; i<5; i=i+1){
//     cout<<"*"<<endl;
// }
// for (int i=5; i>0; i=i-1){
//     cout<<"*"<<endl;
    
// }
// return 0;
// }







#include<iostream>
using namespace std;

int main() {

    int n = 10;

    int a = 0;
    int b = 1;
    cout<<a <<" " <<b<<" ";
    for(int i = 1; i<=n; i++ ) {
        
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return 0;
}