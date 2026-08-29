//section 11
//Array and Function
#include <iostream>
using namespace std;
void print_array(  int arr[],size_t size);
void set_array(int arr[],size_t size,int value);

void print_array( int arr[],size_t size){
   for(size_t i{0};i<size;++i)
   cout<<arr[i]<<" ";
   cout<<endl;
}
//set each array element to value
void set_array(int arr[],size_t size,int value){
    for(size_t i{0};i<size;++i)
    arr[i]=value;
}
 
int main(){
   int  my_score[]{97,94,92,89,88};
     print_array( my_score ,5);
      set_array(my_score ,5,100);
    print_array(my_score, 5 );

}
