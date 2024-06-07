#include <iostream>
#include <vector>
#include <string>

/**
 * Vectors are a complex type derived from arrays. They allow for non-fix length arrays to be created
*/

int main()
{
    std::vector<int> numbers;
    std::vector<int> numbersInitialized = {0, 1, 2, 3, 4, 5};
    std::vector<std::string> words = {"apple", "ball", "cat"};

    numbersInitialized.push_back(8);
    for (int num : numbersInitialized) {
        std::cout << num << std::endl;
    }
    
    return 0;
}