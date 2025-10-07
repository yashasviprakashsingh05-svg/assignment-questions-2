#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i]; long long key; cin>>key; for(int i=0;i<n;i++) if(a[i]==key){ cout<<i; return 0;} cout<<"-1"; }