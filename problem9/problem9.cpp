#include <iostream>

using namespace std;

void stringLength();

int main()
{

    stringLength();

    return 0;

}

void stringLength() 
{
    int len = 0;
    char ch[100];
    
    cout << "Enter a string: \n";
    cin >> ch;
    
    for (int i = 0; ch[i] != '\0'; i++) 
    {
        len++;
    }
    
    cout << "Length of the string " << ch << ": " << len << "\n";
}