#include <iostream>
#include "substitution.cpp"
#include "scytale.cpp"

int main(int argc, char* argv[]) 
{ 
    ;std::cout << "You have entered " << argc << " arguments" << std::endl;
    
    unsigned long long int bob;
    std::string divisible;
    
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " command type key input" << std::endl;
        return 1;
    }
    for (int i = 1; i < argc; i++) 
    {
        std::cout << argv[i] << " " << std::endl;
    }
    std::string command = argv[1];
    
    if (command ==  "scytale")
    {
        scytale scytale_test;
        scytale_test.set_plaintext("Gav");
        scytale_test.set_encryptedtext("aGv");
        scytale_test.print_plaintext();
        scytale_test.print_encryptedtext();
    }        
    else        
    {        
        std::cerr << "Command not recognised: " << argv[1] << std::endl;
        return 1;
    }
    
}