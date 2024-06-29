#include <iostream>

using namespace std;

int main()
{
    srand(time(0));                                                                                    //time seed random
    int bank_mass[10][2];
    int id=0, bal=0, row=0, collum=0;
    char opt='\0';

    for (id=0;id<10;id++)                                                                               //massive declaration
    {
        bank_mass[id][0]=id;
        bal=rand();
        bank_mass[id][1]=bal;
    }

    while (opt!='q')                                                                                    //start menu loop
    {
        int MinMax_Bal=bank_mass[0][1];
        cout<<"bank account id (0 to 9): "<<endl;                                                       //bank id read
        cin>>id;

        if (id>=10)                                                                                     //check id is correct
        {
            cout<<"Wrong ID."<<endl;
        }
        else
        {
            for(collum=0;collum<2;collum++)                                                             //show balance of account
            {
                cout<<bank_mass[id][collum];
                cout<<' ';
            }

            cout<<endl<<"(c)change ballance, (b)all id balance, (n)min bal, (m)max bal, (q)quit: "<<endl;  //options prompt
            cin>>opt;

            switch(opt)
            {
            case 'c':
                cout<<"How much (use <-number> or <+number>: ";                                         //change oparation to acc
                cin>>bal;

                if ((bank_mass[id][1]+bal)<0)
                {
                    cout<<"U dont have enough money. Denied."<<endl;                                    //if u try withdraw more than u have on bal operation will denied
                    break;
                }
                else
                {
                    bank_mass[id][1]=bank_mass[id][1]+bal;
                    cout<<"Ur current balance: "<<bank_mass[id][1]<<endl;
                    break;
                }

            case 'b':                                                                                   //show all accounts+bal
                for (row=0;row<10;row++)
                {
                    for(collum=0;collum<2;collum++)
                    {
                        cout<<bank_mass[row][collum];
                        cout<<' ';
                    }
                    cout<<endl;
                }
                break;

            case 'n':                                                                                  //minimal ball betwen acc
                for (row=0;row<10;row++)
                {
                    if (bank_mass[row][1]<MinMax_Bal)
                    {
                        MinMax_Bal=bank_mass[row][1];
                    }
                }
                cout<<"Minimum bal is: "<<MinMax_Bal<<endl;
                break;

            case 'm':                                                                                  //maximum ball betwen acc
                for (row=0;row<10;row++)
                {
                    if (bank_mass[row][1]>MinMax_Bal)
                    {
                        MinMax_Bal=bank_mass[row][1];
                    }
                }
                cout<<"Maximum bal is: "<<MinMax_Bal<<endl;
                break;

            case 'q':
                cout<<"Exiting...";                                                                    //Exit from menu loop.
                break;

            default:
                cout<<"Wrong operation!"<<endl;
            }
        }
    }
}
