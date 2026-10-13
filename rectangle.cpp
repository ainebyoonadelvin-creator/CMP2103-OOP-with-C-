#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructor
    Rectangle(double w = 0, double l = 0) {
        width = w;
        length = l;
    }

    // Setters
    void setWidth(double w) {
        if (w > 0) width = w;
        else cout << "Width must be positive!" << endl;
    }

    void setLength(double l) {
        if (l > 0) length = l;
        else cout << "Length must be positive!" << endl;
    }

    // Getters
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Area
    double area() const {
        return width * length;
    }

    // Perimeter
    double perimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Example 1: Using constructor
    Rectangle rect1(5.0, 3.0);
    cout << "Rectangle 1:" << endl;
    cout << "Width: " << rect1.getWidth() << ", Length: " << rect1.getLength() << endl;
    cout << "Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter() << endl << endl;

    // Example 2: Using setters
    Rectangle rect2;
    rect2.setWidth(10.0);
    rect2.setLength(4.0);
    cout << "Rectangle 2:" << endl;
    cout << "Width: " << rect2.getWidth() << ", Length: " << rect2.getLength() << endl;
    cout << "Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << endl << endl;

    // Example 3: Invalid input
    Rectangle rect3;
    rect3.setWidth(-2.0); // Will trigger validation message
    rect3.setLength(6.0);
    cout << "Rectangle 3:" << endl;
    cout << "Width: " << rect3.getWidth() << ", Length: " << rect3.getLength() << endl;
    cout << "Area: " << rect3.area() << ", Perimeter: " << rect3.perimeter() << endl;

    return 0;
}
