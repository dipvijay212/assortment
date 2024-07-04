#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],i,j,max=-32768,min=32768;
	printf("\nEnter Elements ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\n%d",&a[i][j]);
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
	}
	printf("\n maximum =%d\nMinimum =%d",max,min);
	
}
