
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

char name[100];
vector<char> v;
char temp=cin.get();                //cin jo bhi enter kiya usseke through iterate karna hai ek
  
int i=0;                                    //time par ek character read karega jab taka while condition false na ho jaye
while(temp!='\n'){          
    cout<<temp;
    //v.push_back(temp);
    name[i]=temp;
    temp=cin.get();
    i++;

}
cout<<name<<endl;                                               //you can directly print char array by
                                                            //using its name



return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//using cin.getline(char arrayname,size,ending character)

char name[1000];
//string s="";
cout<<"enter:"<<endl;
cin.getline(name,1000,'.');


cout<<name<<endl;



return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{


//snnnewe
//nne
char direction[100];
cin.getline(direction,100,'\n');
vector<char>v;
int n=sizeof(direction)/sizeof(int);
int x=0;
int y=0;

for(int i=0;i<n-1;i++){

    if(direction[i]=='N')y++;
    else if(direction[i]=='S')y--;
    else if(direction[i]=='E')x++;
    else if(direction[i]=='W')x--;


}
cout<<"value of x:"<<x<<endl;
cout<<"value of y:"<<y<<endl;
if(x>=0){
for(int i=0;i<x;i++)v.push_back('E');

}

if(y>=0){
for(int i=0;i<y;i++)v.push_back('N');

}





for(auto t:v)cout<<t;

return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//test cases
int n;
cin>>n;
char sentence[1000];
int largese_len=0;
char large_str[1000];
cin.get();
while(n--){                                 //method of getting test cases

    cin.getline(sentence,1000);
    if(strlen(sentence)>largese_len)largese_len=strlen(sentence);strcpy(large_str,sentence);
    //cout<<sentence<<endl;

}

cout<<"largest string is: "<<large_str<<endl;


return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//spiral print
int n;
int m;
cin>>n;
cin>>m;
int arr[100][100];
for(int i=0;i<n;i++){
    for(int j=0;i<m;j++)cin>>arr[i][j];
    cout<<endl;

}    
cout<<"printing in spiral manner"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;i<m;j++)
    

}    




return 0;
}
*/
bool compare(int a,int b){
    return a>b;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<vector<int>>v={{2,3},{1,6},{3,8},{2,9}};

//sort(v.begin(),v.end(),compare(1,2));

//for(auto x:v)cout<<x;
vector<vector<int>>vsort;
vsort[0][0]=v[0][0];
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        int x=v[j][i];
        //vector<int> xval;
        //xval.push_back(x);
        


    }


}


return 0;
}


