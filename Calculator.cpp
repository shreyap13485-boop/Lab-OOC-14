#include<iostream>
using namespace std;
int main()
{
  int a, b, choice;
  cout<<"Enter two numbers:";
  cin>>a>>b;
  cout<<"\n1. Addition";
  cout<<"\n2. Substraction";
  cout<<"\n3. Multiplication";
  cout<<"\n4. Division";
  cout<<"\n5. Modulo";
  cout<<"\nEnter your choice:";
  cin>>choice;
  switch(choice)
  {
    case 1:
    cout<<"Addition="<<a+b;
    break;
    case 2:
    cout<<"Substraction="<<a-b;
    break;
    case 3:
    cout<<"Multiplication="<<a*b;
    break;
    case 4:
    cout<<"Division="<<a/b;
    break;
    case 5:
    cout<<"Modulo="<<a%b;
    break;
    default:
    cout<<"Invalid choice";
  }
  return 0;
}


