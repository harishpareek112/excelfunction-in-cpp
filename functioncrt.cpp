#include<iostream>
using namespace std;
class mathfunction
{
    public:
    void ABS(int a){
        if(a<0)
        cout<<a*-1<<endl;
        else
        cout<<a<<endl;
    }
    void Even(int a)
    {
        if(a%2!=0)
        cout<<a+1;
        else
        cout<<a<<endl;
    }
    void Factorial(int num){
        int factorial1=1;
        for(int i=1; i<=num; i++)
        {
            factorial1*=i;
        }
        cout<<factorial1<<endl;
    }
    void integers(float a)
    {
        int num=a;
        if(a<0)
        cout<<num-1<<endl;
        else
        cout<<num+1<<endl;
    }
    void Mod(int number,int divisor)
    {
        cout<<number%divisor<<endl;
    }
   void odd(int a){
    if(a%2!=0)
        cout<<a<<endl;
        else
        cout<<a+1<<endl;
   }
   void pi(){
    double pi=3.141592654;
    cout<<pi<<endl;
   }
};
int main()
{
    mathfunction d1;
    d1.ABS(-10);
    d1.integers(3.0);

    return 0;
}