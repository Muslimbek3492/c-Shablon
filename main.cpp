#include <iostream>

using namespace std;
template <class T>
T maximum (T x, T y)
{

if (x>y) return x;else return y;
}
int main()
{
    cout << "Shablon" << endl;
    int i=3;
    float a=3.0,b=7.5;
    i = maximum(i,0); //argument turi int
    cout << i << endl;
    float m = maximum(a,b); // float
    cout << m << endl;


    return 0;
}
