#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rday,rmonth,ryear,eday,emonth,eyear;
    cin>>rday>>rmonth>>ryear;
    cin>>eday>>emonth>>eyear;
    int fine = 0;
    if(rday && eday <=31 && emonth && rmonth <=12 && ryear && eyear <=3000){
            if(rday<=eday || ryear<eyear){
                fine = 0;
            }else if(rday>eday && rmonth<=emonth && ryear<=eyear){
                fine = 15 * (rday-eday);
            }else if(rday>eday && rmonth>emonth && ryear<=eyear){
                fine = 500 * (rmonth-emonth);
            }
    }
    if(ryear>eyear){
    	fine=10000;
    }
    cout<<fine<<endl;
    
    return 0;
}

