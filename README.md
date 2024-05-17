# C++-Dojo


Accessing VSCODE on windows:
From windows search bar type: De and let it autocomplete to Developer Command Prompt for VS 2022
From here travel to directory you'd like to open and then type `code .`


### Chapter 4. Basic Declarations and Expressions
Exercise 4-1:Write a program  to print your name, Social Security number, and date of birth.   
Exercise 4-2: Write a program to print a block E using asterisks (*), where the E is 7 characters high and 5 characters wide.   
Exercise 4-3: Write a program to compute the area and circumference of a rectangle 3 inches wide by 5 inches long. What changes must be made to the program so it works for a rectangle 6.8 inches wide by 2.3 inches long?    
Exercise 4-4: Write a program to print "HELLO" in big block letters where each letter is 7 characters high and 5 characters wide.   
### Chapter 5. Arrays, Qualifiers, and Reading Numbers
Exercise 5-1: Write a program that converts Celsius to Fahrenheit. F = 9/5 C+32    
Exercise 5-2: Write a program to calculate the volume of a sphere, 4/3πr3.    
Exercise 5-3: Write a program to print out the perimeter of a rectangle given its height and width. perimeter = 2 (width+height)   
Exercise 5-4: Write a program that converts kilometers per hour to miles per hour. miles = (kilometers -0.6213712)   
Exercise 5-5: Write a program that takes hours and minutes as input and outputs the total number of minutes ( 1 hour 30 minutes = 90 minutes).   
Exercise 5-6: Write a program that takes an integer as the number of minutes and outputs the total hours and minutes (90 minutes = 1 hour 30 minutes).  
### Chapter 6. Decision and Control Statements
Exercise 6-1: Write a program  to find the square of the distance between two points. Find the distance only if you want to do the independent research needed to perform a square root in C++.   
Exercise 6-2: A professor generates letter grades using Table 6-3.   
	Table 6-3 Grade Values % Correct Grade 0-60 F 61-70 D 71-80 C 81-90 B 91-100 A Given a numeric grade, print the letter.   
Exercise 6-3: Modify the previous program to print out a + or - after the letter grade based on the last digit of the score. The modifiers are listed in Table 6-4.   
	Table 6-4 Grade-Modification Values Last digit Modifier 1-34-7 <blank> 8-0 + For example, 81=B-, 94=A, and 68=D+. Note: An F is only an F. There is no F+ or F-. NOTE Programmers frequently have to modify code that someone else wrote. A good exercise is to take someone else's Exercise 6-2 and modify it.   
Exercise 6-4: Given an amount (less than $1.00), compute the number of quarters, dimes, nickels, and pennies needed.   
Exercise 6-5: A leap year is any year divisible by 4 unless it is divisible by 100, but not 400. Write a program to tell whether a year is a leap year.   
### Chapter 7. The Programming Process
Exercise 7-1: Write a program to convert English units to metric (e.g., miles to kilometers, gallons to liters, etc.). Include a specification and a code design.

Exercise 7-2: Write a program to perform date arithmetic, such as how many days there are between 6/6/90 and 8/8/92. Include a specification and a code design.

Exercise 7-3: A serial transmission line can transmit 960 bytes per second. Write a program that will calculate how long it will take to send a file, given the file’s size. Try it on a 400MB (419,430,400 byte) file. Use appropriate units. (A 400MB file takes days.)

Exercise 7-4: Write a program to add an 8% sales tax to a given amount and round the result to the nearest penny.

Exercise 7-5: Write a program to tell whether a number is prime.

Exercise 7-6: Write a program that takes a series of numbers and counts the number of positive and negative values.
### Chapter 8.
Exercise 8-3: Write a program to average n numbers.

Exercise 8-4: Write a program to print out the multiplication table.

Exercise 8-5: Write a program that reads a character and prints out whether it is a vowel or a consonant.

Exercise 8-6: Write a program that converts numbers to words. Example: 895 results in “eight nine five.”

