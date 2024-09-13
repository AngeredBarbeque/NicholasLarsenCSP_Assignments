#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, spend;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses, pspend;
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%f", &income);

    printf("How much does your rent cost a month?\n");
    scanf("%f", &rent);

    printf("How much do your utilities cost a month?\n");
    scanf("%f", &utilities);

    printf("How much do your groceries cost a month?\n");
    scanf("%f", &groceries);

    printf("How much does your transportation cost a month?\n");
    scanf("%f", &transportation);
    savings = income*0.2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;

    printf("You make $%.2f\n", income);
    printf("Your expenses are $%.2f\n", expenses);
    printf("Your savings are $%.2f\n", savings);
    printf("Your spending money is $%.2f\n", spend);
    prent = rent/income*100;
    putilities = utilities/income*100;
    pgroceries = groceries/income*100;
    ptransportation = transportation/income*100;
    psavings = savings/income*100;
    pexpenses = expenses/income*100;
    pspend = spend/income*100;
    printf("Your rent is %d%% of your income\n", (int) prent);
    printf("Your utilities are %d%% of your income\n", (int) putilities);
    printf("Your groceries are %d%% of your income\n", (int) pgroceries);
    printf("Your transportation is %d%% of your income\n", (int) ptransportation);
    printf("Your savings are %d%% of your income\n", (int) psavings);
    printf("Your expenses are %d%% of your income\n", (int) pexpenses);
    printf("Your spending money is %d%% of your income\n", (int) pspend);
    return 0;
}