#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;i++) cin>>a[i]; long long target; cin>>target; auto it=lower_bound(a.begin(),a.end(),target); if(it==a.end()) cout<<"-1"; else cout<<*it; }