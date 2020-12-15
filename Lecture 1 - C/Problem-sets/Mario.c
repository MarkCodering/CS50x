#include<stdio.h>
#include<stdlib.h>

int height;
int counter;
int a;

void printer(int, int, int);

int main ()
{
    printf("Welcome to the world of CS50x.\nThis is a game called Mario\nPlease input the height you would like to perform:");
    scanf("%d", &height);

    if(height == 0)
    {
        return 1;
    }else if(height > 8)
    {
        return 1;
    }else if(height<0)
    {
        return 1;
    }else{
        printer(height, counter, a); 
    }

    return 0;
}

void printer(height, counter, a)
{
    counter = height;
    a = height;
   
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            printf(" ");
        }
        for(int a = 0; a <= i; ++a)
        {
            /* code */
            printf("#");
        }
        
        printf(" ");

        for(int b = 0; b <= i; b++)
        {
            printf("#");
        }

        counter--;
        printf("\n");
    }
}