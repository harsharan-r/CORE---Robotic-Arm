#include <iostream>  
#include <array>
#include <cmath>

#include "include\Orientation.h"

using namespace std;  


int main() {  
    Orientation test = Orientation(0,0,0);
    test.rotate(10, 10 ,10);
    test.printAngles();
    test.printVectors();
    test.CalculateCurrentAngle();
}