#include <iostream>

int main() 
{    
    //prints starting messages
    std::cout << "Welcome to the World of Machines"<< std::endl;
    std::cout << "We need you to perform robo brain surgery on these robots"<< std::endl;
    std::cout << "The code to save the robot has three numbers"<< std::endl;


    //decalres the variables 
    int a = 2;
    int b = 4;
    int c = 4;
    
    int sum = a + b + c;
    int product = a * b * c;

    std::cout << "The code's numbers add up to: "<< sum << std::endl;   
    std::cout << "The code's numbers multiply to: " << product;

    return 0;
}