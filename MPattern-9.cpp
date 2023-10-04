/*
1
21
321
4321
54321
*/

#include<iostream>
using namespace std;
int main(){

int row , col;

cout<<"Enter The Number of Row ";
cin>>row;

int i,j;

for(i=1;i<=row;i++){
for(j=i;j>=1;j--){
cout<<j;
}
cout<<endl;
}

}
