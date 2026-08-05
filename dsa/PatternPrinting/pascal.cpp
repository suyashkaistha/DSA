#include<iostream>
#include<cmath>
using namespace std;
int fac(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
        fac*=i;
    }return fac;
}
int ncr(int x,int y){
    return fac(x)/(fac(y)*fac(x-y));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }cout<<endl;
    }
}