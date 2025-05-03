//working

#include <stdio.h>

int main() {
double total_interest;
double interest_for_this_month;
double loan_balance_during_the_month;
double loan_balance;
double monthly_payment;
double principal;
double interest;
double interestDecimal;
int years;
int yearsToMonths;
double interestPercent;
int i;


printf("Welcome to the loan calculator!\n");
printf("Firstly,How many year is your loan?:\n");
scanf ("%d", &years);
yearsToMonths = ( ( years*12)+1);

printf("What is the total amount of the loan?:\n");
scanf ("%lf", &loan_balance);

printf("What is your annual interest rate?:\n");
scanf("%lf",&interestPercent);

interestDecimal= interestPercent/100;

printf("Finally, What is your monthly payment?:\n");
scanf ("%lf", &monthly_payment);

for(i = 1; i < yearsToMonths; ++i){
interest =(interestDecimal/12)*loan_balance;
principal= monthly_payment- interest;
loan_balance=loan_balance-principal;
total_interest = total_interest+interest;


printf("Month: %d Interest: %lf Principal: %lf Balance: %lf\n",i ,interest,principal,loan_balance);
}
printf("\nTotalInterest= %lf\n",total_interest);
printf("FinalBalance= %lf\n", loan_balance);
return 0;
}
