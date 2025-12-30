//WAP to create/simulate telecom call service conversation scenario using nested switch case.
#include <stdio.h>

int main() {
    int lang, choice;

    printf("Welcome to Telecom Service\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch (lang) {

        case 1:  // English menu
            printf("\nYou selected English\n");
            printf("Press 1 for Balance Inquiry\n");
            printf("Press 2 for Recharge\n");
            printf("Press 3 to Talk to Customer Care Executive\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nYour current balance is Rs. 199\n");
                    break;
                case 2:
                    printf("\nRecharge successful!\n");
                    break;
                case 3:
                    printf("\nPlease wait… Connecting your call\n");
                    break;
                default:
                    printf("\nInvalid option in English menu\n");
            }
            break;

        case 2:  // Hindi menu
            printf("\nAapne Hindi chuni hai\n");
            printf("Balance janne ke liye 1 dabaiye\n");
            printf("Recharge ke liye 2 dabaiye\n");
            printf("Customer care se baat karne ke liye 3 dabaiye\n");
            printf("Apna vikalp dijiye: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nAapka balance Rs. 199 hai\n");
                    break;
                case 2:
                    printf("\nRecharge safal raha!\n");
                    break;
                case 3:
                    printf("\nKripya pratiksha kijiye… call connect ho rahi hai\n");
                    break;
                default:
                    printf("\nHindi menu me galat vikalp\n");
            }
            break;

        default:
            printf("\nInvalid language selection\n");
    }

    return 0;
}

