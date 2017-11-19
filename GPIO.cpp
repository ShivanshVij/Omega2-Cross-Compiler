#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <ugpio/ugpio.h>

using namespace std;

int main(){

	int gpioPin;
	cout << "Enter Pin Number to read from: ";
	cin >> gpioPin;

	int test, index, value;

	int pinDirection;

	if((test = gpio_is_requested(gpioPin)) < 0){
		cerr << "This GPIO pin is in use" << endl;
		return -1;
	}
	else{
		cout << "Staring GPIO pin" << endl;
		if((pinDirection = gpio_request(gpioPin, NULL)) < 0){
			cerr << "There was an error setting the pin value" << endl;
			return -1;
		}
	}

	pinDirection = gpio_direction_input(gpioPin);

	cout << "Starting read" << endl;

	for(int index = 0; index < 20; index++){
		value = gpio_get_value(gpioPin);
		cout << "Value: " << value << endl;

		sleep(1);

	}

	gpio_free(gpioPin);
	return 0;
}

