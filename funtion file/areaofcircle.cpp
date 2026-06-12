#include <iostream>
using namespace std;

float cicle_area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Area of circle is " << cicle_area(radius) << endl;

    return 0;
}