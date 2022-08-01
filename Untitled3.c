#include <stdio.h>

int main()
{
    FILE* file = fopen("file.txt", "r");
    char e[256];
    int i = 0;
    while (fgets(e, sizeof(e), file)) {
        i++;
        if(i == 4 )
        {
            printf("%s", e);
        }
    }

    fclose(file);

    return 0;
}
