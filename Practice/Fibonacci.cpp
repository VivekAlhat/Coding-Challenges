#include <iostream>
using namespace std;

int main(){
  int limit;
  cin>>limit;
  int fib[limit];
  fib[0] = 0;
  fib[1] = 1;
  for(int i=2;i<limit;++i){
    fib[i] = fib[i-1] + fib[i-2];
  }

  for(auto i: fib){
    cout<<i<<" ";
  }
  cout<<"\n";
  return 0;
}
