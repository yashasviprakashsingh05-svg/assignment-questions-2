#include <bits/stdc++.h>
using namespace std;
int main(){int n; long long target; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;i++)cin>>a[i]; cin>>target; unordered_map<long long,int>m; for(int i=0;i<n;i++){long long need=target-a[i]; if(m.count(need)){ cout<<m[need]<<" "<<i; return 0;} m[a[i]]=i;} cout<<"-1 -1";}