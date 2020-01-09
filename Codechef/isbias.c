#include <stdio.h>
#include <stdlib.h>
#define ll long long
int main(){
	ll n,q,l,r,cnt=0;
	int cnt1=0,cnt2=0;
	scanf("%llu",&n);
	scanf("%llu",&q);
	ll arr[n];
	int a[n];
	a[0]=0,a[1]=0;
	for(int i=0;i<n;++i){
		scanf("%llu",&arr[i]);
	}
	
	if(arr[1]>arr[0]){
		cnt=1;
	}else{
		cnt=0;
	}
	
	for(int k=2;k<n;++k){
		a[k]=a[k-1];
		if(arr[k]>arr[k-1]&&(cnt!=1)){
			a[k]++;
			cnt=1;
		}else if(arr[k]<arr[k-1]&&(cnt!=0)){
			a[k]++;
			cnt=0;
		}
	}
	
	while(q-->0){
		scanf("%llu",&l);
		scanf("%llu",&r);
		//if(l==0 && r==0 || l>n || r>n) exit(0);
		int fans=(a[r-1]-a[l])%2;
		if(fans==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
