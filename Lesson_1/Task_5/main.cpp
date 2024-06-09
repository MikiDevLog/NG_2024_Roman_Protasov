#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double coefA, coefB, coefC, Discr, Root1, Root2;

    cout<<"Here is simple quadratic equation calculator."<<'\n';                                                           //intro
    cout<<"Enter coefficient a:"<<'\n';                                                                                    //ask+read coefficient a
    cin>>coefA;

    cout<<"Enter coefficient b:"<<'\n';                                                                                    //ask+read coefficient b
    cin>>coefB;

    cout<<"Enter coefficient c:"<<'\n';                                                                                    //ask+read coefficient c
    cin>>coefC;

    system("cls");
    cout<<"Now equation looks like this: "<<'\n'<<coefA<<"x^2 + "<<coefB<<"x + "<<coefC<<" = 0"<<'\n';                     //show full form of equation wich will be solved

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);

    Discr=(coefB*coefB)-(4*coefA*coefC);                                                                                   //calculate+show discriminant value for this equation
    cout<<"Discriminant: "<<'\n'<<Discr<<'\n';

    if (Discr > 0)                                                                                                         //if D > 0 prossed like normal+show all 2 possible roots
    {
        Root1=((-coefB)+sqrt(Discr))/(2*coefA);
        Root2=((-coefB)-sqrt(Discr))/(2*coefA);
        cout<<"x1 ="<<Root1<<'\n';
        cout<<"x2 ="<<Root2<<'\n';
    }
    else if (Discr == 0)                                                                                                   //if D = 0 prossed with corresponding furmula+show root
    {
        Root1=-(coefB/(2*coefA));
        cout<<"x = "<<Root1;
    }
    else if (Discr < 0)                                                                                                    //if D < 0 show erroe message
    {
        cout<<"D < 0, No roots can be found."<<endl;

    }
}
