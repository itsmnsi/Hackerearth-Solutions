#include<stdio.h>
int main()
{
	int cost_green,cost_purple,N,i,j;
	int T;
	int a[100][100];
	scanf("%d",&T);
	while(T--)
	{
        int sum1 = 0;
		int sum2 = 0;	   
		scanf("%d %d ",&cost_green,&cost_purple);
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
		   for(j=0;j<2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<N;i++)
		{
			if(a[i][0]==1)
			{
				sum1 = sum1 + cost_green;
				sum2 = sum2 + cost_purple;
			}
			if(a[i][1]==1)
			{
				sum1 = sum1 + cost_purple;
				sum2 = sum2 + cost_green;
			}
		}
		if(sum1>sum2)
		{
			printf("%d",sum2);
		}
		else
		{
			printf("%d",sum1);
	    }
		printf("\n");
 
	}
	return 0;
}

