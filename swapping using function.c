#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("a=%d b=%d",a,b);
	swap(a,b);
	
}
swap(int x,int y)
{
	int z=0;
	z=x;
	x=y;
	y=z;
	printf("a=%d b=%d",x,y);
}
