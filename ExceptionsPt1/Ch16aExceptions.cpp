//  Sam Brown
//  CIS 1202 101
//  April 21, 2022

#include "SamPersonalLibrary.h"

char character(char, int);

int main(){
    char letter;
    
    try
    { letter = character('a', 1); cout << letter << endl; }
    catch(string exception) { cout << exception << endl; }

    try
    { letter = character('a', -1); cout << letter << endl; }
    catch(string exception) { cout << exception << endl; }

    try
    { letter = character('Z', -1); cout << letter << endl; }
    catch(string exception) { cout << exception << endl; }

    try
    { letter = character('?', 5); cout << letter << endl; }
    catch(string exception) { cout << exception << endl; }
    
    endProgram();
}

char character(char start, int offset)
{
    if (isalpha(start) == false) // If the start value is not a letter, throw an exception.
    {
        string exception = "Fatal: Letter is not a character.";
        throw exception;
    }
    
    int val = static_cast<int>(start); // Turn the start value into an integer.

    if ((isupper(start) == true && val > 90) || (isupper(start) == true && val > 122)) // If it goes past Z, go back to beginning.
    { val += 26; }
    
    val += offset; // Add offset.

    if (isalpha(static_cast<char>(val)) == false) // If the value with offset is out of range, throw an exception.
    {
        string exception = "Fatal: Invalid Range";
        throw exception;
    }

    // Return character.
    return static_cast<char>(val);
}