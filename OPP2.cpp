#include<iostream>
using namaespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int ,int);
    void get_data(){
        cour<<a<<b
    }
    void complex add (complex c){
        complex temp ;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return(temp);
    }

};
void complex::set_data(int x,int y){
    x=a;
    y=b;
}

int main(){
    int t,w,g,h;
    cin>>t>>w>>g>>h;
    complex c1,c2,c3;
    c1.set_data( t,w );
    c2.set_data(g,h);
    c3 = c1.add(c2);

}