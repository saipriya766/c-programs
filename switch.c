#include<stdio.h>
int main()
{
	int vowel;
	printf("enter the character:");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':
		case 'A':
		printf("\n%c is vowel",vowel);
		break;
		case 'e':
		case 'E':
		printf("\n%c is vowel",vowel);
		break;
		case 'i':
		case 'I':
		printf("\n%c is vowel",vowel);
		break;
		case 'o':
		case 'O':
		printf("\n%c is vowel",vowel);
		break;
		case 'u':
		case 'U':
		printf("\n%c is vowel",vowel);
		break;
		default:
			printf(" sorry priya i am not a vowel");
		
	}
}
