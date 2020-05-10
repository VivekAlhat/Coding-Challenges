#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// your code goes here
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  scanf("%lld",&t);
  while(t-->0){
    ll x, y, l, r, ans, res, tmpvl=0;
    scanf("%lld%lld%lld%lld", &x, &y, &l, &r);
    for(ll i = l; i<r; i++){
      res = (x & i) * (y & i);
      if(res>tmpvl){ // Maxmimizing the result
        tmpvl = res;
        ans = i;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
