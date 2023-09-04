/*
Minimum Length Word

Given a string S (that can contain multiple words), you need to find the word which
has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length
word in the string.

Words are seperated by single space only.

For Input :
this is test string
Output :
is

For Input :
abc de ghihjk a uvw h j
Output :
a
*/

#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

void minLengthWord(char ch[], char output[])
{
    int minWordStart;
    int minWordEnd;
    int startIndex = 0;
    int difference = INT_MAX;
    int i = 0;
    for (; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ')
        {
            int dif = i - 1 - startIndex;
            if (dif < difference)
            {
                minWordStart = startIndex;
                minWordEnd = i - 1;
                difference = minWordEnd - minWordStart;
            }
            startIndex = i + 1;
        }
    }
    int dif = i - 1 - startIndex;
    if (dif < difference)
    {
        minWordStart = startIndex;
        minWordEnd = i - 1;
    }

    int k = 0;
    for (int i = minWordStart; i <= minWordEnd; i++, k++)
    {
        output[k] = ch[i];
    }
    output[k] = '\0';
}

int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
