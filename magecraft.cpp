//🧙 Magecraft University - C++ Edition

//Imports what we will need in the code
//#include <iostream> provides input/output functionality
//#include <string> provides string manipulation functionality
#include <iostream>
#include <string>


//int main() {} is the main function where the execution begins

int main() {
    //std::string color, animal → decalares the string variables color and animal
    //int mana; → declares the integer variable mana

    std::string color, animal;
    int mana;

    //std::cout << "something: " → get the user's input
    //std::getline(std::cin, color) → waits for the user to type and stores it in the variable color
    //std:getline(std::cin, variable_name) → reads a full line of text, including spaces
    std::cout << "Enter a color: ";
    std::getline(std::cin, color);

    std::cout << "Enter an animal: ";
    std::getline(std::cin, animal);

    //std::cin >> variable_name → Reads a single word or number, stopping at the first space or newline.
    //good for numbers or one-word strings
    std::cout << "Enter a number between 100 and 900: ";
    std::cin >> mana;

    // the \n → creates a new line
    //std::cout → outputs the text to the console
    //std::endl → ends the line
    //To use variables inside a string, we use << variable_name << to concatenate them with the string
    std::cout << "\nWelcome to Magecraft University" << std::endl;
    std::cout << "Your alias is The " << color << " " << animal << std::endl;
    std::cout << "Your current mana level is " << mana << ", but we will polish you so that you reach your maximum potential!" << std::endl;

    //return 0 → indicates that the program has finished successfully
    //This is like telling the computer "I finished everything. No errors happened. Mission complete!"
    //system("pause") → pauses the program until the user presses a key
    system("pause");
    return 0;
}


//The int main() function must return an integer value when it's done
//return 0 → tells the operating system that the program exited successfully
//Returning any non-zero value (like return 1; or return -1;) often signals an error or abnormal termination.
//0 can be seen as return EXIT_SUCCESS; and non-zero error codes as return EXIT_FAILURE;
