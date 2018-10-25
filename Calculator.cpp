/*Program that gives user a choice to choose an operation and
the 2 numbers that will be calculated in that operation*/

#include <iostream>
using namespace std;

void menu();                //menu function

void add(float, float);     //add function
void sub(float, float);     //subtract function
void div(float, float);     //divide function
void mul(float, float);     //multiply function
void mod(int, int);         //modulus function

int main()
{
    menu();
}

void menu()
{
    int choice;
    int modNum1, modNum2;
    float num1, num2;
    
    do{
        cout << "MENU[Select 1 - 5], Enter 6 to quit.\n";       //prompt
        cout << "-----------------------------------\n";
        cout << "1)Addition.\n";
        cout << "2)Subtraction.\n";
        cout << "3)Multiplication.\n";
        cout << "4)Division.\n";
        cout << "5)Modulus.\n\n";
        
        cin >> choice;
        
        switch(choice)                                          //switch statement
        {
            case 1: cout << "Enter two numbers you would like to add.\n";
                    cin >> num1 >> num2;
                    add(num1, num2);
                break;
                
            case 2: cout << "Enter two numbers you would like to subtract.\n";
                    cin >> num1 >> num2;
                    sub(num1, num2);
                break;
                
            case 3: cout << "Enter two numbers you would like to divide.\n";
                    cin >> num1 >> num2;
                    div(num1, num2);
                break;
                
            case 4: cout << "Enter two numbers you would like to multiply.\n";
                    cin >> num1 >> num2;
                    mul(num1, num2);
                break;
                
            case 5: cout << "Enter two numbers you would like to perform modulus on.\n";
                    cin >> modNum1 >> modNum2;
                    mod(modNum1, modNum2);
                break;
                
            case 6: cout << "Terminating program.\n";
                return;
                
            default: cout << "Invalid Entry.\n";
        }
    }while(choice != 6);
}

void add(float x, float y)      //add
{
    cout << "= " << x + y;
    cout << "\n\n";
}

void sub(float x, float y)      //subtract
{
    cout << "= " << x - y;
    cout << "\n\n";
}

void div(float x, float y)      //divide
{
    cout << "= " << x / y;
    cout << "\n\n";
}

void mul(float x, float y)      //multiply
{
    cout << "= " << x * y;
    cout << "\n\n";
}

void mod(int x, int y)          //modulus
{
    cout << "= " << x % y;
    cout << "\n\n";
}
