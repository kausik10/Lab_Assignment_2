#include<stdio.h>
int main()
{
	int i = 2, n, count, p, sum = 0;  //variable declaration
	printf("Enter the number of prime numbers you want to print: "); //user input
	scanf("%d", &n); //storing the user input to integer n
	if (n >= 1){
		printf("\nFirst %d prime numbers are: ", n);
	} 
	// iteration of n prime numbers.
	// prints prime numbers from 2 to n.
	// i is the number to be checked in each iteration.
	for(count = 1; count <= n; i++)
	{
		//iteration to check p variable is a prime number or not
		for (p = 2; p < i; p++) //2 is the first prime number so iteration begins from 2
		{
			// if i modulous prime is equals to 0, the loop breaks
			if (i % p == 0)
			break;
		}	
		if ( p == i) // p is prime
		{
			printf("%d ", i);
			count++; //increasing the count of prime
			sum+=p; // adding each prime number from 2 upto n
		}
	}
	//Displays the continuous sum of prime numbers from 2 to n
	printf("\n\nThe sum of first %d prime numbers is: %d\n", n, sum); 
	return 0;
}
