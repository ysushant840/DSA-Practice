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
    //   * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * * 

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
    //   * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * * 

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
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, j;

//     for(i=0; i<5; i=i+1)
//     {
//         if(i==0 || i==4)
//         {
//             for(j=0; j<5; j=j+1)
//             {
//                 cout<<"* ";
//             }
//         }
//         else
//         {
//             cout<<"*";

//             for(j=0; j<7; j=j+1)
//             {
//                 cout<<" ";
//             }

//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     return 0;
// }







// enter by user to print hollow square /rectangle


// #include<iostream>
// using namespace std;

// int main()
// {
//     int rowCount, colCount;

//     cin >> rowCount;
//     cin >> colCount;

//     // Hollow Rectangle
//     for(int row = 0; row < rowCount; row++)
//     {
//         // First row or Last row
//         if(row == 0 || row == rowCount - 1)
//         {
//             for(int col = 0; col < colCount; col++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             // First star
//             cout << "* ";

//             // Spaces
//             for(int i = 0; i < colCount - 2; i++)
//             {
//                 cout << "  ";
//             }

//             // Last star
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }







// half pyramid input enter by user

// *
// * *
// * * *
// * * * *
// * * * * *


// #include<iostream>
// using namespace std;
// int main(){
// int i,j,n;
// cin>>n;
// for(i=0; i<n; i=i+1)
// {
//   for(j=0; j<i+1; j=j+1){
//     cout<<" * ";
//   }
//   cout<<endl;
// } 
// return 0;
// }







// // Reverse Right Triangle Pattern

// * * * * *
// * * * *
// * * *
// * *
// *



// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cin >> n;

//     for(i = 0; i < n; i = i + 1)
//     {
//         for(j = 0; j < n - i; j = j + 1)
//         {
//             cout << " * ";
//         }

//         cout << endl;
//     }

//     return 0;
// }






// Star Diamond Half Pattern
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *



// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cin >> n;

//     // Increasing Triangle
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // Decreasing Triangle
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n - i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }









// numeric Half Pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < i + 1; j = j + 1)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}