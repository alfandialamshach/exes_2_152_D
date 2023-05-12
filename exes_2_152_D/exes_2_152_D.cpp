#include <iostream>
using namespace std;

int fandi [39];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukan data fandi: ";
		cin >> n;
		if ((n > 0) && (n <= 39))
			break;
		else
			cout << "\nData fandi min 0 max 39.\n\n";
	}
	// Accept array elements
	cout << "\n--------------------\n";
	cout << " Masukan data fandi \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> fandi[i];
	}
}


	void BinerySearch(){
		
		char ch;

		do
		{
			// Accept the number to be searched
			cout << "\nMasukan data fandi untuk dicari: ";	
			int item;
			cin >> item;

			int alfandi = 0;
			int alamshach = n - 1;
			int mid; bool found = false;

			while (alfandi <= alamshach)
			{
				mid = (alfandi + alamshach) / 2;
				if (fandi[mid] == item) {
					found = true;
					break;

				}
				else if (fandi[mid] < item) {
					alfandi = mid + 1;
				}
				else {
					alamshach = mid - 1;
				}
			}
			if (found)
			{
				cout << "\nitem<<" "found at postion" << (mid + 1) << endl;
			}
			else {
				cout << "\n" << item << " tidak ada data dalam fandi\n";
			}
			cout << "\ncontinue search (y/n): ";
			cin >> ch;
		} while (ch == 'y' || ch == 'Y');

	}


			
int main()
	{
		input();
		BinerySearch();
	}
