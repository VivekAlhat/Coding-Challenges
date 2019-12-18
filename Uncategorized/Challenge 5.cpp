/* Following are the scores 66,57,54,53,64,52 and 59.
Find the best score using bubble sort. */

#include <iostream>
using namespace std;
#define LIMIT 7
int main(int argc, const char **argv){
    int arr[LIMIT] = {66,57,54,53,64,52,59};
    int temp;
    for(int i = 0; i < LIMIT-1 ; i++){
        for (int j = 0; j < (LIMIT - i); j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<arr[LIMIT-1]<<endl;
    return 0;
}
