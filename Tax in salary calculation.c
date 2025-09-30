//Zainab Kinza Sheikh           CT-059           
#include <stdio.h>

int main(void) 
{
    int taxrate, salary, tax, salaryaftertax;
    
    printf("Enter tax rate (as percentage): ");
    scanf("%d", &taxrate);
    
    printf("Enter your salary: ");
    scanf("%d", &salary);
    
    tax = (taxrate * salary) / 100;
    salaryaftertax = salary - tax;
    
    printf("Salary after paying the tax:\n");
    printf("Tax amount: $%d\n", tax);
    printf("Salary after tax: $%d\n", salaryaftertax);
    
    return 0;
}