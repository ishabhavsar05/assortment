//Develop a Program to find the largest element from a given 2D array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	printf("Enter a size of Row:- ");
	scanf("%d",&r);
	int c;
	printf("Enter a size of colum:- ");
	scanf("%d",&c);
	int arr[r][c];
	int i;
	int j;
	printf("enter array's elements:");
	for(i=0; i<r; i++)
	{
		
		for(j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int max=arr[0][0];
	for(i=0; i<r; i++)
	{
	    for(j=0; j<c; j++)
	    {
           if(arr[i][j]> max)
		   {
                max=arr[i][j];		   	
 		   }		
	    }
	}
	printf("the largest elemenets is : %d\n",max);
 	getch();
}
