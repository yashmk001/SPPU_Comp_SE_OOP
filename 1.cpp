// Implement a class Complex which represents the Complex Number data type. Implement the
// following
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Numbers.




#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex();
    complex operator+(complex obj);
    complex operator*(complex obj);
    friend istream &operator>>(istream&, complex&);
    friend ostream &operator<<(ostream&, const complex&);
};
complex::complex(){
    real = 0;
    img = 0;
}
complex complex::operator+(complex obj){
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
}
complex complex::operator*(complex obj){
    complex temp;
    temp.real = ((real*obj.real)-(img*obj.img));
    temp.img = ((img*obj.img)+(img*obj.real));
    return temp;
}
istream& operator>>(istream& in, complex& c3){
    in >> c3.real >> c3.img;
    return in;
}

ostream& operator<<(ostream& out, const complex& c4){
    out << c4.real << " + " << c4.img << "i" << endl;
    return out;
}

int main(){
    complex c1,c2,c3,c4;
    cout<<"Default constructor values: "<<c1;
    cout<<"Enter values for 1st complex number (a+bi):";
    cin>>c1;
    cout<<"Enter values for 2nd complex number (a+bi):";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"\nSum of given complex nos: "<<c3<<endl;
    cout<<"\nProduct of given complex nos: "<<c4<<endl;
    return 0;
}