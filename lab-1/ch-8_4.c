#include<stdio.h>
main()
{
	int n,i;
	printf("Enter how many index you need in A & B array:- ");
	scanf("%d",&n);
	int a[n], b[n], c[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	    c[i]=a[i]+b[i];
	}
    for(i=0;i<n;i++)
    {
    	printf("%d is the addition of %d index of both A & B\n",c[i],i);
	}
}
