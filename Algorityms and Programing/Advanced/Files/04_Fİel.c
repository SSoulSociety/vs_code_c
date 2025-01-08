#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char numbers[7];
    fptr = fopen("data.txt", "wb");
    if (fptr == NULL)
    {
        printf("Data couldnt opened correctly\n");
    }
    else
    {
        printf("Enter 7 nubmers: ");
        for (int i = 0; i < 7; ++i)
        {
            scanf("%d", numbers[i]);
        }
        fwrite(numbers, sizeof(int), 7, fptr);
        // fwrite binary  oalrark yazar dosyaya bıanry modda acmazsan okunmaz data
        // fread(numbers, sizeof(int), 7, fptr) de binary oalrak yazılmıs datayı okur
        
        printf("Data was written to File  succesfully");
        fclose(fptr);
    }

    return 0;
}