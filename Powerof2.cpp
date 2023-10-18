#include<iostream>
using namespace std;

int main(){
int num;

cout<<"Enter the Number ";
cin>>num;

while(num != 1){

if(num % 2 == 1 ){
cout<<"Number is not the Power of 2 "<<endl;

}

else{

num /= 2;

}
}

cout<<"Number is of the power 2 "<<endl;

}
