#include <stdio.h>

main()
{
	int a[100],b[100],c[200],i,n1,n2,k;
	printf("enter size of arry A:");
	scanf("%d",&n1);
	
	printf("enter A arry value : \n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	k=i;
	printf("enter size of arry B:");
	scanf("%d",&n2);
	
	printf("enter B arry value : \n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("merge arry value =\n");
	for(i=0;i<n2+n1;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
    }
}
