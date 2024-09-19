#include<iostream>
using namespace std;
template<class T>

void selectionSort(T arr[],T size){
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void print(T arr[],T size){
    cout<<"sorted arr is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void takingInput(T arr[],T size)
{
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
int main(){
    int arr1[6];
    int size1=6;
    takingInput(arr1,size1);
    selectionSort(arr1,size1);
    print(arr1,size1);


}
