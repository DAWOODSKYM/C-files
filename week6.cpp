#include <iostream>
using namespace std;

int main()
{
	int Arraynumbers[20]; int i;
	cout<<"Enter the values:";
	//To enter array elements and test for range
	for(i=0; i<20; i++){
		cin>>Arraynumbers[i];
		if(Arraynumbers[i]>=1 && Arraynumbers[i]<=100){
			cout<<"Enter new number:";
		}else{
			cout<<"Enter no in range 1-100: \n";
		}
		
	}
	//to test for the even or odd number codition in the Arrraynumbers
	cout<<"The even numbers are \n";
	i=0;
	while(i<20){
	if(Arraynumbers[i]%2==0){
		cout<<Arraynumbers[i]<<"\t"<<endl;
		}
		i++;
	}
	cout<<"The odd numbers are \n";
	i=0;
	while(i<20){
		if(Arraynumbers[i]%2==1){
			cout<<Arraynumbers[i]<<"\t"<<endl;
		}
		i++;	
	}
	return 0;
}