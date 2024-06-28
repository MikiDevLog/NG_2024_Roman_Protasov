#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Rad=0,CordX=0,CordY=0,Dist=0;
    cout<<"Enter the radius: ";
    cin>>Rad;                                   //Read the radius
    cout<<"Enter coordinates X and Y: ";
    cin>>CordX>>CordY;                          //Read the coords
    if((CordX>Rad) & (CordY>Rad))               //Compare any of coords with radius (in my interpritation radius is maximum range of detection of the device)
    {
        cout<<"Too far from the object."<<endl; //Return err if any of coords going beyond the maximum detection radius
    }
    else                                        //Assuming artifact in the center we can use euclidean distance formula where the center of detection radius in (0:0) coords
    {
        Dist=sqrt(CordX*CordX+CordY*CordY);
        cout<<"Distance from the artifact: "<<Dist<<endl;
    }
    return 0;
}
