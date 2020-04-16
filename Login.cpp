#include <iostream>

using namespace std;

int main()
{
    string username = "dylan";
    string password = "pass123";


    cout << "Username: ";
    string input_username;
    cin >> input_username;

    cout << "Password: ";
    string input_password;
    cin >> input_password;
    
    if (input_username == username && input_password == password) 
    {
        cout << "Correct!";
    }
    else 
    {
        cout << "Try again!";
    }
}