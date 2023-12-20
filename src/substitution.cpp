#include <string>
#include <iostream>
class substitution
{
    public:
        int offset;
        std::string key;
    
        substitution()
        {
            // std::cout << "running constructor" << std::endl;
            offset = 4;
            key = "BCASAKJLEIODFNOENTONG";
        }

        void print_key()
        {
            std::cout << "Key:" << key << std::endl;
        }

};