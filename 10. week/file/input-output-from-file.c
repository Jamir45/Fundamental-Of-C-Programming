#include <stdio.h>

int main()
{
    /*
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("Input file not found\n");
        return 0;
    }

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    while(1)
    {
        char val = fgetc(inputFile);
        if(val == EOF)
        {
            break;
        }
        fputc(val, outputFile);
    };
    */
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile == NULL)
    {
        fprintf(outputFile, "Input file not found\n");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }
    fprintf(outputFile, "Sum -> %d", sum);

    return 0;
}
