#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
        int countOne = 0;
	    for(int i=0; i<n; i++) {
	        cin >> arr[i];
            if(arr[i] == 1) {
                countOne++;
            }
	    }
	    
	    int cost = 0;
        
        if(n != k) {
            cost = countOne;
        } else  {
            cost = countOne*2;
            
        }
//         int i,j;
//         for(i=0; i<n;) {
//             for(j=i; j<=(i+k) && j<n; j++) {
//                 if(arr[j] == 1) {
//                     arr[j] = 0;
//                     cost++;
//                 }
//                 
//                 if(n == k) {
//                     cost = 
//                 }
//             }
//             if(k==1){
//                 i+=k;
//             }
//             else if(n == k) {
//                 
//                 
//             }
//             else {
//                 i+=k-1;
//             }
//             
//         }
	    
// 	    for(int i=0; i<n;) {
// 	        for(int j=i; j<=(i+k) && j<n; j++) {
//                 cout << j << " " << arr[j] << endl;
// 	            if(arr[j] == 0) {
// 	                arr[j] == 1;
// 	                cost++;
// 	            }
// 	        }
// 	        
// 	        i+=k-1;
// 	    }
	    
	    cout << cost << endl;
	}
	return 0;
}
