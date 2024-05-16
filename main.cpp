#include <iostream>

void menu(void) {
    printf("\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("5 - Stop Program\n");
    printf("Select an option:\n");
}
int main() {
    int option = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;
    float number3 = 0;
    float number4 = 0;
    float resultd = 0;
    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                printf("First number:");
                scanf("%d", &number1);
                printf("Second number:");
                scanf("%d", &number2);
                result = number1 + number2;
                printf("%d + %d = %d\n", number1, number2, result);
                break;
            case 2:
                printf("First number:");
                scanf("%d", &number1);
                printf("Second number:");
                scanf("%d", &number2);
                result = number1 - number2;
                printf("%d - %d = %d\n", number1, number2, result);
                break;
            case 3:
                printf("First number:");
                scanf("%d", &number1);
                printf("Second number:");
                scanf("%d", &number2);
                result = number1 * number2;
                printf("%d * %d = %d\n", number1, number2, result);
                break;
                case 4:
                printf("First number:");
                scanf("%f", &number3);
                printf("Second number:");
                scanf("%f", &number4);
                if (number4!= 0)
                {
                    resultd = number3 / number4;
                    printf("%f / %f = %f\n", number3, number4, resultd);
                }

                   else
                    {
                        printf("%f / %f = wrong\n try again\n", number3, number4);
                    }

                break;
            default:
                printf("Choose the right option\n\n");
        }
    } while (option != 5);

    return 0;
}