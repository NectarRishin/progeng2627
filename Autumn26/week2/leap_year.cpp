// still incomplete
#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            std::cout<<"a leap year";
            // if (also) multiple of 100

            // ...

        }
        else{ 
            std::cout<<"not a leap year";
            // if not multiple of 100
            // (but still multiple of 4)

            // ...

        }
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}