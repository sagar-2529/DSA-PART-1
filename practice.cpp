#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    bool isprime=1;
    while(n!=1){
        if(n%2==0){
            n= n/2;
        }
        else{
            isprime = 0;
            break;
        }
       }
    if(isprime ==0){
        cout<< " ok"<< endl;
    }
    else{
        cout<< " not ok"<< endl;
    }

}
