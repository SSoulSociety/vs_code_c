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
        fputs("Hello there", fptr);
        printf("Data was written to File ");
        fclose(fptr);
    }

    return 0;
}