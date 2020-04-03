#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    ll n, mod=1000000007, profit=0;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i){
      ll elem;
      cin>>elem;
      v.push_back(elem);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i=0;i<v.size();++i){
      if((v.at(i)-i)>0){
        profit += v.at(i)-i;
      }
    }

    cout<<profit%mod<<endl;

    v.clear();
  }
  return 0;
}
