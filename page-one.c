#include <stdio.h>
int main()
{
    int ans;

    FILE *p; //========>  make a pointer will save write and read to file

    p = fopen("password.txt.txt", "w+"); //========> we open the file ond determine what we do on it (write : w) ....(read : r) .

    if (p == NULL) //========> if the file do not open show to me an error .
    {
        printf("\n-----------------------------\n");

        printf("\nFile creation failed");

        printf("\n-----------------------------\n");
    }
    else
    {
        printf("\n-----------------------------\n");

        printf("File creation succeeded ");
    }
    char input[25], ch; //========>we made variable to take the data .

    printf("\n-----------------------------\n");

    printf("\n\nENTER STRING TO WRITE IN THE FILE .\n");

    gets(input); //========>get from user the data and save in (input) variable.
    printf("\n-----------------------------\n");

    fputs(input, p); //========> put the data we save in (input) variable in the file use pointer.

    printf("Data save succeeded .");

    printf("\n-----------------------------\n");

    rewind(p); //========> reset the file from start position to print it all.

    printf("\n\nyou want to see what it save in the file?\n press on 1 for yes and 0 for no : ");
    scanf("%d", &ans); //========> read from file .
    printf("\n");
    if (ans == 1)
    {
        while (!feof(p))
        {
            ch = fgetc(p); //========> get all characters from the file in this loop.

            printf("%c", ch); //========> print every char in the file .
        }
    }
    else
    {
        printf("\n the program end here ");
    }

    fclose(p);
}