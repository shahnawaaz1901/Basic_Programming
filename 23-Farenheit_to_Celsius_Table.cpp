/*
Given three values - 
Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
*/
#include<iostream>
using namespace std;
int main(){
    int s;                  //Starting Farenheit Value
    int e;                  //Ending Farenheit Value
    int w;                  //Step size
    cin >> s >> e >> w;
    float celsius_val;
    while(s <= e){
        celsius_val = 5.0/9 * (s - 32);
        cout << s << " " << celsius_val << endl;
        s = s + w;
    }
}