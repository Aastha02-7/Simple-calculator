#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ch;
	float f;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("\nMenu:\n");
	printf("1	Addition\n");
	printf("2	Substraction\n");
	printf("3	Multiplication\n");
	printf("4	Division\n");
	printf("Enter your choice[1-4]:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\nSum= %d",c);
			break;
		case 2:
			c=a-b;
			printf("\nSubs= %d",c);
			break;
		case 3:
			c=a*b;
			printf("\nMul= %d",c);
			break;
		case 4:
			f=a/b;
			printf("\nDiv= %d",f);
			break;
		default:
			printf("You have entered a invalid choice");
	}
	return 0;
}
