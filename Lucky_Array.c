#include<stdio.h>
#include<limits.h>
int main()
{

    int n,min=INT_MAX,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<min) min=arr[i];
    }
    for(int i=0; i<n; i++) if(arr[i]==min) cnt++;
    

    if(cnt%2==1) printf("Lucky\n");
    else  printf("Unlucky\n");
    return 0;
}