#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int i=1;

    while(i<=n){
        int space=n-i;
        while(space){
            cout<< " ";
            space= space-1;
        }
        int star=i;
        int no=1;
        while(star){
            cout << no;
            no= no+1;
            star= star-1;
        }
        int loop= i-1;
        int no2=1;
        while(loop){
            cout<< no2;
            no2= no2+1;
            loop = loop-1;

        }
        i= i+1;
        cout<< endl;
    }
}