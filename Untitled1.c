#include<stdio.h>

int main()
{


int lineNumber = 3;

char str[100];

static const char filename[] = "file.txt";
FILE *file = fopen(filename, "r");
int count = 0;
if ( file != NULL )
{
    char line[256]; /* or other suitable maximum line size */
    while (fgets(line, sizeof line, file) != NULL) /* read a line */
    {
        if (count == lineNumber)
        {
            fgets(line,256, file);
            printf("%s",line);
            //use line or in a function return it
            //in case of a return first close the file with "fclose(file);"
        }
        else
        {
            count++;
        }
    }
    fclose(file);
}
else
{
    printf("2");
    //file doesn't exist
}
}
