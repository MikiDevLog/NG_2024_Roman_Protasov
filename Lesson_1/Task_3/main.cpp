#include <iostream>

using namespace std;

int main()
{
    int income=0;
    cout<<"Tell me. How much money do u earn?"<<endl;         //ask a question
    cin>>income;                                              //read and store input
    if(income<1000)                                           //check if number less then 1000
        {
        cout<<"Find a better job Man."<<endl;
        }
    if(income>999)                                            //check if number bigger then 1000
        {
            if(income>999999)                                 //check if number bigger then 1000 and 1000000
            {
                cout<<"Holly molly. Give me some."<<endl;
            }
            if(income<1000000)                                //check if number bigger then 1000 and lower then 1000000
            {
                cout<<"Nice job do u have here."<<endl;
            }
        }


    cout<<"But its all good.";
}
