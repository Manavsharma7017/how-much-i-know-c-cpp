#include<iostream>
using namespace std;

class hero{
    private:
     int health;
     char name[100];
    public:
    int gethealth(){
        return health;
    } 
    char* getname(){
        return name;
    }
    void sethealth(int h){
        health =h;
    }
    void setname(char arr[],int size){
        for (size_t i = 0; i < size; i++)
        {
            name[i]=arr[i];
        }
        
    }

};
int main(){
    hero h1;
    int size;
    cin>>size;
    char*arr=new char[size];
    cin>>arr;
    h1.sethealth(10);
    h1.setname(arr,size);
    char*name=h1.getname();
    cout<<"name of object h1 is"<<endl;
    for (size_t i = 0; i < size; i++)
    {
       cout<<*(name+i);
    }
    cout<<endl;
    cout<<"health is "<<h1.gethealth()<<endl;
    return 0;
}