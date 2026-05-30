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

// #include <iostream>
// using namespace std;

// int main() {
//     int age ;
//     cout<<"Enter the age of person"<<endl;
//     cin>>age;

//     if (age >= 18) {
//         cout << "You can vote";
//     }
//     else {
//         cout << "You cannot vote";
//     }

//     return 0;
// }


// else if ladder

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter the marks: " << endl;
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A";
    }
    else if (marks >= 80) {
        cout << "Grade B";
    }
    else if (marks >= 70) {
        cout << "Grade C";
    }
    else {
        cout << "Fail";
    }

    return 0;
}