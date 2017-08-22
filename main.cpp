// test for smallSort2
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void smallSort2(int*, int*, int*);

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    
    cout << "Numbers are " << a << " " << b << " " << c << endl;
    
    smallSort2(&a, &b, &c);
    
    cout << "After sort, ";
    cout << "Numbers are " << a << " " << b << " " << c << endl;
    
    return 0;
    
}
