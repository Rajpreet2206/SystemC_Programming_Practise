#include<iostream>
#include<systemc>

class DataTypes{
	const bool WARNING_LIGHT(true);//can take values either true or false
	int spark_offset;
	unsigned repairs(0);
	unsigned long mileage;
	short int speedometer;
	float temperature;
	double time_of_last_request;
	string license_plate;
	enum Direction {N, S, E, W, SE, SW, NW};
	Direction compass;

};

int main(){
	//Some logic to use the above data types from the class	
}
