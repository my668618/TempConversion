#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Prompt the user for celsius
    printf("Please Enter Degrees In Celsius: ");

    //Accept user input and store in celsius variable
    float celsius;
    scanf("%f", &celsius);

    //Perform temp conversion
    float fahrenheit;
    fahrenheit = ( (celsius * 9) / 5) + 32;

    //Display results
    printf("%.2f F\n", fahrenheit);

    return 0;
}
