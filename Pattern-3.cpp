/*
Print this Pattern
1234
1234
1234
1234
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
cout<<j;
}
cout<<endl;
}

}
