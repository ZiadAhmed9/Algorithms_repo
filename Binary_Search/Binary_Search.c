/*
 * Binary_Search.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad Ahmed
 */




#include <stdio.h>

							////ANY occurance
//int binarysearch(int arr[],int n,int x)
//{
//	int start=0,end=n-1,mid;
//		while(start<=end)
//		{
//			mid=(start+end)/2;
//			if(x==arr[mid])		return mid;
//			else if(x<arr[mid])		end=mid-1;
//			else		start=mid+1;
//		}
//		return -1;
//}
//
						////first occurance
//
//int findfirst(int arr[],int n,int x)
//{
//	int start=0,end=n-1,mid,result=-1;
//	while(start<=end)
//	{
//		mid=(start+end)/2;
//		if(x==arr[mid])
//		{
//			result=mid;
//			end=mid-1;
//		}
//		else if(x<arr[mid])
//		{
//			end=mid-1;
//		}
//		else
//		{
//			start=mid+1;
//		}
//
//	}
//	return result;
//}
//
//
//
					////last occurance
//
//
//int findlast(int arr[],int n,int x)
//{
//	int start=0,end=n-1,mid,result=-1;
//	while(start<=end)
//	{
//		mid=(start+end)/2;
//		if(x==arr[mid])
//		{
//			result=mid;
//			start=mid+1;
//		}
//		else if(x<arr[mid])
//		{
//			end=mid-1;
//		}
//		else
//		{
//			start=mid+1;
//		}
//
//	}
//	return -1;
//}
//
//
					////counting occurances by binary search
//
//
//int findcount(a,n,x)
//{
//	int first,last;
//	first=findfirst(a,n,x);
//	last=findlast(a,n,x);
//	return(last-first+1);
//
//}

//both first and last occurance

//int binarysearch(int arr[],int n,int x,int searchFirst)
//{
//	int start=0,end=n-1,mid,result=-1;
//	while(start<=end)
//	{
//		mid=(start+end)/2;
//		if(x==arr[mid]){
//			result=mid;
//		}
//		else if(searchFirst)
//		end=mid-1;
//		else
//		start=mid+1;
//	}
//	return result;
//}



  int main(void)
{
         // ENTER YOUR CODE HERE

}








