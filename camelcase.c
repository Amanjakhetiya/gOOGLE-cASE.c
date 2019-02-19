
// CPP program to convert given sentence
/// to camel case.
#include <bits/stdc++.h>
using namespace std;

// Function to remove spaces and convert
// into camel case
string convert(string s)
{
    int n = s.length();

    int res_ind = 0;

    for (int i = 0; i < n; i++) {

        // check for spaces in the sentence
        if (s[i] == ' ') {

            // conversion into upper case
            s[i + 1] = toupper(s[i + 1]);
            continue;
        }

        // If not space, copy character
        else
            s[res_ind++] = s[i];
    }

    s[res_ind] = '\0';

    // return string to main
    return s;
}

// Driver program
int main()
{
    string str = "My name is kashif iqbal";
    cout << convert(str);
    return 0;
}
