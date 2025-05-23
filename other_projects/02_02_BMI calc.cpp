// //BMI calculator

// #include <iostream>
// #include <string>
// #include <cmath> // For pow() function if you want to use exponent
// using namespace std;

// int main() {
//     string height, weight;

//     cout << "enter your height in m: ";
//     getline(cin, height);

//     cout << "enter your weight in kg: ";
//     getline(cin, weight);

//     // Convert strings to numeric values
//     float height_as_float = stof(height); //string to float
//     int weight_as_int = stoi(weight); //string to int

//     // Calculate BMI - both methods shown
//     float bmi = weight_as_int / pow(height_as_float, 2); // pow function is like 100*100 or 100^2 from cmath library
//     // Alternative:
//     // float bmi = weight_as_int / (height_as_float * height_as_float);

//     int bmi_as_int = static_cast<int>(bmi); //conversion from float to int via casting

//     cout << bmi_as_int << endl;

//     return 0;
// }