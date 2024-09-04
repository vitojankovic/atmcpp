#include <iostream>
#include <string>

using namespace std;

class user
{
private:
    string firstName{};
    string lastName{};
    string Email{};
    string Password{};
    int age{};
    int cardNumber{};


public:
    void askForRegLog();
    void callRegister();
    void callLogin();
    void askForInput();
    void callAskForLoan();
    void callWithdraw();
    void callDeposit();
    void callShowStats();



   /* Getter for firstName
    string getFirstName()
    {
        return firstName;
    }

    // Getter for age
    int getAge()
    {
        return age;
    }

    // Getter for firstName
    string getFirstName()
    {
        return firstName;
    }

    // Getter for firstName
    int getCardNumber()
    {
        return cardNumber;
    } */


    // Setter and getter for Email
    void setEmail(string mail)
    {
        Email = mail;
    }
    string getEmail()
    {
        return Email;
    }

    string getName()
    {
        return firstName;
    }

    // Setter and getter for Password
    void setPassword(string pass)
    {
        Password = pass;
    }
    string getPassword()
    {
        return Password;
    }

}; // END OF CLASS
