#include <stdio.h>


int main()
{
    float temperature_celsius, distance_km, temperature_fahrenheit, distance_milhas;


    // calculate celsius to fahrenheit
    printf("Enter temperature in Celsius: ");   
    scanf("%f", &temperature_celsius);


    // calculate km in miles
    printf("Enter distance in kilometers: ");
    scanf("%f", &distance_km);

    temperature_fahrenheit = (temperature_celsius * 9.0 / 5.0) + 32.0;

    distance_milhas = distance_km / 0.60934;

    printf("Temparatura em Fahrenheit: %.2f\n", temperature_fahrenheit);
    printf("Distancia em milhas: %.2f\n", distance_milhas);

    

    return 0;
}
