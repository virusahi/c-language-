#include <stdio.h>
#include <stdlib.h>

void encryptDecryptFile(const char *inputFile, const char *outputFile, char key)
{
    FILE *fin = fopen(inputFile, "rb");
    FILE *fout = fopen(outputFile, "wb");

    if (fin == NULL || fout == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF)
    {
        char encryptedChar = ch ^ key; // XOR with key
        fputc(encryptedChar, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Operation completed successfully.\n");
}

int main()
{
    char inputFile[100], outputFile[100];
    char key;

    printf("Enter input file name: ");
    scanf("%s", inputFile);

    printf("Enter output file name: ");
    scanf("%s", outputFile);

    printf("Enter encryption key (single character): ");
    scanf(" %c", &key);

    encryptDecryptFile(inputFile, outputFile, key);

    return 0;
}
