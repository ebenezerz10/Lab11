
#include <iostream>
using namespace std;

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(int i=0; i<10; i++)
	{
	  if((i+1)%3 == 0)  //If index is every third element
		continue;  //Continue
	  cout<<arr[i]<<" ";  //Print array element
	}
	
	return 0;
}

