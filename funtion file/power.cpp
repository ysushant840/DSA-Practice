#include <iostream>
using namespace std;

int main() {

    // First Power
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans = ans * a;
    }

    cout << "Answer is " << ans << endl;

    // Second Power
    int c, d;
    cin >> c >> d;

    int ans2 = 1;
    for (int i = 1; i <= d; i++) {
        ans2 = ans2 * c;
    }

    cout << "Answer is " << ans2 << endl;

    // Third Power
    int e, f;
    cin >> e >> f;

    int ans3 = 1;
    for (int i = 1; i <= f; i++) {
        ans3 = ans3 * e;
    }

    cout << "Answer is " << ans3 << endl;

    return 0;
}