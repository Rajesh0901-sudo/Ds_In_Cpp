//
//  main.cpp
//  ArrayDuplicateRemove
//
//  Created by Rajesh Sahu on 25/10/21.
//

#include <iostream>
#include "diff.h"
using namespace std;

int removeDuplicate(int const * array,int size){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]==array[j]){
                return array[i];
            }
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int len,Duplicate;
    cout<<"Enter the length of Array-";
    cin>>len;
    int *p=new int[len];
    cout<<"Enter the Array elements-";
    for (int i=0;i<len;i++){
        cin>>p[i];
    }
    Duplicate=removeDuplicate(p,len);
    cout<<"Duplicates is-"<<Duplicate<<endl;
    diff();
    delete []p;
    return 0;
}
