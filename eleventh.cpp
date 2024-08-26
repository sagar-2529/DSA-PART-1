#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a,i=0,ans=0,b;
    while(n!=0){
        a= n%10;
        ans= ans +(pow(2,i)*a);
        n= n/10;
        i=i+1;

    }
    cout<< ans;
}