#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        scanf("%lld",&t);
        while(t--) {
                ll n, lim;
                scanf("%lld",&n);
                if(n<=4) {
                        printf("%d\n", 1);
                        printf("%lld ", n);
                        for(int i=0; i<n; ++i) {
                                printf("%d ", i+1);
                        }
                        printf("\n");
                }else{
                        lim = 4;
                        ll ans = n/2;
                        printf("%lld\n", ans);
                        printf("%d %d %d %d\n",3,1,2,3);
                        while(lim<n) {
                                if ((n-lim)>=1) {
                                        printf("%d %lld %lld\n",2,lim,lim+1);
                                        // cout<<2<<" "<<lim<<" "<<lim+1<<endl;
                                        lim = lim+2;
                                }
                        }
                        if(n%2==0) {
                                printf("%d %lld\n", 1,n);
                        }
                }
        }
        return 0;
}
