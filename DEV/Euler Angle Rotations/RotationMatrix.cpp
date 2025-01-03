#include "include/RotationMatrix.h"

using namespace std;

#define ANGLE_PRECISION 1e-12

Rotation::Rotation() {}

void Rotation::roll_matrix(double roll) {
    roll_rotation_matrix[0] = {1, 0, 0};
    roll_rotation_matrix[1] = {0, cos(roll), -1.0*sin(roll)};
    roll_rotation_matrix[2] = {0, sin(roll), cos(roll)};
}

void Rotation::pitch_matrix(double pitch) {
    pitch_rotation_matrix[0] = {cos(pitch), 0, sin(pitch)};
    pitch_rotation_matrix[1] = {0, 1, 0};
    pitch_rotation_matrix[2] = {-1.0*sin(pitch), 0, cos(pitch)};
}

void Rotation::yaw_matrix(double yaw) {
    yaw_rotation_matrix[0] = {cos(yaw), -1.0*sin(yaw),0};
    yaw_rotation_matrix[1] = {sin(yaw), cos(yaw), 0};
    yaw_rotation_matrix[2] = {0, 0, 1};
}

void Rotation::roll_rotation(double roll, array<array<double, 3>, 3> &matrix) {
    roll_matrix(roll);
    array<double, 3> temp;

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            temp[j] = roll_rotation_matrix[j][0]*matrix[i][0] + roll_rotation_matrix[j][1]*matrix[i][1]+ roll_rotation_matrix[j][2]*matrix[i][2];
            if(fabs(temp[j]) < ANGLE_PRECISION){
                temp[j] = 0.0;
            }
        }
        matrix[i] = temp;
    }
}

void Rotation::pitch_rotation(double pitch, array<array<double, 3>, 3> &matrix) {
    pitch_matrix(pitch);
    array<double, 3> temp;

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            //std::cout<< pitch_rotation_matrix[j][0] << " x " << matrix[i][0] << " + " << pitch_rotation_matrix[j][1] << " x " << matrix[i][1]<< " + " << pitch_rotation_matrix[j][2] << " x " << matrix[i][2]<<endl;
            temp[j] = pitch_rotation_matrix[j][0]*matrix[i][0] + pitch_rotation_matrix[j][1]*matrix[i][1]+ pitch_rotation_matrix[j][2]*matrix[i][2];
            if(fabs(temp[j]) < ANGLE_PRECISION){
                temp[j] = 0.0;
            }
        }
        matrix[i] = temp;
    }
}

void Rotation::yaw_rotation(double yaw, array<array<double, 3>, 3> &matrix) {
    yaw_matrix(yaw);
    array<double, 3> temp;

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){


            temp[j] = yaw_rotation_matrix[j][0]*matrix[i][0] + yaw_rotation_matrix[j][1]*matrix[i][1]+ yaw_rotation_matrix[j][2]*matrix[i][2];
            if(fabs(temp[j]) < ANGLE_PRECISION){
                temp[j] = 0.0;
            }
        }
        matrix[i] = temp;
    }
}
