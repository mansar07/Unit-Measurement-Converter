/*
Name: Muhammad Ansari
Course: CS2211A
Date: October 11, 2022
Student ID: 251221279
Assignment 2 Part 1
*/

#include <stdio.h>

// I am creating seperate functions for each conversion that takes care of the conversion and I will call each of them based on what the user types

int kilogram_Pounds() {
    char K, P, input;
    float conversionInput, conversionValue, lbs = 2.20462f, kg = 0.45359f;  // Assigning the values of pounds and kg to their conversion values

    printf("Enter capital K for conversion from Kilograms to Pounds\n");
    printf("Enter capital P for conversion from Pounds to Kilograms\n");
    printf("\n");
    printf("Enter capital K, or capital P: \n");
    scanf(" %c", &input);  // Asking user for input which stores the user input into the input variable

    if (input == 'K') {  // If the user enters K, then this statement will get executed
        printf("\n");
        printf("Please enter a value for conversion: \n");  // Asking the user for a value to convert
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * lbs;  // Multiplying that value with the conversion rate to get the correct coversion value
        printf("\n");
        printf("%f kg is equal to %f pounds\n", conversionInput, conversionValue);
        printf("\n");
    }

    else if (input == 'P') {  // if the user enters P then this statement will get executed
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * kg;
        printf("\n");
        printf("%f pounds is equal to %f kg\n", conversionInput, conversionValue);
        printf("\n");
    }
}

// Most funtions repeat the same steps but just the conversion values that is being multiplied is changing which affects the conversions

int hectare_Acres() {
    char H, A, input;
    float conversionInput, conversionValue, hectare = 2.47105f, acre = 0.404686f;

    printf("Enter capital H for conversion from Hectares to Acres\n");
    printf("Enter capital A for conversion from Acres to Hectares\n");
    printf("\n");
    printf("***Enter capital H, or capital A: \n");
    scanf(" %c", &input);

    if (input == 'H') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * hectare;
        printf("\n");
        printf("%f hectare is equal to %f acres\n", conversionInput, conversionValue);
        printf("\n");
    }

    else if (input == 'A') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * acre;
        printf("\n");
        printf("%f acres is equal to %f hectares\n", conversionInput, conversionValue);
        printf("\n");
    }
}

int litre_Gallons() {
    char L, G, input;
    float conversionInput, conversionValue, litre = 0.264172f, gallon = 3.78541f;

    printf("Enter capital L for conversion from Litres to Gallons\n");
    printf("Enter capital G for conversion from Gallons to Litres\n");
    printf("\n");
    printf("Enter capital L, or capital G: \n");
    scanf(" %c", &input);

    if (input == 'L') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * litre;
        printf("\n");
        printf("%f Litres is equal to %f Gallons\n", conversionInput, conversionValue);
        printf("\n");
    }

    else if (input == 'G') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * gallon;
        printf("\n");
        printf("%f Gallons is equal to %f Litres\n", conversionInput, conversionValue);
        printf("\n");
    }
}

int kilometer_Miles() {
    char K, M, input;
    float conversionInput, conversionValue, kilometer = 0.621371f, miles = 1.60934f;

    printf("Enter capital K for conversion from Kilometer to Miles\n");
    printf("Enter capital M for conversion from Miles to Kilometers\n");
    printf("\n");
    printf("Enter capital K, or capital M: \n");
    scanf(" %c", &input);

    if (input == 'K') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * kilometer;
        printf("\n");
        printf("%f Kilometers is equal to %f Miles\n", conversionInput, conversionValue);
        printf("\n");

    }

    else if (input == 'M') {
        printf("\n");
        printf("Please enter a value for conversion: \n");
        scanf("%f", &conversionInput);

        conversionValue = conversionInput * miles;
        printf("\n");
        printf("%f miles is equal to %f kilometers\n", conversionInput, conversionValue);
        printf("\n");
    }
}

int main() {
    int userInput = 0;

    while (userInput != 5) {  // Using a while loop that keeps looping until a user enters 5, which will then terminate the program
        printf("\n");
        printf("1 for conversion between Kilograms and Pounds (1 kilogram = 2.20462 pounds)\n");
        printf("2 for conversion between Hectares and Acres (1 hectare = 2.47105 acres)\n");  // Displaying the selections the user needs to make, for which conversion they want to make
        printf("3 for conversion between Litres and Gallons (1 litre = 0.264172 gallons)\n");
        printf("4 for conversion between Kilometer and Mile (1 kilometer = 0.621371 miles)\n");
        printf("5 for quit\n");
        printf("Enter any other digit to try again\n");
        printf("\n");

        printf("Please Enter an Integer: \n");  // Asking the user to enter an integer for their desired conversions
        scanf("%d", &userInput);
        printf("\n");

        if (userInput == 1) {  // If the user enters 1 then the if statement will get executed and call the kilogram_Pounds function to calculate the conversion
            kilogram_Pounds();
        }

        else if (userInput == 2) {  // If the user enters 2 then the if statement will get executed and call the hectare_Acres function to calculate the conversion
            hectare_Acres();
        }

        else if (userInput == 3) {  // If the user enters 3 then the if statement will get executed and call the litre_Gallons function to calculate the conversion
            litre_Gallons();
        }

        else if (userInput == 4) {  // If the user enters 4 then the if statement will get executed and call the kilometer_Miles function to calculate the conversion
            kilometer_Miles();
        }
    }
    return 0;
}