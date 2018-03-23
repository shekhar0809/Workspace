#include <stdio.h>

int swap(int *a, int *b);

int main(void)
{
    int first;
	printf("enter first number: ");
	scanf("%d" ,&first);

	int second;
	printf("enter second number: ");
	scanf("%d" ,&second);

    swap(&first, &second);
    
    printf("the first number is now %i and the second one is %i\n", first, second);
}

int swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("swapped !\n");
}
