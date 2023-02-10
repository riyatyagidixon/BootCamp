#include<stdio.h>
int main()
   {
       int n, m;
       int a[n][m], b[n][m],sum[n][m], i , j;
       printf("Enter the no. of rows:\n");
       scanf("%d", &n);
       printf("Enter the no. of columnss:\n");
       scanf("%d", &m);
       printf("Enter elements of matrix a : \n");
       for(int i=0; i<n ;i++)
       {
           for(int j=0; j<m ;j++)
           {
              scanf("%d" , &a[i][j]);
          }
      }
      printf("\n Enter elements of matrix b :\n");
        for(int i=0; i<n ;i++)
      {
          for(int j=0; j<m; j++)
          {
              scanf("%d", &b[i][j]);
          }
 
      }
      for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
          {
              sum[i][j] = a[i][j] + b[i][j];
          }
      printf("the sum of matrices is : \n");
      for(int i=0; i<n ;i++)
      {
          for(int j=0;j<m;j++)
          {
              printf("%d\t", sum[i][j]);
          }
       printf("\n");
      }
 
  }

