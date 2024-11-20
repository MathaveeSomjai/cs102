#include <stdio.h>

int main()
{
	int a, b, nub=0, i;
	
	scanf("%d %d",&a, &b);
	 for(i=a; i<=b; i++)
	 {
	 	if(b%i == 0)
	 	nub++;
	 }
	
	printf("%d",nub);
	return 0;
}
