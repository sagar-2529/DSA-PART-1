#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int sum=0;
    int product=1;
    while(n){
        int a,b;
       a= n%10;
       sum=sum+a;
       product= product*a;
       n= n/10;
    }
    cout<< sum<<endl;
    cout<< product<< endl;
    cout<< "difference: "<< (product-sum)<< endl;
}