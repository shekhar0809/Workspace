#include <stdio.h>
#include <math.h>

int main(void)
{
    // input the four digit number from the user
    
/*

coming up later
to confirm that user enters only a 4 digit number

    printf("enter the 4 digits (0 - 9) of the number !\n");
    
    int digits[4];
    
    for (int i = 0 ; i < 4 ; i++ )
    {
        scanf("%d" , &digits[i]);
    }
    
    float input = 1000*digits[0] + 100*digits[1] + 10*digits[2] + digits[3] ;
*/

    printf("enter a 4 digit number\nn: ");
    int input;
    scanf("%d" , &input);
    
    // treat as float to consider imperfect roots
        
    float root = sqrt(input);
    
    // take as integer and compare int value to float \
        to verify that there is nothing after decimal, multiply by 100
        
    int root1 = (int) root;
    root1 = root1*100 ;
    root = root*100;
    
    if (root == root1 )
    {
        printf("The number itself is a perfect square!\n");
    }
    else
    {
        printf("The number itself is not a perfect square\n");
    }
    
    // separate first 2 digits and do the same
    
    int m = (int)input/100 ;
    float m1 = (float)m ;
    float m2 = sqrt(m1);
    
    int m3 = (int)m2;
    
    if (m3 == m2 )
    {
        printf("first 2 digits are perfect square!\n");
    }
    else
    {
        printf("last two digits are not a perfect square\n");
    }
    
    // check it for last two
    int p = (int)input % 100;
    
    float p1 = (float)p ;
    float p2 = sqrt(p1);
    
    int p3 = (int)p2;
    
    if (p3 == p2 )
    {
        printf("last two digits are perfect square!\n");
    }
    else
    {
        printf("last two digits are not a perfect square\n");
    }
}
