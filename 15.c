#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<num-1;i++)
    {
        if(arr[i]!=-1)
            for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j] && arr[j]!=-1)
                arr[j]=-1;
        }
    }
    for(i=0;i<num;i++)
        if(arr[i]!=-1)
    printf("%d",arr[i]);
}
