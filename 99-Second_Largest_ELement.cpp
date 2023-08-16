/*
Second Largest

Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. 
If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).

Input format :
Line 1 : Total number of elements (n)
Line 2 : N elements (separated by space)

For Input :
4
3 9 0 9
Output :
3

For Input :
2
4 4
Output :
 -2147483648

Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max = INT_MIN;
    int secondMax = INT_MIN;
    while(n >= 1){
        int num;
        cin >> num;
        if(num > max){
            secondMax = max;
            max = num;
        }else{
            if(num > secondMax && num != max){
                secondMax = num;
            }
        }
        n--;
    }
    cout << "Second Max Element is : " << secondMax << endl;
}