Exercise 8-7: The number 85 is said “eighty-five,” not “eight five.” Modify the previous program to handle the numbers 0-100 so all numbers come out as we really say them. For example, 13 is “thirteen,” and 100 is “one hundred.”
### Chapter 9. Variable Scope and Functions
Exercise 8-1: Print a checkerboard (8-by-8 grid). Each square should be 5-by-3 characters wide. A 2-by-2 example follows:
Exercise 8-2: The total resistance of n resistors in parallel is:

1/R = 1/R1 + 1/R2 + 1/R3 + ... + 1/Rn

Suppose we have a network of two resistors with the values 400Ω and 200Ω. Our equation would be:

1/R = 1/R1 + 1/R2

Substituting in the value of the resistors we get:

1/R = 1/400 + 1/200

1/R = 3/400

R = 400/3

So the total resistance of our two-resistor network is 133.3Ω.

Write a program to compute the total resistance for any number of parallel resistors.

Exercise 8-3: Write a program to average n numbers.

Exercise 8-4: Write a program to print out the multiplication table.

Exercise 8-5: Write a program that reads a character and prints out whether it is a vowel or a consonant.

Exercise 8-6: Write a program that converts numbers to words. Example: 895 results in “eight nine five.”

Exercise 8-7: The number 85 is said “eighty-five,” not “eight five.” Modify the previous program to handle the numbers 0-100 so all numbers come out as we really say them. For example, 13 is “thirteen,” and 100 is “one hundred.”
Exercise 9-1: Write a procedure that counts the number of words in a string. (Your documentation should describe exactly how you define a word.) Write a program to test your new procedure.

Exercise 9-2: Write a function begins(string1, string2) that returns true if string1 begins string2. Write a program to test the function.

Exercise 9-3: Write a function count(number, array, length) that will count the number of times number appears in array. The array has length elements. The function should be recursive. Write a test program to go with the function.

Exercise 9-4: Write a function that will take a character string and return a primitive hash code by adding up the value of each character in the string.

Exercise 9-5: Write a function that returns the maximum value of an array of numbers.

Exercise 9-6: Write a function that scans a string for the character “-” and replaces it with “_”.
### Chapter 10. The C++ Preprocessor
Exercise 10-1: Create a set of macros to define a type called RETURN_STATUS and the following values: RETURN_SUCCESS, RETURN_WARNING, and RETURN_ERROR. Define a macro, CHECK_RETURN_FATAL,,, that takes a RETURN_STATUS as its argument and returns true if you have a fatal error.

Exercise 10-2: Write a macro that returns true if its parameter is divisible by 10 and false otherwise.

Exercise 10-3: Write a macro is_digit that returns true if its argument is a decimal digit. Write a second macro is_hex that returns true if its argument is a hex digit (0-9, A-F, a-f). The second macro should reference the first.

Exercise 10-4: Write a preprocessor macro that swaps two integers. (If you’re a real hacker, write one that does not use a temporary variable declared outside the macro.)
### Chapter 11. Bit Operation
Exercise 11-1: Write a set of inline functions, clear_bit and test_bit, to go with the set_bit operation defined in Example 11-2. Write a main program to test these functions.

Exercise 11-2: Write a program to draw a 10-by-10 bitmapped square.

Exercise 11-3: Change Example 11-1 so it draws a white line across a black background.

Exercise 11-4: Write a program that counts the number of bits set in an integer. For example, the number 5 (decimal), which is 0000000000000101 (binary), has two bits set.

Exercise 11-5: Write a program that takes a 32-bit integer (long int) and splits it into eight 4-bit values. (Be careful of the sign bit.)

Exercise 11-6: Write a program that will take all the bits in a number and shift them to the left end. For example, 01010110 (binary) would become 11110000 (binary).
### Chapter 12. Advanced Types
Exercise 12-1: Design a data structure to handle the data for a mailing list.

Exercise 12-2: Design a structure to store time and date. Write a function to find the difference between two times in minutes.

Exercise 12-3: Design an airline reservation data structure that contains the following data:

