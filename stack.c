#include<stdio.h>

int main()
{int top=0,n,op,i;
printf("Size of stack");
scanf("%d",&n);
int stack[n];

	while(1)
	{
	printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1://insertion
		if(top==n)
		{
			printf("Overflow");
		}
		else
		{
			scanf("%d",&stack[top]);
		}
		top++;
		break;
		
		case 2://deletion
			if(top==0)
			{
				printf("Underflow");
			}
			else
			{
				int val=stack[n-1];
				top=top-1;
			}
			
			break;
		
		case 3://display	
			for(i=0;i<n;i++)
			printf("%d =>",stack[i]);
			
			break;
		
		default:
		printf("Error!!!!!!!");
	}
	}
	return 0;
}
