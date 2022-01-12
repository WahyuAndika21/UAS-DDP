/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main(){		
	char nama[100];
    int saldo = 0;
    int setoran, tarikan;
    int menu;
    
	cout<<"============================ BankRoot =================================="<<endl;
	cout<<"================== Menabung Biar Tidak Bangkrut ========================"<<endl;
    cout<<"Masukkan nama anda : " ; cin >> nama; 
	cout<<endl;
	cout<<"Hi "<<nama<<endl;
    
	do{
		
		cout<<"Saldo anda Rp "<<saldo<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"Silahkan pilih menu: "<<endl;
		cout<<"[1] Setor Tunai"   <<endl;
		cout<<"[2] Tarik Tunai"   <<endl;
		cout<<"[3] Pulang"   <<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<" Silahkan Pilih menu (1-3): "; cin >> menu;
		cout<<endl;
		
		switch(menu){
			case 1:
			    cout << "Berapa jumlah uang yang ingin disetorkan? "; cin>>setoran;
			    cout << "Anda menyetorkan uang sebesar Rp "	<< setoran <<endl;
			    saldo = saldo + setoran;
				break;
			case 2:
			    cout << "Berapa jumlah uang yang ingin ditarik? "; cin>>tarikan;
			    while (saldo < tarikan){
        			cout << "Saldo anda tidak mencukupi! Silahkan ulangi lagi" << endl;
        			cout << "Berapa jumlah uang yang ingin ditarik? "; cin>>tarikan;
        		};
        		cout << "Anda menarik uang sebesar Rp "	<< tarikan <<endl;
				saldo = saldo - tarikan;
				cout << "Sisa saldo anda adalah Rp " << saldo <<endl;
				break;
			case 3:
			    cout << "Terimakasih, silahkan datang kembali 🙏" << endl;
				return 0;
				break;
			default:
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
				break;
		}
		} while (true);
}