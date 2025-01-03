#ifndef ROTATION_MATRIX_H
#define ROTATION_MATRIX_H
#include "../../Linear Algebra Basics/include/Matrix.h"
#include <cmath>
#include <iostream> 

class Rotation{

    private:
        Matrix roll_rotation_matrix;
        Matrix pitch_rotation_matrix;
        Matrix yaw_rotation_matrix;

        void roll_matrix(double roll);
        void pitch_matrix(double pitch);
        void yaw_matrix(double yaw);


    public:
        Rotation();
        void roll_rotation(double roll, std::array<std::array<double, 3>, 3> &matrix);
        void pitch_rotation(double pitch, std::array<std::array<double, 3>, 3> &matrix);
        void yaw_rotation(double yaw, std::array<std::array<double, 3>, 3> &matrix);
};

#endif