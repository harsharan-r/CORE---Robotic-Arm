# Basic Overview

In this subsection, I implemented a basic Orientation class designed to store and manipulate the orientation of an object using three unit vectors. The class provides functionality for rotating the object about its roll, pitch, and yaw axes, enabling users to simulate various directional movements.

# Rotation Operations

The rotation operations are performed by applying transformations to the object's orientation vectors, ensuring that the orientation is always updated accurately. These operations are essential for applications involving 3D simulations or robotics, where precise control of an object's orientation is required.

# Limitations of Euler Angles

Despite its flexibility, I encountered a fundamental limitation associated with the use of Euler angles: gimbal lock. Gimbal lock occurs when two of the three rotation axes become aligned, resulting in a loss of one degree of rotational freedom. This is especially problematic in applications that require continuous or complex rotational movements. In this specific case the pitch is limited to be between 90 degrees and -90 degrees. 

# Future Improvements

Future improvements could involve switching to a quaternion-based representation for orientation, which would eliminate the risk of gimbal lock entirely while offering smoother and more stable rotational behavior.

# Attributions and Resources

Used Sections 1.0-2.3 from [41013 Robotics](https://www.youtube.com/playlist?list=PLjx2FAhpTe3FGbcjBbxlhf56qVR0XbVNO) playlist by [Woolfrey](https://www.youtube.com/@Woolfrey) on YouTube.