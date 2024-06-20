#include<iostream>
using namespace std;

bool searchTargetInAraay(int arr[],int target,int index,int size){
    //base condition
    if(index == size){
        return false;
    }

    if(arr[index] == target ){
        return true;
    }

   bool ans =  searchTargetInAraay( arr, target,index+1,size);
   return ans;
}

int main(){
    int target = 90;
    int index =0;
    int size = 6;
    int arr[] = {10,20,30,40,50,60};
    bool value= searchTargetInAraay(arr,target,index,size);
    cout<<value<<endl;
}
