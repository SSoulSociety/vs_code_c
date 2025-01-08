#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPtr;

    fPtr = fopen("data.txt", "w");
    if (fPtr == NULL)
    {
        printf("File coudlnt open correctly");
    }
    else
    {
        printf("File opened corretly\n");
        putc('L', fPtr);
        putc('A', fPtr);
        putc('L', fPtr);
        putc('E', fPtr);
        printf("Date has written to file\n");
        fclose(fPtr);
    }

    return 0;
}