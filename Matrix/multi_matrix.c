#include<stdio.h>

int main()
{
    int row1, col1, row2, col2;
       
    printf("Enter the no. of rows for first matrix:\n");
    scanf("%d", &row1);
    printf("Enter the no. of columns for first matrix:\n");
    scanf("%d", &col1);
       
    printf("Enter the no. of rows for second matrix:\n");
    scanf("%d", &row2);
    printf("Enter the no. of columns for second matrix:\n");
    scanf("%d", &col2);
    //int a[row1][col1],  b[row2][col2],product[row1][col2], sum=0, pro=0;
    //int a[row1][col1];
    int b[row2][col2];
    //int product[row1][col2];
     
    /*if( col1==row2 && row1>0 && row2>0 && col1>0 && col2>0){
    //int a[row1][col1],  b[row2][col2],product[row1][col2], sum=0, pro=0;
        
    printf("Enter elements of first matrix a : \n");
    for(int i=0; i<row1 ;i++)
        {
            for(int j=0; j<col1 ;j++)
            {
                scanf("%d" , &a[i][j]);
            }
        }
     printf("\n Enter elements of second  matrix b :\n");
         for(int i=0; i<row2 ;i++)
         { 
             for(int j=0; j<col2; j++)
             {
                 scanf("%d", &b[i][j]);
             }
 
         } 
         for(int i=0;i<row1;i++)
         {
             for(int j=0;j<col2;j++)
             {  
                 for(int k=0; k< row2; k++)
                 {
                     pro = a[i][k] * b[k][j];
                     sum = sum + pro;
                 
                   
                 }
              product[i][j] = sum;
              sum=0;
             }
         }
      printf("the final matrix is : \n");
      for(int i=0; i<row1 ;i++)
          {
              for(int j=0;j<col2;j++)
                  {
                      printf("%d\t", product[i][j]);
                  } 
       printf("\n");
          }
    }
    else
    {
        printf("Multiplication cannot be done \n");
    }*/
    return 0;
  }

