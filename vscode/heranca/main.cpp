#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PaintCost {
    public:
        PaintCost(double cost): _cost_per_m2(cost) {
            cout << "PaintCost constructed!" << endl;
        }

        double getCost(double area) {
            cout << "PaintCost::getCost(" << area << ")" << endl;
            return area * _cost_per_m2;
        }

    private:
        double _cost_per_m2;
};

class Shape {
public:
    Shape() : painter(70.0) {
        cout << "Shape() constructed!" << endl;
    }

    virtual double area() = 0;

    double cost() {
        cout << "Shape::cost() called!" << endl;
        return painter.getCost(area()); 
    }

    private:
        PaintCost painter;
};

class Rectangle: public Shape {

    public:
        Rectangle(double width, double length) {
            cout << "Rectangle() constructed!" << endl;
            _width = width;
            _length = length;
        }

        double area() {
            cout << "Rectangle::area() called !" << endl;
            return _width * _length;
        }

    private:
        double _width;
        double _length;

};

class Circle: public Shape {

    public:
        Circle(double radius) : _radius(radius) {
            cout << "Circle constructed!" << endl;
        }

        double area() {
            cout << "Circle::area() called!" << endl;
            return  ( _radius * _radius * 3.14159 );
        }

    private:
        double _radius;

};

class EquilateralTriangle: public Shape {

    public:
        EquilateralTriangle(double width) : _width(width) {
            cout << "EquilateralTriangle constructed!" << endl;
        }

        double area() {
            cout << "EquilateralTriangle::area() called!" << endl;
            return  ( _width * 0.433013 );
        }

    private:
        double _width;
};



int main(){

    cout << "Hello!" << endl;

    vector<Shape *> canvas;
    
    canvas.push_back(new Rectangle(10.0, 5.0));
    canvas.push_back(new Circle(5.0));
    canvas.push_back(new EquilateralTriangle(2.75));
    
    double total_area;
    double total_cost;

    for(auto obj: canvas){
        total_area += obj->area();
        total_cost += obj->cost();
    }

    cout << "Total area = " << total_area << endl;
    cout << "Total cost = " << total_cost << endl;

}
