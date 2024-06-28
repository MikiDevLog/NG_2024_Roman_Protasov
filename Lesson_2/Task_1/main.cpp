#include <iostream>

using namespace std;

int main()
{
    const int rows=10;
    const int collumes=2;
    int bank_mass[rows][collumes];
    int id=0, bal=0;
    char opt;

    for (int i=0;i<rows;i++)                                                               //massive declaration
    {
        id++;
        bank_mass[i][0]=id;
        bal=rand();
        bank_mass[i][1]=bal;
    }

    long long int MinMax_Bal=bank_mass[0][1];

    cout<<"bank account id (1 to 10): ";                                                   //bank id read
    cin>>id;
    for(int j=0;j<collumes;j++)                                                            //show balance of account
    {
        cout<<bank_mass[id-1][j];
        cout<<' ';
    }
    cout<<'\n'<<"(d)diposit, (w)withdraw, (b)all id balance, (n)min bal, (m)max bal: ";    //options prompt
    cin>>opt;

    switch(opt)
    {
        case 'd':
            cout<<"How much: ";                                                            //add to acc option
            cin>>bal;
            cout<<"Ur current balance: "<<bank_mass[id-1][1]+bal;
        break;

        case 'w':                                                                          //withdraw to acc option
            cout<<"How much: ";
            cin>>bal;
            cout<<"Ur current balance: "<<bank_mass[id-1][1]-bal;
            break;

        case 'b':                                                                          //show all accounts+bal
            for (int i=0;i<rows;i++)
            {
                for(int j=0;j<collumes;j++)
                {
                    cout<<bank_mass[i][j];
                    cout<<' ';
                }
                cout<<'\n';
            }
            break;

        case 'n':                                                                          //minimal ball betwen acc
            for (int i=0;i<rows;i++)
            {
                if (bank_mass[i][1]<MinMax_Bal)
                {
                    MinMax_Bal=bank_mass[i][1];
                }
            }
            cout<<"Minimum bal is: "<<MinMax_Bal;
            break;

        case 'm':                                                                         //maximum ball betwen acc
            for (int i=0;i<rows;i++)
            {
                if (bank_mass[i][1]>MinMax_Bal)
                {
                    MinMax_Bal=bank_mass[i][1];
                }
            }
            cout<<"Maximum bal is: "<<MinMax_Bal;
            break;
    }

}
