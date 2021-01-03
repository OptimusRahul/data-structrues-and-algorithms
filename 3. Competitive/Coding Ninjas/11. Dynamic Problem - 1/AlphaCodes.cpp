 #include <bits/stdc++.h>
 #define mod 1000000007
 using namespace std;

 int num_codes(int* n, int size) {
	 if (size == 1) {
		 return 1;
	 }
	 if (size == 0) {
		 return 1;
	 }
	 int output = num_codes(n, size - 1);
	 if (output[size - 2] * 10 + output[size - 1] <= 26) {
		 output += num_codes(n, size -2);
	 }
	 return output;
}

int num_codes_i(int * input, int size) {
	int* output = new int[size + 1];
	output[0] = 1;
	output[1] = 1;

	for (int i = 2; i <= size; i++) {
		output[i] = output[i - 1];
		if (input[i-2] *10 + input[i - 1] <= 26) {
			output[i] += output[i - 2];
		}
	}
	int ans = output[size];
	delete [] output;
	return ans;
}

int num_codes2(int* n, int size, int* arr) {
	 if (size == 1) {
		 return 1;
	 }
	 if (size == 0) {
		 return 1;
	 }
	 if (arr[size] > 0) {
		 return arr[size];
	 }

	 int output = num_codes(n, size - 1);
	 if (output[size - 2] * 10 + output[size - 1] <= 26) {
		 output += num_codes(n, size -2);
	 }
	 arr[size] = output;
	 return output;
}

 int main() {
     string s;
     int n, i, x;
     long long int A[5001];

     while(1) {
         cin >> s;
         if(s == '0') {
             break;
         }
         n = s.size();
         for(i=0; i<5000; i++) {
             A[i] = 0;
         }

         A[0] = 1;
         for(i=1; i<n; i++) {
             x = (s[i-1] - '0') * 10 + s[i] - '0';
             if(s[i] != '0') {
                 A[i] = A[i-1];
             }

             if(x >= 10 && x <= 26 && i>1) {
                 A[i] += A[i-2];
             } else if(x>=10 && x<=26) {
                 A[i]++;
             }
             A[i] = A[i]%mod;
         }

         cout << A[n-1] << endl;
     }
     return 0;
 }