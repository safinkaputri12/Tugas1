#include <iostream>

using namespace std;

int main(){
	int pilihan;
	
	cout << "## Studio musik ##" << endl;
	 cout << "----------------------------" << endl;
	 cout << "1. 1 jam sewa" << endl;
	 cout << "2. 2 jam sewa" << endl;
	 cout << "3. 3 jam sewa" << endl;
	 cout << "4. 4 jam sewa" << endl;
	 cout << "5. 5 jam sewa" << endl;
	 cout << "6. 6 jam sewa" << endl;
	 cout << "7. 7 jam sewa" << endl;
	 cout << "8. 8 jam sewa" << endl;
	 cout << "9. 9 jam sewa" << endl;
	 cout << "10. 10 jam sewa" << endl;
	 cout << endl;
	 
	 cout << "Silahkan Pilih Jam Sewa Anda (1-10): ";
	 cin >> pilihan;
	 
	 switch(pilihan){
	 case 1:
		cout << "Anda memilih 1 jam" << endl;
		break;
	 case 2:
		cout << "Anda memilih 2 jam" << endl;
		break;
     case 3:
		cout << "Anda memilih 3 jam" << endl;
		break;
	 case 4:
		cout << "Anda memilih 4 jam" << endl;
		break; 
	 case 5:
		cout << "Anda memilih 5 jam" << endl;
		break; 
	 case 6:
		cout << "Anda memilih 6 jam" << endl;
		break; 
	 case 7:
		cout << "Anda memilih 7 jam" << endl;
		break; 
	 case 8:
		cout << "Anda memilih 8 jam" << endl;
		break; 
	 case 9:
		cout << "Anda memilih 9 jam" << endl;
		break; 
	 case 10:
		cout << "Anda memilih 10 jam" << endl;
		break;
	default:
		cout << "Menu tidak tersedia" << endl;
    }
    cout << endl ;
    
    cout<<"Jadi Biaya Sewa adalah:Rp."<<pilihan*100000/2+50000;
}
