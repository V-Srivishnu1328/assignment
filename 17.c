 //three dimensional matrix

 #include<stdio.h>
 int main()
 {
     int phase,row,col,i,j,k=0;
     printf("enter the number of phase , rows and column : ");
     scanf("%d%d%d",&phase,&row,&col);
     int arr[phase][row][col];
     int sum[row][col];
     for(k=0;k<phase;k++)
     {
         printf("enter the value for the number .%d 2d array:\n",k+1);
         for(i=0;i<row;i++)
            for(j=0;j<col;j++)
              scanf("%d",&arr[k][i][j]);
     }
     for(k=0;k<phase;k++)
     {
         for(i=0;i<row;i++)
         {
             for(j=0;j<col;j++)
                sum[i][j]+=arr[k][i][j];
                printf("\n");
         }
         printf("\n");
     }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    }

























































