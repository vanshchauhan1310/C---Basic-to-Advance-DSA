/* In this we are solving hard pattern lvl question*/

#include<iostream>
using namespace std;
int main(){

int n;
int row,col;

cout<<"Enter The Number Of Row ";
cin>>n;

for(row=1;row<=n;row++){

for(col=1;col<=n-row;col++){
cout<<" ";
}

for(col=1;col<=row;col++){
cout<<col;
}

for(col=row-1;col>=1;col--){
cout<<col;
}
cout<<endl;
}

}

