/*
Sum of Two Arrays

Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M
respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit
integer is present at every index).
The idea here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers
and put the result in another array/list i.e. output array/list will also contain only
single digit at every index.

Note:
The sizes N and M can be different.

Output array/list(of all 0s) has been provided as a function argument.
Its size will always be one more than the size of the bigger array/list.
Place 0 at the 0th index if there is no carry.

No need to print the elements of the output array/list.
Using the function "sumOfTwoArrays", write the solution to the problem and store
the answer inside this output array/list. The main code will handle the printing of
the output on its own.

For Input :
1
3
6 2 4
3
7 5 6
Output :
1 3 8 0

For Input :
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9
Output :
0 8 6 5
1 0 2 2 0
*/

#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output){
    int end1 = size1 - 1;
    int end2 = size2 - 1;
    int finalEndIndex = max(size1, size2);          // Because output Array is one Large from max size
    int carry = 0;
    while(end1 >= 0 && end2 >= 0){
        int number = input1[end1] + input2[end2] + carry;
        output[finalEndIndex] = number % 10;
        carry = number/10;
        end1--;
        end2--;
        finalEndIndex--;
    }
    while(end1 >= 0){
        int number = input1[end1] + carry;
        output[finalEndIndex] = number % 10;
        carry = number/10;
        end1--;
        finalEndIndex--;
    }
    while(end2 >= 0){
        int number = input2[end2] + carry;
        output[finalEndIndex] = number % 10;
        carry = number/10;
        end2--;
        finalEndIndex--;
    }
    if(finalEndIndex == 0){
        output[finalEndIndex] = carry;
    }
}

int main()
{
    int size1;
    cin >> size1;

    int *input1 = new int[size1];

    for (int i = 0; i < size1; ++i)
    {
        cin >> input1[i];
    }

    int size2;
    cin >> size2;

    int *input2 = new int[size2];

    for (int i = 0; i < size2; ++i)
    {
        cin >> input2[i];
    }

    int outsize = 1 + max(size1, size2);

    int *output = new int[outsize];

    sumOfTwoArrays(input1, size1, input2, size2, output);

    for (int i = 0; i < outsize; ++i)
    {
        cout << output[i] << " ";
    }

    delete[] input1;
    delete[] input2;
    delete[] output;
    cout << endl;

    return 0;
}