#include <iostream>
using namespace std;

void SwapValue(int a, int b)
{
    cout << "BEFORE SWAPVALUE" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "temp: " << "No Value" << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "AFTER SWAP" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "temp: " << temp  << endl;
}
void SwapPointer(int* a, int* b)
{
    cout << "BEFORE SWAPPOINTER" << endl;
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "temp: " << "No Value" << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "AFTER SWAP" << endl;
    cout << "a: " << a* << endl;
    cout << "b: " << b* << endl;
    cout << "temp: " << temp  << endl;
}
int main() {
    int x=10,y=20;
    SwapPointer(x,y);
    
}
