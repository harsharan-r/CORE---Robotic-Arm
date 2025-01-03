#ifndef MATRIX_H
#define MATRIX_H
#include "Vector.h"

class Matrix{
    private:
        std::vector<Vector> data;

    public:
        Matrix();
        Matrix(std::initializer_list<std::initializer_list<double>> vectors);
        
        //standard vector functionality
        void push_back(const Vector value) { data.push_back(value); }
        void pop_back() { data.pop_back(); }
        std::size_t size() const { return data.size(); }
        Vector& operator[](std::size_t index) { return data[index]; }
        const Vector& operator[](std::size_t index) const { return data[index]; }

        //Matrix Functionality
        void print();
        Matrix transpose();

        //operator Functionality
        Matrix operator+(Matrix U);
        Matrix operator-(Matrix U);
        Matrix operator*(Matrix U);

};

#endif