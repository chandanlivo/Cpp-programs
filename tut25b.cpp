//passing objects as functions

#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setdataBysum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNum(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNum();

    c2.setData(3, 4);
    c2.printNum();

    c3.setdataBysum(c1, c2);
    c3.printNum();
    return 0;
}