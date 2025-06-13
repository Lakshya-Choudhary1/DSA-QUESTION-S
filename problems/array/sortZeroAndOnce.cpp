//problem --> sort an array only contain 0's and 1's only .
//example --> array={0,1,0,1,1,0,0} 


//method1 --> counting zeroes and onces then using filling method to fill the array
#include <iostream>
using namespace std;

void sort(int [],int);//takes 2 parameter 1--> array and 2--> length of array

int main(){

     int array[]={0,1,0,1,1,1,0,0,1,0,1,0};
     int length = sizeof(array)/sizeof(array[0]);
     
     cout << "ORIGINAL ARRAY : " ;
     for(auto a : array) cout << a << "\t" ;
     
     sort(array,length);

     cout << "\nSORTED ARRAY : " ;
     for(auto a : array) cout << a << "\t" ;

     return 0;
}

void sort(int arr[],int length){

     int once{0},zeroes{0};

     for(int i = 0 ; i< length ; i++){
          if(arr[i]==0)  zeroes++;
          if(arr[i]==1) once++;
     }

     fill(arr,arr+zeroes,0);//filling zeores
     fill(arr+zeroes,arr+zeroes+once,1);//filling onces
}