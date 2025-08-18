#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll=0;
    string name="ramjane";
    Student * next=NULL;
};
int main()
{ 
  Student one ,two,three,four,zero,five,middle;
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;
  zero.name = "five singh";
  zero.roll = 100;
  five.name = "six ";
  five.roll=105;
  middle.name="middle";
  middle.roll=33;
  
  zero.next=&one;
  one.next=&two;
   two.next=&three;
   three.next=&four;
   four.next = &five;


   Student *head;
   head=&zero;
   while(head!=NULL){
    cout << head->name<< endl;
    // if(head->roll==46){
    //     cout << "yes" << endl;
    //     a=0;
    //     cout << b ;

    // }
    // b++;
   
    // cout<<head->name<<" "<<head->roll<<endl;
    head=head->next;
   }
//    if(a==1){
//     cout << "no";
//    }
   


//    head=&one;
//    cout<<head->name<<endl;
//    head=one.next;
//    cout<<head->name;
//    head=one.next->next;
//    head=head->next;
//    head=head->next;
//    cout<<head<<endl;


}