#include <iostream>
using namespace std;

int main()
{
    // an array of type int
    int luckyNumbers[5] = {2,3,5,7,9};

    cout << luckyNumbers << endl; // result is 0x7ff7bfeff110
    cout << &luckyNumbers[0] << endl; // result is same, 0x7ff7bfeff110
    cout << luckyNumbers[2] << endl;    // result is 5
    cout << *(luckyNumbers + 2) << endl;    // same result as line above: 5

    return 0;
}