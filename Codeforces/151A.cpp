#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int t = (k*l)/nl;
	int limes = c * d;
	int salt = p/np;
	if(t<limes && t<salt){
		cout<<t/n<<endl;
	}else if(limes<t && limes<salt){
		cout<<limes/n<<endl;
	}else{
		cout<<salt/n<<endl;
	}
	return 0;
}
