#include<stdio.h>


int main()
{	int n,rear=0,op;
	printf("Enter size of array");
	scanf("%d",&n);
	int q[n];
	
	while(1)
	{	printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit");
		scanf("%d",&op);
		switch(op)
		{
		case 1:	
			insertion();
		  	break;
		case 2:
			 deletion();
			break;
		case 3:
			display();
			break;
		default :
			printf("Error!!!!");
			
	
		}
	}
	
	
	return 0;
}
void insertion()
{
	if(rear==n)
	{
		printf("Overflow");
	}
	else
	{	
		scanf("%d",%q[rear]);
		rear++;
	}
}

void deletion()
{	int i;
	if(rear==front)
	{
		printf("Underflow");
	}
	else
	{
		for(i=0;i<rear;i++)
		{
			q[i]=q[i+1];
		}
	//rear++;
	}
}

void display()
{	int i;
	for(i=0;i<rear;i++)
	{
		scanf("%d",&q[i]);
	}
}

