#include <iostream>

using namespace std;
class Complex
{
  int real;
  int Img;
  public:
      Complex()
       {
           real=0;
           Img=0;
           cout<<"defualt constractor\n";
       }
       Complex(int _real,int _img)
       {
           real=_real;
           Img=_img;
           cout<<"defualt constractor\n";
       }
    Complex(Complex const& c)
       {
           real=c.real;
           Img=c.Img;
           cout<<"copy constractor\n";
       }
      void setReal(int _real)
       {
           real=_real;
       }
      void setImg(int _Img)
       {
            Img=_Img;
       }
       int getreal()
       {
            return real;
       }
     void setcomplex(int _real,int _img)
       {
          real=_real;
          Img=_img;
       }
      int getImg()
       {
            return Img;
       }
      void printcomplex()
       {
           if(Img>0)
              cout<<real<<"+"<<Img<<"J"<<endl;
           else if(Img<0)
              cout<<real<<Img<<"J"<<endl;
           else
              cout<<real<<endl;
       }
      Complex add(Complex c)
       {
           Complex result;
           result.real=real+c.real;
           result.Img=Img+c.Img;
           return result;
       }
    Complex operator+(Complex c)
       {
           Complex result;
           result.setReal(c.getreal()+real);
           result.setImg(c.getImg()+Img);
           return result;
       }
    Complex operator+(int d)
       {
           Complex result;
           result.setReal(d+real);
           result.setImg(Img);
           return result;
       }
    int operator==(Complex c)
       {
         if(real==c.real && Img==c.Img)
            return 1;
         else
            return 0;
       }
    int operator !=(Complex c)
    {
        return !(real==c.real && Img==c.Img);
    }
   Complex operator+=(Complex c)
    {
        real=real+c.real;
        Img=Img+c.Img;
        return *this;
    }
   Complex operator++()
    {
        real++;
        return *this;
    }
  Complex operator++(int)
    {
        Complex res;
        res.real=real;
        res.Img=Img;
        real++;
        return res;
    }
  explicit operator int()
    {
        return real;
    }
    ~Complex()
    {
        cout<<"destroy complex\n";
    }
};
Complex Add(Complex c1 ,Complex c2)
{
   Complex result;
   result.setReal(c1.getreal()+c2.getreal());
   result.setImg(c1.getImg()+c2.getImg());
   return result;
}
int main()
{
    int size ;
    cin>>size;
    Complex* ptr;
    ptr=new Complex[size];
    ptr[0].printcomplex();
    return 0;
}
