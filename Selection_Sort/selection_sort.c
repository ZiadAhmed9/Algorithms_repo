/*
 * code.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad Ahmed
 */

#include <stdio.h>
#define array_size 5
void print(int arr[],int size)
{
	printf("{");
	for(int i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("} \n");
}



//Ascending Order
void selectionSort(int arr[],int n)
{
	for(int j=1;j<n;j++)
	{
		int key=arr[j];
		int i=j-1;
		while(i>=0&&arr[i]>key)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
}

//Descending Order
//void selectionSort(int arr[],int n)
//{
//	for(int j=1;j<n;j++)
//	{
//		int key=arr[j];
//		int i=j-1;
//		while(i>=0&&arr[i]<key)
//		{
//			arr[i+1]=arr[i];
//			i=i-1;
//		}
//		arr[i+1]=key;
//	}
//}



int main(void)
{
	printf("Original: \n");
	int arr1[array_size]={5,4,2,3,1};
	print(arr1,array_size);
	printf("Sorted: \n");
	selectionSort(arr1,array_size);
	print(arr1,array_size);
}


