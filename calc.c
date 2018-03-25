#include <stdio.h>

int main(void)
{
    int x,y;
    char o;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    printf("input operation +,-,/,*\n");
    printf("operation: ");
    scanf(" %c" , &o);

    switch (o)
    {
        case '+' :
            printf("%i plus %i is %i\n", x, y , x + y);
            break;

        case '-' :
            printf("%i minus %i is %i\n", x, y , x - y);
            break;

        case '*' :
            printf("%i multiplied with %i is %i\n", x, y , x * y);
            break;

        case '/' :
            printf("%i divided by %i gives %i\n", x, y , x / y);
            break;

        default:
            printf("something went wrong!\n");
            break;
    }
}
