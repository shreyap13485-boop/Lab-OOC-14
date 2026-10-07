#include<iostream>
using namespace std;
class Fraction
{
int numerator, denominator;
public:
void accept()
{
  cout << "Enter numerator:";
cin >> numerator;
cout << "Enter denominator:";
cin >> denominator;
}
Fraction add(Fraction f)
}
Fraction result;
result.numerator=(numerator * f.denominator) + (f.numerator * denominator);
result.denominator=denominator * f.denominator;
return result;
}
Fraction subtract(Fraction f)
{
  Fraction result;
result.numerator=(numerator * f.denominator)- (f.numerator * denominator);
result.denominator=denominator * f.denominator;
return result;
}
void display()
{
  int a=numerator;
int b=denominator;
int x=(a<0) ? -a: a;
int y=(b<0) ? -b: b;
while(y!=0)
{
int temp=y;
y = x % y;
x = temp;
}
numerator /=x;
denominato /=x;
if(denominator<0)
{
numerator = -numerator;
denominator = -denominator;
}
cout  << numerator <<"/" <<denominator <<endl;
}
};
int main()
{
Fraction f1, f2, sum, difference;
cout<<"Enter first fraction:"<<endl;
f1.accept();
cout<<"\nEnter second fraaction:" <<endl;
f2.accept();
sum=f1.add(f2);
difference=f1.subtract(f2);
cout<<"\nAddition=";
sum.display()
cout<<"Subtraction=";
difference.display();
return 0;
}
  


  

  
