#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 1;
    int y = 2;
    swap(x, y);
    cout << x << " " << y << endl; //swappppppp



    cout<<min(x,y)<<endl; //will print the min one

    cout<<max(x,y)<<endl;//will print the max one

    cout<<__gcd(100,156)<<endl; // gshagu will take  only the common divisor


    string s="hello";
    s=s+s;            // try to avoid this cz aitai loop concatenate 
    cout<<s<<endl;



    int z=10;
    int &z2=z;  // &referrence use korle z ar value o change hbe
    z2=20;
    cout<<z<<endl;




    //VECTORRRRRRRRRRRR

    vector<int>v;

    cout<<"size--> "<<v.size()<<endl;
    v.push_back(10);
    cout<<"size--> "<<v.size()<<endl;
    v.push_back(20);
    v.push_back(30);  // py ar append ar mto
    v.push_back(40);
    cout<<"size--> "<<v.size()<<endl;

    cout<<v[0]<<" "<<v[2]<<endl;  //specific index val check

    v.pop_back();  //last element bad just like python pop
    cout<<"size--> "<<v.size()<<endl;

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;


    vector<int> w(5); //0 diye 5 len ar vec create
    for (int i=0; i<w.size(); i++){
        cout<<w[i]<<" ";

    }
    cout<<endl;

    //loop shortcut
    for(int x:v){
        cout<<x<<" ";  //shortcut loop iterrrate
    }
    cout<<endl;

    vector<int> k{2,3,4};//akbare 3 ta val append
    for (int y: k){
        cout<<y<<" ";
    }
    cout<<endl;



    //veector string
    vector<string>vst;
    vst.push_back("hello");
    vst.push_back("world");
    for (const string &str: vst){
        cout<<str<<" ";
    }
    cout<<endl;


    //iterator

    //find
    vector<int>vq{1,2,3,4,5,6};
    auto it=vq.begin() +3 ; //starting index nirdesh kore and +1 ar jonno next line print kroe
    cout<<*it<<endl;
    
    it=find(vq.begin(),vq.end(),2);
    int pos=it-vq.begin();  //aita korle find ar index chole ashbe
    cout<<pos<<endl;

    //erase
    vq.erase(find(vq.begin(), vq.end(),2)); // aita mane 2 vector theke remove
    for (int y: vq){
        cout<<y<<" ";
    }
    cout<<endl;

    //insert 
    vector<int> aq{1, 2, 3, 4, 5, 6};  // Define and initialize the vector

    vq.insert(aq.begin() + 2, 69);  // Correct the insert function call

    for (int y : aq) {
        cout << y << " ";
    }
    cout << endl;



    //reverse print

    reverse(aq.begin(),aq.end());
    for (int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    //sort
    vector<int> vqq{5, 2, 9, 1, 5, 6};  // Define and initialize the vector

    sort(vqq.begin(), vqq.end());  // Sort the vector
    cout <<"sssssssss"<<endl;
    for (int x : vqq) {
        cout << x << " ";  // Print the sorted elements
    }
    cout << endl;









   





    return 0;
}
