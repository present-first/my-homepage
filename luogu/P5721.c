#include <stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+1-i;j++)
            {
                m++;
                printf("%02d",m);
            }
            printf("\n");
        }
     return 0;   
}