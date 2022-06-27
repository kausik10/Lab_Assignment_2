#include<stdio.h>
int main()
{
	char str[100];
	int i = 0, b, characters=0;
	printf("Enter a sentence to count for characrters: ");
	fgets(str, 100, stdin);
	while(str[i] != '\0' ){
		if(str[i]!= ' ' && str[i] != '\n' ){
			characters++;
		}
		i++;
	}
	printf("\nTotal characters: %d\n", characters);
	fclose(stdin);
	return 0;
}
