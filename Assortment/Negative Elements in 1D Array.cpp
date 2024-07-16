//Develop a program that finds all the negative elements from a given 1D array.

#include<stdio.h>
#include<conio.h>

main()
{
	int size,i;
	printf("enter the array's size:");
	scanf("%d",&size);
	int arr[size];
    printf("enter the array's element:");
    for(i=0; i<size; i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("Negative elements from an Array:");
	for(i=0; i<size; i++)
	{
		if(arr[i]<0)
		{
			printf("%d",arr[i]);
		}
	}
	printf("\n");
}
