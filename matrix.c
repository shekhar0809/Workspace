/*
input matrices from user

apply addition and subtraction operations

return matrices

*/

#include <stdio.h>

/*
int p = 0 ;
int q = 0 ;

void add_matrix(int mat3[p][q], int mat1[p][q], int mat2[p][q]);
void subtract_matrix(int mat3[p][q], int mat1[p][q], int mat2[p][q]);
*/

int main(void)
{
    //size of first matrix
    
    printf("enter no of columns of first matrix: ");
    int m1;
    scanf("%d" , &m1);
   
    printf("enter no of rows of first matrix: ");
    int m2;
    scanf("%d" , &m2);
    
    //size of second matrix
     
    printf("enter no of columns of second matrix: ");
    int n1;
    scanf("%d" , &n1);
    
    printf("enter no of rows of second matrix: ");
    int n2;
    scanf("%d" , &n2);    
    
    // input first matrix
    
    int mat1[m1][m2];    
    
    printf("enter first matrix\n");
    
    for ( int i = 0 ; i < m1 ; i++ )
    {
        for ( int j = 0 ; j < m2 ; j++ )
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // input second matrix
    
    int mat2[n1][n2];
    
    printf("enter second matrix\n");
    
    for ( int i = 0 ; i < n1 ; i++ )
    {
        for ( int j = 0 ; j < n2 ; j++ )
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // check for same order
    
    if ( m1 != n1 && m2 != n2 )
    {
        return 1;
    }
    
    //ensure correct input of mat1 and mat2
    printf("\nfirst matrix is \n");
    
    for ( int i = 0 ; i < m1 ; i++ )
    {
        for ( int j = 0 ; j < m2 ; j++ )
        {
            printf("%i  ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nsecond matrix is \n");
        
    for ( int i = 0 ; i < m1 ; i++ )
    {
        for ( int j = 0 ; j < m2 ; j++ )
        {
            printf("%i  ", mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //add matrices
    
    int add_mat[m1][m2];
    
    for( int i = 0 ; i < m1 ; i++ )
    {
        for( int j = 0 ; j < m2 ; j++)
        {
            add_mat[i][j] = mat1[i][j] + mat2[i][j] ;
        }
    }
    
    //subtract matrices
    
    int subtract_mat[m1][m2];
    
    for( int i = 0 ; i < m1 ; i++ )
    {
        for( int j = 0 ; j < m2 ; j++)
        {
            subtract_mat[i][j] = mat1[i][j] - mat2[i][j] ;
        }
    }
    
    //output added and subtracted matrices
    
    for( int i = 0 ; i < m1 ; i++ )
    {
        for( int j = 0 ; j < m2 ; j++)
        {
            printf("%i  ", add_mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for( int i = 0 ; i < m1 ; i++ )
    {
        for( int j = 0 ; j < m2 ; j++)
        {
            printf("%i  ", subtract_mat[i][j]);
        }
        printf("\n");
    }
    
}
    
    //empty array for addition
    
/*    int add_mat[m1][m2];
    
    add_matrix(add_mat, mat1, mat2);
    
    int subtract_mat[m1][m2];
    
    subtract_matrix(subtract_mat, mat1, mat2);
    
    // output added matrix
    
    for ( int i = 0 ; i < m1 ; i++ )
    {
        for ( int j = 0 ; j < m2 ; j++ )
        {
            printf("%i  ", add_mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
            
    // output subtracted matrix
    
    for ( int i = 0 ; i < m1 ; i++ )
    {
        for ( int j = 0 ; j < m2 ; j++ )
        {
            printf("%i  ", subtract_mat[i][j]);
        }
        printf("\n");
    }
   */ 


/*
void add_matrix(int mat3[p][q], int mat1[p][q], int mat2[p][q])
{
    for( int i = 0 ; i < p ; i++ )
    {
        for( int j = 0 ; j < q ; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j] ;
        }
    }
}

void subtract_matrix(int mat3[p][q], int mat1[p][q], int mat2[p][q])
{
    for( int i = 0 ; i < p ; i++ )
    {
        for( int j = 0 ; j < q ; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j] ;
        }
    }
}
*/
