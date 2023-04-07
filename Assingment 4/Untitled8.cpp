#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data data;
    int choice;
    
    printf("Enter 1 for integer input, 2 for float input: ");
    scanf("%d", &choice);
    
    if(choice == 1) {
        printf("Enter an integer: ");
        scanf("%d", &data.i);
        printf("You entered: %d\n", data.i);
    }
    else if(choice == 2) {
        printf("Enter a float: ");
        scanf("%f", &data.f);
        printf("You entered: %.2f\n", data.f);
    }
    else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
