#include<iostream>
#include<string>
#include<vector>
#include<algorithm> //sort
#include<cmath>

using namespace std;

int main()
{
	double x = 0;
	double min = 10000000.0, max = 0, sum = 0;
	string unit = "";
	vector<double> values;

	cout << "Enter double and unit (m/cm/in/ft, or '|' to exit): \n";
	while (cin >> x >> unit)
	{
		if (unit == "|") {
			break;
		}
		double converted_x = x;

		if (unit == "cm")
			x /= 100.0;
		else if (unit == "in")
			x *= 0.0254;
		else if (unit == "ft")
			x *= 0.3048;
		else if (unit == "m")
			x *= 1.0;
		else 
		{
		   	cout << "Enter a valid unit! \n"; 
			continue; //유효하지 않은 단위 입력시 다시 입력받도록.
		}             
		
		values.push_back(x);
		sum += x;

		if (min > x)
			min = x;
		if (max < x)
			max = x;
		
		cout << "\nEnter double and unit (m/cm/in/ft, or '|' to exit): \n";
	}

	if (!values.empty())
	{
	sort(values.begin(), values.end());
	cout << "Max: " << max << ", Min: " << min << "\nSum: " << sum << ", count: " << values.size() << '\n';
	
	for (double val : values)
		cout << val << ' ';
	}

	else
		cout << "No valid input.\n";

	return 0;
}