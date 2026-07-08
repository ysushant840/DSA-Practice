#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key) {

    int start = 0;
    int end= n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {

        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    int even[5] = {2, 3, 4, 5, 6};

    cout << "First Occurrence of 3 is at index "
         << firstOccurance(even, 5, 3);

    return 0;
}