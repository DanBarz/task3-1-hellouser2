#include "splashkit.h"
#include <string>
using std::string;

// reads the string from the user and outputs the result as a int
int read_int(string prompt) {
    write(prompt);
    return convert_to_integer(read_line());
}

// reads the string from user and returns string
string collect_string (string prompt) {
    write(prompt);
    return read_line();
}

// reads the string and converts to double
double read_double(string prompt) {
    write(prompt);
    return convert_to_double(read_line());
}