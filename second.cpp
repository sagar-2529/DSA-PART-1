#include <iostream>
using namespace std;

int main(){
    int n;
    int i=2;
    cin>> n;

    int sum=0;
    while( i<=n){
        if (i%2==0){
        sum= sum+i;

        i= i+2;
        }
           
    }
     cout<< "sum is : "<< sum <<endl;

   
}