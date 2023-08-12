/*
// You Need to Take Input Until User Gives $ to us
#include<iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    int count = 0;
    while(c !='$'){
        cin >> c;
        // If You Press Enter Press Space as input then cin Not Recognize it a Valid Input
        // So if You Give Input abc def eft
        // In Above Line You Give 11 Characters But cin Didn't Recognize space enter and tab
        // So that Our Function Gives us 9
        count++;
    }
}

// cin has Some Property cin Did Not Recognize Enter, tab, space

// For Recognize Enter tab and space You Need to change input take to cin.get()

*/

#include<iostream>
using namespace std;
int main(){
    char c;
    c = cin.get();
    int count = 0;
    while(c !='$'){
        c = cin.get();
        // If You Press Enter Press Space as input then cin.get() Recognize it a Valid Input
        // So if You Give Input abc def eft
        // In Above Line You Give 11 Characters and cin.get() Recognize space enter and tab
        // So that Our Function Gives us 11 which is Actual Output
        count++;
    }
    cout << count << endl;
}
