#include <stdio.h>
 int main()
 {
 	int arr[]={1,5,2,4,8};
 	BubbleSort(arr);
 	printf("Sorted Array:\n");
 	printArray(arr);
 return 0;	
 }
 int BubbleSort(int arr[])
 {
 	int i,j,temp=0;
 	for(j=0;j<5;j++)
 {
	for(i=0;i<5;)
 	{
 	if(arr[i]>arr[i+1])
 	{
 		temp=arr[i];
 		arr[i]=arr[i+1];
 		arr[i+1]=temp;
	}
	else{
		i++;
	}
	}
 }
 }
 int printArray(int arr[])
 {
 	int i;
 	for(i=0;i<6;i++)
 	{
 		printf("%d",arr[i]);
	}
 }
 
