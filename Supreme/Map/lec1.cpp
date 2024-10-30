#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int>mapping;

    //insertion
    // m-1
    pair<string,int>p=make_pair("vikash",22);
    // m-2
    pair<string,int>q("rohan",23);
    // m-3
    pair<string,int>r;
    r.first="preet";
    r.second=24;
    //insertion
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    //insertion
    mapping["kumar"]=25;
 
    cout<<"size of map: "<<mapping.size()<<endl;

    //access
    cout<<mapping.at("vikash")<<endl; 
    cout<<mapping["vikash"]<<endl; 

    //searching
    // m-1
    cout<<mapping.count("vikash")<<endl;
    //m-2
    if(mapping.find("vikash") !=mapping.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

     
    return 0;
}