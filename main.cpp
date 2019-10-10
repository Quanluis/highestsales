#include <iostream>
using namespace std;

float getSales();
void validate();

int main(){

     getSales();

    return 0;
}

float getSales(){

        validate();
        validate();
        validate();
        validate();

        return 0;
}

void findHighest(){

}

void validate(){

        int sales;

        cout << "Enter sales" << endl;

        cin >> sales;

        if(sales <= 0){
                while(sales <= 0){
                        cout << "Must be a positive number" << endl; 
                        cout << "input number" << endl;
                        cin >> sales;
                }
                cout << "Your sales are " << sales << endl;
        } else {
                cout << "Your sales are " << sales << endl;
        } 
}      


