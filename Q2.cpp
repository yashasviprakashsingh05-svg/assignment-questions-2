#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; long long x=0; for(int i=0;i<=n;i++) x^=i; for(int i=0;i<n;i++){int v; cin>>v; x^=v;} cout<<x;}