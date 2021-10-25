//
//  main.cpp
//  ArrayOperation
//
//  Created by Rajesh Sahu on 24/10/21.
//

#include <iostream>
using namespace std;

void recoverArray(int const * Array,int size){
    int * newArray= new int[size];
    int a=0,b=1;
    if ( size%2==0){
        int n;
        n=(size/2)-1;
        for (int i=0;i<size;i++){
            if(i%2==0){
                newArray[n-a]=Array[i];
                a++;
            }
            else{
                newArray[n+b]=Array[i];
                b++;
            }
        }
    }
    else{
        int n;
        n=((size+1)/2)-1;
        for (int i=0;i<size;i++){
            if(i%2==0){
                newArray[n+a]=Array[i];
                a++;
            }
            else{
                newArray[n-b]=Array[i];
                b++;
            }
        }
    }
    cout<<endl;
    
    for (int i=0;i<size;i++)
        cout<<newArray[i]<<" ";
    delete []newArray;
}

int main(int argc, const char * argv[]) {
    int input[]={4,3,5,2,6,1,7};
    int size;
    size=sizeof(input)/sizeof(int);
    for (int i=0;i<size;i++)
        cout<<input[i]<<" ";
    recoverArray(input,size);
    
    return 0;
}
