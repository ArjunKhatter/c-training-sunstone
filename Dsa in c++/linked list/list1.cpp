#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll=0;
    string name="ramjane";
    Student * next=NULL;
};
int main()
{ int a = 1;
  int b = 1;
  Student one ,two,three,four;
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;


  one.next=&two;
   two.next=&three;
   three.next=&four;

   Student *head;
   head=&one;
   while(head!=NULL){
    if(head->roll==46){
        cout << "yes" << endl;
        a=0;
        cout << b ;

    }
    b++;
   
    // cout<<head->name<<" "<<head->roll<<endl;
    head=head->next;
   }
   if(a==1){
    cout << "no";
   }

//    head=&one;
//    cout<<head->name<<endl;
//    head=one.next;
//    cout<<head->name;
//    head=one.next->next;
//    head=head->next;
//    head=head->next;
//    cout<<head<<endl;


}