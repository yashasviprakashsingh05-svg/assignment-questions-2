#include <bits/stdc++.h>
using namespace std;
int main(){int n,m; if(!(cin>>n>>m)) return 0; vector<vector<long long>>a(n,vector<long long>(m)); for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j]; long long d1=0,d2=0; for(int i=0;i<n;i++){ d1+=a[i][i]; d2+=a[i][m-1-i]; } cout<<d1<<" "<<d2; }