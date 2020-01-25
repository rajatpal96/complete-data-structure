#include<bits/stdc++.h>
using namespace std;

int arr[7] = {1,2,3,4,5,6,7} , first ,last,middle;

int binarySearch(int x){
first = 0 , last = 6;
middle = (first + last)/2;

while(first<=last) {
middle = (first + last)/2;
if(arr[middle] == x){
cout<<"Elements found at index :";
 return middle;
}

else if(arr[middle]>x){
last = middle-1 ;
}
else{

 first = middle+1;

}
}
 return -1;
}

int main(){

cout<<binarySearch(3);
return 0;
}


