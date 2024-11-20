#include <stdio.h>

int main()
{
	int a, b, d, nub=0, i;
	
	scanf("%d %d %d",&a, &b, &d);
	 for(i=a; i<=b; i++)
	 {
	 	if(i%d == 0)
	 	nub++;
	 }
	
	printf("%d",nub);
	return 0;
}
