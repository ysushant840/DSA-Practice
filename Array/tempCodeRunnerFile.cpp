#include <iostream>
// using namespace std;

// int binarySearch(int arr[], int key, int size) {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;

//     while (start <= end) {
//         if (arr[mid] == key) {
//             return mid;
//         }

//         if (key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return -1;
// }

// int main() {
//     int even[6] = {2, 3, 4, 5, 8, 9};
//     int odd[5] = {2, 4, 6, 7, 9};

//     int index1 = binarySearch(even, 8, 6);
//     cout << "Index of 8 in even array: " << index1 << endl;

//     int index2 = binarySearch(odd, 7, 5);
//     cout << "Index of 7 in odd array: " << index2 << endl;

//     return 0;
// }
