#include <stdio.h>
#include <stdlib.h>
#define ll long long
int main(){
	ll n,q,l,r;
	scanf("%llu",&n);
	scanf("%llu",&q);
	if(n<2) exit(0);
	ll arr[n];
	for(int i=0;i<n;++i){
		scanf("%llu",&arr[i]);
	}
	for(int j=0;j<q;++j){
		int cnt1=0,cnt2=0;
		scanf("%llu",&l);
		scanf("%llu",&r);
		if(l==0 && r==0 || l>n || r>n) exit(0);
		for(int i=l;i<r;++i){
			if(arr[i]>arr[i-1]){
				cnt1++;
			}else{
				cnt2++;	
			}
		}
		if(cnt1==cnt2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
