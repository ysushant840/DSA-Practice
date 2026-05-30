// if statement
// #include <iostream>
// using namespace std;

// int main() {
//     int age = 20;

//     if (age >= 18) {
//         cout << "You can vote";
//     }

//     return 0;
// }




// 2. if-else Statement

#include <iostream>
using namespace std;

int main() {
    int age ;
    cout<<"Enter the age of person"<<endl;
    cin>>age;

    if (age >= 18) {
        cout << "You can vote";
    }
    else {
        cout << "You cannot vote";
    }

    return 0;
}