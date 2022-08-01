#include<stdio.h>
struct vehicle
{
    char company[50], country[50];
    char color[50], model_name[50];
    int model_year, mileage, price;
};
int main()

{
    struct vehicle vehicle ;
    printf("Enter the COMPANY of the vehicle: ");
    gets(vehicle.company);

    printf("\nEnter the MODEL NAME of the vehicle: ");
    gets(vehicle.model_name);

    printf("\nEnter the COUNTRY of ORIGIN: ");
    gets(vehicle.country);

    printf("\nEnter the COLOR: ");
    gets(vehicle.color);

    printf("\nEnter the MODEL YEAR: ");
    scanf("%d", & vehicle.model_year);

    printf("\nEnter the MILEAGE: ");
    scanf("%d", &vehicle.mileage);

    printf("\nEnter the PRICE: ");
    scanf("%d", &vehicle.price);

    printf("\n\n\nCompany of the vehicle is: %s\n\n", vehicle.company);
    printf("Model name of the vehicle is: %s\n\n", vehicle.model_name);
    printf("Country of origin: %s\n\n", vehicle.country);
    printf("Color: %s\n\n", vehicle.color);
    printf("Model year: %d\n\n", vehicle.model_year);
    printf("Mileage: %d KM\n\n", vehicle.mileage);
    printf("Price: %d BDT\n\n", vehicle.price);

    return 0;

}
