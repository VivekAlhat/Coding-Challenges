/* Chef was cooking something special which required exact 200 ml water but he does not have 200 ml cup.
Chef has 500 ml and 300 ml cup but the dish requires only 200 ml water. */

#include <iostream>
using namespace std;

int main(int argc, const char **argv){
  int A = 500;
  int B = 300;
  int req = A - B;
  cout<<req<<endl;
  return 0;
}
