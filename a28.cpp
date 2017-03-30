//program for creating a grade card class
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
static int roll=1;
class GradeCard{
    char m_deptName[10],m_studName;
    int m_roll,m_sem,m_cgpa;
    struct listOfSub{
        int prog;
        int maths;
        int english;
    };
    listOfSub m_subList;
public:
    GradeCard(){
        int temp=65+rand()%25;
        m_studName=static_cast<char>(temp);
        m_roll=roll;
        roll++;
        m_sem=3;
        strcpy(m_deptName,"InfoTech");
        m_subList.prog=rand()%10;
        m_subList.maths=rand()%10;
        m_subList.english=rand()%10;
        m_cgpa=(m_subList.prog+m_subList.maths+m_subList.english)/30;
    }
    int getRoll(){
            return m_roll;
    }
    void printStudName(){
        cout<<m_studName<<endl;
    }
    friend int maxCgpa(GradeCard g[]);
};

int maxCgpa(GradeCard g[]){
    int maxIndex=0;
    for(int i=1;i<60;i++){
        if(g[i].m_cgpa>g[maxIndex].m_cgpa)
            maxIndex=i;
    }
    return maxIndex;
}
int main(){
    GradeCard g[60];
    int maxIndex=maxCgpa(g);
    cout<<"Roll no of the topper is "<<g[maxIndex].getRoll();
    cout<<" and the Name of the topper is ";
    g[maxIndex].printStudName();
    return 0;
}
