------------------------------------EXCERCISE 3.1------------------------------------------
# Multiplication as repeated sum
int main(){
 
    double x, temp = 0;
    int n, counter = 0;
 
    std::cin >> x >> n;
 
    while(counter < n){
        temp = temp + x;
        counter++;
    }
 
    std::cout << x << "*" << n <<  " = " << temp << std::endl;
 
}

# Echo with several stops 
int main(){
    std::string input;
 
    std::cin >> input;
 
    while(input != "STOP" && input!="stop"){
        std::cout << input << std::endl;
        std::cin >> input;
    }
}

# The sum so far 
int main(){
 
    double x, sum = 0;
 
    std::cin >> x;
 
    while(x != 0){
        sum = sum + x;
        std::cout << "The sum so far is: "<< sum << std::endl;
        std::cout << "  Enter a number: ";
        std::cin >> x;      
    }
}

# The average so far 
int main(){
 
    double x, sum = 0;
    double counter, avg = 1;
 
    std::cin >> x;
    // counter=1;
    while(x != 0){
        sum = sum + x;
        avg = sum/counter;
        counter++;
        
        std::cout << "The Average so far is: "<< avg << std::endl;
        std::cout << "  Enter a number: ";
        std::cin >> x;      
    }
}

# Division as repeated subtraction 
int main(){

    int subtraction,counter = 0;
    int num1,num2;
    
    std::cout << "Enter the numbers to divide: ";
    std::cin >> num1 >> num2;
    
    while(num1 > num2){
        subtraction = num1 - num2;
        num1 = subtraction;
        counter++; 

        if(num1 < num2){
          std::cout <<"Quotient is: " <<counter << std::endl;
          std::cout <<"Remainder is: " << num1 << std::endl;

        }
    }
}


------------------------------------EXCERCISE 3.2------------------------------------------

# X^n using FOR loop 
int main(){
  int x,n,total=1;

  std::cout << "Enter x^N: ";
  std::cin >> x >> n;

    for(int i = 1; i <= n; i++){
      total = total*x;
    }
    std::cout << total << std::endl;
}
  
# Factorial  
  
  int x,total=1;
  std::cout << "Enter X!: ";
  std::cin >> x;

    for(int i = x; i >0; i--){
      total = total*i;
    }
    std::cout << total << std::endl;
}
