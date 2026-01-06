#include <stdio.h>

void showMenu() {
    printf("\nOperating System Simulator\n");
    printf("1. Process Scheduling\n");
    printf("2. Memory Management\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Simulating Process Scheduling...\n");
                printf("Using Round Robin Algorithm\n");
                break;

            case 2:
                printf("Simulating Memory Management...\n");
                printf("Using Fixed Partitioning\n");
                break;

            case 3:
                printf("Exiting OS Simulator...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}
