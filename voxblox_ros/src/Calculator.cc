#include "Calculator.h"
#include <iostream>

// 생성자 정의
Calculator::Calculator(const std::string& name) : name_(name) {}

// 사칙연산 함수들 정의
int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Division by zero error!" << std::endl;
        return 0;
    }
    return a / b;
}

// 계산기의 이름을 출력하는 함수 정의
void Calculator::printCalculatorName() const {
    std::cout << "Calculator Name: " << name_ << std::endl;
}
