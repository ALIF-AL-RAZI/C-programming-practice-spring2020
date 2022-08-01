#include <stdio.h>
int main()
{
    FILE *fileA, *fileB;
    char str[1000];

    fileA=fopen("input.txt", "r");
    fileB=fopen("output.txt", "a");

    if((fileA!=NULL) && (fileB!=NULL))
    {
        printf("File found. Press ENTER to add the line in 'output.txt' file\n\n\n");
        fgets(str,1000, fileA);
        fprintf(fileB,"%s",str);
    }
    else
    {
        printf("File not found");
    }

    fclose(fileA);
    fclose(fileB);
    return 0;
}
