// Reading Data Randomly to a Random-Access File
#include <stdio.h>
#include <stdlib.h>

struct clientData
{
    int account;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main()
{
    FILE *fptr = NULL;
    fptr = fopen("accounts.dat", "rb+");
    if (fptr == NULL)
    {
        printf("File couldnt open");
    }
    else
    {
        printf("%-6s%-16s%-11s%10s\n", "Account", "Last Name", "First Name", "Balance");
        while (!feof(fptr))
        {
            struct clientData client = {0, "", "", 0.0};
            fread(&client, sizeof(struct clientData), 1, fptr);
            // display record
            if (client.account != 0)
            {
                printf("%-6d%-16s%-11s%10.2f\n", client.account,
                       client.lastName, client.firstName, client.balance);
            }
        }
        fclose(fptr); // fclose closes the file
    }

    return 0;
}