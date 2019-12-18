/* f bytes free , u bytes used, delete o size and create n size, how many free size will remain? */

#include <iostream>
using namespace std;

int main(int argc, const char **argv){
    int f,u,o,n;
    cin>> f >> u >> o >> n;
    int tot = f + u;
    int delSize = u - o;
    delSize += n;
    cout<<"Free : "<<tot - delSize<<endl;
    return 0;
}

/*
    1000 = free
    500 = used
    1500 = total
    200 = delete
    100 = new allocation
    300 = after deletion
*/
