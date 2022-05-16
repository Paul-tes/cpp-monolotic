#include<iostream>
using namespace std;
int main(){
  int r, c;
  cout << "Enter the row and col respectivly. >> ";
  cin >> r >> c;

  int **A = (int **)malloc(sizeof(int*) * r);

  for (int i = 0; i < r; i++) *(A + i) = (int *)malloc(sizeof(int) * c);

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




  return 0;
}

