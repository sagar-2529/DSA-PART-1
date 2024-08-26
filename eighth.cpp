#include<iostream>
using namespace std;

int main(){
    int n;
     cin>> n;
     int i=1;
     while(i<=n){
        int loop1= n-i+1;
        int no=1;
        while(loop1){
            cout<< no;
            no = no+1;
            loop1 = loop1-1;

        }
        int loop2=2*i-2;
        while(loop2){
            cout<< "*";
            loop2= loop2-1;
        }
        int loop3= n-i+1;
        int n02= n-i+1;
        while(loop3){
            cout<< n02;
            n02 =n02-1;
            loop3=loop3-1;


        }
        i=i+1;
        cout<< endl;
     }
}