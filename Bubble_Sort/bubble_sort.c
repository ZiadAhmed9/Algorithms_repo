/*
 * bubble_sort.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad Ahmed
 */


#include <stdio.h>
#define array_size 5
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubblesort(int arr[],int size)
{
	for(int j=0;j<size-1;j++)
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i],&arr[i+1]);
		}
	}
}
void print(int arr[],int size)
{
	printf("{");
	for(int i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("}");
}


int main(void)
{
	int arr1[array_size]={3,2,8,4,1};
	bubblesort(arr1,array_size);
	print(arr1,array_size);

}
