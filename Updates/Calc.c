#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;
void percent(char type[], int amount){
    int per = (amount/income)*100;
    printf("Your %s is %d%% percent of your income.\n", type, per);
}

int main(void){
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
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    percent("expenses", expenses);
    percent("spending money", spend);
    return 0;
}