#include <iostream>
using namespace std;

bool MG3()
{
    string s4, s5, s6, s7;
    string s1 = "mporgnimrag"; // programming
    string s2 = "mage";        // game
    string s3 = "gocnid";      // coding
    string s8 = "abl";         // lab

    cout << "Unscramble this word: " << s1 << endl
         << endl;
    cin >> s4;

    if (s4 == "programming")
    {

        cout << "Unscramble this word: " << s2 << endl
             << endl;
        cin >> s5;
        if (s5 == "game")
        {
            cout << "Unscramble this word: " << s3 << endl
                 << endl;
            cin >> s6;
            if (s6 == "coding")
            {
                cout << "Unscramble this word: " << s8 << endl
                     << endl;
                cin >> s7;
                if (s7 == "lab")
                {
                    cout << "You are CORRECT!!!" << endl
                         << endl;
                    return true;
                }
                else
                {
                    cout << "You are wrong, please try again." << endl
                         << endl;
                    return false;
                }
            }
            else
            {
                cout << "You are wrong, please try again." << endl
                     << endl;
                return false;
            }
        }
        else
        {
            cout << "You are wrong, please try again." << endl
                 << endl;
            return false;
        }
    }
    else
    {
        cout << "You are wrong, please try again." << endl
             << endl;
        return false;
    }
    return true;
}

int main()
{
    do
    {
        MG3();
    } while (MG3() != false); // not working properly yet
}