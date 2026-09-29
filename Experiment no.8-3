#include <iostream>
using namespace std;

class MyClass {
private:
    int value; // Private member to store the value
public:
    MyClass(int val)
    : value(val)
    {
    }

  bool operator==(const MyClass& other) const
    {
        
        return value == other.value;
    }

    bool operator!=(const MyClass& other) const
    {
        // Utilize the already overloaded '==' operator
        return !(*this == other);
    }

    bool operator<(const MyClass& other) const
    {
        
        return value < other.value;
    }

  
    bool operator>(const MyClass& other) const
    {
        
        return value > other.value;
    }
bool operator<=(const MyClass& other) const
    {
      
        return !(*this > other);
    }

    
    bool operator>=(const MyClass& other) const
    {
      return !(*this < other);
    }
};
