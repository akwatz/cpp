#include<iostream>
void ref(int &integer){
    integer++;
    int z=integer;
    z++;
}
int main(){
    int integer=5;
    std::cout<<integer<<std::endl;
    ref(integer);
    std::cout<<integer<<std::endl;
    return 0;
}
