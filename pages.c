#include "pages.h"

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
