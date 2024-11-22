#include <stdio.h>

int main()
{
	int n, max, nub = 1, i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		
		if(i==0)
			max = arr[i];
		
		else if(max<arr[i])
		{
			max=arr[i];
			nub=1;
		}
		
		else if(max == arr[i])
			nub++;		
		
		
	}
	
	printf("%d %d",max ,nub);
	
	return 0;
}
