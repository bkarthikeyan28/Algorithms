#include<stdio.h>
#include<math.h>
int main()
{
    int t,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		printf("%d\n",x*(4*x-3));
    }
    return 0;
}

