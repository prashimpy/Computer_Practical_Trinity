 // wap to count total number of digits, vowels and consonants in a string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0, digit=0, vowel=0, consonant=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9' ){
            digit++;
        }
        else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }
        else{
            consonant++;
        }
        i++;
    }
    printf("\nThe total number of digits in the string is: %d", digit);
    printf("\nThe total number of vowels in the string is: %d", vowel);
    printf("\nThe total number of consonants in the string is: %d", consonant);

    printf("\n \n Author: \t Prashim Timsina ");
    printf("\n Program: \t Count digits, vowels and consonants in string. \n \n");
    return 0;

}
