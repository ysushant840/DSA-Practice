#include<iostream>
using namespace std;

// 1 -> even
// 0 -> odd

bool isEeven(int a)
{
    if(a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cin >> num;

    if(isEeven(num))
    {
        cout << "No is even" << endl;
    }
    else
    {
        cout << "No is odd" << endl;
    }

    return 0;
}