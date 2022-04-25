
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//for no. to be even its last bit should be 0
int n;
cin>>n;
vector<int>v;
while(n--){
    int temp;
    cin>>temp;
    v.push_back(temp);

}
for(auto x:v){
    if (x&1)cout<<"odd"<<endl;
    else {cout<<"even"<<endl;}



}



return 0;
}*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getithbit(int n,int i){
    //right shift by i and and with 1
    int temp=n>>i;
    int num=(temp&1);
    if(num%2==0){
        return 0;}
    else {
        return 1;}


}




int main()
{

int n=5;
vector<int>v;
while(n--){
    int temp;
    cin>>temp;
    v.push_back(temp);

}
for(auto x:v){
    cout<<getithbit(n,x);

}


return 0;
}