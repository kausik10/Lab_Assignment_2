#include<stdio.h>
int main()
{
	int n, a = 0, b = 1, c = 0, count = 3; //variable declaration
	printf("How many fibonacci do you want to generate?: "); //asking input from user
	scanf("%d", &n);
	printf("%d ", a);
	b+=a;
	printf("%d ", b);
	do{
		c=a+b;
		printf("%d ", c);
		a = b; // value of a is assigned to b i.e. new b = 1
		b = c; // value of b is assigned to c i.e. new c = 2
		++count;// increment of count by 1 
	} 
	while(count <= n);
	//loop is executed until count is less than or equal to n.	
	printf("\n");
	return 0;
	
}
