#include<iostream>
class PointsClass{
    int m_x,m_y,m_z;
public:
    void setPoint(int x,int y,int z ){
        m_x=x;
        m_y=y;
        m_z=z;
    }
    void print(){
        std::cout<<"<"<<m_x<<","<<m_y;
        std::cout<<","<<m_z<<">"<<std::endl;
    }
};
int main(){
    int x=1,y=2,z=3;
    PointsClass points;
    points.setPoint(x,y,z);
    points.print();
    return 0;
}
