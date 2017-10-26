#include <iostream>
#include "List.h"

using namespace std;

int main()
{
List L1, L2;
L1.insert(21,1);
L1.insert(42,2);
L1.insert(84,3);
L2.insert(12,1);
L2.insert(24,2);
for(int i=1;i <=L1.size();i++)
{
	cout<<L1.get(i)<<endl;
}
for(int i=1;i <=L2.size();i++)
{
	cout<<L2.get(i)<<endl;
}
cout<<L1.size()<<endl;
cout<<L2.size()<<endl;
 //Do some stuff with L1, L2, ...
 // ...

}
