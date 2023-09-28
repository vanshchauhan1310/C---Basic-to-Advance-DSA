/*
Print this Pattern
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
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
int count = 1;
for(i=1;i<=row;i++){
for(j=1;j<=col;j++){
cout<<count<<" ";
count++;
}
cout<<endl;
}

}
