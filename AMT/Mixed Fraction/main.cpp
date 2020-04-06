#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  freopen("mixin.txt","r",stdin);
  freopen("mixout.txt","w",stdout);

  ll n,d;
  cin>>n>>d;

  ll rem = n%d;
  ll quo = n/d;

  if(rem!=0){
    cout<<quo<<" "<<rem<<"/"<<d<<endl;
  }else{
    cout<<quo<<endl;
  }
  return 0;
}
