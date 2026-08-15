#include<stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Muitiplication\n");
    printf("4. Division\n");
    printf("5. Modulo Division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
  {
    case 1:
    printf("Addition=%d", a+b);
    break;
    case 2:
    printf("Substraction=%d", a-b);
    break;
    case 3:
    printf("Multiplication=%d", a*b);
    break;
    case 4:
    printf("Division=%d", a/b);
    break;
    case 5:
    printf("Modulo Division=%d", a%b);
    break;
    default:
    printf("Invalid chioice");
  }
  return 0;
}


