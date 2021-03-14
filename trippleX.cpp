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

    std::cout << "There are three numbers in the code \n";   
    std::cout << "The code's numbers add up to: "<< CodeSum;   
    std::cout << "\nThe code's numbers multiply to: " << CodeProduct;
    
    std::cout << "\nPlease input the three numbers you \"believe\" makeup the code";
   // store player guessess
    int GuessA;
    int GuessB;
    int GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;    
    std::cin >> GuessC;    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;

    std::cout << "\nyour sum total is: " << GuessSum;
    std::cout << "\nyour sum product is: " << GuessProduct;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
    std::cout << "\nYou Win";
    } else 
    {
    std::cout << "\nhe's dead! better luck next time!";
    }
    
    return 0;
}