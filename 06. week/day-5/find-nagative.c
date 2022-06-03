#include <stdio.h>

int findNegatives(int n, int in[], int *out)
{
    int outIndex = 0;
    for(int i=0; i<n; i++){
        if(in[i]<0){
            outIndex++;
        }
    }

    *out = (int*)malloc(outIndex*sizeof(int));
    int count = 0;
    for(int i=0; i<n; i++){
        if(in[i]<0){
            out[count] = in[i];
            count++;
        }
    }
}

int main()
{
    int n = 6;
    int in[] = {1, -2, -3, 4, 5};
    int *out;
    findNegatives(n, in, &out);

    int outlen = sizeof(out)/sizeof(out[0]);
    printf("%d\n", outlen);
    for(int i=0; i<outlen; i++){
        printf("%d,", out[i]);
    }

    return 0;
}
