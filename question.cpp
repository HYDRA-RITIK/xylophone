/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int frequency(vector<char> v,char key){
    int n=v.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==key)count++;

    }

return count;
}
int find(vector<char> v,char key){
    int n=v.size();
    //int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==key)return 1;

    }
    return 0;

}






string update(vector<char> vec){
    int n=vec.size();
    vector<char> v1;
    vector<char> v2;
    for(int i=0;i<n;i++){
        int z=find(v1,vec[i]);
        if(z==0){
            v1.push_back(vec[i]);
            
            }


    }
    string new_s="";
    for(char x:v1){
        int f=frequency(vec,x);
        new_s=new_s+x+to_string(f);


    }



return new_s;


}






int main()
{

vector<char>v ={'a','a','b','b','b','c','c','c','c'};
string pindari=update(v);
cout<<pindari<<endl;



return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void hello(string s){

    int n=s.size();
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(s[j+1]<s[j])swap(s[j+1],s[j]);

        }

    }

cout<<s<<endl;

}



int main()
{
cout<<"sortedstring:"<<endl;
hello("pindari");



return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
vector<vector<int>>v={
{1,2,3,90},{4,5,6,87},{7,8,9,14}

};




int m=4;
int n=3;

int j=m-1;
int i=0;
while(j>=0){

    while(i<=n-1){
        cout<<v[i][j];
        i++;
    }
j--;
    while(i>=0){
        cout<<v[i][j];
        i--;

}

j--;


}






return 0;
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    



}





int permutation(int n,int k){



}


int main()
{

int n;
vector<vector<int>>v;

for(int i=0;i<=n-1;i++){
    for(int j=0;i<=i;j++){
        v[i][j]=

    }


}



return 0;
}