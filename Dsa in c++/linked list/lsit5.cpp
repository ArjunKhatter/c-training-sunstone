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
  Student one ,two,three,four,zero,*temp,five;
  zero.name="zero";
  zero.roll=11;
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;
  five.name="five";
  five.roll=100;

  one.next=&two;
   two.next=&three;
   three.next=&four;

   Student *head;
   head=&one;
   temp=head;
   head=&zero;
   zero.next=temp;
   
   while(head!=NULL){
        cout<<head->name<<" "<<head->roll<<endl;
    head=head->next;
   }
   
   head=&five;
   cout<<head->name<<" "<<head->roll<<endl;

}