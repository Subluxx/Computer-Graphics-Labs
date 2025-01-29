#include <iostream>

using namespace std;

float pi = 3.1415927;


//class 
class Car {
public:
	std::string make;
	std::string model;
	int year;
	float speed = 0.0f;
	// Constructor
	Car();
	Car(const std::string, const std::string, const int);
	// Methods
	void outputDetails();
	void accelerate(const float);

	static float mph2kph(const float);
};
Car::Car()
{
	std::cout << "\nCar object created" << std::endl;
}
Car::Car(const std::string makeInput, const std::string modelInput, const int yearInput)
{
	make = makeInput;
	model = modelInput;
	year = yearInput;
	std::cout << "\nCar object created" << std::endl;
}
float Car::mph2kph(const float speed)
{
	return speed * 1.60934f;
}
void Car::outputDetails()
{
	std::cout << "\nMake: " << make
		<< "\nModel: " << model
		<< "\nYear: " << year << std::endl;
}
void Car::accelerate(const float increment)
{
	speed = +increment;
	std::cout << "\nThe car has accelerated to " << speed << " mph." << std::endl;
}

float power(const float x, const int y)
{
	float xPowerY = 1.0f;
	for (unsigned int i = 0; i < y; i++)
	{
		xPowerY *= x;
	}
	return xPowerY;
}
void radians(float &angle)
{
	 angle * pi / 180.0f;
}
int main()
{
	std::cout << "hello world\n" << std::endl;
	
	//degrees to radions conversions
	float angleInDegrees = 45.0f;
	

	float angleInRadians = angleInDegrees * pi / 180.0f;

	// output results
	std::cout << angleInDegrees << " degrees is equal to " 
			  << angleInRadians << " radians" << std::endl;
	
	//if statements
	std::cout << "\nIf Statements\n-------------" << std::endl;
	std::cout << angleInDegrees << " degrees is an ";

	if (angleInDegrees < 90) { std::cout << "acute angle." << std::endl; }
	else { std::cout << "obtuse angle." << std::endl; }

	//for loops
	//output the first 10 powers of 2
	std::cout << "\nFor Loops\n-----------" << std::endl;
	int powerOfTwo = 1;

	for (unsigned int i = 0; i < 10; i++)
	{
		powerOfTwo *= 2;
		std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl;
	}

	//while loops
	//count the number of steps the collatz sequence takes to reach 1
	int n, step, nsave;
	n = 10;
	step = 0;
	nsave = n;
	std::cout << "\nWhile Loops\n----------------\n" << n;

	while (n > 1)
	{
		if (n % 2 == 0) { n /= 2; }
		else { n = 3 * n + 1; }
		step++;
		cout << " -> " << n;
	}

	cout << "\n\nThe collatz squence starting at " << nsave << " took " << step << " steps to reach 1." << std::endl;
	
	// Arrays
	unsigned int myArray[] =
	{
		3 ,1 ,4 ,1 ,5 ,9 ,2 ,6 ,5
	};
	cout << "\nArrays\n-----------\n" << endl;

	for (unsigned int i = 0; i < 9; i++)
	{
		cout << "myArray[" << i << "] = " << myArray[i] << endl;
	}

	cout << "\nsize of myArray = " << sizeof(myArray) << endl;
	cout << "\nnumber of elements = " << sizeof(myArray) / sizeof(unsigned int) << endl;
	
	//functions
	//calling the function
	float twoPowerTen = power(2.0f, 10);

	cout << "\nFunctions\n---------------\n" << endl;
	cout << "2^10 = " << twoPowerTen << endl;

	// Call the radians function
	float angle = angleInDegrees;
	radians(angle);

	std::cout << "\n" << angleInDegrees << " degrees is equal to " << angle << " radians." << std::endl;

	// Define car object

	//Car delorean;
	//delorean.make = "Delorean";
	//delorean.model = "DMC-12";
	//delorean.year = 1981;

	Car delorean("DeLorean", "DMC-12", 1981);

	std::cout << "\nClasses\n-------" << std::endl;
	delorean.outputDetails();
	// Accelerate the Delorean up to 88 mph
	delorean.accelerate(88.0f);
	// Convert speed from mph to kph
	std::cout << "\n" << 88 << " mph is equivalent to " << Car::mph2kph(88.0f) << " kph." << std::endl;
	return 0;
}
