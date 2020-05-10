#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t-->0){
    int n;
    cin>>n;
    // scanf("%d\n", &n);
    int arr[n];
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }

    int max = -1, min = 11, cnt = 0;
    for(int i=1;i<n;++i){
      // arr[i-1] = 0;
      if(arr[i] - arr[i-1] <= 2){
        cnt++;
      }else{
        if(cnt <= min){
          min = cnt;
        }
        if(cnt >= max){
          max = cnt;
        }
        cnt = 0;
      }
    }
    if(cnt <= min){
      min = cnt;
    }

    if(cnt >= max){
      max = cnt;
    }
    cout<<min+1<<" "<<max+1<<endl;
  }
  return 0;
}
