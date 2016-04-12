#include <iostream>
using namespace std;

int main() {
	int t,left,right,top,down,arr[4][4];
	cin>>t;
	while(t--)
	{
	   for(int i=0;i<4;++i)
	        for(int j=0;j<4;++j)
	            cin>>arr[i][j];
	   //cout<<"hi";
	   left=top=0;
	   down=right=3;
	   while((top<=down)||(left<=right))
	   {
	       //cout<<"w";
	       for(int i=left;i<=right;++i)
	        cout<<arr[top][i]<<" ";
	       top++;
	       for(int i=top;i<=down;++i)
	        cout<<arr[i][right]<<" ";
	       right--;
	       for(int i=right;i>=left;--i)
	        cout<<arr[down][i]<<" ";
	       down--;
	       for(int i=down;i>=top;--i)
	        cout<<arr[i][left]<<" ";
	       left++;
	   }
	   cout<<"\n";

	}
	return 0;
}
