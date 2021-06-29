#include<iostream>
 using namespace std;

typedef long long ll;
const int mxn = 2e5;
 int main() {
ll n;
ll ar[mxn],sum=0;
cin>>n;

for(ll i=0;i<n-1;++i){
    cin>>ar[i];
    sum = sum + ar[i];
}
ll rsum = n*(n+1)/2;

ll num = rsum - sum;

cout<<num;

 }