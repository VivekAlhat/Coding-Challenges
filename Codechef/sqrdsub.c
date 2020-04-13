#include <stdio.h>
typedef long long int ll;

int main(void){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,cnt=0,ans=0;
		scanf("%lld",&n);
		ll seq[n];
		for(int i=0;i<n;++i){
			scanf("%lld",&seq[i]);
		}
		
		for(int i=0;i<n;++i){
			ans=1;
			for(int j=i;j<n;++j){
				ans=ans*seq[j];
				if(ans%4==0||ans%2!=0){
					cnt++;
				}
			}
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
