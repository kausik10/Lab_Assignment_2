#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    int  i = 1, space = 0, numchar;
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    while (i < strlen(sentence)){
        i++;
        if(sentence[i] == ' ' || sentence[i] == '\n'){
            space++;
        }
    }
    numchar = (int)strlen(sentence)  - space;
    printf("The total numebr of characters without space si: %d\n", numchar);
    return 0;
}
