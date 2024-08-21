#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        string r="";
        cin>>s;
        for(int i=0;i<n;i++){
          
          if(i<n&&(s[i]=='b' || s[i]=='c' ||s[i]=='d') && (s[i+1]=='a' ||s[i+1]=='e')){
            if((s[i+2]=='b' || s[i+2]=='c' || s[i+2]=='d') && (s[i+3]=='b' || s[i+3]=='c'|| s[i+3]=='d'  )){
              r=r+s[i]+s[i+1]+s[i+2]+'.';
              i=i+2;
            }else{
              r=r+s[i]+s[i+1]+'.';
              i=i+1;
            }
          }
        }
        cout<<r<<'\n';
    
    }
}
// 6
// 8
// bacedbab
// 4
// baba
// 13
// daddecabeddad
// 3
// dac
// 6
// dacdac
// 22
// dababbabababbabbababba
// output
// ba.ced.bab
// ba.ba
// dad.de.ca.bed.dad
// dac
// dac.dac
// da.bab.ba.ba.bab.bab.ba.bab.ba
https://onecompiler.com/html/42ptg24pg

