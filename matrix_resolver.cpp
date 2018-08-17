#include <iostream>
#include <stdlib.h>

using namespace std;

class Matrix {
  //member variables
  protected:
    int rows;
    int cols;
    int vals[10][10];
    int storage[10];

  public:


  //Constructors
  Matrix() {
    rows=3;
    cols=3;

    for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
        vals[i][j]=(i+j*j + 1);
      }
    }
  }

  Matrix(int r, int c) {
    rows=r;
    cols=c;
    for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {      
        vals[i][j]=(i+j*j + 1);
      }
    }
  }

  //Member functions

  int getVal( int r, int c ) {
    r--;
    c--;
    return vals[r][c];
  }

  void setVal( int r, int c, int val_in ) {
    r--;
    c--;
    vals[r][c]=val_in;
  }


  int getRows() {
    return rows;
  }

  int getCols() {
    return cols;
  }

  void getVals() {
    for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
        printf("%i\t", (vals[i][j]));
    }
      printf("\n");
    }
    printf("\n");
  }


  void rowSwap(int a, int b) {
  
    a--;
    b--;
    int storage[10];

    for (int i=0; i<cols; i++) {
      
      storage[i]=vals[a][i];
      vals[a][i]=vals[b][i];
      vals[b][i]=storage[i];
    }


  }

  void rowMultiply(int r, int scalar) {
    r--;
    for (int i=0; i<cols; i++) {
      vals[r][i]=vals[r][i]*scalar;
    }
  }

  bool rowDivisible(int r, int scalar) {
    r--;
    bool divisible=true;

    for (int a=0; a<cols; a++) {
      int storage[cols];
      storage[a]=vals[r][a];
      

      if (storage[a]%scalar != 0) {
        divisible=false;
      }
    }

    return divisible;
  }

  void rowDivide(int r, int scalar) {

    bool divisible=rowDivisible(r, scalar);
    r--;

    if (divisible) {
      for (int i=0; i<cols; i++)
      {
        vals[r][i]=vals[r][i]/scalar;
      }
    }
    else {
      printf("ERROR: row %i not divisible by %i\n", (r+1), scalar);
    }
  }
/*
  void simplify() {
  continue=true;

  while(continue)
  {
    for (int r=0; r<rows; a++) {
      
      for (int c=0; c<cols; c++) {


    }

  }

  }
  */
};


void getInput(){
  int rows_input;
  int cols_input;

  printf("Enter number of rows: ");
  scanf("%i", &rows_input);
  printf("Enter number of cols: ");
  scanf("%i", &cols_input);

  //unfinished
}





int main () {
  Matrix a(5, 5);
  a.getVals();
  a.rowMultiply(2, 10);
  a.getVals();
  a.rowDivide(2, 2);
  a.getVals();


  return 0;
}
