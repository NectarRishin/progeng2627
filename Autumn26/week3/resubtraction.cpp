#include <iostream>
int main(){
    double a,b,r,q=0;
    std::cout<<"a?b?"<<std::endl;
    std::cin>>a>>b;
    while(a>b){
        a=a-b;
        q=q+1;
    }
    r=a;
    std::cout<<"quotient="<<q<<" remainder="<<r;
}