#include<stdio.h>
int main(void)
{
    int choice;
    printf("Enter a number from 1 to 5:    ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nFood Item - Burger\nPrice - 129");
        break;
        case 2:printf("\nFood Item - Pasta\nPrice - 179");
        break;
        case 3:printf("\nFood Item - Sandwich\nPrice - 149");
        break;
        case 4:printf("\nFood Item - Pizza\nPrice - 239");
        break;
        case 5:printf("\nFood Item - French Fries\nPrice - 99");
        break;
        default: printf("\nEntered wrong choice!!!");

    }
    return 0;
}
