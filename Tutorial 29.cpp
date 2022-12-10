#include <iostream>
using namespace std;

//sum numbers betweeen m and N
//using loops


/*int main() {
	int m=2, n=4,sum=0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	system("pause>0");

}*/


//using recursive function

int recursive_sum(int m, int n) {
	if (m == n)
		return m;//this is a must for recursion as this acts as base 
	return m + recursive_sum(m + 1, n);
}
int main() {
	int m = 2, n = 4;
	cout << "Sum=" << recursive_sum(m, n);
}