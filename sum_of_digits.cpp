#include <iostream>
#include <cstdlib>
using namespace std;

int num_sum(int num)
{
    num = abs(num);
	if(num == 0) return 0;
	if(num % 10 > 0) return num % 10 + num_sum(num/10);
}

int main()
{
	int n;
	cin >> n;
	cout << num_sum(n);
}