// Take two Numbers From User and You Need to Print nCr
#include<iostream>
using namespace std;

/*
For Create A Function You Need to Write Something

output_data_type function_name(Argument or input)
*/

int factorial(int n){
    int ans = 1;
    int i = 1;
    while(i <= n){
        ans *= i;
        i++;
    }
    return ans;
}



int main(){
    int n, r;
    cin >> n >> r;
    // For Store Return Value You need to Store in Same Data Type which is Output Data Type of Function

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    cout << fact_n/(fact_r * fact_n_r) << endl;

    // Instead of this You Can Directly Write this
    // Using this First factorial function value not store anywhere so how value is Accessable and stay for next function is completed
    // values store in buffer Memory Which is Responsible for doing this type of work
    cout << factorial(n)/(factorial(n - r) * factorial(r)) << endl;
    /*
    // Instead of Writing Same Code Multiple Times You Can Create a Block Which 
    // takes input and Return us a output which is Called Functions
    int i = 1;
    int fact_n = 1;
    while(i <= n){
        fact_n *= i;
        i++;
    }

    int fact_r = 1;
    i = 1;
    while(i <= r){
        fact_r *= i;
        i++;
    }

    i = 1;
    int fact_n_r = 1;
    while(i <= n - r){
        fact_n_r *= i;
        i++;
    }
    
    cout << "Factorial is : " << fact_n/(fact_r * fact_n_r) << endl;
    */
}