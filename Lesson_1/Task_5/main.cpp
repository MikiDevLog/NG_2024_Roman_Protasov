#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.precision(2);

    double coefA=0, coefB=0, coefC=0, Discr=0, Root1=0, Root2=0, realNum=0, imagNum=0;

    cout<<"Here is simple quadratic equation calculator."<<endl;                                          //intro
    cout<<"Enter coefficient a, b and c:"<<endl;                                                          //ask+read coefficients
    cin>>coefA>>coefB>>coefC;
    Discr=(coefB*coefB)-(4*coefA*coefC);
    if (Discr > 0)                                                                                        //if D > 0 prossed like normal+show all 2 possible roots
    {
        Root1=((-coefB)+sqrt(Discr))/(2*coefA);
        Root2=((-coefB)-sqrt(Discr))/(2*coefA);
        cout<<"x1 ="<<Root1<<endl<<"x2 ="<<Root2<<endl;
    }
    else if (Discr == 0)                                                                                   //if D = 0 prossed with corresponding furmula+show root
    {
        Root1=-(coefB/(2*coefA));
        cout<<"x = "<<Root1<<endl;
    }
    else if (Discr < 0)                                                                                    //if D < 0 show complex number.
    {
        realNum=-coefB/(2*coefA);                                                                          //we can use complex but it needs completle rewrite the programm
        imagNum=sqrt(-Discr)/(2*coefA);
        cout<<"x1 ="<<realNum<<"+"<<imagNum<<"i"<<endl;                                                    //complex number consist of 2 parts - imaginary and real
        cout<<"x2 ="<<realNum<<"-"<<imagNum<<"i"<<endl;                                                    //so we sepparate the calculation of both and then just add "i" in the and of imaginary part
    }
}
