#include<stdio.h>

main()

{
	int j[100],i,n;

	printf("Enter Array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("j[%d]=",i);
		scanf("%d",&j[i]);
	}
	printf("\n*****\n");
	for(i=0;i<n;i++)
	{
		if(j[i]<0)
		printf("%d\n",j[i]);
	}
}
