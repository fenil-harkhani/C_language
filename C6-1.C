#include<stdio.h>
#include<conio.h>
/*
	Control structure
		- if
		- if else
		- ledder
		- nested
		- ternory
		- switch
	Condional / Relational operators :
		-  <, <=, >, >=, ==, !=
	Logical operators :
		-  &&, ||, !

		if(contion<s>)
		{
			//TRUE
			//Statement<s>
		}
		else if(condition<s>)
		{
			//TRUE
			//Statement<s>
		}
		.
		.
		.
		else
		{
			//FALSE
			//Statement<s>
		}

		24/2	== 0	Even
		47/2	== 1    Odd
*/
main()
{
	int a;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);

	if(a > 0)
	{
		printf("a is positive.");
	}
	else if(a == 0)
	{
		printf("a is nuteral.");
	}
	else
	{
		printf("a is negative.");
	}

	getch();
}