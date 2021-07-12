#include <stdio.h>

int main()
{
    int choice, i = 0;
    float stepsCount, levelStairs, flightCounts, result;

    printf("Calories Counter by Syazanie Amirin");

    while(i == 0) {
        printf("\n\n");
        printf("1 = Walking\n2 = Stairs\n3 = Exit\nChoice: ");
        scanf("%d", &choice);
        printf("\n\n");

        if(choice == 1) {
            printf("How many steps you took?\n");
            scanf("%f", &stepsCount);

            result = stepsCount * 0.04;

            printf("\n\n");
            printf("Total calories burned: %.2f", result);
            continue;
        }

        else if(choice == 2) {
            printf("How many stairs per flight?\n");
            scanf("%f", &levelStairs);

            printf("How many levels?\n");
            scanf("%f", &flightCounts);

            levelStairs *= 0.17;
            result = levelStairs * (flightCounts * 2);

            printf("\n\n");
            printf("Total calories burned: %.2f", result);
            continue;
        }

        else if(choice == 3) {
            i = 1;
            break;
        }
    }
}
