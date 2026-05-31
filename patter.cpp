// print  solide rectangle
      // *****
      // *****
      // *****

    //   #include<iostream>
    //   using namespace std;
    //   int main (){

    //     int i,j;
    //     for(i=0; i<3; i=i+1) //row outer loop
    //     {
    //         for(j=0; j<5; j=j+1) //colum inner loop
    //         {
    //          cout<<" * ";
    //     }
        
    //       cout<<endl;
    //   }
    //    return 0;
    // }




    // print  Square Pattern
      // * * * * *
      // * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * * *

    // #include<iostream>
    // using namespace std;
    // int main ()
    // {
    //     int i,j;
    //     for(i=0; i<5; i++)
    //     {
    //         for (j=0; j<5; j++)
    //         {
    //             cout<<" * ";
    //         }
    //         cout<<endl;

    //     }
    //     return 0;
    // }



    // enter the number to print pattern


    // print  Square Pattern
      // * * * * *
      // * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * * *

    // #include<iostream>
    // using namespace std;
    // int main ()
    // {
    //     int i,j;
    //     int n;
    //     cin>>n;

    //     for(i=0; i<n; i++)
    //     {
    //         for (j=0; j<n; j++)
    //         {
    //             cout<<" * ";
    //         }
    //         cout<<endl;

    //     }
    //     return 0;
    // }





    // #include<iostream>
    // using namespace std;
    // int main ()
    // {
    //     int i,j;
    //     int n;
    //     cin>>n;

    //     for(i=0; i<n; i++)
    //     {
    //         for (j=0; j<n; j++)
    //         {
    //             cout<<" * ";
    //         }
    //         cout<<endl;

    //     }
    //     return 0;
    // }




//  Hollow Square Pattern Program in C++
#include<iostream>
using namespace std;

int main()
{
    int i, j;

    for(i=0; i<5; i=i+1)
    {
        if(i==0 || i==4)
        {
            for(j=0; j<5; j=j+1)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"*";

            for(j=0; j<7; j=j+1)
            {
                cout<<" ";
            }

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}