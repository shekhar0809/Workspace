#include <stdio.h>

int main(void) {

  printf("input data size\nn :");
  int n;

  //input data from the user

  scanf("%d", &n);
  int input[n];

  printf("input data :\n");

  for( int i = 0 ; i < n ; i++ ) {

    scanf("%d", &input[i] );
  }

  // verify input

  printf("input:\n" );

  for (int j = 0 ; j < n ; j++){

    printf("%i\n", input[j]);
  }

  printf("\n");

  // iterate over all array elements to sort in ascending order

  for( int m = 0 ; m < n - 1 ; m++){

    for (int k = 0 ; k < n ; k++){

      if (input[k + 1] < input[k]){
        int tmp = 0 ;
        tmp = input[k];
        input[k] = input[k + 1];
        input[k + 1] = tmp ;
      }
    }
  }

 // provide output
 
  printf("output:\n" );


    for (int l = 0 ; l < n ; l++){

      printf("%i\n", input[l]);
    }

  printf("\n");
}
