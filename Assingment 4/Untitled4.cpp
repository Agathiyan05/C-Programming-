#include <stdio.h>

struct customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct customer c[], int size) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < size; i++) {
        if (c[i].balance < 100.0) {
            printf("Account no.: %d, Name: %s\n", c[i].account_no, c[i].name);
        }
    }
}

int main() {
    struct customer c[3];

    // Accept customer details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account no.: ");
        scanf("%d", &c[i].account_no);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    // Print low balance customers
    print_low_balance_customers(c, 3);

    return 0;
}
