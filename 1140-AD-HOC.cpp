#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    char ch;
    char resp;
    string subs;

    while(s != "*")
    {
        istringstream iss(s);
        ch = toupper(s[0]);
        resp = 'Y';
        while (iss)
        {
        iss >> subs;
        if(ch != toupper(subs[0])) {resp = 'N'; break;}
        }
        iss.clear();
        cout << resp << endl;
        getline(cin, s);
    }

    return 0;
}
