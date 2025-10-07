#include <bits/stdc++.h>
using namespace std;
int main(){int r,c; if(!(cin>>r>>c)) return 0; long long bestSum=LLONG_MIN; int bestRow=0; for(int i=0;i<r;i++){ long long s=0; for(int j=0;j<c;j++){ long long v; cin>>v; s+=v;} if(s>bestSum){bestSum=s; bestRow=i;} } cout<<bestRow<<" "<<bestSum; }