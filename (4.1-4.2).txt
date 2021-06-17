------------------------------------EXCERCISE 4.1------------------------------------------
# Leap year 
int main(){
    int year;
 
    std::cout << "Enter a year: ";
    std::cin >> year;
 
    if( (year % 4) == 0){ 
        // if multiple of 4
 
        if( (year % 100) == 0){ 
          if((year % 400) ==0){
            std::cout << "Leap year" << std::endl;
            }
          else{
            std::cout << "Not a leap year" << std::endl;
          }
        }
         else{
          std::cout << "not a leap year" << std::endl;
        }
    
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}

------------------------------------EXCERCISE 4.2------------------------------------------

# Bidimensional figure with while loops
int main(){
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  int i=0;

 while(i<n){
    int i2=0;
    while(i2<n){
    std::cout << "*";
    i2++;
    }
     std::cout << std::endl;
    i++; 
  }

  }


# Multiplication table
int main(){
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;

  for(int crows = 1; crows <= n; crows++){

    for(int c_cols = 1; c_cols <= n; c_cols++){
      std::cout << c_cols*crows << "\t";
    }
    std::cout << std::endl;

}
}
