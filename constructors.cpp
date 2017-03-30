#include<iostream>
#include<string>
class Ball{
private:
    std::string m_color;
    double m_radius;

public:
    Ball(std::string color="Black",double radius=10.0){
            m_color=color;
            m_radius=radius;
    }
    Ball(double radius=10.0){
        m_color="Black";
        m_radius=radius;
    }
    Ball(){
        m_color="Black";
        m_radius=10.0;
    }
    void print(){
        std::cout<<m_color<<" "<<m_radius<<std::endl;
    }
};
int main()
{
        Ball def;
        def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

    return 0;
}

