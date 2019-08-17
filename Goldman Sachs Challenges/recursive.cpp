#include <iostream>
using namespace std;

void func(int n);
int main(int argc, char const *argv[]) {
  func(10);
  return 0;
}

void func(int n){
  if(n==0){
    return;
  }

  cout<<n%2<<endl;
  func(n/2);
}
