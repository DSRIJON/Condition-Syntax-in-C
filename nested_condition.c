#include<stdio.h>
#include<string.h>
int main(){
    int total_perchase;
    printf("Enter your perchase amount in USD :");
    scanf("%d",&total_perchase);
    if(total_perchase >= 100){
        printf("Congratulation you've obtain your 10 percent off\n");
        printf("Do you've membership card?"); //answer would be Yes or No
        char var[20];
        scanf("%s",var);
        if(strcmp(var,"Yes") == 0){
            printf("You've got your extra 5 percent");
        }
        else{
            printf("You just got your 10 percent");
        }
    }
    else{
        printf("No discount\n");
    }
    return 0;
}