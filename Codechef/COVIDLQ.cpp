#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, spaces=0, cnt=0;
    string res;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i){
      int elem;
      cin>>elem;
      v.push_back(elem);
    }

    while(v[cnt]!=1){
      cnt++;
    }

    for(int i=cnt+1;i<n;++i){
      spaces+=1;
      if(v[i]==1){
        if(spaces<6){
          res="NO";
          break;
        }else{
          spaces=0;
          res="YES";
        }
      }
    }

    cout<<res<<endl;
  }
}
