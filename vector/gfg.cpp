// #include <iostream>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     string compareFive(int n) {
//         if (n > 5)
//             return "Greater than 5";
//         else if (n < 5)
//             return "Less than 5";
//         else
//             return "Equal to 5";
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.compareFive(8);
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%2==0){
        cout<<"Friend"<<endl;
    }
else {
    cout<<"You"<<endl;
}
    return 0;
}