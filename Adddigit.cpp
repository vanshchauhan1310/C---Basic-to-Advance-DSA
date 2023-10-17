#include<iostream>

using namespace std;

int main(){
int num;
int ans = 0;

cout<<"Enter The Number ";
cin>>num;

while(num!=0){
int rem = num % 10;
num /= 10;
ans = ans + rem;
}

cout<<"Your sum is "<<ans<<endl;

}
