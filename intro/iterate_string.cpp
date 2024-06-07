#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>

void capitalizeRandomLetter(std::string *s)
{
    if ((*s).size() == 0) {
        return;
    }

    int indexToCapitalize = rand() % (s->size() - 1);
    std::cout << "\nIndex to capitalize is: " << indexToCapitalize << std::endl;
    (*s)[indexToCapitalize] = toupper((*s)[indexToCapitalize]);

    return;
}

int main() {
    srand(time(0));
    std::string word = "We are the Borg, you WILL BE ASSIMILATED. I am 7 of 9, Tertiary Adjunct of Unimatrix Zero One";
    const int minSleepTimeInSeconds = 2;
    const int maxSleepTimeInSeconds = 5;

    int numbersInText = 0;
    bool spaceBefore = false;
    std::cout << "Original Text:\n" << word.c_str() << "\n" << std::endl;
    std::cout << "Incoming Stream:" << std::endl;
    for (char &ch : word) {
        std::cout << ch << std::endl;
        if (isdigit(ch)) {
            numbersInText++;
        }

        if (isspace(ch)) {
            spaceBefore = true;
        } else {
            if (spaceBefore && !isdigit(ch)) {
                ch = toupper(ch);
            } else {
                ch = tolower(ch);
            }
            
            spaceBefore = false;
        }

        int sleepTime = rand() % (maxSleepTimeInSeconds - minSleepTimeInSeconds) + minSleepTimeInSeconds;
        usleep(sleepTime * 100000);
    }

    capitalizeRandomLetter(&word);

    word[0] = toupper(word[0]);
    std::cout << "\nAssimilated Text:\n" << word.c_str() << std::endl;

    std::cout << "\nNumber of digits found in text is " << numbersInText << std::endl;
    return 0;
}

