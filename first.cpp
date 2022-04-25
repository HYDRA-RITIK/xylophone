/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    int area(){
        return l*b;}
     int perimeter(){return 2*(l+b);}   
     rectangle(int a,int c){
         l=a;
         b=c;
     }


    int ratio();


}
;
int rectangle::ratio(){return (l/b);}       //declaring method outside class

class rhombus:public rectangle{

public:
void message(){cout<<"this is rhombus"<<endl;}


}
;


int main()
{
    /*rectangle r1(2,9);
    cout<<r1.perimeter()<<endl;
    



float num[]={2.5,34.43,32};
for(float &x:num){                      //if you want to modify value of x in array pass it by referemn
    cout<<x<<endl;


}




return 0;

}




#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class t>                                              //template class can be used if we want to write fu
                                                                                //function for differnt data types
t sum(t x,t y){return x+y;}




int main()
{

int num[]={1,2,3,4,56};
int *p;
p=num;
cout<<p[1]<<endl;
int *q=new int;
cout<<*q<<endl;
string name="pindari";
cout<<name[6]<<endl;

int x=sum(3,43);
float y=sum(3.23,4.223);
cout<<x<<"and"<<y<<endl;



return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void area(int &a,int &b){

    a=25;
    
}
int main()
{
int x=2;
int y=3;
cout<<x<<endl;
area(x,y);

cout<<x<<endl;



return 0;
}



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int x,int y){
    return x>y?x:y;

}



int main()
{





int(*p)(int x,int y);
p=max;
cout<<((*p)(2,344));




return 0;
}

//demo pointer to object in heap

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class car{
public:
int speed;
string model;
float mileage;
car(string creator){cout<<"the creator of this model is:"<<creator<<endl;}
string sound(string noise){cout<<"sound of this car is"<<endl;
return noise;}

car(car &c){                            //taking car as refernce 
speed=c.speed;
mileage=c.mileage;
model=c.model;


}      //makinng copy of car by taking car object car as parameter


//this pointer for rectangle class in constructor this->length=length// this->breadth=breadth





};



int main()
{

car bmw("yamaha");
cout<<bmw.sound("peep peep brum brum")<<endl;
car *p;         //pointer for object declaration
p= &bmw;     //initialisation
p->speed=25;                            //here cap is deferencing operator
p->model="jnu123";
cout<<bmw.model;


car *ptr;
ptr =new car("cobel brian");
ptr->mileage=32.54;
ptr->speed=100;

cout<<ptr->sound("hee- hee chip chip")<<endl;

                                    //in java object is only created in heap not in stack


return 0;
}

#include<iostream>
#include<bits/stdc++.h>                                                             
using namespace std;                                            //program to add two complex number
class nonreal{
public:
int real;
int img;
nonreal(int real=0,int img=0){
    this->real=real;
    this->img=img;
}

nonreal add(nonreal x){                                         //method on complex no. c1.add(c2)

nonreal com;
com.real=real+x.real;
com.img=img+x.img;

return com;

}



};



int main()
{
nonreal c1(2,3);
nonreal c2(7,9);
nonreal c3;

c3=c1.add(c2);
cout<<c3.real<<"+"<<"  i"<<c3.img<<endl;


return 0;
}








#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class parent{

public:
int l;
parent(){cout<<"i am parent"<<endl;}
parent(int a){cout<<"parent call"<<endl;}

};
class child:public parent{

public:
int b;
child(){cout<<"i am child"<<endl;}
child(int a){cout<<"child call"<<endl;}

};

class hasa{
public:



};


int main()
{
//constructor calls while inheriting class

parent p;
child c;

note:  when you call constructor of child class(eithe defualt or parametreised) both time

default constructor of parent class is called than default of child or parameterised of child
respectively


cout<<"hello"<<endl;


parent p1(3);
child c1(2);
return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//using standard template class

vector<int>v={1,2,3};
v.push_back(23);
v.pop_back();
//using for each loop
for(int x:v){cout<<x<<endl;}
//using iterator object from stl

//1st declaring iterator
vector<int> ::iterator itr;         //iterator is class itr is object


for(itr=v.begin();itr!=v.end();itr++){              //itr is pointer to element in vector
    cout<<*itr<<endl;
    
    }

map<int,string>m;
m.insert (pair<int,string>(1,"one"));

m.insert(pair<int,string>(2,"two"));

//output by i->first for int and i->second for string

//m.found(key) will return iterator



return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{


short x;

int y;
long z;
long long w;

cout<<sizeof(x)<<endl;
cout<<sizeof(y)<<endl;
cout<<sizeof(z)<<endl;
cout<<sizeof(w)<<endl;




return 0;
}






#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//here array is passed as reference so we can used void display(int *p) also or void display(int [arr])
//but it will be pointer to passed array


void display(int *p,int n){
    //int n=sizeof(p)/sizeof(int);
    for(int i=0;i<n;i++){cout<<p[i]<<endl;}



}





int main()


{

int arr[]={10,25,32,56,23};
display(arr,5);



return 0;
}



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int sort(int arr[],int n){

for(int i=0;i<n;i++){}



}

void prefix_array(int arr[],int n){

    int ps[n];
    ps[0]=arr[0];
    for(int i=1;i<n;i++){

        ps[i]=ps[i-1]+arr[i];

    }




}

int main()
{

int arr[]={1,43,23,65,3};
//linear and binary search
// int n=sizeof(arr)/sizeof(int);
//since array is passed as address so it will change if we do any things to it in func therefore no need of return
//returning array
//for(int x:arr){cout<<x<<endl;}

int a[]={1,2,3,4,5};

/*for(int i=0;i<3;i++){
    
for(int j=i+1;j<3;j++)
cout<<"("<<a[i]<<", "<<a[j]<<")"<<endl;

}

vector<int> v;

for(int i=0;i<5;i++){
    
    for(int j=4;j>i;j--){
        
        int sum=0;
        for(int m=i;m<=j;m++){
            cout<<a[m]<<",";
            sum=sum+a[m];
            
            }
            v.push_back(sum);



        cout<<endl;   //to separate subarray
        
        //print sum of subarray and find largest sum


    }
    




}

for(int t:v){cout<<t<<endl;}


//solving printing subarray problem by kadane algo. in linear time






return 0;
}



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kadanealgo(int arr[],int n){

//
int a[n];

int cs=0;
int ms=0;

for (size_t i = 0; i < n; i++)
{
    cs=cs+arr[i];
    if(cs<0){cs=0;}
    if(ms<cs){ms=cs;}



}
cout<<ms<<endl;





}


int main()
{

int l[]={1,-2,3,-8,3,9,-7};
kadanealgo(l,7);



return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void lowerbound(vector<int> v,int val,int l,int r){


int mid;
int n=v.size();
for(int i=0;i<n;i++){

l=i;
r=n-1;
mid=(r-l)/2 ;
if(val<mid){r=mid-1;


lower_bound(vector<int> v,int val,int l,int r);}
if(val>mid){l=mid+1;
lower_bound(vector<int> v,int val,int l,int r);

}





}





}





int main()
{
    vector<int> v(10,2);   //vector of size  10 having 2 as element  ->fill constructor

    cout<<v.capacity()<<endl;
    //lower bound








return 0;
}






#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void closestsum(vector<int> v,int val){
int n=v.size();
int sum;
int diff;
int ld=1000;

for(int i=0;i<n;i++){
    
    for(int j=i+1;j<n;j++){
        //<<"("<<v[i]<<", "<<v[j]<<")"<<endl;
        sum=v[i]+v[j];
        if(val>sum){diff=val-sum;}
        if(val<sum){diff=sum-val;}
        //if(val=sum){diff=val-sum;}
        if(ld>diff){ld=diff;}


    }   





}


cout<<"this is value of ld"<<endl;
cout<<ld<<endl;



}


int main()
{


vector<int> vec={1,-2,43,56,20,-8,-24};

closestsum(vec,25);

return 0;
}




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(vector<int> v)
{
int m=v[0];
for(int i=1;i<v.size();i++){ 
    
    
    if(m<v[i]) {m=v[i];}   
    
}



return m;
}

void bubblesort(vector<int> &v){
int n=v.size();
    int key=v[0];
    
        int j=0;
        while(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
            j++;
            
            }

        



    


}



int main()
{

//bubble sort ->take larger element to end by repetedely swapping adjacent element

vector<int> vec={5,4,3,2,1};

bubblesort(vec);

for(int x:vec){cout<<x<<",";}






return 0;
}





#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){

    for(int i=1;i<n;i++){       //loopfor sorted part
       
        int current=arr[i];
        int pre=i-1;
        while(current <arr[pre] && pre>=0){arr[pre+1]=arr[pre];pre--;}
        arr[pre+1]=current;




    }



}


int main()
{

int a[]={5,4,-11,9,3,2,1,6,-2};
int n=sizeof(a)/sizeof(int);
insertionsort(a,n);
for(auto x:a){cout<<x<<",";}



return 0;
}



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int current=arr[i];
        int min=arr[0];
        int indexofmin=i;
        for(int j=i;j<n;j++){
               if(arr[j]<arr[indexofmin]){indexofmin=j;} 

        }
        
        if(arr[indexofmin]<=current){swap(arr[i],arr[indexofmin]);}



    }




}



int main()
{


int a[]={5,4,-11,9,3,2,1,6,-2};
int n=sizeof(a)/sizeof(int);
selectionsort(a,n);
for(auto x:a){cout<<x<<",";}


return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={5,4,-11,9,3,2,1,6,-2};
int n=sizeof(a)/sizeof(int);
cout<<n<<endl;
sort(a,a+9);
for(auto x:a){cout<<x<<endl;}



return 0;
}




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countingsort(int arr[],int n){





}


int main()
{





return 0;
}




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool flag(int a,int b){

return a>b;

}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int current=arr[i];
        int min=arr[0];
        int indexofmin=i;
        for(int j=i;j<n;j++){
               if(arr[j]>arr[indexofmin]){indexofmin=j;} 

        }
        
        if(arr[indexofmin]<=current){swap(arr[i],arr[indexofmin]);}



    }




}


int main()
{


int a[]={5,4,-11,9,3,2,1,6,-2};
int n=sizeof(a)/sizeof(int);
selectionsort(a,n);
for(auto x:a){cout<<x<<",";}



return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<vector<int>>v={{1,2},{3,4},{5,4}};
for(auto x:v){cout<<x<<endl;}




return 0;
}



*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{





return 0;
}



