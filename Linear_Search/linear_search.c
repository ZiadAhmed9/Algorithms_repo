/*
 * linear_search.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad Ahmed
 */




#include <Stdio.h>

#define n 5
int linearsearch(int arr[],int size,int x)
{
	for(int i;i<size;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	setbuf(stdout,NULL);
	int arr1[n]={4,2,3,1,6},search;
	printf("please the number you want to search for");
	scanf("%d",&search);
	int result=linearsearch(arr1,n,search);
	printf("the index of the character you want is %d",result);

}
