#include<iostream>
#include<string>

int main(){

    std::string names[3];
    //Asking the user for three number
    for(int i=0;i<3;i++){
        std::cout<<"Enter name"<<i+1<<":";
        std::getline(std::cin,names[i]);//store each name in the array

    }
//print the first name from the array
std::cout<<"\nThe first name is:"<<names[0]<<std::endl;

return 0;
    
}