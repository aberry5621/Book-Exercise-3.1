//
//  main.cpp
//  Book Exercise 3.1
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.1 - Alegbra: solve quadratic equations
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Solve Quadratic Equations \n";
    // D
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double r1 = 0.0;
    double r2 = 0.0;
    
    // I
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    // P
    
    // set discriminant b^2 - 4ac as constant
    const double d = pow(b, 2.0) - (4 * a * c);
    
    cout << "d value: " << d << endl;
    
    // solve quadratics
    r1 = (-b + pow(d, 0.5)) / (2 * a);
    r2 = (-b - pow(d, 0.5)) / (2 * a);
    
    // O
    if (d > 0) {
        // discriminant is positive, output the two roots
        cout << "The roots are " << r1 << " and " << r2 << endl;
    } else if(d == 0) {
        // discriminant is zero, one root
        cout << "The root is " << r1 << endl;
    } else {
        // discriminant is negative, no roots
        cout << "The equation has no real roots :(" << endl;
    }
    


    

    
    
    
    return 0;
}
