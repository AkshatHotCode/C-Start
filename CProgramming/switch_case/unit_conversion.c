#include <stdio.h>

int main()
{
    int choice;
    double value;

    printf("Unit Conversion Metrics, please choose the what metrics you want to convert.");
    printf("1. Kilometers to Miles\n");
    printf("2. Inches to Feet\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Pounds to Kilograms\n");
    printf("5. Inches to Meters\n");

    printf("Enter the choice:");
    scanf("%d", &choice);

    printf("Enter value to be converted:");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("%.2lf kilometers is equal to %.2lf miles.\n", value, value * 0.621372);
        break;
    case 2:
        printf("%.2lf inches is equal to %.2lf feet.\n", value, value * 0.0833333);
        break;
    case 3:
        printf("%.2lf centimeters is equal to %.2lf inches.\n", value, value * 0.393701);
        break;
    case 4:
        printf("%.2lf pounds is equal to %.2lf kilograms.\n", value, value * 0.453592);
        break;
    case 5:
        printf("%.2lf inches is equal to %.2lf meters.\n", value, value * 0.0254);
        break;
    default:
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
    return 0;
}