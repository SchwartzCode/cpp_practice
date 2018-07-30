#include <iostream>
#include <stdlib.h>

using namespace std;

int input[3][3] = { {1, 2, 3}, {1, 0, 7}, {5, 6, 10} };
int rows = sizeof input / sizeof input[0];
int cols = sizeof input[0] / sizeof(int);
int output[3][3] = {0};

void solve_matrix();



int main () {
  
  int zero_count=0;
  
  printf("ROWS: %i\t", rows);
  printf("COLS: %i\n\n", cols);
  printf("MATRIX:\n");

  solve_matrix();

  for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++) {

      printf("%i ", output[i][j]);
      if (output[i][j] == 0)
        zero_count++;
    }

    printf("\n");
  }

  printf("ZEROS: %i\n", zero_count);




  return 0;
}


void solve_matrix() {

  for (int i=0; i<3; i++){
    for (int j=0; j<3;j++) {
      output[i][j]=input[i][j];
    }
  }

  bool unsolved = true;
  while (unsolved) {
    
  
    unsolved=false;
  }
  return;
}
