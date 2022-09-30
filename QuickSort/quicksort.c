/*
 * quicksort.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad Ahmed
 */




#include<stdio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int partition(int arr[],int start,int last)
{
	int pivot=arr[last],pindex=start;
	for(int i=start;i<last-1;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(&arr[i],&arr[pindex]);
			pindex++;

		}
	}
	swap(&arr[pindex],&arr[last]);
	return pindex;
}

void quicksort(int arr1[],int first,int last)
{
	if(first<last)
	{
		int pindex=partition(arr1,first,last);
		quicksort(arr1,first,pindex-1);
		quicksort(arr1,pindex+1,last);
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
	int a[5]={1,6,5,3,2};
	quicksort(a,0,4);
	print(a,5);

}


