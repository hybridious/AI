#include <iostream>
#include <cmath>
int main(void) {
    std::cout << "Enter the sample porportion of success's" << '\n';
    double p = 0;
    std::cin >> p;
    std::cout << "Enter the critical value: " << '\n';
    double critical = 0;
    std::cin >> critical;
    std::cout << "Enter the desired margin of error" << '\n';
    double ME = 0;
    std::cin >> ME;
    
    double result = std::pow((critical / ME) , 2) * p * (1-p);
    std::cout << "You should use " << result << " to produce a margin of error that is no more than " << ME << '\n';
    
    
    
    return 0;
}
