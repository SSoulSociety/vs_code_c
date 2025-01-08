#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");
    if (fptr == NULL)
    {
        printf("Data couldnt opened correctly\n");
    }
    else
    {
        int i = 10;
        fprintf(fptr, "Gokte ne var?", "%d var", i); // farkı dıgerlerınden format specifier kulalanbılıyoruz
        printf("Data was written to File  succesfully");
        fclose(fptr);
    }

    return 0;
}