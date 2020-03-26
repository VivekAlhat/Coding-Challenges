#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;
  cin>>t;
  while(t-->0){
    ll n, c, a;
    ll sum=0;
    cin>>n>>c;
    for(int i=0;i<n;i++){
      cin>>a;
      sum += a;
    }
    if(sum<=c){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
