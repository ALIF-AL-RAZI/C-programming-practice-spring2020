#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char numbers[100];
  int myn[100];
  printf("Give me numbers..\n");
  fgets(numbers,100,stdin);
  const char s[2] = " ";
  char *token;

  token = strtok(numbers, s);
  int i=0;
  myn[i]=atoi(token);

  while( token != NULL )
  {
    i++;
    printf( " %s\n", token );
    token = strtok(NULL, s);
    myn[i]=atoi(token);
  }
  printf("You gave me: ");
  for (int j=0; j<i; j++){
    printf ("%d, ", myn[j]);
  }
  return(0);
}
