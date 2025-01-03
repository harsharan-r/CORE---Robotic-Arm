#include "include/Vector.h"

Vector::Vector(){}

Vector::Vector(std::initializer_list<double> numbers){
    for(double number : numbers){
        data.push_back(number);
    }
}

double Vector::operator*(Vector u) {
    if (u.size() != data.size()) {
        throw std::invalid_argument("Error: Vectors are not the same size");
    }
    double value;
    for (int i = 0; i < data.size(); i++) {
        value += data[i] * u[i];
    }
    return value;
}


Vector Vector::cross_product(Vector u){
    Vector temp;
    if(u.size() == 3 && data.size() == 3){
        temp.push_back(data[1]*u[2] - data[2]*u[1]);
        temp.push_back(-1*(data[0]*u[2] - data[2]*u[0]));
        temp.push_back(data[0]*u[1] - data[1]*u[0]);
    }
    else if(u.size() != 3){
        throw std::invalid_argument("Error: Vectors are not the same size");
    }
    else if(data.size() != 3){
        throw std::invalid_argument("Error: Vector does not support cross-product");
    }
    return temp;
}

Vector Vector::operator+(Vector u){
    if (u.size() != data.size()) {
        throw std::invalid_argument("Error: Vectors are not the same size");
    }
    Vector temp;
    for(int i = 0; i < data.size(); i++){
        temp.push_back(data[i]+u[i]);
    }
    return temp;
}

Vector Vector::operator-(Vector u){
    if (u.size() != data.size()) {
        throw std::invalid_argument("Error: Vectors are not the same size");
    }
    Vector temp;
    for(int i = 0; i < data.size(); i++){
        temp.push_back(data[i]-u[i]);
    }
    return temp;
}

void Vector::print(){
    for(int i = 0; i < data.size(); i++){
        std::cout<< data[i] << " " << std::endl;
    }
}
