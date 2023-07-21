#include<stdio.h>
void main()
{
    int i,j,num;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
   }
   for(i=0;i<num-1;i++)
    {
        int temp=0;
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
}
