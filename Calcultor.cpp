#include<iostream>           //Abstraction is followed here

using namespace std;

class calculator{         //class
public:                   //access specifier        //Encapsulation is followed here
    void heading(){
        cout << "Command line Calculator!" << endl;   
    }               
    int Addition(int x, int y){
        int result = x + y;
        return result;
    }       
    int Subtraction(int x, int y){
        int result = x - y;
        return result;
    }       
    int Multiplication(int x, int y){
        int result = x * y;
        return result;
    }       
    int Division(int x, int y){
        int result = x / y;
        return result;
    }
};                //end of class

int main(){
int oper;
int x, y;
calculator calc;            //Object
calc.heading();            //Object

cout << "Which operation do you want to operation? " << endl;
cout << "1 - Addition " << endl;
cout << "2 - Subtraction " << endl;
cout << "3 - Multiplication " << endl;
cout << "4 - Division " << endl;
cout << "Input: " << endl;

try{                                                //error handling
    cin >> oper;
    if (oper!=1 || oper!=2 || oper!=3 || oper!=4){
        throw oper;
        cout<<"After throw";
    }
        cout << endl;

    switch(oper){

        case 1:                                                //Addition
            cout << "Please enter first number: " << endl;
            cin >> x;
            cout << "Please enter second number: " << endl;
            cin >> y;
            cout << x << " + " << y << " = "; 
            cout << calc.Addition(x, y);
            break;          
        case 2:                                              //Subtraction
            cout << "Please enter first number: " << endl;
            cin >> x;
            cout << "Please enter second number: " << endl;
            cin >> y;
            cout << x << " - " << y << " = ";
            cout << calc.Subtraction(x, y);
            break;              
        case 3:                                             //Multiplication   
            cout << "Please enter first number: " << endl;
            cin >> x;
            cout << "Please enter second number: " << endl;
            cin >> y;
            cout << x << " x " << y << " = ";
            cout << calc.Multiplication(x, y);
            break;      
        case 4:                                             //Division
            cout << "Please enter first number: " << endl;
            cin >> x;
            cout << "Please enter second number: " << endl;
            cin >> y;
            cout << x << " / " << y << " = ";
            cout << calc.Division(x, y);
            break;
        default:                                        //If input entered is not among above four operations
            cout << "Invalid Input";
            break;
        }
    }
    catch (int oper){
        cout<<"Please use 1,2,3,4 only";
    }

}
