#include<iostream>
using namespace std;

void oddeven(int n)
{
    if(n % 2 == 0)
    {
        cout << "It is Even";
    }
    else
    {
        cout << "It is Odd";
    }
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    oddeven(n);

    return 0;
}