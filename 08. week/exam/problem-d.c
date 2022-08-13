#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n, i, j, ctr;
        scanf("%d",&n);
        int arr1[n], fr1[n];

        for(i=0;i<n;i++)
        {
          scanf("%d",&arr1[i]);
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

        int res = 0, res2 = 0;
        for(i=0; i<n; i++)
        {
            if(fr1[i]!=0)
            {
                if(3 <= fr1[i])
                {
                    res = arr1[i];
                } else
                {
                    res2 = -1;
                }
            }
        }

        //output
        if(res > 0) {
            printf("%d\n", res);
        } else {
            printf("%d\n", res2);
        }
    }

    return 0;
}
