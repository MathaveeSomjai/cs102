#include <stdio.h>

int main()
{
	int a, b, nub=0, i, j;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	 for(i=0; i<a; i++)
	 {
	 	for(j=1; j<=b; j++)
	 	{
	 		if(j%2 == 0)
	 		printf("#");
	 		else
	 		printf("@");
		 }
		 printf("\n");
	 }
	
	return 0;
}
