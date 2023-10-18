#include<iostream>
using namespace std;

int main (){

int num,rem;
int ans = 0;

cout<<" Enter The Number ";
cin>>num;

int x = num;

while(num != 0){

rem = num % 10;
ans = ans * 10 + rem;
num /= 10;

}

if(ans==x){
cout<<"It is a Parrallendrome "<<endl;
}

}
