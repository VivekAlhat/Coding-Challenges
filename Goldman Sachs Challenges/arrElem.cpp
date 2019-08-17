#include <iostream>
using namespace std;
const int MAX = 50;

int main(int argc, const char *argv[]) {
  int n,k;
  int flag=0;
  int arr[MAX];
  cin>>n;
  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }
  cin>>k;

  //result
  for(int i=0; i<n; i++){
    if(arr[i] == k){
      flag = 1;
      break;
    }
    else{
      flag = 0;
    }
  }

  if(flag != 0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  cout<<endl;
  return 0;
}
