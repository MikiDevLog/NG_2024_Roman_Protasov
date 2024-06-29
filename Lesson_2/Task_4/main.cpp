#include <iostream>

using namespace std;

int wordCount(char *str)                                                                    //function declaration
{
    int WordsNum = 0;
    while(*str)                                                                             //loop wich go simbol by simbol
    {
        if(!isalpha(*str))                                                                  //if current simbol is not alphabetic character - its word divisor so it increase word counter state
        {
            WordsNum++;
        }
        str++;
    }
    return WordsNum-1;
}

int main()
{
    char input[999];
    cout << "Enter any number of characters less then 999: " << endl;                       //input promt
    cin.getline(input, 999);                                                                //scan the whole imput as string [input] with size of 999 characters
    int WordCounter = wordCount(input);                                                     //put this string into function
    cout << "The number of words in your string is: " << WordCounter << endl;
}
