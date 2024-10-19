#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < n; i++){
        printf("%d ", arr[i]);
        if(i == n-1){
         printf("%d ", arr[0]);
            
        }
    }
    return 0;
}
