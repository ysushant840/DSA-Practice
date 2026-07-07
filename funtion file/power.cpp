#include<iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;

    int ans =1;
    for(int i=1;i<=b; i++){
        ans=ans*a;
    }
    cout<<" ans is "<< ans << endl;
    return 0;



    int c,d;
    cin>>c>>d;
    int ams=1;
    for(int i=1;i<=d; i++){
        ans = ans *c;

    }
    cout<<" ans is "<< ans << endl;
    return 0;
}