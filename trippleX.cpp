#include <iostream>

int main() 
{    
    //prints starting messages
    std::cout << "Welcome to the World of Machines"<< std::endl;
    std::cout << "We need you to perform robo brain surgery on these robots"<< std::endl;
    std::cout << "The code to save the robot has three numbers"<< std::endl;


    //decalres the code 
    int CodeA = 2, int CodeB = 4, int CodeC = 4;
    //initalises player guess variables
    int GuessA, int GuessB, int GuessC;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "The code's numbers add up to: "<< CodeSum << std::endl;   
    std::cout << "The code's numbers multiply to: " << CodeProduct<< std::endl;
    
    std::cout << "Please input the first number you think is in the code"<< std::endl;
    std::cin >> GuessA;    
    
    std::cout << "Please input the second number you think is in the code"<< std::endl;
    std::cin >> GuessB;
     
    std::cout << "Please input the third number you think is in the code"<< std::endl;
    std::cin >> GuessC;


    std::cout << "your attempt is: " << GuessA << GuessB << GuessC;
    return 0;
}