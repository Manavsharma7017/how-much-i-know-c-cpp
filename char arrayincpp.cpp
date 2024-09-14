#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

int main(){
    //input in array and output
 /*char name[20];
    cin>>name;
    cout<<name<<endl;;
    int count=0;
    for(auto i:name){
        if(i=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    cout<<"length of string is "<<count<<endl;
*/
// reversing a string
/*char name[20];
cin>>name;
int l=0;
int count=0;
    for(auto j:name){
        if(j=='\0'){
            break;
        }
        else{
            count++;
        }
    }
int r=count-1;
while(l<r){
    swap(name[l],name[r]);
    l++;
    r--;
}
cout<<name<<endl;
*/
// max number of char in string
 
   string name;
    getline(cin,name);

    int arr[26]={0};
    for (size_t i = 0; i <name.length() ; i++)
    {char ch=name[i];
     int number=0;
    if(ch>='a'&&ch<='z'){
      number=ch-'a';
       }
    else{
        number=ch-'A';
    }
    arr[number]++;
    } 
    int maxindex=0;
    int maxval=0;
    for (size_t i = 0; i < 26; i++)
    {
     if (arr[i]>maxval)
     {
        maxindex=i;
        maxval=arr[i];
     }
     
    }
    
    char final='a'+maxindex;
    cout<<final<<endl;
    return 0;
}