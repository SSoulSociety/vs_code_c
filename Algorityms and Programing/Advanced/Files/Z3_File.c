// Creating a Random-Access File

#include <stdio.h>
#include <stdlib.h>

struct clientData
{
    int account;
    char lastname[15];
    char firstname[10];
    double balance;
};

int main()
{
    FILE *fptr = NULL;
    fptr = fopen("accounts.dat", "wb");

    if (fptr == 0)
    {
        printf("File couldnot open");
    }
    else
    {
        struct clientData blankClient = {0, "", "", 0.0};
        // output 100 blank records to file
        for (int i = 0; i < 100; ++i)
        {
            fwrite(&blankClient, sizeof(struct clientData), 1, fptr);
        }
        fclose(fptr);
    }
    return 0;
}