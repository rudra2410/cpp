#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("File_rudra.txt","w+");

    // fp = fopen("D:/girish sir/data stucture/file_name","w+");

    fprintf("fp ,"Welcome to skill code, decode your gusy");
    fputs("you are learn c language",fp);
    fputs("we are Enjoy thing",fp);
    dclose(fp);

    return 0;
}


