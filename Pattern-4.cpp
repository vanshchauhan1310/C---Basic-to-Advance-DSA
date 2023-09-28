/*
Print this Pattern
54321
54321
54321
54321

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
for(j=col;j>=1;j--){
cout<<j;
}
cout<<endl;
}

}
