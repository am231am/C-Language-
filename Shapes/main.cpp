#include <iostream>

using namespace std;
class Shapes
{
protected:
    int dim1;
    int dim2;
public:
    Shapes()
    {
        dim1=dim2=1;
    }
    Shapes(int _dim)
    {
        dim1=dim2=_dim;
    }
    Shapes(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    void setdim1(int _dim1)
    {
        dim1=_dim1;
    }
    void setdim2(int _dim2)
    {
        dim2=_dim2;
    }
    int getdim1()
    {
        return dim1;
    }
    int getdim2()
    {
        return dim2;
    }
    void print()
    {
        cout<<"shape : ("<<dim1<<","<<dim2<<")";
    }
    virtual float calcarea()=0;
};
class Rectangle1:public Shapes
{
public:
    Rectangle1():Shapes()
    {
    }
    Rectangle1(int _dim):Shapes(_dim)
    {
    }
    Rectangle1(int _dim1,int _dim2):Shapes(_dim1,_dim2)
    {
    }
    float calcarea()
    {

        return dim1*dim2;
    }
};
class Triangle:public Shapes
{
public:
    Triangle():Shapes()
    {
    }
    Triangle(int _dim):Shapes(_dim)
    {
    }
    Triangle(int _dim1,int _dim2):Shapes(_dim1,_dim2)
    {
    }
    float calcarea()
    {

        return 0.5*dim1*dim2;
    }

};
class Circle:public Shapes
{
    public:
    Circle():Shapes()
    {
    }
    Circle(int _dim):Shapes(_dim)
    {
    }
    Circle(int _dim1,int _dim2):Shapes(_dim1,_dim2)
    {
    }
    void setdim1(int _dim)
    {
        dim1=_dim;
        dim2=_dim;
    }
    void setdim2(int _dim)
    {
        dim1=_dim;
        dim2=_dim;
    }
    float calcarea()
    {

        return 3.14*dim1*dim2;
    }

};
class Square:public Shapes
{
    public:
    Square():Shapes()
    {
    }
    Square(int _dim):Shapes(_dim)
    {
    }
    Square(int _dim1,int _dim2):Shapes(_dim1,_dim2)
    {
    }
    void setdim1(int _dim)
    {
        dim1=_dim;
        dim2=_dim;
    }
    void setdim2(int _dim)
    {
        dim1=_dim;
        dim2=_dim;
    }
    float calcarea()
    {

        return dim1*dim2;
    }
};
void printArea(Shapes& s)
{
    cout<<s.calcarea();
}
int main()
{
    Square s1(10,10);
    Circle c1(10);
    Rectangle1 rec(10,20);
    cout<<"area of square: ";
    printArea(s1);
    cout<<"\narea of circle: ";
    printArea(c1);
    cout<<"\narea of rectangle: ";
    printArea(rec);

    //call calcarea of every object
    cout<<"\n";
    Shapes* arr[3]={&s1,&c1,&rec};
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=arr[i]->calcarea();
    cout<<"sum of area : "<<sum;
    cout<<"\n";
    Triangle t1;
    t1.setdim1(10);
    t1.setdim2(5);
    cout<<"\n";
    cout<<"area of triangle: ";
    printArea(t1);
    cout<<"\n";


    return 0;
}
