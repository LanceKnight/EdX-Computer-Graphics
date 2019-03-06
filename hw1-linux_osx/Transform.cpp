// Transform.cpp: implementation of the Transform class.


#include "Transform.h"
#include <iostream>
#include "glm/ext.hpp"

//Please implement the following functions:

// Helper rotation function.  
mat3 Transform::rotate(const float degrees, const vec3& axis) {
	// YOUR CODE FOR HW1 HERE
	float ux = axis[0];
	float uy = axis[1];
	float uz = axis[2];

	mat3 term1(1, 0, 0,
				  0, 1, 0,
				  0, 0, 1);
	mat3 term2(pow(ux,2),   ux*uy    ,    ux*uz,
				  ux*uy    ,   pow(uy,2),    uy*uz,
				  ux*uz    ,   uy*uz    ,    pow(uz,2));


	mat3 term3(0 ,   -uz ,  uy ,
				  uz ,  0 ,  -ux,
				  -uy,  ux,   0);

	term1 = glm::transpose(term1);	
	term1 = float(cos(degrees*pi/180.0))*term1;

	term2 = glm::transpose(term2);
	term2 = float((1-cos(degrees*pi/180.0)))*term2;
	
	term3 = glm::transpose(term3);
	term3 = float(sin(degrees*pi/180.0))*term3;

	//std::cout<<"x:"<<ux<<",y:"<<uy<<",z:"<<uz<<std::endl;
	//std::cout<<"term1:"<<glm::to_string(term1)<<std::endl;
	//std::cout<<"term2:"<<glm::to_string(term2)<<std::endl;
	//std::cout<<"term3:"<<glm::to_string(term3)<<std::endl;
	mat3 result = term1+term2+term3;

	//std::cout<<"result:"<<glm::to_string(result)<<std::endl;
/*
	mat3 r( cos(degrees) + pow(ux,2)*(1-cos(degrees)), ux*uy*(1-cos(degrees)


			);	
*/
	// You will change this return call
	return result;
}

// Transforms the camera left around the "crystal ball" interface
void Transform::left(float degrees, vec3& eye, vec3& up) {
	//degrees = 90;
	//std::cout<<"Before Coordinates:"<<eye.x<<","<<eye.y<<","<<eye.z<<","<<sqrt(pow(eye.x,2)+pow(eye.y,2)+ pow(eye.z,2))<<std::endl;
	vec3 axis(0,1,0);
	mat3 left_m = rotate(degrees, up);
	//std::cout<<"Degree:"<<degrees<<std::endl;
	//std::cout<<"matrix:"<<glm::to_string(left_m)<<std::endl;
	eye = left_m * eye;
	//std::cout<<"After Coordinates:"<<eye.x<<","<<eye.y<<","<<eye.z<<","<<sqrt(pow(eye.x,2)+pow(eye.y,2)+ pow(eye.z,2))<<std::endl;

	// YOUR CODE FOR HW1 HERE
}

// Transforms the camera up around the "crystal ball" interface
void Transform::up(float degrees, vec3& eye, vec3& up) {
	vec3 axis(1,0,0);
	axis = normalize(cross(eye, up));
	mat3 up_m = rotate(degrees,axis);
	std::cout<<"eye:"<<glm::to_string(eye)<<std::endl;
	std::cout<<"up:"<<glm::to_string(up)<<std::endl;
	std::cout<<"product:"<<glm::to_string(axis)<<std::endl;

	eye = up_m * eye;
	up = up_m * up;
	//std::cout<<"After Coordinates:"<<eye.x<<","<<eye.y<<","<<eye.z<<","<<sqrt(pow(eye.x,2)+pow(eye.y,2)+ pow(eye.z,2))<<std::endl;

	// YOUR CODE FOR HW1 HERE 
}

// Your implementation of the glm::lookAt matrix
mat4 Transform::lookAt(vec3 eye, vec3 up) {
	// YOUR CODE FOR HW1 HERE

	// You will change this return call
	return mat4();
}

Transform::Transform()
{

}

Transform::~Transform()
{

}
