

#include <iostream>
#include <vector>
using namespace std;

int isprm(int end)
{

	if (end <= 1) 
		return 0;
	
	for (int i = 2; i < end; i++) {
		if (end % i == 0)
			return 0;
	}

	return 1;
}
int countprime(int start, int end)
{

	vector<int> primevector;

	for (int i = start; i <= end; i++) {

		if (isprm(i) == 1) {
			primevector.push_back(i);
		}
	}
	int sum = primevector[0];
	int num = 0, ans = 0, length=primevector.size(), count = 0, allcount = 0;
	for(int j = 0; j <= primevector.size(); j++) {
		for(int i = j; i < primevector.size(); i++) {
			num += primevector.at(i);
			count++;
			if(isprm(num) == 1 && num <= end && count >= allcount) {
				ans = num;
				allcount = count;
			}
		}
		count = 0;
		num = 0;
	}
		
	return ans;
}

int main()
{
    int start, end;
    cout << "MIN: ";
    cin >> start;
    cout << "MAX: ";
	cin >> end;
	cout << countprime(start, end);

	return 0;
}



