#include<iostream>
#include<algorithm>
using namespace std;

int main() {
long t,k=0;
cin>>t;
long a[100];
for(long i=0;i<t;++i){
    cin>>a[i];
}
sort(a,a+t);
for (long i = 0; i < t;)
{
auto r = equal_range(a,a+t,a[i]);
if(r.second - r.first == 1) {
k++;
i++;
} else {
    i = i + r.second - r.first;
    k++;
}

}
cout<<k;
}