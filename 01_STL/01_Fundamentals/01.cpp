#include<iostream>
#include<vector>
int main(){
std::cout<<"enter the number of elements: \n";    
int n;
std::cin>>n;
std::vector<int> v;

for(int i=0;i<n;i++)
{std::cout<<"enter the element: \n";
int x;
std::cin>>x;
v.push_back(x);
}
for(int x : v)
{
    std::cout<<x<<" ";
}
std::cout<<"\n";
std::cout<<"The size of the vector is: "<<v.size()<<"\n";
int sum=0;
for(int x:v)
{sum+=x;}
std::cout<<"The sum of the elements in the vector is: "<<sum<<"\n";
return 0;}