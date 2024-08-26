#include<iostream>
    using namespace std;

    int main(){
        int i=1;
        int n;
        cin>> n;
       
        while(i<=n){
             char ch= ('A'+i-1);

                int j=1;
            while(j<=n){

                cout<< ch<< "  ";
                j= j+1;
                    ch = ch+1;

            }
         
             cout<< endl;
             i=i+1;
        }

    }