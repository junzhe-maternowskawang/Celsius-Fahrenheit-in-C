#include <stdio.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
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

void welcome_page() {
    printf("Welcome to Celsius Fahrenheit Converter!!\n");
}

void manual_page() {
    printf("1...........To convert Celsius to Fahrenheit\n");
    printf("2...........To convert Fahrenheit to Celsius\n");
    printf("3...........To know the relationship between Celsius and Fahrenheit\n");
    printf("4...........To quit the converter\n");
    printf(">> ");
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

void update_page() {
    int quit = 1;
    do {
        manual_page();
        char choice;
        scanf("%c", &choice);
        clear_input_buffer();
        quit = switch_choice(choice);
    } while (quit);
}

void end_page() {
    printf("Thank you for using the Celsius Fahrenheit Converter, see you next time ~\n");
}

int main() {
    
    welcome_page();

    update_page();

    end_page();

    return 0;
}
