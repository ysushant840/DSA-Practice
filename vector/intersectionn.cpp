#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};

    vector<int> ans;

    // Outer loop on arr vector
    for(int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        // For every element, run loop on brr
        for(int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j])
            {
                // Mark visited element
                brr[j] = -1;

                // Store common element
                ans.push_back(element);

                // Stop searching for this element
                break;
            }
        }
    }

    // Print answer
    cout << "Intersection of Arrays: ";

    for(auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}