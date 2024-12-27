#include <iostream>  
#include <array>
#include <cmath>

#include "include\Orientation.h"

using namespace std;  


int main() {  
    Orientation test = Orientation(1,2,0.5);
    test.printAngles();
    test.printVectors();
}