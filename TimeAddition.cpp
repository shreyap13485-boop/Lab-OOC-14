#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    // Accept time values
    void acceptTime()
    {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    // Add two times
    Time addTime(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        // Convert seconds into minutes
        result.minutes += result.seconds / 60;
        result.seconds %= 60;

        // Convert minutes into hours
        result.hours += result.minutes / 60;
        result.minutes %= 60;

        return result;
    }

    // Display time in HH:MM:SS format
    void displayTime()
    {
        cout << setfill('0')
             << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.acceptTime();

    cout << "Enter second time:\n";
    t2.acceptTime();

    result = t1.addTime(t2);

    cout << "\nResultant time (HH:MM:SS): ";
    result.displayTime();

    return 0;
}
