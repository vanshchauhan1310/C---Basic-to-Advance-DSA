#include<iostream>
using namespace std;

int main(){

int year;

cout<<"Enter The Leap Year ";
cin>>year; 

if(year%400==0){
cout<<" Its A leap Year "<<endl;
}

else if(year % 4 == 0 && year % 100 != 0){
cout<<" Its a Leap Year "<<endl;
}

else{
cout<<" Its Not a Leap Year "<<endl;
}

}
