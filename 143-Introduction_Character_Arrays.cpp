/*
    Character Arrays :- Continous Block of Char Data Type is Called, Character Arrays
*/

#include<iostream>
using namespace std;
int main(){
    // Declaration of Character Arrays
    /* char array_name[size_of_array] */
    char input[10];
    cout << "Enter Name : ";
    // Because character have 1bytes so that 10 bytes of memory block allocate for the array
    cin >> input;           // Only Possible in Character Arrays to take Directly Input and print Output withOut Loop
    /* When I Enter Hello then H is Present at zero index e is Present in 1 and SO on */
    /* After o placed at index 4 a character automatically insert at index 5 which is Called NULL Character*/
    /* Value of NULL Character '\0' */
    /* For Null Character we Require 1byte of space extra to insert Null OtherWise Null automatically inserted at last index */
    cout << "Name Is : " << input << endl;      // Print Directly
}