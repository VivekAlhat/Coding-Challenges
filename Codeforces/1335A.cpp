#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
    	ios_base::sync_with_stdio(true);
    	cin.tie(nullptr);
        ll n;
        int cnt=0;
        scanf("%lld",&n);
        cnt = (n-1)/2;
        printf("%d\n",cnt);
    }
    return 0;
}
