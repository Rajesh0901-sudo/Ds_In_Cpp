//
//  main.cpp
//  maximumPossibleSumInTwoSortedArray
//
//  Created by Rajesh Sahu on 25/10/21.
//

#include <iostream>
using namespace std;
int maximumSum(int const* a,int n,int const * b,int m){
    int maxSum=0,i=0,j=0,s1=0,s2=0,k=0;
    while(k<n+m){
        if(a[i]<b[j]){
            s1+=a[i];
            i++;
        }
        else if(a[i]>b[j]){
            s2+=b[j];
            j++;
        }
        else{
            if(s1>s2){
                maxSum+=s1+a[i];
            }
            else{
                maxSum+=s2+b[j];
            }
            s1=0;
            s2=0;
            i++;
            j++;
        }
        
        if(i<n&&j>=m){
            maxSum+=a[i];
            i++;
        }
        else if (i>=n&&j<m){
            maxSum+=b[j];
            j++;
        }
        else if(i>=n&&j>=m) break;
        k++;
    }
    
    return maxSum;
    
}

int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n;
    int * p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    cin>>m;
    int * q=new int[m];
    for(int i=0;i<m;i++)
        cin>>q[i];
    
    
   cout<<maximumSum(p,n,q,m);
    

    delete []p;
    delete []q;
    return 0;
}
