//Calculator (add,sub,multi,div)

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,add,sub,m;
	float d;
	clrscr();
	printf("Enter 1st value: ");
	scanf("%d",&a);
	printf("Enter 2nd value: ");
	scanf("%d",&b);

	add = a + b;
	sub = a - b;
	m = a * b;
	d = a / b;

	printf("\nAddition of %d and %d is \t%d + %d = %d",a,b,a,b,add);
	printf("\nSubtraction of %d and %d is \t%d - %d = %d",a,b,a,b,sub);
	printf("\nMultiplication of %d and %d is \t%d * %d = %d",a,b,a,b,m);
	printf("\nDivision of %d and %d is \t%d / %d = %.2f",a,b,a,b,d);

	getch();
}
