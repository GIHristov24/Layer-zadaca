#include <iostream>
#include "../Layer2/Layer2.h"
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = foo(num1, num2);
    cout << result;
}