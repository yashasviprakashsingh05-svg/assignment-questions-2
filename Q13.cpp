#include <bits/stdc++.h>
using namespace std;
string rev(const string&s){ string t=s; reverse(t.begin(),t.end()); return t;}
int main(){ string s; if(!(cin>>s)) return 0; cout<<rev(s); }