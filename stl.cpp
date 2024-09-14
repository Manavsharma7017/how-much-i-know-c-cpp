#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
void stlarray(){
   array<int,4> a={1,2,3,4};
   int size=a.size();// for size or we can use a.max_size() which get the maximum number of element a array can hold
//accessing element in array
   for (size_t i = 0; i < size; i++)
   {
    cout<<a[i]<<endl;
   }
//accessing element in array diiferent way
   cout<<"element at 2 index "<<a.at(2)<<endl;

//accessing first element in array
cout<<"front element in array "<<a.front()<<endl;


//accessing last element in array
cout<<"last element in array "<<a.back()<<endl;

// check array is empty
cout<<"array is empty or not "<<a.empty()<<endl;
// fillin array with one value
  a.fill(4);
  for (size_t i = 0; i < size; i++)
   {
    cout<<a[i]<<endl;
   }
}
void stlvector(){
// dynamic array are vector 
vector<int> v;
// capacity of vector or how much element can vector store currently
cout<<" capacity of vector is "<<v.capacity()<<endl;
// enterying element in array
v.push_back(3);
cout<<" capacity of vector new is "<<v.capacity()<<endl;
//size of vector
cout<<"size of vector "<< v.size()<<endl;
v.push_back(4);
v.push_back(5);
v.push_back(6);
for(int i:v){
   cout<<i<<" ";
}
//removing element in vector
v.pop_back();
for(int i:v){
   cout<<i<<" ";
}
cout<<"size of vector befor  "<< v.size()<<endl;
v.clear();
cout<<"size of vector after "<< v.size()<<endl;
//other way to make vector
vector<int>a(5,1);// 5 is siz eof array and i is the value given to all element in vector
cout<<"element is vector a"<<endl;
for(int i:a){
   cout<<i<<" ";
}
cout<<endl;
//coping vector to anothe vector
vector<int> last (a);
cout<<"element is vector last"<<endl;
for(int i:last){
   cout<<i<<" ";
}
//fornt ,back element and empty common as array
}
void stldeque(){
   //capicity is fixed
//creating a deque
   deque<int> d;
//entering element
   d.push_back(3);
//or 
   d.push_front(4);
//accessing element in deque
   for(int i:d){
      cout<<i<<" ";
   }
   cout<<endl;
// removing element form back of dq
d.pop_back();
 for(int i:d){
      cout<<i<<" ";
   }
   cout<<endl;
d.push_back(5);
// removing element form fornt of dq
d.pop_front();
 for(int i:d){
      cout<<i<<" ";
   }
   cout<<endl;
   d.push_front(6);
////accessing element in deque
cout<<d.at(1);
//fornt ,back element and empty common as array
   cout<<endl;
  d.push_front(7);
// ereasing element in deque
d.erase(d.begin(),d.begin()+1);
 for(int i:d){
      cout<<i<<" ";
   }
   cout<<endl;
}

void stllist(){
//creating list
list<int> l;
//entering element in list
l.push_back(2);
l.push_front(1);
for(int i:l){
   cout<<i<<" ";
}
cout<<"\n";
// ereasing element in list
l.erase(l.begin());
//same as vector & deque
}

void stlstack(){
   //last in first out
   stack<string>s;
   s.push("manav");//entering element in stack
   s.push("manan");
   s.push("meenu");
   cout<<s.top()<<endl;// accessing element in stack
    

   s.pop();//removing last element
   cout<<s.top()<<endl;  
   cout<<s.size()<<endl;//size of stack
   cout<<s.empty()<<endl;//empty or not

}

void stlqueue(){
   //first in first out
  queue<string>q;
   q.push("manav");//entering element in queue
   q.push("manan");
   q.push("meenu");
  cout<<q.front()<<endl;//accessing element in queue

   q.pop();//removing first element
    cout<<q.front()<<endl;  
     cout<<q.size()<<endl;//size of queue
   cout<<q.empty()<<endl;//empty or not


}

void stlpirortyqueue(){
   priority_queue<int>p;//creating priority queue output will be max in element(max heap)
   p.push(2);
   p.push(5);
   p.push(4);
  for (size_t i = 0; i <3; i++)
  {
  cout<<p.top()<<endl;
  p.pop();
 }
 //mim heap
 priority_queue<int,vector<int>,greater<int>>min;
 min.push(2);
   min.push(5);
   min.push(4);
  for (size_t i = 0; i <3; i++)
  {
  cout<<min.top()<<endl;
  min.pop();
 }
}
void stlset(){
 //only unique element will store 
 //no modification take place
 set<int>s;
 s.insert(5);
 s.insert(6);
 s.insert(2);
 s.insert(7);
 s.insert(1);
 s.insert(9);
 s.insert(3);
 s.insert(2);
 // store element in sorted order
 for (auto i:s)
 {
     cout<<i<<endl;
 }
 s.erase(2);
 for (auto i:s)
 {
     cout<<i<<endl;
 }
 cout<<s.count(5)<<endl;//finding a element is present or not
 
}
void stlmap(){
  //1key --- 1 value
  //1value--- many key
  map<int,string>m;
  m[1]="manav";// 1 is key and manav is value 
  m[2]="manan";
   for(auto i:m){
      cout<<i.first<<i.second<<endl;//key and value will the output and it is a sorted map
   }
  m.insert({5,"bheem"}); //inserting key and value
  for(auto i:m){
      cout<<i.first<<i.second<<endl;//key and value will the output and it is a sorted map
   }
   cout<<m.count(5)<<endl;//finding 5 is present or not
   m.erase(5);//ereasing key and value in map
    for(auto i:m){
      cout<<i.first<<i.second<<endl;//key and value will the output and it is a sorted map
   }
}

int main(){
    //stlarray();
    //stlvector();
    //stldeque();
    //stllist();
    //stlstack();
    //stlqueue();
    //stlpirortyqueue();
    // stlset();
   stlmap();
}
// algorith