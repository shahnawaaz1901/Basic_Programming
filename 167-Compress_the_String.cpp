/*
Compress the String

Write a program to do basic string compression. For a character which is consecutively 
repeated more than once, replace consecutive duplicate occurrences with the count of 
repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.

Note:
Consecutive count of every character in the input string is less than or equal to 9. 

For Input :
aaabbccdsa
Output :
a3b2c2dsa

Explanation for Sample Output :
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 
2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.

For Input :
aaabbcddeeeee
Output :
a3b2cd2e5
Explanation for Output :
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring 
single time, 'd' is repeating 2 times and 'e' is repeating 5times.
*/

#include <iostream>
#include <cstring>
using namespace std;

string getCompressedString(string &input) {
    // Write your code here.
    string output = "";
    for(int i = 0; i < input.length();i++){
        output += input[i];
        int count = 1;
        while(input[i] == input[i + 1] && i < input.length()){
            count++;
            i++;
        }
        if(count > 1){
            output += to_string(count);
        }
    }
    return output;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}