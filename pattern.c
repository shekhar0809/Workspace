#include <stdio.h>

void pattern(int n);

int main(void)
{
    printf("n: ");
    int n;
    scanf("%d", &n);
    
    switch (n)
    {
        case 1:
            pattern(1);
            break;
            
        case 2:
            pattern(2);
            break;
            
        case 3:
            pattern(3);
            break;
            
        case 4:
            pattern(4);
            break;
            
        case 5:
            pattern(5);
            break;
            
        case 6:
            pattern(6);
            break;
            
        case 7:
            pattern(7);
            break;
            
        case 8:
            pattern(8);
            break;
            
        case 9:
            pattern(9);
            break;
            
        default:
            printf("something went wrong !\n");
            break;
    }
}

void pattern(int n)
{
    for( int i = 1 ; i <= n ; i++ )
    {
        for( int j = 1 ; j <= n ; j++ )
        {
            if ( j <= i )
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
}

