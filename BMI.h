#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BMI
{
private:
    string name;
    double weight;
    int height;
public:
    BMI();
    BMI(string,double,int);
    ~BMI();
    double calcBMI();
    void report();
  
};

