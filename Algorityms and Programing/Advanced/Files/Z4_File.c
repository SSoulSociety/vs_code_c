// Writing Data Randomly to a Random-Access File
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
        struct clientData client = {0, "", "", 0.0};
        printf("%s", "Enter a  account number (1 to 100, 0 to end input): ");
        scanf("%d", &client.account);
        while (client.account != 0)
        {
            printf("%s", "Enter lastname, firstname, balance: ");

            fscanf(stdin, "%14s%9s%lf", client.lastName, client.firstName, &client.balance);
            fseek(fptr, (client.account - 1) * sizeof(struct clientData), SEEK_SET);
            fwrite(&client, sizeof(struct clientData), 1, fptr);
            printf("%s", "\nEnter account number: ");
            scanf("%d", &client.account);
        }
        fclose(fptr);
    }

    return 0;
}