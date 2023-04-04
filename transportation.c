#include <stdio.h>

int main()
{
    float distance, cost_per_km, total_cost;
    char transport_type;

    printf("Enter the distance travelled (in km): ");
    scanf("%f", &distance);

    printf("Enter the type of transportation (B for bus, T for train, P for plane): ");
    scanf(" %c", &transport_type);

    switch(transport_type)
    {
        case 'B':
        case 'b':
            cost_per_km = 0.5;
            break;

        case 'T':
        case 't':
            cost_per_km = 0.3;
            break;

        case 'P':
        case 'p':
            cost_per_km = 1.5;
            break;

        default:
            printf("Invalid transportation type!\n");
            return 1;
    }

    total_cost = distance * cost_per_km;

    printf("The total cost of the trip is: $%.2f\n", total_cost);

    return 0;
}
