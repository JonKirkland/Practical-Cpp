//exercise 8-2

//Write a program to compute the total resistance of any number of parralel resistors
#include <iostream>
float R;
float Rtotal;
char quit_char;
int main()
{
    float Rtotal = 0;
    //program structure:
    //while loop to take input of resistor
    //loop inverts value to 1/R, this value is added to the total, starting at 0
    // repeat
    //ask at end of loop to continue or not
    // after loop termination, take 1/Rtotal to find reciprocal and calc resistance
    while (true) {
        
        std::cout << "Input R: ";
        std::cin >> R;
        Rtotal += 1 / R;
        //std::cout << "Total is: " << Rtotal << '\n';
        std::cout << "Continue? (y/n): ";
        std::cin >> quit_char;
        if (quit_char == 'n')
            break;
    }
    std::cout << "Total resistance in parralel is:";
    Rtotal = 1 / Rtotal;
    std::cout << Rtotal << "Ohms";
    //return(0);
}
