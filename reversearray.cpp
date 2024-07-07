#include<iostream>
#include<vector>
using namespace std;
void reverseArray(int arr[],int size){
    for(int i = 0;i < size / 2;i++)
    {
      int temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;
    }
}
int findSum(int arr[],int size){
  int sum = 0;
   for(int i = 0;i<size;i++)
   {
    sum += arr[i];
   }
   return sum;
}
void printArray(int arr[],int size){
     for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int size = 10;
    int arr[size] = {3,5,6,8,2,3,56,78,32,45};
    cout<<"original array"<<endl;
    printArray(arr,size);
    cout<<endl;
    reverseArray(arr,size);
    cout<<"reversed array"<<endl;
    printArray(arr,size);
    cout<<endl;
    int sum = findSum(arr,size);
    cout<<"sum of array:"<<sum<<endl;
    return 0;
}
