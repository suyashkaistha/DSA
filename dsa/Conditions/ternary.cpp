#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // (n%2==0)?cout<<"even":cout<<"odd";
    int a,b,c;
    cin>>a>>b>>c;
    (a>=b)?((a>=c)?cout<<"a is greatest":cout<<"c is greatest"):((b>=c)?cout<<"b is greatest":cout<<"c is greatest");
    
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     // (n%2 == 0) ? cout<<"Even" : cout<<"Odd";
//     cout<<((n%2 == 0) ? "Even" : "Odd");
// }