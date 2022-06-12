
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Vector3d{  // Vector3d Class
    
public:
float x,y,z;     // x,y,z component of a 3d vector
float getLength(); //Function to return length of a 3d vector
Vector3d add(Vector3d); // Function to return subtraction of two 3d vector
Vector3d subtract(Vector3d); // Function to return addition of two 3d vector
float getX();  //Function to return x component of 3d vector
float getY(); //Function to return y component of 3d vector
float getZ(); //Function to return z component of 3d vector
float dotProduct(Vector3d); //Function to return DOT Product of two 3d vector
void printVector(); //Function to print x,y,z component of a 3d vector

    Vector3d(float x=0,float y=0, float z=0){ //Constructor
        this->x = x;
        this->y = y;
        this->z = z;
    }

};

float Vector3d::getLength(){
    float vectorLength = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    return vectorLength;
}

float Vector3d::getX(){
    return x;
   
}
float Vector3d::getY(){
    return y;
    
}
float Vector3d::getZ(){
    return z;
}
Vector3d Vector3d::add(Vector3d obj2){
    
    float x = this->x + obj2.x;
    float y = this->y + obj2.y;
    float z = this->z + obj2.z;
    Vector3d newObj(x,y,z);
    newObj.printVector();
    return newObj;
}

Vector3d Vector3d::subtract(Vector3d obj2){
    float x = this->x - obj2.x;
    float y = this->y - obj2.y;
    float z = this->z - obj2.z;
    Vector3d newObj(x,y,z);
    newObj.printVector();
    
    return newObj;
    
}
float Vector3d::dotProduct(Vector3d obj2){
    float x = this->x * obj2.x;
    float y = this->y * obj2.y;
    float z = this->z * obj2.z;
    
    float product = x+y+z;
    cout <<"Dot Product = "<< product << endl;
    
    
    return product;
}

void Vector3d::printVector(){
    cout << "X Component =" << x << endl;
    cout << "Y Component =" << y << endl;
    cout << "Z Component =" << z << endl;
    
}

int main()
{
    float x1 = 1;
    float y1 = 2;
    float z1 = 3;
    
    Vector3d obj1(x1,y1,z1);
    float x_component = obj1.getX();
    cout <<"Value of x =" <<x_component << endl;
    float y_component = obj1.getY();
    cout <<"Value of y =" <<y_component << endl;
    float z_component = obj1.getZ();
    cout <<"Value of z =" <<z_component << endl;
    float lengthVector = obj1.getLength();
    cout <<"Length of Vector =" <<lengthVector << endl;
    
    float x2 = 5;
    float y2 = 6;
    float z2 = -1;
    
    Vector3d obj2(x2,y2,z2);
    
    float x_component_obj2 = obj2.getX();
    cout <<"Value of x =" <<x_component_obj2 << endl;
    float y_component_obj2 = obj2.getY();
    cout <<"Value of y =" <<y_component_obj2 << endl;
    float z_component_obj2 = obj2.getZ();
    cout <<"Value of z =" <<z_component_obj2 << endl;
    float lengthVector_obj2 = obj2.getLength();
    cout <<"Length of Vector =" <<lengthVector_obj2 << endl;
    
    obj1.add(obj2);
    obj1.subtract(obj2);
    obj1.dotProduct(obj2);
    
    return 0;
}
