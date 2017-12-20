#include <iostream>
#include <vector>
#include <cmath>


int main(){
double mean = 8.128;
double variance = 0;
std::cout << variance << '\n';
std::vector<double> prob = { 0.001, 0.006, 0.007, 0.008, 0.012, 0.020, 0.038, 0.099, 0.319, 0.437, 0.053 };

for(std::vector<double>::size_type i = 0; i != prob.size(); i++){
variance += std::pow((i-mean), 2) * prob[i];
}
std::cout << "The Variance is : " << variance << '\n';
std::cout << "The Standard Deviation is : " << std::sqrt(variance) << '\n';
}
