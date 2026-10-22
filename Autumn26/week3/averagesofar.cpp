#include <iostream>
int main(){
    double n,i=0,average=0;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    while(n!=0){
        i=i+1;
        average=((average*(i-1)+n)/i);
        std::cout<<"average so far="<<average<<std::endl;
        std::cin>>n;
    }
}