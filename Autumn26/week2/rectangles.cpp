#include <iostream>

int main(){
    double length, width, perimeter, area;
    std::cout<<"length?"<<std::endl;
    std::cin>>length;
    std::cout<<"width?"<<std::endl;
    std::cin>>width;
    perimeter=length*2+width*2;
    area=length*width;
    std::cout<<"perimeter="<<perimeter<<std::endl;
    std::cout<<"area="<<area<<std::endl;
}