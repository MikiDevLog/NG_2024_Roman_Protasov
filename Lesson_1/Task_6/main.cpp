#include <iostream>

using namespace std;

int main()
{
    int size=0, height=0, width=0;

    cout<<"Enter the number:"<<endl;                                //intro
    cin>>size;                                                      //scan the size value

    for (height=1;height<=size;height++)                            //loop of rendered lvles of tree
    {
        for(width=1;width<=size-height;width++)                     //inner loop for spaces
        {
            cout<<' ';
        }
        for(width=1;width<=2*height-1;width++)                      //inner loop for stars
        {
            cout<<'*';
        }
        cout<<endl;
    }

    for (width=1;width<size;width++)                                //loop to make spaces before add last part
    {
        cout<<' ';
    }
        cout<<'*'<<endl;
}
