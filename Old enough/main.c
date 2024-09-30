#include <stdio.h>

int main(void){
    int age;
    printf("Please tell me your age: \n");
    scanf("%d",&age);
    if (age >= 18){
        printf("You are old enough to vote.");
    }else if (age >= 16){
        printf("You are old enough to drive.");
    }else if (age >= 15){
        printf("You are old enough to get a learners permit.");
    }else if (age >= 6){
        printf("You are old enough to go to school.");
    }else printf("You are not old enough to go to school.");
    return 0;
}