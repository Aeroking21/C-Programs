-----------------------EXCERCISE 1.1----------------------------
# Blank Line
int main(){
    std::cout << "hello";
    // we print hello
 
    std::cout << std::endl;
    // we print a newline
    // std::endl represents a new line
    // endl stands for endline
    // again std is for standard
    std::cout << " " << std::endl; // Prints an empty line 
 
    std::cout << "goodbye" << std::endl;
    // we print goodbye
}



  -----------------------EXCERCISE 1.2----------------------------



# Fix Hello
 int main(){
    std::cout << "hello" << std::endl;
}


# Name and Surname
int main(){
 
    std::string user_name;
    std::string user_surname;
 
    // TODO: add another declaration
    // for a text variable called user_surname
 
    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;
 
    // TODO: add another printing instruction 
    // asking for the surname
     std::cout << "what is your Surname?" << std::endl;
     std::cin >> user_surname;
 
    // TODO: read the surname from the user
    // and store it in variable user_surname
 
    // TODO: add a printing instruction 
    // that says hello followed by the
    // name and surname of the user
    std::cout << "Hello " << user_name << " "<< user_surname << std::endl;
}

