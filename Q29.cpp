#include <bits/stdc++.h>
using namespace std;
int main(){int n,m; if(!(cin>>n>>m)) return 0; vector<vector<int>>a(n,vector<int>(m)); for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j]; int target; cin>>target; int r=0,c=m-1; while(r<n && c>=0){ if(a[r][c]==target){ cout<<"true"; return 0;} if(a[r][c]>target) c--; else r++; } cout<<"false"; }