#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
#include <istream>

using namespace std;

void intCheck(int & a);
void input (int & a, int & b, int & c);
void sequence (const int & a, const int & b, const int & c);
void question (string & a, bool & b)
{
    cout << "What is my rule?" << endl;
    cin >> a;
    if(a == "Ascend" || a == "ascend" || a == "Ascending" || a == "ascending")
    {
        b = true;
    }
    else
    {
        cout << "That is not my rule (probably)." << endl;
    }
}

void clearAbyss()
{
    cin.ignore(256, '\n');
}

void intCheck(int & a)
{
    while(cin.fail())
    {
        cin.clear();
        clearAbyss();
        cout << endl << "Really? Characters? Numbers only FAG" << endl;
        cin >> a;
    }
}
void input(int & a, int & b, int & c)
{
    cin >> a;
    intCheck (a);
    cin >> b;
    intCheck (b);
    cin >> c;
    intCheck (c);
    clearAbyss();
}

void sequence (const int & a, const int & b, const int & c)
{
    if(a < b && b < c)
    {
        cout << "This follows my rule." << endl;
    }
    else
    {
        cout << "This does not follow my rule." << endl;
    }
}

int main()
{
    string answer = "something";
    int a = 0;
    int b = 0;
    int c = 0;
    int guess = 0;
    bool correct = false;
    cout << "Hello Calvin." <<endl << "Let's play a game." << endl <<
    "I will give you a 3 number sequence and I have a rule in mind that they obey." <<
    endl << "I want you to figure out the rule that I have in my mind." << endl <<
    "The way you get information is you can propose your own 3 number sequence." << endl <<
    "I will tell you if it follows my rule." << endl << "My sequence is... 2 4 8." << endl;
    while(!correct)
    {
        cout << "Give me 3 numbers." << endl;
        input(a, b, c);
        sequence (a, b, c);
        question(answer, correct);
        guess++;
    }
    cout << "This was guess number " << guess << "." << endl;
    cout << "You win!!! YAYAYAYAYAYYYYY" << endl;
    system("pause");
}
