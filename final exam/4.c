#include<stdio.h>
#include<string.h>
void toLowercase(char *s)
{
    int i;
    for(i=0;i<=strlen(s);i++)
    {
	    if((s[i]>=65) && (s[i]<=92))
	    {
		s[i]=s[i]+32;
	    }
    }
    puts(s);
}
int main(void)
{
    char string[100];
    printf("Enter a string: ");
    gets(string);
    printf("\n\nLowercase letters: ");
    toLowercase(string);
    return 0;
}
