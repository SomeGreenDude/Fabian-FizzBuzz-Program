#include <iostream>

int main(){

    // loops through 1 to 100
    for (int i = 0; i < 100; i++){

        // checks if the remainder of 3 and 5 is 0
        if(i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz \n";
        }
        else if (i % 3 == 0) // if only the remainder of 3 is 0
        {
            std::cout << "Fizz \n";
        }
        else if (i % 5 == 0) // if only the remainder of 5 is 0
        {
            std::cout << "Buzz \n";
        }
        else // outputs the number by itself otherwise
        {
            std::cout << i;
            std::cout << "\n";
        }
    }

    char c;
    std::cin >> c;

    return 0;
}