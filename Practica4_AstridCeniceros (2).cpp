#include <iostream>

using namespace std;
int main()
{
int	i;
	float v1[2];
		float v2[2];
			float v3[2];
			int vectori,n,k,vectorl;
		
			cout<<"digite los valores deseados del primer arreglo"<<endl;
	for(i=0; i<3; i++)
	{
		cout <<i<< "valor:" <<endl;
		cin>>v1[i];
}
	
		cout<<"digite los valores deseados del 2do arreglo"<<endl;
	for(i=0; i<3; i++)
	{
		cout << "valor:" <<i<< endl;
		cin>>v2[i];
}

		cout<<"digite los valores deseados del 3er arreglo"<<endl;
	for(i=0; i<3; i++)
	{
		cout<<"valor:"<<i<<endl;
		cin>>v3[i];
}
vectori=(v2[1]*v3[2])-(v3[1]*v2[2]);
n=(v2[0]*v3[2])-(v3[0]*v2[2]);
k=(v2[0]*v3[1])-(v3[0]*v2[1]);

vectorl=(v1[0]*vectori)+(v1[1]*n)+(v1[2]*k);

cout<<"el producto escalar es"<<vectorl<<endl;

return 0;

}
