#include <iostream>
using namespace std;

int* getSales();
int validate();
void findHighest();

int main(){

        findHighest();

    return 0;
}

int* getSales(){

        int sales1 = validate();
        int sales2 = validate();
        int sales3 = validate();
        int sales4 = validate();

        static int arr[4] = {sales1, sales2, sales3, sales4};

        return arr;
}

void findHighest(){


        int * sales = getSales();

        cout << sales[0] << sales[1] << sales[2] << sales[3] << endl;

        if(sales[0] > sales[1] && sales[0] > sales[2] && sales[0] > sales[3]){
            cout <<  sales[0] << " is the biggest.";
        } else if (sales[1] > sales[0] && sales[1] > sales[2] && sales[1] > sales[3]){
                cout <<  sales[1] << " is the biggest.";
        }else if (sales[2] > sales[0] && sales[2] > sales[1] && sales[2] > sales[3]){
                cout <<  sales[2] << " is the biggest.";
        }else if (sales[3] > sales[0] && sales[3] > sales[2] && sales[3] > sales[1]){
                cout <<  sales[3] << " is the biggest.";
        }

 
}

int validate(){

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
        return sales;
}      


