#include <iostream>
#include "substitution.cpp"

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
    
    if (command ==  "sub_code")
    {
        substitution sub_test;
        sub_test.print_key();
    }        
    else        
    {        
        std::cerr << "Command not recognised: " << argv[1] << std::endl;
        return 1;
    }
    
}