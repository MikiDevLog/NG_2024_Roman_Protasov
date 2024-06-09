#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[80], surname[80], answer[1];

    cout<<"What do u want? Simple and fo sure boring or something more interactive?"<<'\n'<<"Yes[y] or No[n]"<<'\n';   //ask the question
    scanf("%s",answer);

    if(!strcmp(answer,"y"))                                                                                            //if user replied "y" then it will ask their name to show it afterwards
    {
        cout<<"Please Enter Ur First name:"<<'\n';
        cin>>name;

        cout<<"Please Enter Ur Surname:"<<'\n';
        cin>>surname;

        cout<<"Here is ur name:"<<name<<' '<<surname<<'\n';
        system("pause");                                                                                               //wait any input before close the prog
    }

    else if(!strcmp(answer,"n"))                                                                                       //if user replied "n" then it will shows my name istead
    {
        system("cls");
        cout<<"My name is:"<<'\n'<<"Protasov Roman";
        system("pause");                                                                                               //wait any input before close the prog
    }
    else
    {
        cout<<"Hello? This is not Yes[y] or No[y], so BB."<<'\n';                                                      //if user typed no "y" nor "n" it will just unswer basicaly wtf and shutup
        system("pause");                                                                                               //wait any input before close the prog
    }
}
