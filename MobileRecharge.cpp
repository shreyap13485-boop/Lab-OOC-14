#include <iostream>
#include <string>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    double balance;

public:
    // Constructor
    MobileRecharge(string number, double amount)
    {
        mobileNumber = number;
        balance = amount;
    }

    // Recharge account
    void recharge(double amount)
    {
        balance += amount;
        cout << "Recharge successful!" << endl;
    }

    // Deduct balance
    void deductBalance(double amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Amount deducted successfully!" << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!"
                 << endl;
        }
    }

    // Display account details
    void displayDetails()
    {
        cout << "\nMobile Number: " << mobileNumber << endl;
        cout << "Available Balance: Rs. " << balance << endl;
    }
};

int main()
{
    string number;
    double amount, rechargeAmount, deductionAmount;

    cout << "Enter Mobile Number: ";
    cin >> number;

    cout << "Enter Initial Balance: ";
    cin >> amount;

    MobileRecharge m(number, amount);

    cout << "Enter Recharge Amount: ";
    cin >> rechargeAmount;
    m.recharge(rechargeAmount);

    cout << "Enter Amount to Deduct: ";
    cin >> deductionAmount;
    m.deductBalance(deductionAmount);

    m.displayDetails();

    return 0;
}
