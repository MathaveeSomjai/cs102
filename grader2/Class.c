#include <stdio.h>
//ต้องแก้ ดูในgood noteได้
int main()
{	int n, k, t, x, p;
	int nub = 0;
	scanf("%d %d %d",&n, &k, &t);
	
	int i;
	
for(i = 0 ; i < n; i++)
	{ 	scanf("%d", &x);
		if(x>t)
			nub++;
	}
	
p = (n*100)/k;

if((n*100)%k != 0)
	p = p + 1;

if(nub>=p)
	printf("1\n");
else
	printf("0\n");

printf("%d",nub);
return 0;
	
}
