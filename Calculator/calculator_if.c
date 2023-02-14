#include <stdio.h>

enum calci
{
    ADD = 1,
    SUB,
    MUL,
    DIV
};

int sum(int, int);
int multi(int, int);
int sub(int, int);
float div(int, int);

int main()
    
{
    
    int first, second, con, result;
    do{
    printf("\n Hello World\n");
    
    printf("Enter first number :\n");
    scanf("%d", &first);
    printf("Enter second number :\n");
    scanf("%d", &second);

    printf("Press 1 for addition \nPress 2 for subtraction\n");
    printf("Press 3 for multiplication \nPress 4 for division\n");

    printf(" press 0 for exit"/n);
    scanf("%d", &con);

    if(con==ADD)
    {
        result = sum(first , second);
        printf("sum of numbers = %d", result);
            
    } 
    if(con == SUB)
    {
        result = sub(first , second);
        printf("subtraction of numbers = %d" , result);
           
    }
   else if(con == MUL)
    {
        result = multi(first , second);
        printf("Multiplication of numbers = %d" , result);
           
    }
    else if(con == DIV)
    {
        float division = div(first , second);
        if(second == 0)
        {
            printf("cannot be divided by 0\n");
        }
        else
        {
            printf("Division of numbers = %f\n", division);
        }
           
    }
    else
    {
        printf("Enter a valid number\n");
    }
    }
    while(con!=0);
    
    return 0;




}






