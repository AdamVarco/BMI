#include "BMI.h"

BMI::BMI()
{
	weight = 0.0;
	height = 0;
}

BMI::BMI(string n, double w, int h)
{
	name = n;
	weight = w;
	height = h;
}

BMI::~BMI()
{
}

double BMI::calcBMI()
{
	return ((weight *703)/(height * height));
}

void BMI::report()
{
	string name, g;
	int height;
	double weight;
	vector<BMI> bmiList;

TOP:
	cout << "Please enter name of patient" << endl;
	cin >> name;

	cout << "Please enter the height of the patient" << endl;
	cin >> height;

	cout << "Please enter the weight of the patient " << endl;
	cin >> weight;

	BMI bmi(name, weight, height);
	
	bmiList.push_back(bmi);

	cout << " Choose 1 to contiue, any other key to end" << endl;
	cin >> g;
	if (g == "1")
		goto TOP;
	else
	{
		cout << " Report " << endl;
		cout << "--------------------------------" << endl;
		unsigned int size = bmiList.size();
		for (unsigned int i = 0; i < size; i++)
		{
			cout << " Painet number " << i+1 << endl;
			cout << " Paitent name " << bmiList[i].name << endl;
			cout << " Patient Weight " << bmiList[i].weight << endl;
			cout << " Patient Height " << bmiList[i].height << endl;
            cout << " Patient BMI " << bmiList[i].calcBMI() << endl;
			cout << "--------------------------------" << endl;
		}
	}
}
