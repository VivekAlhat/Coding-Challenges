#include<bits/stdc++.h>
using namespace std;

int main(int argc,const char** argv){
	int t,n,x,y;
	cin>>t;
	while(t--){
		cin>>n>>x>>y;
		if(x<n&&x%y!=0){
			for(int i=0;i<n;++i){
				if(i%x==0&&i%y!=0){
					cout<<i<<endl;
				}
			}
		}
		else{
			break;
		}
	}
	return 0;
}