Flight number
Originating airport code (3 characters)
Destination airport code (3 characters)
Departure time
Arrival time
Write a program that lists all planes leaving from two airports specified by the user.
### Chapter 13. Simple Classes

Exercise 13-1: Write a parity class. The class supplies a member function named put, which counts the number of elements supplied. The other member function test returns true if an even number of put calls have been made and false otherwise.

Member functions:
```
void parity::put(  );    // Count another element
bool parity::test(  );   // Return true if an even number of
                           // puts have been done. Return false
                           // for an odd number.
```
Exercise 13-2: Write a “checkbook” class. You put a list of numbers into this class and get a total out.

Member functions:
```
void check::add_item(int amount);     // Add a new entry to the checkbook
int check::total(  );                 // Return the total of all items
```
Exercise 13-3: Write a class to implement a simple queue. A queue is similar to a stack except that the data is removed in first-in-first-out (FIFO) order.

Member functions:
```
void queue::put(int item);     // Insert an item in the queue
int queue::get(  );            // Get the next item from the queue
```
Sample usage:
```
queue a_queue;

a_queue.put(1);    // Queue contains: 1
a_queue.put(2);    // Queue contains: 1 2
a_queue.put(3);    // Queue contains: 1 2 3

std::cout << a_queue.get(  ) << '\n';   // Prints 1, queue contains 2 3
std::cout << a_queue.get(  ) << '\n';   // Prints 2, queue contains 3
```
Exercise 13-4: Define a class that will hold the set of integers from 0 to 31. An element can be set with the set member function and cleared with the clear member function. It is not an error to set an element that’s already set or clear an element that’s already clear. The function test is used to tell whether an element is set.

Member functions:

void small_set::set(int item);    // Set an element in the set
void small_set::clear(int item);  // Clear an element in the set
int small_set::test(int item);    // See whether an element is set
Sample usage:
```
small_set a_set;

a_set.set(3);      // Set contains [3]
a_set.set(5);      // Set contains [3,5]
a_set.set(5);      // Legal (set contains [3,5])

std::cout << a_set.test(3) << '\n';    // Prints "1"
std::cout << a_set.test(0) << '\n';    // Prints "0"

a_set.clear(5);   // Set contains [3]
```
Exercise 13-5: I have a simple method of learning foreign vocabulary words. I write the words down on flash cards. I then go through the stack of cards one at a time. If I get a word right, that card is discarded. If I get it wrong, the card goes to the back of the stack.

Write a class to implement this system.

Member functions:
```
struct single_card {
    std::string question;      // English version of the word
    std::string answer;        // Other language version of the word
};

// Constructor -- takes a list of cards to 
//              initialize the flash card stack
void flash_card::flash_card(single_card list[]);   

// Get the next card 
const single_card& flash_card::get_card(  );

//The student got the current card right
void flash_card::right(  );

// The student got the current card wrong
void flash_card::wrong(  );

//Returns true -- done / false -- more to do
bool done(  );
```
### Chapter 14. More on Classes
Exercies 14-1: Two classes share a file. Other areas of the program need to know when this file is busy. Create a function that returns 1 when the file is being used by either of these two classes.

Exercies 14-2: You are asked to write a booking program for the veterinarian; Dr. Able Smith, PHD (Pigs, Horses, Dogs). Define a class type for each animal. Each class should keep track in a private static variable of the number of animals that have been defined using that class. Define a function that returns the total number of animals (all three types combined).

Exercies 14-3: Write a class in which each instance of the class can access a stack—not one stack per instance, but one stack, period. Any instance of the class can lock the stack for its own exclusive use and unlock it later. Define member functions to perform the lock and unlock functions.

As an added attraction, make the unlock function check to see that the current instance of the class was the same instance that locked the stack in the first place.

Exercies 14-4: You need to supply some I/O routines for handling lines in a file. The basic definition of the line-number class is:
```
class line_number {
    public:
        void goto_line(int line);
        int get_current_line(  );
        long int get_char_pos(  );
}
```
The member functions are defined as:
```
void goto_line(int line);
Positions the input file at specified line.

int get_current_line( );
Returns the current line number (as set by goto_line).

long int get_char_pos( );
Returns the character position of the current line. (This is the tricky one.)
```
Several line_number classes may be in use at any time. The class maintains its own internal list so that it knows which line_number classes are in use. When goto_line is called, the function will scan the list of line_number classes to find the one nearest the given line number and use it to start scanning for the given line number.

