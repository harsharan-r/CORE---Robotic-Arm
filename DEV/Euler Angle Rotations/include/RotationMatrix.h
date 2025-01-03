#ifndef ROTATION_MATRIX_H
#define ROTATION_MATRIX_H
#include <array>
#include <cmath>
#include <iostream> 

class Rotation{

    private:
        std::array<std::array<double, 3>, 3> roll_rotation_matrix;
        std::array<std::array<double, 3>, 3> pitch_rotation_matrix;
        std::array<std::array<double, 3>, 3> yaw_rotation_matrix;

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