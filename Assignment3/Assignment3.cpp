//***************************************************\
//******************Feras Alshehri*******************\
//********************004344898**********************\
//**  We are going to unit test multiplication and **\
//********* division by using assert class **********\


#include <iostream>
#include <assert.h>

using namespace std;

class Calculator{
public:
	Calculator();
	int multiplication(int, int);
	int division(int, int);
private:
	int x;
	int y;
};

Calculator::Calculator(){ /* constructor */ }

int Calculator::multiplication(int x, int y){
	return x * y;
}

int Calculator::division(int x, int y){
	return x / y;
}

int main(){
	//We are testing if our class works just fine, 
	//if it is, it will just continue to ask the user
	//for the numbers
	Calculator UnitTesting;
	assert(UnitTesting.multiplication(10, 2) == 20);
	assert(UnitTesting.division(10, 2) == 5);

	Calculator UnitTesting2;
	assert(UnitTesting2.multiplication(20, 4) == 80);
	assert(UnitTesting2.division(100, 2) == 50);

	int a, b;
	string answer;
	cout << "Please enter the first number :\t";
	cin >> a;
	cout << "Please enter the second number:\t";
	cin >> b;
	cout << endl;
	cout << "\n Multiplication    (" << a << "*" << b << ")  \t= \t " << UnitTesting.multiplication(a, b);
	cout << "\n Division \t   (" << a << "/" << b << ") \t= \t " << UnitTesting.division(a, b) << endl;

	while (true){
		cout << "Do you want to do another calculation? y or n:\t";
		cin >> answer;
		if (answer == "y"){
			cout << "Please enter the first number :\t";
			cin >> a;
			cout << "Please enter the second number:\t";
			cin >> b;
			cout << endl;
			cout << "\n Multiplication    (" << a << "*" << b << ")  \t= \t " << UnitTesting.multiplication(a, b);
			cout << "\n Division \t   (" << a << "/" << b << ") \t= \t " << UnitTesting.division(a, b) << endl;
		}
		else{
			break;
		}
	}
}
