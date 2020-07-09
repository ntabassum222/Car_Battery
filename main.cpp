//
//  main.cpp
//  Car_battery
//
//  Created by Nafisa Tabassum on 7/9/20.
//  Copyright © 2020 Nafisa Tabassum. All rights reserved.
//
#include <iostream>
#define k 10
using namespace std;

double dist(int n){
  if(n==1 || n==2){
    return k;
  }
  else
    return 1.0/(1.0/dist(n-1)+2.0/k); //return x+2k
    //return k/((2*dist(n+1)-3));
    //return x=x+2*k;
}

int main() {
  int n;
  double x;
  cout<<"Enter the amount of batteries"<<endl;
  cin>>n;
  //cout<<dist(20);
  for(int i=n;i>0;i--){
    x=x+dist(n);
    n--;
  }
  cout<<"Distance travelled "<<x<<endl;

}
