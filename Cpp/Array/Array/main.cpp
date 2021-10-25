//
//  main.cpp
//  Array
//
//  Created by Rajesh Sahu on 24/10/21.
//

#include <iostream>
using namespace std;
void getArray(int  * const x,int size){
    for (int i=0;i<size;i++){
        cin>>x[i];
    }
}
void printArray(int const * y,int size){
    for(int i=0;i<size;i++){
        cout<<y[i];
        }

}

int main(int argc, const char * argv[]) {
    int a[10];
    getArray(a,10);
    printArray(a,10);
    
    return 0;
}
