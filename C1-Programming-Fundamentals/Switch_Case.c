#include<stdio.h>
int main(void)
{
    int G ;
    printf("Please Enter your Grades: ");
    scanf("%d", &G);
    
    switch (G) {
    case 85 :
        printf("Congratulations! You've got an Excellent grades");
        break;
        
    case 75  :
        printf("Congratulations! You've got a Very Good grades");
        break;
        
    case 65  :
        printf("Congratulations! You've got a Good grades");
        break;
        
    case 50  :
        printf("Congratulations! You've succeeded!");
        break;
        
    case 40:
        printf("Sorry! You have FAILED");
        break;
        
    default:
        printf("Please Enter a Valid number between 1 : 100");

        } 
	return 0;
    }
