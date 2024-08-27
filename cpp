#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    int l=0, h = n-1;
    while(l<h){
        if (a[l] == 0)
           l++;
        else if(a[h] == 1)
           h--;
        else if (a[l] == 1 && a[h] == 0){
            swap (&a[l], &a[h]);
            l++; h--;
        }
    }
    for (int i = 0; i<n; i++)
        cout <<a[i]<<" ";
    return 0;
}
