//? Defining header

#ifndef LOGIN_REGISTRATION_H
#define LOGIN_REGISTRATION_H


// Includes
#include <iostream>
#include <string>



// Defines easier writing
#define PRINT(x) std::cout << x;
using std::string;


//! CONSTRUCTOR


// Ask for Registration/Login
void user::askForRegLog()
{

    PRINT("Please select your option\n");

    char choice{};

    PRINT("1) Register\n");
    PRINT("2) Login\n");
    std::cin >> choice;

    switch(choice)
    {
        case '1':
        user::callRegister();
        break;
        case '2':
        user::callLogin();
        break;
        default:
        PRINT("Please enter one of the options!");
        
    } // END OF SWITCH
} // END OF ASKFORREGLOG



    // If user wants to register
    void user::callRegister()
    {
        PRINT("Please enter your first name: \n");
        std::cin >> user::firstName;
        PRINT("Please enter your second name: \n");
        std::cin >> user::lastName;
        PRINT("Please enter your Email: \n");
        std::cin >> user::Email;
        PRINT("Please enter your Password: \n");
        std::cin >> user::Password;
        while(user::Password.length() < 8)
        {
            PRINT("Please enter a password that is at least 8 characters long!\n");
            std::cin >> Password;
        }


        PRINT("Please enter your Age: \n");
        std::cin >> user::age;
        if(age < 18)
        {
            PRINT("You are not eligible to have an account!\n");
        }


        PRINT("Please enter your Card Number: \n");
        std::cin >> user::cardNumber;

        askForRegLog();
    } // END OF REGISTER SYSTEM

    // If user wants to login
    void user::callLogin()
    {

        string logMail;
        string logPass;

        do
        {
        PRINT("Please enter your Email: \n");
        std::cin >> logMail;
        }while(logMail != Email);

        do
        {
        PRINT("Please enter your Password: \n");
        std::cin >> logPass;  
        }while(logPass != Password);

    } // END OF LOGIN SYSTEM
#endif