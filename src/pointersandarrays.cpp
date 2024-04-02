#include <iostream>
using namespace std;

int main()
{
    // an array of type int
    int luckyNumbers[5];

    /*
    cout << luckyNumbers << endl; // result is 0x7ff7bfeff110
    cout << &luckyNumbers[0] << endl; // result is same, 0x7ff7bfeff110
    cout << luckyNumbers[2] << endl;    // result is 5
    cout << *(luckyNumbers + 2) << endl;    // same result as line above: 5
    */

   // input 5 numbers from the user into the array
   for(int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
   }

    // write out the five numbers
    for(int i = 0; i <= 4; i++) {
        cout << *(luckyNumbers+i) << "  ";
   }  

   // if this is written with an index out of bounds, i <= 5
   // then a wrong element will be output 
   // at the end of this list that is not in the array
   //     for(int i = 0; i <= 5; i++) {


    return 0;
}