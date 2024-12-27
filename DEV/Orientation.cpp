#include <iostream>

#include "include/Orientation.h"

using namespace std;

Orientation::Orientation(double new_roll, double new_pitch, double new_yaw):Rotation(){
    roll = 0;
    pitch = 0;
    yaw = 0;
    rotate(new_roll, new_pitch, new_yaw);
}

double Orientation::getRoll(){
    return roll;
} 

double Orientation::getPitch(){
    return pitch;
} 

double Orientation::getYaw(){
    return yaw;
} 

void Orientation::setRoll(double new_roll){
    roll = new_roll;
}

void Orientation::setPitch(double new_pitch){
    pitch = new_pitch;
}

void Orientation::setYaw(double new_yaw){
    yaw = new_yaw;
}

void Orientation::printAngles() {
    std::cout << "Roll: " << roll << " Pitch: " << pitch << " Yaw: " << yaw << endl;
}

void Orientation::printVectors() {
    std::cout << "X: ";
    for(int i=0; i<3;i++){
        cout <<ore[0][i]<<" ";
    }
    std::cout<<endl;
    std::cout << "Y: ";
    for(int i=0; i<3;i++){
        cout << ore[1][i]<<" ";
    }
    std::cout<<endl;
    std::cout << "Z: ";
    for(int i=0; i<3;i++){
        cout << ore[2][i]<<" ";
    }
}

void  Orientation::rotate(double d_roll, double d_pitch, double d_yaw){
    roll_rotation(d_roll, ore);
    pitch_rotation(d_pitch, ore);
    yaw_rotation(d_yaw, ore);
    roll += d_roll;
    pitch += d_pitch;
    yaw += d_yaw;
}
