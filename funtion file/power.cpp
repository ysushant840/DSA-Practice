#include <iostream>
using namespace std;

int main() {

    // First Power
    int a, b;
    cin >> a >> b;

    int ans1 = 1;
    for (int i = 1; i <= b; i++) {
        ans1 = ans1 * a;
    }
    cout << "Answer is " << ans1 << endl;

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

    // Fourth Power
    int g, h;
    cin >> g >> h;

    int ans4 = 1;
    for (int i = 1; i <= h; i++) {
        ans4 = ans4 * g;
    }
    cout << "Answer is " << ans4 << endl;

    return 0;
}