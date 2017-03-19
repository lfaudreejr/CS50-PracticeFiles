#include <cs50.h>
#include <stdio.h>

void accumulate_interest(double* newbalance, double* time, double* balance, double* rate);

int main(void)
{
    double time = 0;
    double balance = 0;
    double rate = 0;
    double newbalance = 0;
    
    if(time <= 0){
        printf("Enter the time of the loan: ");
        time = get_double();
        printf("\n");
    }
    if(balance <= 0){
        printf("Enter the loan balance: ");
        balance = get_double();
        printf("\n");
    }
    if(rate <= 0){
        printf("Enter the loan rate as decimal: ");
        rate = get_double();
        printf("\n");
    }
    
    accumulate_interest(&newbalance, &time, &balance, &rate);
    
    printf("Starting balance is: %f\n", balance);
    printf("Annual interest rate: %f\n", rate);
    printf("Updated balance: %f\n", newbalance);
}

void accumulate_interest(double* newbalance, double* time, double* balance, double* rate){
    //interest equals principle * rate * time

    (*newbalance) = ((*balance) * (*rate) * (*time)) + *balance;

}