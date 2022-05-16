#include <iostream>
#include <fstream>
using namespace std;
// fgetc(), fputc()
int main () {
    fstream file;

    file.open("Abeni.tx", ios::out || ios::in);

    if(file.is_open()) {
        int n = 10;
        char ch = 'A';
        while(n-->0){
        file.fput(ch)
        ch++;
        }
    }

}