
#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>

using namespace std;

int main() 
{
	string process_Name;
	system("tasklist");
	cout << "Enter the Process Name to terminate the process from the list: ";
    cin >> process_Name;

	string command = "taskkill /F /IM " + process_Name;

	int result = system(command.c_str());
	if (result == 0) 
	{
		cout << "Process with Process Name " << process_Name << " was terminated successfully.\n";
	} 
	else 
	{
		cout << "Invalid Process Name to Terminate\n";
    }
	getche();
	return 0;
}
