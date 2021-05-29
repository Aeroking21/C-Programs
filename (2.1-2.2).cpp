------------------------------------EXCERCISE 2.1------------------------------------------
# Multiple of 3 or not
 int main(){
    int n, rem;
 
    std::cout << "Please enter a number: ";
    std::cin >> n;
 
    rem = n % 3;
 
    if(rem == 0){
        // if the remainder is 0...
        std::cout << "The number is a multiple of 3" << std::endl;
    }
    else{
        // otherwise...
        std::cout << "The number isn't multiple of 3" << std::endl;
    }
}

# Absolute Value 
int main(){
    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute
 
    // TODO: ask for a number in input
    std::cout << "Enter a number: ";
    // TODO: read the input number in n
    std::cin >> n;
 
    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
        // TODO: assign the value of n to absv
        absv = n;
    }
  std::cout << "|" << n << "| = " << absv << std::endl;
}


------------------------------------EXCERCISE 2.2 ------------------------------------------
int main(){
  while(true){
    double temp, ntemp;
    std::string input, output;

    std::cout << "Enter the Temp you want: ";
    std::cin >> temp >> input;
    bool flag = true;

    if((input== "C") || (input == "c")){
      ntemp = (temp*1.8)+32;
      output = "Farenhite";
    }
    else if ((input== "F") || (input == "f")){
      ntemp = (temp-32)*0.55555;
      output = "Celsius";
    }
    else{
      flag = false;
    }
    if(flag){
      std::cout << "The Temperature in " << output << " is " << ntemp << std::endl;
    }
    else{
      std::cout << "Try again you entered the wrong units" << std::endl;
    }
   }
}
