#include<iostream>
using namespace std;
int main(){
  int r, c;
  cout << "Enter the row and col respectivly. >> ";
  cin >> r >> c;

  int **A = (int **)malloc(sizeof(int*) * r); // allocating memory for int Pointer type row sized two keep the rows of array. 

  for (int i = 0; i < r; i++) *(A + i) = (int *)malloc(sizeof(int) * c); // allocating int type columen sized of each row. 

  cout << "Enter A array (" << r << "x" << c << ")\n";

  for (int i =0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> *(*(A + i) + j);
  }

  cout << "Matrix [A] " << endl;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cout << *(*(A + i) + j) << " ";
    cout << endl;
  }
  /*

cout << "Enter The array :> ";

  for (int i =0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> A[i][j];
  }

  for (int i =0; i < r; i++) {
    for (int j = 0; j < c; j++) cout <<  A[i][j] << " ";
    cout << endl;
  }
*/

for (int i = 0; i < r; i++) free(*(A) + i); // free the memory of all rows.
free(A); // free the memory of the Array was A Container of the rows of the array.



  return 0;
}

