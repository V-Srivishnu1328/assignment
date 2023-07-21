#include <stdio.h>
int main()  // ascending order
{
    int i,num,j;
    scanf("%d",&num);//5
    int arr[num];
    for(i=0;i<num;i++)
       scanf("%d",&arr[i]);                       // [1 2 3 4 5 ]     arr[5]
     //   printf("%d",arr[i]);// 13245
     for(i=0;i<num-1;i++)   //1 7 2 9 4 == 1 2 4 7 9
     {
         int temp=0;
         for(j=i+1;j<num;j++) // 0=1 1=2 2=3 3=4 4=5     //
             if(arr[i]<arr[j])                           // 2 > 1
             {
                 temp=arr[i];   // a=2
                 arr[i]=arr[j]; // 2=1
                 arr[j]=temp;   // 1=a
             }
         }

     for(i=0;i<num;i++)
        printf("%d",arr[i]);
    }

