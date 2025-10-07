#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i]; long long key; cin>>key; int l=0,r=n-1; while(l<=r){ int m=l+(r-l)/2; if(a[m]==key){ cout<<m; return 0;} if(a[m]<key) l=m+1; else r=m-1;} cout<<"-1"; }