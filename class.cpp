// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

    // Write C++ code here
    class student{
        public:
        
        void stu_roll(int rll){
            this->roll no.=rll;
            cout<< "roll number"<<roll<<"   ";
        }
        void stu_maths(int mat){
            this->math=mat;
        }
        void stu_chemistry(int chem){
            this->chemist=chem;
        }
        void stu_physics(int phy){
            this->physic=phy;
        }
        void stu_percent(){
            
            float percentage;
            
            percentage=(this->math+this->chemist+this->physic)/3;
            cout<<percentage; 
        }
        void stu_data(){
            cout<<<<" "<<this->roll<<" "<<this-<math<<" "<<this-<chemist<<" "<<this-<physic<< this-<percent<<end1;
}
private:
    int stu_roll;
    int stu_math,stu_physic,chemist;
    };
int main(){
    student adarsh;
    
    adarsh.stu_roll(1);
    adarsh.stu_maths(56);
    adarsh.stu_physics(67);
    adarsh.stu_chemistry(89);
    adarsh.stu_percent();
    student pranay;
    
    pranay.stu_roll(2);
    pranay.stu_maths(99);
    pranay.stu_physics(49);
    pranay.stu_chemistry(65);
    pranay.stu_percent();
    student abhishek;
    
    abhishek.stu_roll(3);
    abhishek.stu_maths(34);
    abhishek.stu_physics(45);
    abhishek.stu_chemistry(35);
    abhishek.stu_percent();
    student kuldeep;
    
    kuldeep.stu_roll(4);
    kuldeep.stu_maths(45);
    kuldeep.stu_physics(56);
    kuldeep.stu_chemistry(76);
    kuldeep.stu_percent();
    student vikas;
    
    vikas.stu_roll(5);
    vikas.stu_maths(34);
    vikas.stu_physics(39);
    vikas.stu_chemistry(45);
    vikas.stu_perecnt();
    return 0;
}
