#include <iostream>

using namespace std;

int main()
{
    int nFirst=0;
    int nSecond=0;

    cout<<"Just enter 2 number and it will make a simple addition of thems."<<'\n'<<"Enter the first number:"<<'\n';
    cin>>nFirst;                                                                                               //scan for first number

    cout<<"Now, enter the second number:"<<'\n';
    cin>>nSecond;                                                                                              //scan for second number

    cout<<"Here is ur result:"<<'\n'<<nFirst<<" + "<<nSecond<<" = "<<nFirst+nSecond<<'\n';                     //print the result calculaling the result of addition right in the function
    system("pause");
}
