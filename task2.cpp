#include <iostream>
using namespace std;
void instructions(){
    cout<<"\nPlease enter '+' for addition "<<endl;
     cout<<"\nPlease enter '-'for subtraction"<<endl;
      cout<<"\nPlease enter '*' for multiplication "<<endl;
       cout<<"\nPlease enter '/' for division "<<endl;
      
}
void sum(int x ,int y)
{
      cout<<"\nSum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
}
void sub(int x ,int y)
{
      cout<<"\nDifference of "<<x<<" and "<<y<<" is "<<x-y<<endl;
}
void mul (int x ,int y)
{
  cout<<"\nMultiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
} 
void division(int x,int y)
{
    float c = float(x) / y;
      cout<<"\nDivision of "<<x<<" and "<<y<<" is "<<c<<endl;

}



int main() {
    cout<<"This is a simple calculator that performs addition, subtraction, multiplication, and division"<< endl;

    char ch; 
    do {
        int a,b;
        char op;
       cout<<"Please enter any two numbers to perform arithmetic operation on them: ";
        cin>>a>> b;
        instructions();
        cout<<"Please enter any arithmetic operation you want to perform on the entered numbers: ";
        cin>>op;
        switch(op) {
            case '+':
               sum(a,b);
                break;
            case '-':
              sub(a,b);
                break;
            case '*':
                mul(a,b);
                break;
                case '/':
                if(b!=0)
                    division(a,b);
                
                else
                cout<<"division not possible";
                 break;
           
            default:
                cout<<"Invalid entry" << endl;
        }

        cout<<"Do you want to continue? Y/N: ";
        cin >> ch;

    } while(ch == 'Y' || ch == 'y'); 

    cout<<"\nProgram exit";

    return 0;
}
