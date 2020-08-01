#include<stdio.h>
int main()
{
	float a,b,c,d,e,result,physics,chemistry,maths,english,hindi,total,percentage;
	int n,i,j,m;
	char choice,ch;
	printf("all in one app.........By bittu raj\n");
	printf("what do you wnat to do? enter the first letter of that application in capital letter.\n");
	printf("enter the R for result calculator.\n");
	printf("enter the E for knowing the entered number is either even or odd.\n");
	printf("enter P for knowing the entered number is prime or not.\n");
	printf("enter G for knkowing the greater number between two entered number.\n");
	printf("enter C for the general calculator.\n");
	scanf("%c",&choice);
	if(choice==82)
	{
	printf("enter the marks of physics\n");
	scanf("%f",&physics);
	printf("enter the marks of chemistry\n");
	scanf("%f",&chemistry);
	printf("enter the marks of maths\n");
	scanf("%f",&maths);
	printf("enter the marks of english\n");
	scanf("%f",&english);
	printf("enter the marks of hindi\n");
	scanf("%f",&hindi);
	total=(physics+chemistry+maths+english+hindi);
	printf("total marks =%f\n",total);
	percentage=(total/500)*100;
	printf("percentage=%f\n",percentage);
   	if(percentage>85)
	{
	printf("grade=A\n");
    }
	else if(percentage>70)
	{
	printf("grade=B\n");
	}
	else if(percentage<70)
	printf("grade=C\n");
	}
	else if(choice==67)
	{
	printf("press A for addition\n");
	scanf("%c",&ch);
	printf("press S for substraction\n");
	printf("press M for multiplication\n");
	printf("press D for division\n");
	scanf("%c",&ch);
	if(ch==65)
	{
	printf("enter zero for those which is not available to you\n");
	printf("enter the first number.\n");
	scanf("%f",&a);
	printf("enter the second number.\n");
	scanf("%f",&b);
	printf("enter the third number.\n");
	scanf("%f",&c);
	printf("enter the fourth number.\n");
	scanf("%f",&d);
	printf("enter the fifth number.\n");
	scanf("%f",&e);
	result=a+b+c+d+e;
	printf("sum=%f\n",result);
	}
	else if(ch==68)
	{
	printf("enter the dividend.\n");
	scanf("%f",&a);
	printf("enter the divisor\n");
	scanf("%f",&b);
	result=a/b;
	printf("your result=%f\n",result);
	}
	else if(ch==83)
	{
	printf("enter the greater number.\n");
	scanf("%f",&a);
	printf("enter the smaller number.\n");
	scanf("%f",&b);
	result=(a-b);
	printf("difference=%f\n",result);
	}
	else if(ch==77)
	{
	printf("NOTE:-IF ANY ONLY TWO NUMBER THEN PUT ONE FOR THIRD AND FOURTH.\n");
	printf("enter the first number.\n");
	scanf("%f",&a);
	printf("enter the second number\n");
	scanf("%f",&b);
	printf("enter the third number.\n");
	scanf("%f",&c);
	printf("enter the fourth number.\n");
	scanf("f",&d);
	result=a*b*c*d;
	printf("product=%f\n",result);
	}
	}
	else if(choice==69)
	{
	printf("enter the number to know that is even or odd.\n");
	scanf("%f",&a);
	if(a/2==0)
	{
	printf("the number is even.\n");
	}
	else
	{
	printf("the entered number is odd number.\n");
	}
	}
	else if(choice==71)
	{
	printf("enter the first number.\n");
	scanf("%f",&a);
	printf("enter the second number.\n");
	scanf("%f",&b);
	if(a>b)
	{
	printf("first number is greater than second");
	}
	else
	{
	printf("second number is greater than the first number.\n");
	}
	}
	if(choice==80)
	{
	printf("enter the number to know wheather that number is prime or not.\n");
	scanf("%f",&n);
	for(int i=2;j<=n-1;i++)
	{
	if(n/i==0)
	{
	printf("the number is not prime");
	m=1;
	break;
	}
	}
	if(m==0)
	{
	printf(" given number is prime.\n");
	}
	}
}