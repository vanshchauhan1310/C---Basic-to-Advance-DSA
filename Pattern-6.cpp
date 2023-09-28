/*
Print this Pattern
a a a a a 
b b b b b 
c c c c c
d d d d d 
e e e e e 
*/

#include<iostream>
using namespace std;
int main(){

int row , col;

cout<<"Enter The Number of Row ";
cin>>row;
cout<<"Enter The Number of Col ";
cin>>col;

int i,j;

for(i=1;i<=row;i++){
char name = 'a'+ i-1;
for(j=1;j<=col;j++){
cout<<name<<"";
}
cout<<endl;
}

}
