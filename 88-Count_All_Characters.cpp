/*
Write a program to count and print the 
total number of characters (lowercase english alphabets only), 
digits (0 to 9) and 
white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

A stream of characters terminated by '$'

For Input : abc def4 5$
Output : 6 2 2

Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int countCharacters = 0, countNumbers = 0, countSpaces = 0;
    while (ch != '$')
    {
        if(ch >= 'a' && ch <= 'z'){
            countCharacters++;
        }else if(ch >= '0' && ch <= '9'){
            countNumbers++;
        }else{
            countSpaces++;
        }
        ch = cin.get();
    }
    cout << countCharacters << " " << countNumbers << " " << countSpaces << endl;
    
}