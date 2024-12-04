#include <iostream>
int exampleFunction() {
    return 42; 
}
int main() {
    int result = exampleFunction();  
    std::cout << "The result is: " << result << std::endl;
    return 0; 
}