#include <iostream>

using namespace std;

int main()
{
    char operat;
    float nFirst=0, nSecond=0;

    cout<<"This is a simple calculator. It can do anything simple with 2 given numbers. Firstly enter operator: +, -, *, /: "; //ask question
    cin>>operat;                                                                      //operator input scan

    cout<<"Enter first number: ";                                                     //request first number to work with
    cin>>nFirst;
    cout<<"Enter second number: ";                                                    //request first number to work with
    cin>>nSecond;

    cout<<"Here is ur result:"<<endl;

    switch(operat)
    {
    case '+':
        cout<<nFirst<<' '<<operat<<' '<<nSecond<<" = "<<nFirst+nSecond;               //do addition if used specified operator
        break;
    case '-':
        cout<<nFirst<<' '<<operat<<' '<<nSecond<<" = "<<nFirst-nSecond;               //do subtraction if used specified operator
        break;
    case '*':
        cout<<nFirst<<' '<<operat<<' '<<nSecond<<" = "<<nFirst*nSecond;               //do multiplication if used specified operator
        break;
    case '/':
        if(nSecond==0)
        {
            cout<<"Can't devide be Zero, sorry.";                                     // If the second number is 0 wnen division operator used error message is shown.
            break;
        }
        else
        {
            cout<<nFirst<<' '<<operat<<' '<<nSecond<<" = "<<nFirst/nSecond;           //do division if second number non 0 and used specified operator
        }
        break;
    default:
        cout<<"Error! operator is not correct";                                       // If the operator is other than requested error message is shown.
        break;
    }
}
