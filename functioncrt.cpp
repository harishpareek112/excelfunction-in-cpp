#include<iostream>
#include<cmath>
using namespace std;
//first we create a class In which we define some function 
class mathfunction
{
    public:
    //First we created absolute value function.Which return absolute value of any number 
    void ABS(int a){
        if(a<0)
        cout<<a*-1<<endl;
        else
        cout<<a<<endl;
    }
    //Next we created Even number function.Which return Even number 
    void Even(int a)
    {
        if(a%2!=0)
        cout<<a+1;
        else
        cout<<a<<endl;
    }
    //Next we created factorial function.Which return factorial of any number 
    void Factorial(int num){
        int factorial1=1;
        for(int i=1; i<=num; i++)
        {
            factorial1*=i;
        }
        cout<<factorial1<<endl;
    }
    //Next we created integers function.Which return integer value of any floating number 
    void integers(float a)
    {
        int num=a;
        if(a<0)
        cout<<num-1<<endl;
        else
        cout<<num+1<<endl;
    }
    //Next we created MOD function.Which return remainder of that digit which divid with divisor 
    void Mod(int number,int divisor)
    {
        cout<<number%divisor<<endl;
    }
    //Next we craeted ODD function.Which return ODD value 
   void odd(int a){
    if(a%2!=0)
        cout<<a<<endl;
        else
        cout<<a+1<<endl;
   }
   //Next we created pi 
   void pi(){
    double pi=3.141592654;
    cout<<pi<<endl;
   }
   //Next we created log function.which return log(number,base) value 
   void logfun(double number,double base)
   {
    double result = log( (double) number)/log((double) base);
    cout << result << endl;

   }
};