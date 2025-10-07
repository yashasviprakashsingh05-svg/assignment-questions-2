#include <bits/stdc++.h>
using namespace std;
int main(){int n,m; if(!(cin>>n>>m)) return 0; vector<vector<long long>>a(n,vector<long long>(m)); for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j]; long long target; cin>>target; for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(a[i][j]==target){ cout<<i<<" "<<j; return 0;} cout<<"-1 -1"; }