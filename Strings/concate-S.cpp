#include <iostream>

using namespace std;

int main()
{
	char str1[20] = "Skill", str2[20] = "Code";

	char str3[20];

	int i = 0, j = 0;

	cout<<"\n First String =" <<str1;
	cout<<"\n Second String ="<<str2;

	while (str1[i] != '\0')
	{
		str3[j] = str1[i];
		i++;
		j++;
	}

	

	while (str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}

	str3[j] = '\0';

	cout<<"\n Concat String = " << str3 << endl;

	return 0;
}