#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    double consultationCharges;

public:
    // Constructor
    Patient(int id, string n, int a, double charges)
    {
        patientId = id;
        name = n;
        age = a;
        consultationCharges = charges;
    }

    // Display patient information
    void displayPatient()
    {
        cout << "\nPatient ID: " << patientId << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Charges: Rs. "
             << consultationCharges << endl;
    }
};

int main()
{
    int id, age;
    string name;
    double charges;

    cout << "Enter Patient ID: ";
    cin >> id;

    cin.ignore();
    cout << "Enter Patient Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Consultation Charges: ";
    cin >> charges;

    Patient p(id, name, age, charges);

    cout << "\n--- Patient Information ---";
    p.displayPatient();

    return 0;
}
