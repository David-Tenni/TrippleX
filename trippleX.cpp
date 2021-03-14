#include <iostream>

int main() 
{    
    //prints starting messages
    std::cout << "Welcome to the World of Machines"<< std::endl;
    std::cout << "We need you to perform robo brain surgery on these robots"<< std::endl;
    std::cout << "The code to save the robot has three numbers"<< std::endl;


    //decalres the variables 
    int CodeA = 2;
    int CodeB = 4;
    int CodeC = 4;
    

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "There is three numbers in the code " << std::endl;   
    std::cout << "The code's numbers add up to: "<< CodeSum << std::endl;   
    std::cout << "The code's numbers multiply to: " << CodeProduct<< std::endl;
    
    std::cout << "Please input the the numbers you believe makeup the code"<< std::endl;
   // int GuessA, int GuessB, int GuessC;
    int GuessA;
    int GuessB;
    int GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;    
    std::cin >> GuessC;    



    std::cout << "your attempt is: " << GuessA << GuessB << GuessC;
    return 0;
}