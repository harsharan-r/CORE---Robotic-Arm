#include "include/Matrix.h"

Matrix::Matrix(){}
Matrix::Matrix(std::initializer_list<std::initializer_list<double>> vectors){
    for(std::initializer_list<double> vector : vectors){
        data.push_back(Vector(vector));
    }
}

void Matrix::print(){
    for(int i = 0; i < data.size(); i++){
        data[i].print();
    }
}

Matrix Matrix::operator+(Matrix U){
    if (U.size() != data.size()) {
        throw std::invalid_argument("Error: Matrices are not the same size");
    }
    Matrix temp;
    for(int i = 0; i < data.size(); i++){
        temp.push_back(data[i]+U[i]);
    }
    return temp;
}

Matrix Matrix::operator-(Matrix U){
    if (U.size() != data.size()) {
        throw std::invalid_argument("Error: Matrices are not the same size");
    }
    Matrix temp;
    for(int i = 0; i < data.size(); i++){
        temp.push_back(data[i]-U[i]);
    }
    return temp;
}

Matrix Matrix::transpose(){
    Matrix transpose;

    for(int i = 0; i < data[0].size(); i++){
        Vector temp;
        for(int j = 0; j < data.size(); j++){
            temp.push_back(data[j][i]);
        }
        transpose.push_back(temp);
    }

    return transpose;
}

Matrix Matrix::operator*(Matrix U){
    Matrix product;

    for(int i = 0; i < U.transpose().size(); i++){
        Vector temp;
        for(int j = 0; j < data.size(); j++){
            temp.push_back(data[j]*U.transpose()[i]);
        }
        product.push_back(temp);
    }

    return product;
}


void Matrix::newData(std::initializer_list<std::initializer_list<double>> vectors){
    this->clear();
    for(std::initializer_list<double> vector : vectors){
        data.push_back(Vector(vector));
    }
}

// int main(){
//     Matrix U({{1,2,3}, {4,5,6}, {7,8,9}});
//     U.print();
//     U.newData({{2,2,2}, {3,3,3}, {4,4,4}});
//     U.print();
   
// }