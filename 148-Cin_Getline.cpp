#include<iostream>
using namespace std;

int count(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char input[1000];
    /*
    cin >> input;               // If We Take Input Using cin which is Seprated By Space then Data Which is Given by Us After Space Not Recognized
    // If We Give Ashu Ansari only Ashu is Stored and NULL Character automatic present After Ashu
    cout << "Total Character Is : " << count(input) << endl;        // Print 4
    cout << input << endl;                                          // Print Ashu
    */
   /*cin.getline takes three arguments first is character array second is size of array and third one is Optional*/
   cin.getline(input, 100);
   cout << "Total Character Is : " << count(input) << endl;
   cout << input << endl;
}