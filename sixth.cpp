#include<iostream>
using namespace std;

 int main(){
    int n;
    cin>> n;
    int i=1;
    int no=1;
   while(i<=n){
      int space = n-i;
    while(space){
        cout<< " ";
        space =space-1;

    }
    int star= i;
    
    while(star){
        cout<<no;
        no=no+1;
      star= star-1;
    }
  
    cout<< endl;
    i=i+1;
   }


 }
