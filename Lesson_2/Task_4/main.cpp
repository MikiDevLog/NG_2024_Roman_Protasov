#include <iostream>

using namespace std;

int wordCount(char *str)
{
    int WordsNum = 0;
    while(*str)
    {
        if(*str == ' ')
        {
            WordsNum++;
        }
        str++;
    }
    return WordsNum + 1;
}

int main()
{
    char input[999];
    int WordCounter = 0;
    cout << "Enter any number of characters less then 999: " << endl;
    cin.getline(input, 999);
    WordCounter = wordCount(input);
    cout << "The number of words in your string is: " << WordCounter << endl;
}


