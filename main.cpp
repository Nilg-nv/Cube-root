#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(0,"");
	int x = 0;
	int i = 0;
	float yi = 0;
	float yi1 = 0;
	cout << "¬ведите x: ";
	cin >> x;
	
	yi = x;
	while (abs(yi1-yi) >= pow(10,-5)){
		if (i > 0){
			yi = yi1;
		}
		yi1 = 0.5*(yi + 3*x/(2*pow(yi,2)+x/yi));
		i++;	
		cout << yi1 << endl;
	}
	cout << round(yi1) << endl;
	system("pause");
	return 0;
}

 

