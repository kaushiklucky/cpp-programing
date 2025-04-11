/*Take positive integer input and tell if it
is divisible by 5 and 3.*/
#include<iostream>
//using namespace std;
int main(){
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    if(n%5==0 && n%3==0){
        std::cout<<"The number is divisible by 3 and 5";
    }
    else{
        std::cout<<"The number is not divisible by 3 and 5";
    }
}

// /*anothar matherd*/
// if(n%15==0){
//     std::cout<<"the number is divisible by 3 and 5";
// }
// else{
//     std::cout<<"the number is not divisible by 3 and 5";
// }


