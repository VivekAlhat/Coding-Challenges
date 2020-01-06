#include<stdio.h>
#define A ((i-ptr>=0)&&(j-ptr>=0)&&(i+ptr<n)&&(j+ptr<m))
#define B arr[i+ptr][j]==arr[i-ptr][j]&&arr[i][j+ptr]==arr[i][j-ptr]
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int arr[n][m];
	    int cnt=0;
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<m;++j)
	        {
	            scanf("%d", &arr[i][j]);
	        }
	    }
	    
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<m;++j)
	        {
	             int ptr=1;
	             while(A && B){
	             	ptr = ptr+1;
	             }
	             cnt = cnt+ptr;
	        }
	    }
	    printf("%d",cnt);
	    printf("\n");
	}
	return 0;
}
