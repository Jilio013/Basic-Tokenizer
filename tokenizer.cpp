#include <iostream>
#include <string>
#include <vector>
//Gets user input pretty self explanatory
std::string getinput() {
   std::string input;
   std::cout << "Enter an expression: " ; 
   std::getline(std::cin , input); 
   return input;
} 

// loops through each of the characters until it finds a digit then pushes it back into a string 
//if a digit isnt found and the string isn't empty it pushes all the content inside a vector then 
//clears the string , Then it checks whether the operator in the if block are detected if it is
// it converts it into a string and pushes it inside the vector , then for the last digit to make sure 
// we check if token isn't empty if it isn't we push the content inside to the vector
std::vector<std::string>tokenized(const std::string& input){
  std::vector<std::string>tokens;
  std::string token;
  for(int i = 0; i < input.size(); i++){
    char a = input[i];
    if(isdigit(a)){
      token.push_back(a);

    }
    
    if(!isdigit(a) && !token.empty()){
      tokens.push_back(token);
      token.clear();
    }
      if( a == '*' || a == '/' || a == '+' || a == '-'){
        tokens.push_back(std::string{a});
    }

    }
    if(!token.empty()){
      tokens.push_back(token);
    } 
  

    return tokens;
}



int main() {
  std::string input = getinput();
  std::vector <std::string> tokens =  tokenized(input); 
  for(const std::string&holder:tokens){   //loops through the vector for every item inside of it
    std::cout << holder << " ";

  }
  
  
}
