#include<iostream>
using namespace std;

int main() {

    int arr[5] = {10, 50, 30, 90, 40};

    int maximum = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum = " << maximum;

    return 0;
}