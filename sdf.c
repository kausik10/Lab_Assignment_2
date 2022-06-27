#include<stdio.h>
int main()
{
	char str[100];
	int i, b, characters, words = 1;
	printf("Enter a sentence to count for characrters: ");
	fgets(str, 100, stdin);
	for(i=0;str[i] != '\0'; i++){
		if(str[i]!= ' '){
			characters++;
		}
		else if(str[i] == ' ' || str[i] != '\n' || str[i] != '\t'){
			words++;
		}
	}
	printf("\nTotal words: %d", words);
	printf("\nTotal characters: %d\n", characters - 1);

	return 0;
}
