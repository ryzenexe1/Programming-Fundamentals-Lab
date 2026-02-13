#include <stdio.h>

int main() {
    int choice;
    int amount;
    int balance = 10000;

    do 
	{
        printf("1. Balance Inquiry\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;

            case 2:
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    balance -= amount;
                    printf("Your current balance after withdrawal is: %d\n", balance);
                }
                break;

            case 3:
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Your current balance after deposit is: %d\n", balance);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid selection. Please try again.\n");
                break;
        }

    }
	 while (choice != 4);  

    return 0;
}
