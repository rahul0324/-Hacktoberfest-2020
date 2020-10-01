#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int oddEven(int a){
    return a&1 ==1;
}
int main(){
    int a;
    cin>>a;
    if(oddEven(a))
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    return 0;
}


