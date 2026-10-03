#include<iostream>
using namespace std;
int area(int side);
int area(int length, int bredth);
float area(float radius);
int main()
{
  cout<<"Calling the area() function for computing the area  of a square"
<<"\n(side=5) ="<<area(5) <<"\n";
cout<<"Calling the area() function for computing the area of a rectangle"
  <<"\n(length=5, breadth=10)="<<area(5,10)<,"\n;
  cout<<"Calling the area() function for computing the area of a circle"
  <<"\n(radius=5.5)=" <<area(5.5f);
return 0;
}
int area(int side)
{
  return(side * side);
}
int area(int length, int breadth)
{
  return(length * breadth);
}
float area(float radius)
{
  return(3.14f * radius * radius);
}
  
