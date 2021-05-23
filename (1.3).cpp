# Rectangles 
int main(){
 
    double length, width, area, perimeter;
 
   std::cout << "Enter length" << std::endl;
   std::cin >> length;
 
    std::cout << "Enter width" << std::endl;
    std::cin >> width;
    
    area = width*length;
    perimeter = (2*length) + (2*width);

    std::cout << "Area is " << area << std::endl;

    std::cout << "Perimeter is " << perimeter << std::endl;
}

# Temperature conversion
int main(){
  double celsius, farenheit;
  
  std::cout << "Enter Temp" << std::endl;
  std::cin >> celsius;

  farenheit = (celsius*1.8) + 32;
  
  std::cout << "Temp in F is " << farenheit << std::endl;
  }

# Currency Conversion 
int main(){
  double gbp, euros;
 
   std::cout << "Enter GBP to be converted: " << std::endl;
   std::cin >> gbp;
    
    euros = (gbp*1.11);

    std::cout << "In EUROS: " << euros << std::endl;
}
