#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
  
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(i==1||i==5)
        cout<<"*";
        else if(j==6-i)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<"\n";
}
return 0;

}