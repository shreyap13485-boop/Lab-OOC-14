#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    void operator+()
    {
        feet=100;
        inch=500;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
 };

int main()
{
    Distance d1(8, 9);
    cout<<d1.feet;
    cout<<d1.inch;
    +d1;
    return 0;
}
