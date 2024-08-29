#include <iostream>
using namespace std;

int main() {
    string days[8] = {"Error", "Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int n;
	cout<<"Enter No.(1-7) to get Days of Week : ";
	cin>>n;
    for (int i = 1; i <= 7; ++i) 
	{
		if(i == n)
		{
			cout <<days[i] << endl;
        	break;
		}
        
    }
    if(n == 0 || n > 7)
    {
        cout<<"Invalid Number please Enter between 1 to 7.";
	}

    return 0;
}
