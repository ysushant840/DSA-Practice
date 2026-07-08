// lastOccuranceBinary.cp
#include <iostream>
using namespace std;

int lastOccurance(int arr[], int n, int key) {

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;      // Right side search
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

    int even[6] = {2, 3, 4, 5, 6, 7};

    cout << "Last Occurrence of 4 is at index "
         << lastOccurance(even, 6, 4);

    return 0;
}