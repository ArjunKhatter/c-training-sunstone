#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    string name ;
    int rollNo;
    int age;
    

    public:
    void setdata(string name , int age , int rollNo ){
    this->name =name;
    this->age=age;
    this->rollNo = rollNo;
    
    }   
    void getdata(){

       cout << this->name<<" "<<this->age<<" "<<this->rollNo;
    }
    void sizeage(){
        cout << sizeof(this->rollNo)<<endl;
    }
};
int main(){
    student arjun;
    arjun.setdata("arjun" , 20 , 41);
    arjun.getdata();
    cout <<endl<<sizeof(arjun)<<endl;
    



    
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              