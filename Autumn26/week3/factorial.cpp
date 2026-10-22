#include <iostream>
int main(){
    int n,x=1;
    std::cin>>n;
    for(int i=0;i<n;i++){
        x=x*(i+1);
    }
    std::cout<<n<<"!="<<x;
}