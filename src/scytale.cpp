#include <string>
#include <iostream>
class scytale
{
    public:
        int letters_turn, number_turns, u_d, strip_whitespace;
        std::string plaintext;
        std::string encryptedtext;
    
        //********************************************
        // constructor/desctructor functions
        //********************************************
        scytale()
        {
            // std::cout << "running constructor" << std::endl;
            letters_turn = 4;
            number_turns = 5;
            u_d = 0; //down
            strip_whitespace = 0; // strip whitespace
            plaintext = "I am hurt very badly help"; //@4 per loop and 5 loops IRYYATBHMVAEHEDLURLP // wikipedia....
            encrypt_plaintext(); 
        }

        //********************************************
        // encrypt/decrypt functions
        //********************************************
        void encrypt_plaintext()
        {
            encryptedtext = "123456789";
        }
        void decrypt_encryptedtext()
        {
            plaintext = "abcdefghi";
        }







        //********************************************
        // set functions
        //********************************************
        void set_turns(int input)
        {
            number_turns = input;
        }
        void set_letters_per_turn(int input)
        {
            letters_turn = input;
        }
        void set_strip_whitespace(int input)
        {
            strip_whitespace = input;
        }
        void set_up_down(int input)
        {
            u_d = input;
        }
        void set_plaintext(std::string text)
        {
            plaintext = text;
        }
        void set_encryptedtext(std::string text)
        {
            encryptedtext = text;
        }
        //********************************************
        // get functions
        //********************************************
        int get_turns()
        {
            return(number_turns);
        }
        int get_letters_per_turn()
        {
            return(letters_turn);
        }
        int get_strip_whitespace()
        {
            return(strip_whitespace);
        }
        int get_up_down()
        {
            return(u_d);
        }
        std::string get_plaintext()
        {
            return(plaintext);
        }
        std::string get_encryptedtext()
        {
            return(encryptedtext);
        }
        //********************************************
        // print functions
        //********************************************
        void print_data()
        {
            std::cout << "number of turns:" << number_turns << std::endl;
            std::cout << "letters per turn:" << letters_turn << std::endl;
            std::cout << "strip whitespace:" << strip_whitespace << std::endl;
            std::cout << "up or down:" << u_d << std::endl;
        }
        void print_plaintext()
        {
            std::cout << "PlainText:" << plaintext << std::endl;
        }
        void print_encryptedtext()
        {
            std::cout << "EncryptedText:" << encryptedtext << std::endl;
        }
};