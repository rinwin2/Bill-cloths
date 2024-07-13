#include <stdio.h>

void tShirtBill(int num_shirts) {
    // Calculate the unit cost based on the number of shirts
    float unit_cost;
    if (num_shirts <= 3) {
        unit_cost = 10.0;
    } else if (num_shirts <= 7) {
        unit_cost = 8.0;
    } else {
        unit_cost = 6.0;
    }

    // Calculate the total cost
    float total_cost = num_shirts * unit_cost;

    // Apply the discount if the total cost is greater than $400
    float discount = 0.0;
    if (total_cost > 400.0) {
        discount = 0.1 * total_cost;
        total_cost -= discount;
    }

    // Print the total cost and discount
    printf("The number of T-shirts is: %d\n", num_shirts);
    printf("Bill: $%.2f, Discount: $%.2f, Total cost: $%.2f\n", total_cost + discount, discount, total_cost);
}
int main (){
    int num_shirts;
    scanf("%d", &num_shirts);
    tShirtBill(num_shirts);
    return 0;
}