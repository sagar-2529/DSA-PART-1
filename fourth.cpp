#include<iostream>
    using namespace std;

int main(){
    int n;
     cin>> n;
     int i=1;
     char ch=65;
     while (i<=n){
        int j=1;
       
        while(j<=n){
            
            cout<< ch<<"  ";

          
            j=j+1;
            ch= ch+1;
        }
       
        i= i+1;
        cout<< endl;
     }
}