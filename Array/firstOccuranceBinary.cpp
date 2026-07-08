#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {

        if (key == arr[mid]) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main() {

    int even[5] = {2, 3, 4, 5, 6};

    cout << "First Occurrence of 3 is at index "
         << firstOccurance(even, 5, 3);

    return 0;
}