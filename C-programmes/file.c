#include <stdio.h>
int main ()
{
    FILE *in;//, //*out;
    //int n;
    //char a;
    in = fopen("in.txt", "r");


    if (in!=NULL)
    {
        printf("file found");
        //fscanf(in, "%s", &a);
        //fprintf(in, "%s", &a);
        //fscanf(in, "%d", &n);
        //fprintf(in, "%d", &n);
    }
    else printf("file error");

   // fclose(in);

    return 0;
}
