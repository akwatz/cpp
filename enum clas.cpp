#include<iostream>
enum Animal{
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};
std::string getAnimalName(Animal animal){
    switch(animal){
    case PIG:
        return "pig";
        break;
    case CHICKEN:
        return "chicken";
        break;
    case GOAT:
        return "goat";
        break;
    case CAT:
        return "cat";
        break;
    case DOG:
        return "dog";
        break;
    case OSTRICH:
        return "ostrich";
        break;
    }
}
void printNumberOfLegs(Animal animal){
    std::cout<<"A "<<getAnimalName(animal);
    std::cout<<" has";
    switch(animal){
    case CHICKEN:
    case OSTRICH:
        std::cout<<" 2";
        break;
    case DOG:
    case GOAT:
    case CAT:
    case PIG:
        std::cout<<" 4";
        break;
    }
    std::cout<<" legs.\n";
}
int main(){
    printNumberOfLegs(CHICKEN);
    printNumberOfLegs(DOG);
    return 0;
}
