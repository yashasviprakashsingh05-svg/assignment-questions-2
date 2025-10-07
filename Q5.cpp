#include <bits/stdc++.h>
using namespace std;
int main(){int n; if(!(cin>>n)) return 0; vector<long long>a(n); for(int i=0;i<n;i++)cin>>a[i]; for(int i=1;i<n;i++) if(a[i]<a[i-1]){ cout<<"false"; return 0;} cout<<"true"; }