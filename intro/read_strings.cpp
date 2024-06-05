#include <iostream>
#include <string>

int main()
{
    std::string sentence;
    std::string word;
    std::cout << "Enter a word below: " << std::endl;
    while (getline(std::cin, word)) {
        if (word.empty()) {
            std::cout << "Please enter at least one character" << std::endl;
        } else {
            sentence += word;
            std::cout << "\nword entered: " << word << std::endl;
            if (word.size() > 6) {
                std::cout << "wow that is a big word. It is " << word.size() << " characters long." << std::endl;
            }
            std:: cout << "The formed sentence is: \n" << sentence << std::endl;
        }
        
        std::cout << "\n\nEnter a word below: " << std::endl;
    }

    return 0;
}