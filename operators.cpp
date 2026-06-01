// C++ mein commonly **8 types of Operators** padhaye jaate hain:

// | No. | Operator Type                   | Examples                |               |    |
// | --- | ------------------------------- | ----------------------- | ------------- | -- |
// | 1   | Arithmetic Operators            | `+  -  *  /  %`         |               |    |
// | 2   | Relational Operators            | `==  !=  >  <  >=  <=`  |               |    |
// | 3   | Logical Operators               | `&&                     |               | !` |
// | 4   | Assignment Operators            | `=  +=  -=  *=  /=  %=` |               |    |
// | 5   | Increment/Decrement Operators   | `++  --`                |               |    |
// | 6   | Bitwise Operators               | `&                      | ^  ~  <<  >>` |    |
// | 7   | Conditional (Ternary) Operator  | `?:`                    |               |    |
// | 8   | Special/Miscellaneous Operators | `sizeof`, `,`, `&`, `*` |               |    |



// 2. Relational Operators
//    ==  !=  >  <  >=  <=

// 3. Logical Operators
//    &&  ||  !

// 4. Assignment Operators
//    =  +=  -=  *=  /=




// 7. Conditional Operator
//    ?:

// 8. Special Operators
//    sizeof, &, *, ,
// ```






// 1. Arithmetic Operators
//    +  -  *  /  %

// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;

//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter second number: ";
//     cin >> b;

//     cout << "\nAddition = " << a + b << endl;
//     cout << "Subtraction = " << a - b << endl;
//     cout << "Multiplication = " << a * b << endl;
   
//       cout << "Division = " << a / b << endl;

//     return 0;
// }








// 5. Increment/Decrement
//    ++  --
// ++a  -> First Increase, Then Use
// a++  -> First Use, Then Increase

// --a  -> First Decrease, Then Use
// a--  -> First Use, Then Decrease

// Pre  = Change First
// Post = Use First


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     int b=9;

//     cout << (++a)<< endl;
//     cout<<(a++)<<endl;
//     cout<<(--b)<<endl;
//     cout<<(b--)<<endl;
//     return 0;
// }





// 6. Bitwise Operators
//    &  |  ^  ~  <<  >>

// #include<iostream>
// using namespace std;

// int main()
// {
    
//     // int a = 5;
//     // int b = 3;

//     int a,b;
//     cin>>a>>b;
//     cout<<"AND = "<<(a&b)<<endl;
//     cout<<"OR = "<<(a|b)<<endl;
//     cout<<"NOR ="<<(~a)<<endl;
//     cout<<"XOR="<<(a^b)<<endl;
//     cout<<"left sift ="<<(a<<1)<<endl;
//     cout << "Right Shift = " << (a >> 1) << endl;

//     return 0;
// }





 

// break    -> Loop ko turant terminate karta hai.

// continue -> Current iteration skip karke
//             next iteration par jata hai.

// break Example:
// 1 2 3 4

// continue Example:
// 1 2 3 4 6 7 8 9 10





// Break

// #include<iostream>
// using namespace std;
// int main ()
// {
//   int i;
//   for(i=0;i<=10; i++)
//   {
//     if (i==5)
//     {
//       break;
//     }
//      cout<< i << " " <<endl;
//   }
//   return 0;
// }







// continue

#include<iostream>
using namespace std;
int main()
{
  int i;
  for(i=0; i<=20; i++){
    if(i==7){
      continue;
    }
    cout<< i << " " <<endl;
  }
  return 0;
}




