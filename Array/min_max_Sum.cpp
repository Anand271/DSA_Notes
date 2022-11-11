#include <iostream>
#include<math.h>


using namespace std;


int main() {

int A[5] ;
int N ;
cout << "Enter Arr size " << endl;
cin >> N;
cout << "Enter the digits of array " << endl;

for (int i = 0; i < N; i++)
{
  cin >> A[i];
}

 
        int max = INT32_MIN,min = INT32_MAX;
        
    	for(int i = 0;i<N;i++){
           if (A[i]<min)
           {
            min = A[i];
           }
           
       if (A[i]>max)
           {
            max = A[i];
           }
    	}
    	
    	
    	
    	
    	cout << min << " " << max << " " << min + max << " "; 


    return 0;
}
