#include <stdio.h>

int main()
{
    FILE *fp;

    char buff[500];

    fp = fopen("File_rudra.txt","r");

    while (fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s ",buff);
    }

    fclose(fp);

    return 0;
    
}

// EOF - end of file.