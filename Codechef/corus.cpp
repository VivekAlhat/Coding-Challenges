#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin>>t;
  while(t-->0){
    ll n, q, cnt=0, c;
    cin>>n>>q;
    string s;
    cin>>s;
    int len = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char arr[len];
    for(int i=0; i<len; ++i){
      arr[i] = s[i];
    }
    unordered_map <char, int> m;
    for(auto j: arr){
      m[j] = m[j] + 1;
    }

    while(q--){
      cin>>c;
      for(auto it: m){
        if(c - it.second < 0){
          cnt += (it.second - c);
        }
      }
      cout<<cnt<<endl;
      cnt = 0;
    }
  }
  return 0;
}
