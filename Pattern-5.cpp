/*
Print this Pattern
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
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
cout<<j*j<<"";
}
cout<<endl;
}

}
