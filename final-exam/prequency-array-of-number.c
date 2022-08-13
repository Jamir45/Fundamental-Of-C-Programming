#include <stdio.h>

void main()
{
    long long int arr1[100], fr1[100];
    int n, i, j, ctr;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lld",&arr1[i]);
        fr1[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }

    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%lld occurs %lld times\n", arr1[i], fr1[i]);
        }
    }
}
