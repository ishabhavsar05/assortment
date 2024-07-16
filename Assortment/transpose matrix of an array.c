//Develop a Program to find the transpose matrix of a given 2D array.

#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,i,j;
	printf("enter the array's row &column size:");
	scanf("%d",&r);
	c=r;
	int arr[r][c];
	printf("enter array's elemenets:");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the transpose matrix of an array: \n");
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
