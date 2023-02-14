#include<stdio.h>
int main()
   {
       int row1, row2 , col1 , col2;
       
       printf("Enter the no. of rows for first matrix:\n");
       scanf("%d", &row1);
       printf("Enter the no. of columns for first matrix:\n");
       scanf("%d", &col1);

       printf("Enter the no. of rows for second  matrix:\n");
       scanf("%d", &row2);
       printf("Enter the no. of columns for second matrix:\n");
       scanf("%d", &col2);
       if(row1==row2 && col1==col2 && row1>0 && col1>0 && row2>0 && col2>0 ){

       int a[row1][col1], b[row2][col2], sum[row1][col2], i, j;
       printf("Enter elements of matrix a : \n");
       for(int i=0; i<row1 ;i++)
       {
           for(int j=0; j<col1 ;j++)
           {
              scanf("%d" , &a[i][j]);
          }
      }
      printf("\n Enter elements of matrix b :\n");
        for(int i=0; i<row2 ;i++)
      {
          for(int j=0; j<col2; j++)
          {
              scanf("%d", &b[i][j]);
          }
 
      }
      for(int i=0;i<row1;i++)
          for(int j=0;j<col1;j++)
          {
              sum[i][j] = a[i][j] + b[i][j];
          }
      printf("the sum of matrices is : \n");
      for(int i=0; i<row1 ;i++)
      {
          for(int j=0;j<col2;j++)
          {
              printf("%d\t", sum[i][j]);
          }
       printf("\n");
      }
       }
       else
       {
           printf("Matrix can't be added\n");
       }
 
  }

