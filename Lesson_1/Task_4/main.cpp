#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    char operat;
    float nFirst=0, nSecond=0;

    cout<<"(a)Addition, (s)Subtraction, (m)Multiplication, (d)Division, (q)Square, (r)SquareRoot: "; //ask question
    cin>>operat;                                                                             //operator input scan

    if(operat=='q' || operat=='r')                                                           //if operation is Square or SquareRoot it will request only 1 number
    {
        cout<<"Enter the number: ";
        cin>>nFirst;

        cout<<"Here is ur result:"<<endl;

        switch(operat)
        {
            case 'q':
                cout<<pow(nFirst,2);                                                          //square operation
                break;

            case 'r':
                if(nFirst<0)                                                                  //if not check is number below zero - we dont have complex numbers in simple calculator, pls
                    {
                        cout<<"Can't find root of number lower then zero, sorry.";
                        break;
                    }
                else                                                                          //if its all ok do the square root
                    {
                        cout<<sqrt(nFirst);
                        break;
                    }

            default:
                cout<<"Error! Operator is not correct.";                                      //If the operator is other than requested error message is shown.
                break;
         }
    }
    else                                                                                      //If operator is not square and root will proceed like normal
    {
        cout<<"Enter first and second number: ";
        cin>>nFirst>>nSecond;

        cout<<"Here is ur result:"<<endl;

        switch(operat)
        {
        case 'a':
            cout<<nFirst+nSecond;                                                             //do addition if used specified operator
            break;
        case 's':
            cout<<nFirst-nSecond;                                                             //do subtraction if used specified operator
            break;
        case 'm':
            cout<<nFirst*nSecond;                                                             //do multiplication if used specified operator
            break;
        case 'd':
            if(nSecond==0)
            {
                cout<<"Can't devide by Zero, sorry.";                                         // If the second number is 0 wnen division operator used error message is shown.
                break;
            }
            else
            {
                cout<<nFirst/nSecond;                                                         //do division if second number non 0 and used specified operator
                break;
            }
        default:
            cout<<"Error! Operator is not correct.";                                          //If the operator is other than requested error message is shown.
            break;
        }
    }
}
