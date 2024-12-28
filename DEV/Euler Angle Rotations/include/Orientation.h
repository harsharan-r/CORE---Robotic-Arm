#ifndef ORIENTATION_H
#define ORIENTATION_H
#include "RotationMatrix.h"
#include <iostream>

class Orientation: public Rotation{
    private:
        double roll, pitch, yaw;
        std::array<double, 3> x = {1,0,0};
        std::array<double, 3> y = {0,1,0};
        std::array<double, 3> z = {0,0,1};

        std::array<std::array<double, 3>, 3> ore = {{{1,0,0},{0,1,0},{0,0,1}}};

    
    public:
        Orientation(double new_roll, double new_pitch, double new_yaw);
        double getRoll();
        double getPitch();
        double getYaw();

        void setRoll(double new_roll);
        void setPitch(double new_pitch);
        void setYaw(double new_yaw);
        
        void printAngles();
        void printVectors();
        void rotate(double d_roll, double d_pitch, double d_yaw);
        void CalculateCurrentAngle();
};

#endif