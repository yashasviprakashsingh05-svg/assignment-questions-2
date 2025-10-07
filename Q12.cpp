#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; if(n==0){cout<<0; return 0;} long long a=1,b=1; for(int i=2;i<=n;i++){ long long c=a+b; a=b; b=c; } cout<<b; }