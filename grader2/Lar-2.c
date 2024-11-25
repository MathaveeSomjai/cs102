#include <stdio.h>

int main()
{
	int n, maxnum, maxnub = 1, nub = 1, i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1; i<=n; i++)
	{
		if(arr[i] == arr[i-1])
		nub++;
	else 
	{
		if(nub>=maxnub)
		{
			maxnub = nub;
			maxnum = arr[i-1];
		}
		nub = 1;	
	}
	}
	
	printf("%d %d",maxnum ,maxnub);
	
	return 0;
}
