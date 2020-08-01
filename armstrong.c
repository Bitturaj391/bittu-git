#include<stdio.h>
int main()
{
	int a,b,c,sum=0,d;
	printf("Armstrong number is the number that is equal to the sum of the cubes of its digits.\n");
	printf("enter the number upto which you want to find the armstrong number.\n");
	scanf("%d",&a);
	printf("following are the armstrong number\n");
	for(b=1;b<=a;b++)
	{
		c=b;
		while(c!=0)
		{
			d=c%10;
			sum=sum+d*d*d;
			c=c/10;
		}
		if(b==sum)
		printf("%d\n",b);
		sum=0;
	}
}