For example, suppose there are four active line_number variables:

Variable

Position

`beginning`

Line 0

`chapter_start`

Line 87

`current_heading`

Line 112

`current_location`

Line 52

You wish to move current_location to line 90. The goto_line function would search the list for the line nearest the new location (in this case chapter_start) and use it to jump to line 87. It then would read the file, character by character, until it saw three end-of-line characters to position itself at line 90.
### Chapter 15. Simple Pointers
Exercise 15-1: Write a program that uses pointers to set each element of an array to zero.

Exercise 15-2: Write a function that takes a single C-style string as its argument and returns a pointer to the first nonwhitespace character in the string.
### Chapter 16. File I/O
Exercise 16-1: Write a program that reads a file and counts the number of lines in it.

Exercise 16-2: Write a program to copy a file, expanding all tabs to multiple spaces. (For historical reasons—the Teletype again—almost all text files use a tab setting of 8 characters.)

Exercise 16-3: Write a program that reads a file containing a list of numbers and writes two files, one containing all the numbers divisible by 3 and another containing all the other numbers.

Exercise 16-4: Write a program that reads an ASCII file containing a list of numbers and writes a binary file containing the same list. Write a program that goes the other way so you can check your work.

Exercise 16-5: Write a program that copies a file and removes all characters with the high bit set (((ch & 0x80) != 0)).

Exercise 16-6: Design a file format to store a person’s name, address, and other information. Write a program to read this file and produce a file containing a set of mailing labels.
### Chapter 17. Debugging and Optimization
Exercise 17-1: Take one of your previous programs and run it using the interactive debugger to examine several intermediate values.

Exercise 17-2: Write a matrix-multiply function. Create a test program that not only tests the function, but times it as well. Optimize the program using pointers and determine the time savings.

Exercise 17-3: Write a program to sum the elements in an array. Optimize it.

Exercise 17-4: Write a program that counts the number of bits in a character array. Optimize it through the use of register-integer variables. Time it on several different arrays of different sizes. How much time do you save?

Exercise 17-5: Write your own version of the library function memcpy. Optimize it. Most implementations of memcpy are written in assembly language and take advantage of all the quirks and tricks of the processor. How does your memcpy compare to theirs?

### Chapter 18. Operator Overloading
Exercise 18-1: Write a class to handle fractions such as “1/3.” Define addition, subtraction, multiplication, and division operators for these fractions.

For example: 1/3 + 1/2 = 5/6.

Exercise 18-2: Write a fixed-point number class to handle numbers. All numbers are of the form DDDDD.D. In other words, all numbers have only a single digit to the right of the decimal point. Use integers to implement this class.

Exercise 18-3: Write a class to implement a sparse integer array. This is much like a simple integer array:

int simple_array[100];
But unlike a simple array, the indices can go from 0 to 1,000,000. That’s the bad news. The good news is that at most 100 elements will be set at any time. The rest of the elements will be zero.

Exercise 18-4: Write a time class. Implement functions to add, subtract, read, and print times.

Exercise 18-5: Write a date class that allows you to add, subtract, read, and print simple dates of the form MM/DD. Assume year is not a leap year.

Exercise 18-6: (Advanced) Write a full-date class that allows you to add, subtract, read, and print dates of the form MM/DD/YY.
### Chapter 19. Floating Point
Exercise 19-1: Write a class that uses strings to represent floating-point numbers in the format used in this chapter. The class should have functions to read, write, add, subtract, multiply, and divide floating-point numbers.

Exercise 19-2: Create a class to handle fixed-point numbers. A fixed-point number has a constant (fixed) number of digits to the right of the decimal point.
### Chapter 20. Advanced Pointers
Exercise 20-1: Write a cross-reference program.

