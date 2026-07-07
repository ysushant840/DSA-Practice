// #include <iostream>
// using namespace std;

// int sumArray(int arr[], int n) {

//     int sum = 0;

//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main() {

//     int arr[5] = {10, 20, 30, 40, 50};

//     cout << "Sum = " << sumArray(arr, 5);

//     return 0;
// }












#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Sum = " << sumArray(arr, 5);

    return 0;
}