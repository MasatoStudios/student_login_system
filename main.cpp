#include <iostream>
#include <fstream>
#include <string>

//student login system
//created by Matthew Storey

void menu();
void Login();
void Sign_Up();
void Admin();

int option;

int main(){
    menu();
    if (option == 1){
        Login();
    } else if(option == 2){
        // Sign_Up();
    }else if(option == 3){
        // Admin();
    }else{
        std::cout << "Exiting software: not recognised input";
        return -1;
    }

    return 0;
}

// Menu function

void menu(){
        std::cout << "\t\tMenu\n\n";
        std::cout << "Welcome to the student login page!\n";
        std::cout << "Please select one of the following options:\n\n";
        std::cout << "\t1. Login\n";
        std::cout << "\t2. Sign up\n";
        std::cout << "\t3. Admin\n";
        std::cin >> option;
}

//Login function
void Login(){
    std::string username, password;

    std::cin >> username >> password;
    std::cout << username << std::endl << password;
}
// Sign up Function

//Admin Function