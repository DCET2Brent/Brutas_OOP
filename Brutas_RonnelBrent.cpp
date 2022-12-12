#include <iostream>
#include <string>
using namespace std;

class Calculator
{
  private:
    char op;
    float num1, num2, answer;

  public:
    void selection()
    {
        cout << "\nEnter first value: ";
        cin >> num1;

        bool op_ready = false;

        while (op_ready == false)
        {
            cout << "Enter Operation Symbol ( +, -, *, / ): ";
            cin >> op;
            if (op != '+' && op != '-' && op != '*' && op != '/')
            {
                op_ready = false;
                cout << "Invalid Operation Symbol" << endl;
            }
            else
            {
                op_ready = true;
            }
        }
        cout << "Enter second value: ";
        cin >> num2;
    }
    float getAnswer(){
         
         switch(op)
         {
         case '+' :
              answer = num1 + num2;
              break;
         case '-' :
              answer = num1 - num2;
              break;
         case '*' :
              answer = num1 * num2;
              break;
         case '/' :
              answer = num1 / num2;
              break;
         }
         
         return answer;
}
};

void cName(){
     cout <<"Ronnel Brent D. Brutas" <<endl;
     cout <<"DCET 2-1" <<endl;
}

void opSymbols(){
     cout << "\nDCET CALCULATOR" <<endl;
     cout << "Option For Operators ↓" <<endl;
     cout << "[ + ] for Addition" <<endl;
     cout << "[ - ] for Subtraction" <<endl;
     cout << "[ * ] for Multiplication" <<endl;
     cout << "[ / ] for Division" <<endl;
}

int main()
{
    char choice;
    
    bool ready_exit = false;
    while(ready_exit == false)
    {
      cName();
     opSymbols();
     
    Calculator _calc;
    _calc.selection();
    
    cout << "The Answer is: " << _calc.getAnswer() << endl;
    
    bool solve_ready = false;
    while(solve_ready == false)
    {
         cout << "Do You Want To Solve Again? ( y, n ): ";
         cin >> choice;
         
         if(choice != 'y' && choice != 'n')
         {
              solve_ready = false;
              cout << "Choose y if Yes and n if No";
         }
         
         else{
              solve_ready = true;
              if(choice == 'y'){
                   ready_exit = false;
                   system("cls");
              }
              else{
                   ready_exit = true; 
              }
         }
    }
}
system("pause");
return 0;
}