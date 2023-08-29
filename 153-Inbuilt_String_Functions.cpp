#include<iostream>
#include<cstring>           //For Using Inbuilt Functions
using namespace std;
int main(){
    char input1[100];
    char input2[100];
    cin.getline(input1,100);
    cin.getline(input2,100);
    // Use Of Length Function
    cout << "Length of First String Is : " << strlen(input1) << endl;
    cout << "Length of Second String Is : " << strlen(input2) << endl;
    
    // Use Copy Function
    strcpy(input2,"Ashu Ansari");
    cout << "After Using Copy Function : " << input2 << endl;

    // Use of Compare Function
    if(strcmp(input1, input2) == 0){
        cout << "Both String is Equal " << endl;
    }else{
        cout << "String is Not Equal " << endl;
    }

    // Use of Copy Character Function
    strncpy(input2,"Shahnawaaz Ansari",5);
    cout << "After Copy Character Function : " << input2 << endl;
    /*
    if Two character Array or String Name input1 & input2 then
    1. Length of String :- strlen(input)            // Gives Length of String
    2. Copy One String into Another :- strcpy(where_want_to_copy,which_want_to_copy)
                                        strcpy(destination_string, source_string)
    3. Compare of Two Strings :- strcmp(input1, input2)
                                if gives 0 then string is equal otherwise not equal
                                this is exception because this function works as minus the ascii
                                value of every character, so it returns zero as true and false
                                in other number
    4. Copy Some Character into Another String :- strncpy(destination_string,source_string, n);
                                Source and Destination Works Same as Copy Function
                                n is Number of Character You Want to Copy from Source String to
                                destination string
    5. 
    */
}