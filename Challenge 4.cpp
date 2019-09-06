/* Jack brought 400 hot dogs for a picnic. If they were contained in packages of 8 hot dogs each.
How many packages did he buy? */

#include <iostream>
using namespace std;

int main(int argc, const char **argv){
  int n = 400;
  int p = 8;
  int count = 0;
  while(n>=p){
    n -= p;
    // cout<<n<<endl;
    count ++;
  }
  cout<<"Total packages: "<<count<<endl;
  return 0;
}
