#include <stdio.h>
int main()
{
    int i,k;
    double s;
    scanf("%d",&k);
    for(i=1;;i++)
    {
        double n=1.0/i;
        s=s+n;
        if(s>k)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}
