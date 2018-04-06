/*
input matrices from user

apply addition and subtraction operations

return matrices

*/

#include <stdio.h>



int main(void)
{
    //size of first matrix

    //struct matrix first ;

    struct matrix {
      int rows;
      int columns;
    };

    struct matrix mat1;

    printf("enter no of columns of first matrix: ");
    scanf("%d" , &mat1.columns);

    printf("enter no of rows of first matrix: ");
    scanf("%d" , &mat1.rows);

    //size of second matrix

    struct matrix mat2;


    printf("enter no of columns of second matrix: ");
    scanf("%d" , &mat2.columns);

    printf("enter no of rows of second matrix: ");
    scanf("%d" , &mat2.rows);

    // input first matrix

    int matrix1[mat1.columns][mat1.rows];

    printf("enter first matrix\n");

    for ( int i = 0 ; i < mat1.columns ; i++ )
    {
        for ( int j = 0 ; j < mat1.rows ; j++ )
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // input second matrix

    int matrix2[mat2.columns][mat2.rows];

    printf("enter second matrix\n");

    for ( int i = 0 ; i < mat2.columns ; i++ )
    {
        for ( int j = 0 ; j < mat2.rows ; j++ )
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    //ensure correct input of mat1 and mat2

    printf("\nfirst matrix is \n");

    for ( int i = 0 ; i < mat1.columns ; i++ )
    {
        for ( int j = 0 ; j < mat1.rows ; j++ )
        {
            printf("%i  ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nsecond matrix is \n");

    for ( int i = 0 ; i < mat2.columns ; i++ )
    {
        for ( int j = 0 ; j < mat2.rows ; j++ )
        {
            printf("%i  ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //add matrices

    int add_mat[mat1.columns][mat1.rows];

    for( int i = 0 ; i < mat1.columns ; i++ )
    {
        for( int j = 0 ; j < mat1.rows ; j++)
        {
            add_mat[i][j] = matrix1[i][j] + matrix2[i][j] ;
        }
    }

    //subtract matrices

    int subtract_mat[mat1.columns][mat1.rows];

    for( int i = 0 ; i < mat1.columns ; i++ )
    {
        for( int j = 0 ; j < mat1.rows ; j++)
        {
            subtract_mat[i][j] = matrix1[i][j] - matrix2[i][j] ;
        }
    }

    //output added and subtracted matrices

    printf("\nadded matrix is : \n" );

    for( int i = 0 ; i < mat1.columns ; i++ )
    {
        for( int j = 0 ; j < mat1.rows ; j++)
        {
            printf("%i  ", add_mat[i][j]);
        }
        printf("\n");
    }

    printf("\nsubtracted matrix is : \n");

    for( int i = 0 ; i < mat1.columns ; i++ )
    {
        for( int j = 0 ; j < mat1.rows ; j++)
        {
            printf("%i  ", subtract_mat[i][j]);
        }
        printf("\n");
    }

}
