#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
//by : Amr Eid

int main(){
    long long x,z,c,n,a,j,i,k,s,d,f,g,q,w,h,l,co=0,sum=0,odd=0,even=0;
    //cin>>x>>z;
    //print numper from x=55 to z=73
    srand(time(0));
    for(i=0;i<10;i++){
        x=55;
        z=73;
        cout<< x + rand() % ( z - x + 1) << endl;
    }
    return 0;
}
