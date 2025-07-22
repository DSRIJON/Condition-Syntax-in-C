#include<stdio.h>
#include<string.h> // Include string.h for strcmp

int main(){
    char var[20]; // Declared an array of 20 characters
    printf("Enter Your Day-name : ");
    scanf("%s", var);

    if(strcmp(var, "Saturday") == 0){
        printf("Today is %s\n", var);
    }
    else if(strcmp(var, "Sunday") == 0){
        printf("Today is %s\n", var);
    }
    else if(strcmp(var, "Monday") == 0){
        printf("Today is %s\n", var);
    }
    else if(strcmp(var, "Tuesday") == 0){
        printf("Today is %s\n", var);
    }
    else if(strcmp(var, "Wednesday") == 0){
        printf("Today is %s\n", var);
    }
    else if(strcmp(var, "Thursday") == 0){ // Fixed typo "Thuraday" to "Thursday"
        printf("Today is %s\n", var);
    }
    else{
        printf("Invalid day name.\n"); // Updated to handle invalid input
    }

    return 0;
}