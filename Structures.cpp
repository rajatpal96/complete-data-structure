#include<bits/stdc++.h>
using namespace std;

struct Person {
int id;

char name[20];

char address[20];

char phone[12];

}person;

void displayRecord(Person persn){
cout <<"Person id is :" <<persn.id <<"\n";
cout <<"Person name is : "<<persn.name<<"\n";
cout <<"Person address is :"<<persn.address<<"\n";
cout <<"Person phone is :"<<persn.phone<<"\n";
}

int main(){
person.id = 10;
strcpy(person.name,"xkdjfjfs");
strcpy(person.address,"India");
strcpy(person.phone,"907777888888");
displayRecord(person);
return 0;
}
