#include<stdio.h>

main()
{
	int i,j,n1,n2,sum=0,avg=0;
	printf("enter value of row=");
	scanf("%d",&n1);
	printf("enter value of column=");
	scanf("%d",&n2);
	printf("\n");
	int a[n1][n2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter value a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	    printf("matrix\n");
		for(i=0;i<n1;i++)
	     {
	      	for(j=0;j<n2;j++)
	     	{
		     	printf("%d\t",a[i][j]);
		     	sum=sum+a[i][j];
	     	}
	     	printf("\n");
	     	avg=sum/n1+n2;
	     	
	     }
		 printf("\n");
	  
	     printf("avg=%d",avg);
	
}
