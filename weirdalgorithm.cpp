#include<iostream>

using namespace std;


int main() {
   long  a;
cin>>a;
cout<<a<<" ";
for(long i=a; i > 1;){
    if(i%2==0){
        i=i/2;
        cout<<i<<" ";
    } else {
        i = i*3 + 1;
        cout<<i<<" ";
    }
}
return 0;
}