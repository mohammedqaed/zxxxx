#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


int x,max,min;
cout<<"enrt the 5 numr";
for(int i=1,i<=5,i++)
{
	cin>>x;
 } 
 
 max=x;
 min=x;
for(int i=1,i<=5,i++)
{
	if(i<min)
	min=i;
	if(i>max)
	max=i;
}

cout<<"max="<<max;
cout<<"min="<<min;
	return 0;
}
