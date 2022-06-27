#include<stdio.h>
int main()
{
	int num, i = 1, fact = 1; //variable declaration
	printf("Enter a number you want to perform factorial: "); //asking input from user
	scanf("%d", &num);
	//loops until i equals num
	for(i = 1; i<=num; i++)
	{
		fact *=i;
	}
	printf("\nThe factorial of given number is: %d\n", fact);
	return 0;
}
