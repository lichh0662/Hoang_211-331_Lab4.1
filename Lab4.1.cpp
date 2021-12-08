#include<iostream>


using namespace std;
void swap(char& a, char& b)
{
	char term;
	term = a;
	a = b;
	b = term;
}
int palindrome(char str[])
{
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] != str[length - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
void sortstring(char name[])
{
	int length = strlen(name);
	for (int i = 0; i < length-1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (name[i] > name[j])
			{
				swap(name[i], name[j]);
			}
		}
	}
}
void searchstring(char name[], char search[])
{
	int lenght = strlen(name);
	int dai = strlen(search);
	for (int i = 0; i < lenght; i++)
	{
		int coun=0;
		for (int k = 0; k < dai; k++)
		{
			if (name[i + k] != search[k])
			{
				coun++;
			}
		}
		if (coun == 0)
		{
			cout << "found it on" << i << endl;
		}
	}
	cout << strlen(name);
}

void main()
{
	cout << "=========Menu==========" << endl;
	cout << "choses: ";
	cout << "1: palindrome\n2: searchstring\n3: sortstring\n4: getin""\n";
	int n;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			char str[50];
			fflush(stdin);
			cout << "enter string:";
			cin.getline(str, sizeof(str));
			if (palindrome(str) == 1)
			{
				cout << "palindrome" << endl;
			}
			else
			{
				cout << " no palindrome" << endl;
			}
			return;
		}
		case 2:
		{
			char name[100];
			cin.ignore();
			cout << "enter name:";
			cin.getline(name, sizeof(name));
			char search[50];
			fflush(stdin);
			cout << "enter search:";
			cin.getline(search, sizeof(search));
			searchstring(name, search);
			return;
		}
		case 3:
		{
			char nametosort[100];
			fflush(stdin);
			cout << "enter string want to sort : ";
			cin.getline(nametosort, sizeof(nametosort));
			sortstring(nametosort);
			cout << "Sorted: " << nametosort << endl;
			return;
		}
		case 4:
		{
			char name[100];
			fflush(stdin);
			char get[100];
			cin.ignore();
			cout << "enter char: ";
			cin.getline(name, sizeof(name));
			for (int i = 0; i < strlen(name); i++)
			{
				if (name[i] == '"')
				{
					for (int k = 0; k < strlen(name) - i - 1; k++)
					{
						get[k] = name[i + k + 1];
						if (get[k] != '"')
						{
							cout << get[k];
						}
						else
						{
							return;
						}
					}
				}
			}
		}
	}
}