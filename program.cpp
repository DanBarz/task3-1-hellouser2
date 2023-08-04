#include "splashkit.h"
#include "inputs.h"

#define STRO 0.33

// Task 3.1 HelloUser2 - Successfully tested with a variety of numbers and decimals.
// Floats would have been better to use in this prog, but the tutor did OK my using doubles for now

// output the person info
void output_person(string name, int age) {
    write_line(name);
    write("Age is: ");
    write_line(age);
}

// calculates the airspeed
double output_air_speed(int frequency, int amp) {
    double airspeedcalc;
    airspeedcalc = frequency * amp * 0.01 / STRO;
    return airspeedcalc;
}

double calculate_bmi(double height, double weight) {
    //BMI = weight (kg) / (height (m) * height (m))
    double bmi = weight / (height * height);
    return bmi;
}

// main program starts, it collects data from user and then outputs result
int main() {
    // variable list
    string name;
    int age;
    string bird;
    string prompt;
    string bird_name;
    double frequency;
    double amp; 
    double air_speed;
    double weight;
    double height;
    double result;

    // obtain information re user then output
    prompt = "Please enter your name: ";
    name = collect_string(prompt);
    age = read_int("Please enter your age: ");
    delay(1000);
    write_line("You entered the following:");
    delay(1000);
    write_line("");
    output_person(name, age);
    delay(1000);

    // formatting and obtain information re bird
    write_line("");
    prompt = "Enter the name of the bird type: ";
    bird_name = collect_string(prompt);
    prompt = "Enter the frequency with decimal: ";
    frequency = read_double(prompt);
    prompt = "Enter the amplitude with decimal: ";
    amp = read_double(prompt);
    write_line("Please wait for your answer: ");
    delay(1000);
    air_speed = output_air_speed(frequency, amp);
    
    // returns the completed informatiom to the user
    write("Well ");
    write(name);
    write(", your bird's airspeed is: ");
    write_line(air_speed); 
    delay(1000);
    write_line("");
    write("This is the end of part one - Next we are going to calculate your BMI so, go get on those scales.");
    write_line("");
    delay(1000);

    // capture key data for working out the BMI
    write_line("");
    prompt = "Please enter your height in meters: ";
    height = read_double(prompt);
    prompt = "please enter your weight in kilograms: ";
    weight = read_double(prompt);
    write_line("Please wait for your answer: ");
    delay(1000);
    write_line("");
    result = calculate_bmi(height, weight);
    write_line("");
    write("Your BMI is: ");
    write_line(result);
    write_line("");

    // ending message
    write_line("End of program, thanks for testing it out!");
    write_line("");
    // end of program
    return 0;
}