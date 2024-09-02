#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int x,p;
    scanf("%d%d",&x,&p);
    float ans=(100*p)/(100.00-x);
    printf("%.2f\n",ans);
    return 0;
}