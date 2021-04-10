#include<iostream>
using namespace std;
class acc
{
private:
    int balance; // instance variable
    static float roi; //static variable or class variable.
    
public:
    void set_balace( int c){
        c=balance;
    }
    staic void set_roi(float r){
        r=roi;
    } //static member function
};
float acc :: roi = 3.5f; //although we declare or  not declare  the object this variable is declared once throught the program for all.

int main(){
    acc.a1;
    a1.set_balance(3);
    a1.set_roi(4.0f);
}
