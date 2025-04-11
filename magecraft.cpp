//🧙 Magecraft University - Python Edition

#include <iostream>
#include <string>

int main() {
    std::string color, animal;
    int mana;

    std::cout << "Enter a color: ";
    std::getline(std::cin, color);

    std::cout << "Enter an animal: ";
    std::getline(std::cin, animal);

    std::cout << "Enter a number between 100 and 900: ";
    std::cin >> mana;

    std::cout << "\nWelcome to Magecraft University" << std::endl;
    std::cout << "Your alias is The " << color << " " << animal << std::endl;
    std::cout << "Your current mana level is " << mana << ", but we will polish you so that you reach your maximum potential!" << std::endl;

    return 0;
}
