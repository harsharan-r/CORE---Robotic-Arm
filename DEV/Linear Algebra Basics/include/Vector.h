#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>
#include <initializer_list>

class Vector{
    private:
        std::vector<double> data;

    public:
        Vector();
        Vector(std::initializer_list<double> numbers);
        
        //standard vector functionality
        void push_back(const double value) { data.push_back(value); }
        void pop_back() { data.pop_back(); }
        void clear(){ data.clear(); }
        std::size_t size() const { return data.size(); }
        double& operator[](std::size_t index) { return data[index]; }
        const double& operator[](std::size_t index) const { return data[index]; }

        //operator functionality
        Vector operator+(Vector u);
        Vector operator-(Vector u);

        //added functionality
        double operator*(Vector u);
        void print();

        //special for 3D vectors
        Vector cross_product(Vector u);
        //add later
        //Vector proj(Vector u);

};

#endif