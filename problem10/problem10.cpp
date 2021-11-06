#include <iostream>
#include <string>

using namespace std;

void reverseString();

int main()
{

    reverseString();

    return 0;
}

void reverseString() 
{
    string s;
    cout << "Enter a string: \n";
    cin >> s;
    
    int len = s.length();
    int start = 0, end = len-1;
    while (start < end)
    {
        // swap the values on the start and end chars of the string
        s[start]^=s[end];
        s[end]^=s[start];
        s[start]^=s[end];
        start++;
        end--;
    }
    
    cout << "The string you entered reversed is: " << s << "\n";
}