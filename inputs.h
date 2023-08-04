#ifndef PROGRAM_H // this is a header guard
#define PROGRAM_H

// the actual functions are defined in inputs.cpp
// floats would have been better to use in this prog, but the tutor did OK my using this for now

// including the libraries
#include <string>
using std::string;

// note: these are a forward declarations

// This prompts the user for a string and returns the result as a string
// parameter: prompt - the prompt to show the user
// returns: the string entered by the user
string collect_string (string prompt);

// This prompts the user for an input (as a string) and returns the result as a int
// parameter: prompt - the prompt to show the user
// returns: the integer (after the conversion)
int read_int(string prompt);

// This prompts the user for an input (as string) and returns the result as a double
// parameter: prompt - the prompt to show the user
// returns: the double (after conversion) entered by the user
double read_double(string prompt);

#endif