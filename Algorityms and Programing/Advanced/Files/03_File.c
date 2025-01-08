#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char data[50];
    fptr = fopen("data.txt", "w");
    if (fptr == NULL)
    {
        printf("Data couldnt opened correctly\n");
    }
    else
    {
        printf("Enter a sentence");
        gets(data);
        fprintf(fptr, "Your sentence is: %s", data);
        printf("Data was written to File  succesfully");
        fclose(fptr);
    }

    return 0;
}