//
//  main.cpp
//  mergetwosortedarrays
//
//  Created by Rajesh Sahu on 25/10/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n>>m;
    int * a=new int[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int * b=new int[m];
    for (int i=0;i<m;i++)
        cin>>b[i];
    int * c=new int[n+m];
    int i=0,j=0,k=0;
    for (int x=0;x<n+m;x++){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
            if(i>=n)break;
            
        }
        else{
            c[k]=b[j];
            j++;
            k++;
            if(j>=m)break;
            
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
    for (int i=0;i<n+m;i++)
        cout<<c[i]<<" ";
    
    
    delete []a;
    delete []b;
    delete []c;
        
    return 0;
}
