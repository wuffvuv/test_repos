#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	float *a;
	int n = 0;
	int i;
	int k;
	
	srand(time(0));
	
	cout << "1 - fill array\n";
	cout << "2 - random array\n";
	cout << "3 - array sorting\n";
	cout << "0 - exit\n";
	cout << "vy vveli ";
	cin >> k;
	
	switch(k)
	{
		case 1:
		cout<<"\nenter array size\n";
		cin>>n;
		cout<<"enter array elements\n";
		a=new float[n];
		
		for(i=0;i<n;i++)
		cin>>a[i];
		
		cout << "\nmassiv: ";
		for (i = 0; i < n; ++i) 
		{
			cout << a[i] << " ";
        }
        cout << "\n" << "\n";
		//break;
		
		
		
		case 2:
		cout<<"\nenter size\n";
		cin>>n;
		a=new float[n];
		
		for(i=0;i<n;i++)
    	{
        	a[i]=rand()%100;
    	}
    	
		cout << "\nmassiv: ";
		for (i = 0; i < n; ++i) 
		{
			cout << a[i] << " ";
        }
        cout << "\n" << "\n";
        //break;
        
        
        case 3:
        if (n <= 0) {
        	cerr << "\nInvalid size\n";
        	delete [] a;
        	return 0;
    	}

    	// Сортировка массива пузырьком
    	for (int i = 0; i < n - 1; i++) 
		{
        	for (int r = 0; r < n - i - 1; r++) 
			{
				if (a[r] > a[r + 1]) 
				{
                	// меняем элементы местами
                	int temp = a[r];
                	a[r] = a[r + 1];
                	a[r + 1] = temp;
            	}
        	}
		}
		
		cout << "\nmassiv: ";
		for (i = 0; i < n; ++i) 
		{
			cout << a[i] << " ";
        }
        cout << "\n" << "\n";
        //break;
        
        
        case 4:
        delete [] a;
		return 0;
	}
		cout << "1 - zapolnit massiv\n";
        cout << "2 - random massiv\n";
        cout << "3 - array sorting\n";
		cout << "0 - exit\n";
		cout << "vy vveli ";
        cin >> k;
	
}
