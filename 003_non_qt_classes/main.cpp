#include <iostream>

using namespace std;

void sayHi(){
    std::cout << "Hello Sevda!" << std::endl;
}

int add(int a,int b){
    std::cout << "int version of add called..." << std::endl;
    return a + b;
}

float add(float a, float b){
    std::cout << "float version of add called..." << std::endl;
    return a + b;
}

double add(double a, double b){
    std::cout << "double version of add called..." << std::endl;
    return a + b;
}

int main()
{
    sayHi();

    double a {2.4};
    double b {2.2};

    auto result_int = add(3,5);
    std::cout << "result_int : " << result_int << std::endl;

    auto result_float = add(1.2f,4.1f);
    std::cout << "result_float : " << result_float << std::endl;

    double result_double = add(a,b);
    std::cout << "result_double : " << result_double << std::endl;


    return 0;
}
