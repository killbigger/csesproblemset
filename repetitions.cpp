#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

const int  MAX_LEN = 1e6;
#define  ll long long
int main() {
string str;
cin>>str;
char prev = 'A';
int c = 0;
int ans = 0;
for(char d:str){
    if(d==prev){
        c=c+1;

        ans = max(c,ans);
    } else {
    prev=d;
    c=1;
    }
}
cout<<ans;
}

