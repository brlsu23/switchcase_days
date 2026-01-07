#include<iostream> 
#include<clocale>

using namespace std;
int main(){

setlocale(LC_ALL,"Turkish");

int day;
cout<<"Enter a day number: ";
cin>>day;

switch(day){
	case 1: cout<<"Pazartesi\n";break;
	case 2: cout<<"Salı\n";break;
	case 3: cout<<"Çarşamba\n";break;
	case 4: cout<<"SPerşembe\n";break;
	case 5: cout<<"Cuma\n";break;
	case 6: cout<<"Cumartesi\n";break;
	case 7: cout<<"Pazar\n";break;
	
}

return 0;
}
