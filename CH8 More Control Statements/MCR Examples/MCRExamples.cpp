// More Control Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//example functions:
class ExampleFuncs
{
public:
    void Example81();
    void Example82();
    void Example85();
    void Example85Improved();
};

void ExampleFuncs::Example81()
{
    //while loop to add up 5 inputted numbers
    int total;
    int current;
    int counter;

    total = 0;
    counter = 0;
    std::cout << "EG81: "<<"\n";
    while (counter < 5) {
        std::cout << "Number? ";
        std::cin >> current;

        total += current;

        ++counter;
    }
    std::cout << "the grand total is: " << total << "\n";
}

void ExampleFuncs::Example82() 
{
    int total = 0;
    int current;
    int counter;
    for (counter = 0; counter < 5; counter++) {
        std::cout << "Number?: ";
        std::cin >> current;
        total += current;

    }
    std::cout << "grand total is: " << total << '\n';
}
void ExampleFuncs::Example85()
{
    //calculator with switch statements
    int result; //calc result
    char oper_char; //mathematical operator
    int value; //value after operator

    result = 0;
    //loop until break is reached
    while (true) 
    {
        std::cout << "Result: " << result << '\n';
        std::cout << "Enter operator and number: ";
        std::cin >> oper_char >> value; //bug here

        //quit statement
        if ((oper_char == 'q') || (oper_char == 'Q'))
            break;

        switch (oper_char) {
            case '+':
                result += value;
                break;
            case '-':
                result -= value;
                break;
            case '*':
                result *= value;
                break;
            case '/':
                if (value == 0) {
                    std::cout << "cannot divide by zero\n";
                    std::cout<<"operation ignored\n";
                }
                else {
                    result /= value;
                }
                break;
            default:
                std::cout << "Unknown operator" << oper_char << '\n';
                break;
        }
    }
}
void ExampleFuncs::Example85Improved()
{
    //calculator with switch statements
    //added helper function  and continues to skip printing result
    int result; //calc result
    char oper_char; //mathematical operator
    int value; //value after operator

    result = 0;
    //loop until break is reached
    while (true)
    {
        std::cout << "test\n";
        std::cout << "Enter operator and number: ";
        std::cin >> oper_char >> value; //bug here

        //quit statement
        if ((oper_char == 'q') || (oper_char == 'Q'))
            break;

        switch (oper_char) {
        case '+':
            result += value;
            break;
        case '-':
            result -= value;
            break;
        case '*':
            result *= value;
            break;
        case '/':
            if (value == 0) {
                std::cout << "cannot divide by zero\n";
                std::cout << "operation ignored\n";
            }
            else {
                result /= value;
            }
            break;
        //case 'h':
        case 'H':
            std::cout << "Valid Operators: \n";
            std::cout << "Multiplication: * \nDivision: /\nAddition: +\nSubtraction: -\n";
            break;
        default:
            std::cout << "Unknown operator" << oper_char << '\n';
            break;
        }
        std::cout << "Result: " << result << '\n';
    }
}
//examples:
int main()
{
    ExampleFuncs exFunc;
    std::cout << "while loop adding up 5 inputted numbers \n";
    //exFunc.Example81();
    std::cout << "for loop adding up 5 inputted numbers \n";
    //exFunc.Example82();
    std::cout << "calculator using switch statements, use q to quit\n";
    //issue where the calculator waits for a value on the quit statement and help statement as requesting value at cin
    exFunc.Example85();

    exFunc.Example85Improved();


}
