//? Defining header

#ifndef ATM_H
#define ATM_H

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Login_Registration.h"





#define PRINT(x) std::cout << x;
using std::string;

double balance{};
double loanAmt{};
double depositAmount{};

std::vector<double>loanTimeLine;

    



void user::askForInput()
{



    PRINT("1) Deposit\n");
    PRINT("2) Withdraw\n");
    PRINT("3) Show stats\n");
    PRINT("4) Ask for loan\n");

    char choice2;

    std::cin >> choice2;

    switch (choice2)
    {
    case '1':
        callDeposit();
        break;
    case '2':
        callWithdraw();
        break;
    case '3':
        callShowStats();
        break;
    case '4':
        callAskForLoan();
        break;
    default:
        PRINT("Please enter a valid choice!\n");
    } // END OF SWITCH STATEMENT
} // END OF ASKFORINPUT




void user::callAskForLoan()
{


    PRINT("Enter the amount you need: ");
    std::cin >> loanAmt;

    if(loanAmt <= balance / 10)
    {
        PRINT("Loan affirmed!\n");
        loanTimeLine.push_back(loanAmt);
    }
} 

void user::callDeposit()
{

    PRINT("Enter the amount you want to deposit: ");
    std::cin >> depositAmount;
    balance = balance + depositAmount;


    // Options again
    askForInput();
}

void user::callWithdraw()
{

    if(balance > 0)
    {
        std::cout << "Your current balance is " << balance << " !" << std::endl;
        std::cout << "Enter the amount you want to withdraw: " << std::endl;
        int withdrawAmt;
        std::cin >> withdrawAmt;
        if(withdrawAmt <= balance)
        {
            std::cout << "Withdrawal approved!" << std::endl;
            balance -= withdrawAmt;
            std::cout << "Your current  balance is " << balance << std::endl;
        }
        else
        {
            std::cout << "Your don't have that much money on your account, Widthdraw disapproved!"  << std::endl;
            std::cout << "Do you want to withdraw a lower amount?  " << std::endl;
            std::cout << "(y)" << std::endl;
            std::cout << "(n)" << std::endl;
            char widthDrawInput;
            std::cin >> widthDrawInput;
            switch(widthDrawInput)
            {
                case 'y':
                    callWithdraw();
                    break;
                case 'n':
                    askForInput();
                    break;
                default:
                    std::cout << "Please enter a valid option!" << std::endl;
            }
        }
    }


    askForInput();
}

void user::callShowStats()
{

    void printStackElements();


    PRINT("Your current balance is: " << balance << '\n');
    PRINT("Your current loans are: " << loanAmt << '\n');
    PRINT("Your loan history: " << '\n');
    if(!loanTimeLine.empty())
    {

    } 
    else {
        std::cout << "You have no loans at the moment!" << std::endl;
    }

 


    // Options again
    askForInput();

} // END OF ASKCALLSHOWSTATS

#endif