#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator {
public:
    // 생성자 선언
    Calculator(const std::string& name);

    // 사칙연산 함수들
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);

    // 클래스 이름을 출력하는 함수
    void printCalculatorName() const;

private:
    // 멤버 변수 (attribute): 계산기의 이름
    std::string name_;
};

#endif // CALCULATOR_H