Exercise 20-2: Write a function to delete an element of a linked list.

Exercise 20-3: Write a function to delete an element of a doubly linked list.

Exercise 20-4: Write a function to delete an element of a tree.
### Chapter 21. Advanced Classes
Exercise 21-1: Combine the checkbook class of Exercise 13-2 with the queue class of Exercise 13-3 to implement a checkbook class that can print out the last ten entries of your checkbook.

Exercise 21-2: Define a “string-match” base class.

class string_matcher {
    public:
        // Returns true if string matches, false if not
        int match(const char *const match);
...
Define derived classes that match words, numbers, and blank strings.

Exercise 21-3: Define a base class shape that can describe any simple shape, such as a square, circle, or equilateral triangle. The size of all these shapes can be reduced to a single dimension.

Define derived classes for each of the three shapes.

Create a virtual function in the base class that returns the area of each shape.

Note that you will need to more precisely define what dimensions are stored in the base class. (Is the size in the base class for circle the radius of the circle or the diameter?)

Exercise 21-4: Write a base class called pet that describes any common household pet. Define two derived classes called fish and dog with items specific to that type of animal. Write pure virtual functions in the base class for operations that are common to both types of animals yet are handled in different ways by each of them.

Exercise 21-5: Write a base class number that holds a single integer value and contains one member function, print_it. Define three derived classes to print the value in hex, octal, and decimal.
### Chapter 22. Exceptions
Exercise 22-1: Add code to the queue class of Exercise 13-3 that will trigger an exception when too many items are put in the queue.

Exercise 22-2: Take the fraction class from Exercise 18-1 and add code to generate an exception when a divide-by-zero occurs. In addition, add code to generate an exception when a bad number is read.

Exercise 22-3: Update the checkbook class of Exercise 13-2 so it generates an exception when your balance goes below zero.

Exercise 22-4: Write a function count_letter that takes a single character. This function will count the number of consonants and vowels. If a nonletter is given to the function, it generates an exception.
### Chapter 23. Modular Programming
Exercise 23-1: Write a class that handles page formatting. It should contain the following functions:

open_file(char *name)
Opens the print file.

define_header(char *heading)
Defines heading text.

print_line(char *line)
Sends a line to the file.

page( )
Starts a new page.

close_file( )
Closes the print file.

Exercise 23-2: Write a module called search_open that receives an array of filenames, searches the array until it finds one that exists, and opens that file.

Exercise 23-3: Write a symbol table class containing the following functions:

void enter(const std::string& name)
Enters a name into the symbol table.

int lookup(const std::string& name)
Returns 1 if the name is in the table; returns 0 otherwise.

void remove(const std::string& name)
Removes a name from the symbol table.

Exercise 23-4: Take the words program from Chapter 20, and combine it with the infinite array module to create a cross-reference program. (As an added bonus, teach it about C++ comments and strings to create a C++ cross-referencer.)
### Chapter 24. Templates
Exercise 24-1: Write a template min that returns the minimum of two values. Make sure you handle C-style strings correctly.

Exercise 24-2: Write a template class to implement an array with bounds checking.

Exercise 24-3: Define a template class that implements a set. The class allows you to set, clear, and test elements. (An integer version of this class was presented in Exercise 13-4.)
### Chapter 25. Standard Template Library
Exercise 25-1: In Chapter 1 we defined a histogram program that used our home-grown infinite array. Rewrite the program to use the STL.

Exercise 25-2: Write a program that produces an index for a book. The input file is a set of page numbers and index information of the form:

<page-number>    <index entry>
There may be more than one record for each index entry. The output should be a sorted list of index entries such as:

alpha 10, 20, 30
beta 5, 6, 18
.....
Exercise 25-3: Change the cross-reference program you wrote for Exercise 20-1 to use the STL.

Exercise 25-4: Write a program that does a frequency count of each word in a document.
### Chapter 28. From C to C++
Exercise 28-1: There are a lot of C programs out there. Turn one into C++.


### Chapter 29. C++'s Dustier Corners
