#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Box {
    public:
        Box(double lenght, double breadth, double height){
            _lenght = lenght;
            _breadth = breadth;
            _height = height;
        }
        Box(){
            _lenght = 1.0;
            _breadth = 1.0;
            _height = 1.0;
        }

        Box operator+(const Box& b1){
            Box result;
            result._lenght = this->_lenght + b1._lenght;
            result._breadth = this->_breadth + b1._breadth;
            result._height = this->_height + b1._height;
            return result;
        }

        void lenght(double value) { _lenght = value; } 
        void breadth(double value) { _breadth = value; } 
        void height(double value) { _height = value; } 

        double lenght() { return _lenght; } 
        double breadth() { return _breadth; } 
        double height() { return _height; } 

        double volume() const {
            return _lenght * _breadth * _height;
        }

        friend ostream& operator<<(ostream &output, const Box& b){
            output << "Box(";
            output << b._lenght << "," << b._breadth << "," << b._height; 
            output << ") = " << b.volume();
            return output;
        }

    private:
        double _lenght;
        double _breadth;
        double _height;
};

int main(){

    cout << "Overload Example" << endl;

    vector<Box> _vector;

    Box a(5.67, 4, 6.98);
    Box b(4.5, 2.75, 1.35);
    Box c;

    _vector.push_back(a);
    _vector.push_back(b);
    _vector.push_back(c);
    
    for(auto box: _vector) {
        cout << box << endl;
    }

    sort(_vector.begin(), _vector.end());

    c = a + b;

    cout << c << endl;

    return 0;
}