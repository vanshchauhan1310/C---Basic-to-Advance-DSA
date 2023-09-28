/*
Print this Pattern
11111
22222
33333
44444
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
for(j=1;j<=col;j++){
cout<<i;
}
cout<<endl;
}

}
