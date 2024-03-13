#include "utilities.h"

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int switch_choice(char choice) {
    switch (choice) {
        case '1':
            celsius2Fahrenheit();
            break;
        case '2':
            fahrenheit2Celcius();
            break;
        case '3':
            show_celsius_fahrenheit_relationship();
            break;
        case '4':
            return 0;
        default:
            printf("Invalid choice!!\n\n");
            break;
    }
    return 1;;
}

void show_celsius_fahrenheit_relationship() {
    printf("\tF = (C x 9/5) + 32\n");
    printf("\tC = (F - 32) * 5/9\n");
}

void celsius2Fahrenheit() {
c2fbegin:
    printf("Please enter the degree in Celsius: \n");
    float celsius;
    if (scanf("%f", &celsius) == 1) {
        float fahrenheit = (celsius * 9.0 / 5) + 32;
        printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
        clear_input_buffer();
    } else {
        printf("Invalid input!!\n");
        clear_input_buffer();
        goto c2fbegin;
    }
}

void fahrenheit2Celcius() {
f2cbegin:
    printf("Please enter the degree in Fahrenheit: \n");
    float fahrenheit;
    if (scanf("%f", &fahrenheit) == 1) {
        float celsius = (fahrenheit - 32) * (5.0 / 9);
        printf("%.2f degrees Fahrenheit is %.2f degrees Celsius.\n", fahrenheit, celsius);
        clear_input_buffer();
    } else {
        printf("Invalid input!!\n");
        clear_input_buffer();
        goto f2cbegin;
    }
}




