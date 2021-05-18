#include <stdio.h>
#include<string.h>

int main()
{
  	char str[100];
  	int vowels, consonants;
  	printf("input:");
  	gets(str);

  	for (int i = vowels = consonants = 0;str[i] != '\0';i++)
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
  			vowels++;
 		}
  		else
    		consonants++;

	}
    printf("\n\nVowels = %d", vowels);
	printf("\n\nConsonants = %d", consonants);
    printf("\n\n");

  	return 0;
}
