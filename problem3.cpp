#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

void ConcatRemove(string s, string t, int k);

int main()
{
    
    ConcatRemove("bla bla bla bla", "blablabcde", 8);
    ConcatRemove("tab", "tab", 7);
    
    
    return 0;
}

void ConcatRemove(string s, string t, int k) 
{
    // remove all spaces from the s string
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    // length of the strings
    int sL = s.length();
    int tL = t.length();
    
    // convertion from s and t to array of chars
    char s_array[sL + 1];
    char t_array[tL + 1];
    strcpy(s_array, s.c_str());
    strcpy(t_array, t.c_str());
    
    int r = 0; // quantity of removes
    int c = 0; // quantity of concats

    
    if (sL < tL) { // case which t string is bigger than s string
        c = c + (tL-sL);
        if (k-c == 1 || (k-c == 3 && tL > 1) || (tL == (k-c) && (k-c)%2 != 0)) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    } else if (sL > tL) { // case which t string is smaller than s string
        r = r + (sL-tL);
        s_array[sL - r] = '\0'; // remove r characters from the end of s string
        for (int i = strlen(s_array); i > 0; i--) {
            if (s_array[i] != t_array[i]) {
                c++;
                r++;
            }
        }
        
        if (c+r == k) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
        
    } else { // case which strings s and t have the same length
        if (k == 1 || (k == 3 && sL > 1) || (sL == k && k%2 != 0)) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }

}