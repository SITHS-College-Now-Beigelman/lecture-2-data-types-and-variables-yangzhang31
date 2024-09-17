//Yang Zhang 
//Lecture 2
//9.16.2024

#include <iostream>
#include <string>
using namespace std; 

int main() {
    //Creating Variables
    int intS = 1;
    float floatS = 1.11;
    double doubleS = 2.22;
    char charS = 'S';
    bool boolS = false;
    string stringS = "Speed";

    //Print Variable Values
    cout<< "int:" << intS << "\n";
    cout<< "float:" << floatS << "\n";
    cout<< "double:" << doubleS << "\n";
    cout<< "char:" << charS << "\n";
    cout<< "bool:" << boolS << "\n";
    cout<< "string:" << stringS << "\n";

    //Arthimatic with Variables
    int inches;
    inches = 100;

    cout << inches << " Inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es) " << "\n";

    //Comparing Variables 
    char A = 'A';
    char B = 'B';
    
    if (A > B) then 
        cout << " A > B " << "\n";
    if (A < B) then 
        cout << " A < B " << "\n";

    //Expressions with Variables
    cout << " 2 + 3.5   " << 2 + 3.5 << "\n";
    cout << " 6 / 4 + 3.9 " << 6 / 4 + 3.9 << "\n";
    cout << " 5.4 * 2 - (13.6 + 18 / 2) " << 5.4 * 2 - (13.6 + 18 / 2) << "\n";

    return 0;
}