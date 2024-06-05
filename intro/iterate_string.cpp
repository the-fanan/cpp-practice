#include <iostream>
#include <string>
#include <unistd.h>

int main() {
    std::string word = "We are the Borg, you will be assimilated. I am 7 of 9, Tertiary Adjunct of Unimatrix Zero One";
    const int minSleepTimeInSeconds = 2;
    const int maxSleepTimeInSeconds = 5;

    int numbersInText = 0;
    for (char ch : word) {
        std::cout << ch << std::endl;
        if (isdigit(ch)) {
            numbersInText++;
        }
        int sleepTime = rand() % (maxSleepTimeInSeconds - minSleepTimeInSeconds) + minSleepTimeInSeconds;
        usleep(sleepTime * 100000);
    }

    std::cout << "\nNumber of digits found in text is " << numbersInText << std::endl;
    return 0;
}