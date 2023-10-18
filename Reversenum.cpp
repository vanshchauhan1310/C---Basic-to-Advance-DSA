#include<iostream>
using namespace std;

int main (){

int num,rem;
int ans = 0;

cout<<" Enter The Number ";
cin>>num;

while(num != 0){

rem = num % 10;
ans = ans * 10 + rem;
num /= 10;

}

cout<<"Reversed number = "<<ans<<endl;

}
