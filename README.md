# CIS 1202 - Exceptions and Templates
## Sam Brown

### Exceptions

Write a function to calculate character offsets, throwing exceptions in error conditions.
Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.

#### Requirements
   1. Write a function according to this prototype:

      ``char character(char start, int offset);``
   
   2. If start is not a letter (A-Z, a-z), throw an `invalidCharacterExcpeption`.

   3. If the target is not a letter, throw an `invalidRangeException`.

   4. Otherwise, return the letter described by the start and offset.

   5. Build a driver in main to test this function and display its output.  Use `try`/`catch` blocks to call your function with different start and offset values.  Use the Sample Output below, or come up with your own test values.

   6. Functions must pass parameters and return values as needed, using only local variables.  Global variables are not allowed.

   7. Use comments to document your program as you see fit.  Include comments at the beginning of your program with your name, the class (with section), and the date.
        
    		// Josh Junior
    		// CIS 1202 101
    		// January 31, 2021
        
   8. Submit the URL for your repository to the dropbox.  No screen shots are needed.
    
#### Sample Output
   `character('a', 1)` should return '`b`'.
   `character('a', -1)` should throw an `invalidRangeExpection`.
   `character('Z', -1)` should return '`Y`'.
   `character('?', 5)` should throw an `invalidCharacterExcpeption`.
  
  Do not allow upper- and lower-case transitions.  character('A', 32) should throw an exception, not return 'a'.

---

### Templates

Write templated functions to perform math on varying numeric data types.

Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.

#### Requirements

  1. Read the tips in the next section.

  2. Define functions named "half" that accept a single argument, and return a value of that same type.
  
  3. For floating-point types `(float, double)`, return half of the value passed in as argument.

  4. For integer types `(int)`, return half the value, rounded according to usual rounding rules (0.5 or higher, round up; otherwise round down.)

  5. Build a driver in `main` to test these functions and display their output.

  6. Functions must pass parameters and return values as needed, using only local variables.  Global variables are not allowed.

  7. Use comments to document your program as you see fit.  Include comments at the beginning of your program with your name, the class (with section), and the date.
    
    // Josh Junior
    // CIS 1202 101
    // January 31, 2021
    
  8. Submit the URL for your repository to the dropbox.  No screen shots are needed.

##### Tips

In C++, templates can use generic types, explicit types, or both.

For the case of `double` and `float`, write a templated function.  For integers, explicitly specify the type.

In C++ the `round` function expects a floating-point type.  Use `static_cast` to convert the argument in the case of integers.
