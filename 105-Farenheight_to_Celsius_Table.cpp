/*
Fahrenheit to Celsius Table

Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their 
corresponding Celsius values and print the table.

For Input :
0 
100 
20
Output :
0   -17
20  -6
40  4
60  15
80  26
100 37

For Input :
120 
200 
40
Output :
120 48
160 71
200 93

Explanation for Sample Output :
Start value is 120, end value is 200 and step size is 40. Therefore, the values we need 
to convert are 120, 120 + 40 = 160, and 160 + 40 = 200. 
The formula for converting Fahrenheit to Celsius is:

Celsius Value = (5/9)*(Fahrenheit Value - 32)  

Plugging 120 into the formula, the celsius value will be 
(5 / 9)*(120 - 32) => (5 / 9) * 88 => (5 * 88) / 9 => 440 / 9 => 48.88
But we'll only print 48 because we are only interested in the integral part of the value.

*/
#include<iostream>
using namespace std;

void farenheit_to_celsius_table(int s, int e, int w){
    while(s <= e){
        int celsius = (5.0/9) * (s - 32);
        cout << s << " " << celsius << endl;
        s += w;
    }
}

int main(){
    int s;              // Start Ferenheit Value
    int e;              // End Farenheit Value
    int w;              // Step Size
    cin >> s >> e >> w;
    farenheit_to_celsius_table(s, e, w);
}