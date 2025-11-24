// Write A C Programme To Convert Dollar To Rupees And Rupees To Dollar.
#include <stdio.h>
int main() 
{
    float dollars, rupees;
     // Example conversion rate: 1 Dollar = 74 Rupees

    // Convert Dollars to Rupees
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * 90.0; // Using 90 as conversion rate
    printf("%.2f Dollars = %.2f Rupees\n", dollars, rupees);

    // Convert Rupees to Dollars
    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / 90.0; // Using 90 as conversion rate
    printf("%.2f Rupees = %.2f Dollars\n", rupees, dollars);

    return 0;
}