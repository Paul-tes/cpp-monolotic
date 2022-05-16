#include<iostream>


/*
void swap (auto *a, auto *b){
    auto c = *a;
    *a = *b;
    *b = c;
}
void swapbyValue(int a, int b) {
    using namespace std;
    int c = a;
    a = b;
    b = c;
    cout << "this is displayed in funtion" << endl;
    cout << "after swap \nx = " << a << "\ny = " << b << endl; 

    
}


int main () {
    using namespace std;
    int a = 5, b = 10 ;
    char c1 = 'A', c2 = 'B';

    cout << "before swap " << endl;
    cout << "a = " << a << endl << "b = "<< b << endl;

    swap(&a, &b);

    cout << "after swap" << endl;
    cout << "a = " << a << "\nb = " << b;

    int x = 0, y = 0;
    cout << "enter the num to swap resepetivly";
    cin >> x  >> y;
    swapbyValue(x, y);

    cout << "int main function \n x = " << x << "\ny = " << y << endl;
}

*/

inline float areaofcircle(float r) {
    return 2 * 3.14 * r; 
}
inline float areaofTriangle(float b, float h) {
    return 0.5 * b * h;
}
inline float areaofrectangle (float w, float l) {
    return w * l;
}

int main () {
    using namespace std;
    cout << "area of circle r = 2 = " << 
}