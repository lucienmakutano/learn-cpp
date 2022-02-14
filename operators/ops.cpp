#include "ops.h"
#include <iostream>

using namespace std;


void mixed_type();

void ops_word(){
	// assignement ops
	int age {0};
	age  = 20;

	// arithmetic ops
	int num1 {100};
	int num2 {200};

	cout << num1 << " + " << num2 <<" = " << num1 + num2 << endl;
	cout << num1 << " / " << num2 <<" = " << num1 / num2 << endl;
	cout << num1 << " - " << num2 <<" = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 <<" = " << num1 * num2 << endl;
	cout << num1 << " % " << num2 <<" = " << num1 % num2 << endl;

	// double division
	// Old style type casting
	cout << num1 << " / " << double(num2) << " = " << num1 / double(num2) << endl;
	
	// Test for equality
	cout << num1 << " == " << num2 << (num1 == num2) << endl;
	cout << num1 << " != " << num2 << (num1 == num2) << endl;

	// Relational operators
	cout << num1 << " > " << num2 << (num1 > num2) << endl;
	cout << num1 << " < " << num2 << (num1 < num2) << endl;
	cout << num1 << " >= " << num2 << (num1 >= num2) << endl;
	cout << num1 << " <= " << num2 << (num1 <= num2) << endl;
}

void euro_to_usd_converter() {
	const double usd_per_euro {1.19};

	cout << "EURO TO USD CONVERTER" << endl;
	cout << "Enter the value in EURO: ";

	double euro_amount {0.0};
	cin >> euro_amount;

	double usd_amout = euro_amount * usd_per_euro;

	cout << euro_amount <<" is equivalent to " << usd_amout << endl;
}

void mixed_type() {
	int total {};
	int num1 {}, num2 {}, num3{};
	const int count {3};

	cout << "Enter 3 numbers separated by space: ";
	cin >> num1 >> num2 >> num3;

	total = num1 + num2 + num3;
	double average = static_cast<double>(total) / count; // explicit type casting
	cout << "The average is: " << average;
}
