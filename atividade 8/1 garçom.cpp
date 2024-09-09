#include <iostream>  
using namespace std;  

int main() {  
    int N;  
    cin >> N;   

    int total = 0;   
    int L, C;   

    int i = 0; 
    while (i < N) {  
        cin >> L >> C;  

        if (L > C) {  
            total += C;  
        }  
        i++;   
    }  

    cout << total << endl; 
    return 0;  
}