#include <iostream>

using namespace std;

int main()
{
    int size=0;
    int height=0, width=0;

    cout<<"I will draw Christmas tree  4u."<<endl<<"The bigger the number, the bigger the tree will be."<<endl; //intro
    cin>>size;                                                      //scan the size value

    for(width=1;width<=size;width++)                                //the first loop works as long as [size] is less or equal to half of the triangle width
    {                                                               //and since the [size] of the triangle matches the number of the central column (its center) it can use the value of the [size] entered
        for(height=1;height<=(size+width);height++)                 //second loop runs as long as [height] is less or equal to [size] plus the value of [width]
        {
            if(height<=(size-width+1))                              //if [height] is less than or equal to [size] minus [width] plus 1.
                cout<<' ';                                          //the unit [1] specifies the offset of the entire triangle from the left border of the screen. if the condition is met, type a [ ], otherwise type an [*].
            else
                cout<<'*';
        }
        cout<<endl;
    }

    for(height=1;height<=(size+width);height++)
    {
        if(height==size+1)
            cout<<'*';
        else
            cout<<' ';
    }
}
//for some strange reason program brakes when size>89(90 also brake)
