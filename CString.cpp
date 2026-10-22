#include <iostream>
using namespace std;

int str_len(char cstring[])
{
	int total = 0;
	int index = 0;
	while (cstring[index] != '\0')
		{
			index++;
			total++;
		}
		return total;
		
}



int main()
{
	char Cstring[] = "C String";
	int clen = str_len(Cstring);
	cout << "C-String: " << Cstring << endl;
	cout << "Length: " << clen << endl;

}
