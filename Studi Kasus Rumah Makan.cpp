#include <iostream>
#include <conio.h>
using namespace std;

void menu(){//menu untuk rumah makan
	cout << "============================================" << endl;
	cout << "=========Rumah Makan Seger Waras =========== " << endl;
	cout << endl;
	cout << "Menu : "<<endl;
	cout << " 1. Ayam Geprek  :  Rp. 21.000" << endl;
	cout << " 2. Ayam Goreng  :  Rp. 17.000" << endl;
	cout << " 3. Udang Goreng :  Rp. 19.000" << endl;
	cout << " 4. Cumi Goreng  :  Rp. 20.000" << endl;
	cout << " 5. Ayam Bakar   :  Rp. 25.000" << endl;
	cout << endl;
	cout << "============================================" << endl;
}
int main(){
	int ayamgeprek, ayamgoreng, udanggoreng, cumigoreng, ayambakar, total, jarak;					// menu
	int harga_1, harga_2, harga_3, harga_4, harga_5;		// harga
	int ongkir, totalakhir, totalpembelian, uang, potongan, kembalian;
	int disongkir = 0;
	
	menu();
	cout<<"Jumlah Pesan Ayam Geprek = ";cin>>ayamgeprek;
    harga_1=21000*ayamgeprek;
    cout<<"Jumlah Pesan Ayam goreng = ";cin>>ayamgoreng;
    harga_2=17000*ayamgoreng;
    cout<<"Jumlah Pesan Udang goreng = ";cin>>udanggoreng;
    harga_3=19000*udanggoreng;
    cout<<"Jumlah Pesan Cumi goreng = ";cin>>cumigoreng;
    harga_4=20000*cumigoreng;
    cout<<"Jumlah Pesan Ayam Bakar = ";cin>>ayambakar;
    harga_5=25000*ayambakar;
  
    
    cout << "Masukkan jarak estimasi rumah (km) : "; cin >> jarak;
    
    //kondisi inout jarak
    if (jarak <= 3){
    	ongkir=15000;
    }
    else{
    	ongkir=25000;
	}
	
	totalpembelian = harga_1 + harga_2 + harga_3 + harga_4 + harga_5;
		
	if (totalpembelian >= 25000 && totalpembelian <= 49999){
		disongkir = 3000;
		totalakhir = totalpembelian + (ongkir - disongkir);	
	}
	else if (totalpembelian >= 50000 && totalpembelian <= 149999){
		disongkir = 5000;
		potongan = 0.15 * totalpembelian;
		totalakhir = (totalpembelian - potongan) + (ongkir - disongkir);
	}
	else if (totalpembelian >= 150000 ){
		disongkir = 8000;
		potongan = 0.35 * totalpembelian;
		totalakhir = (totalpembelian - potongan) + (ongkir - disongkir);
	}
	else{
		totalakhir = totalpembelian + ongkir;
	}
	
	system("cls");
	
	cout << endl;
	cout << "============= Tagihan Pembayaran ==============" << endl;
	cout << endl;
	cout << " 1. Ayam Geprek    :   Rp. 21.000 = " << ayamgeprek << endl;
	cout << " 2. Ayam Goreng    :   Rp. 17.000 = " << ayamgoreng << endl;
	cout << " 3. Udang Goreng   :   Rp. 19.000 = " << udanggoreng << endl;
	cout << " 4. Cumi Goreng    :   Rp. 20.000 = " << cumigoreng << endl;
	cout << " 5. Ayam Bakar     :   Rp. 25.000 = " << ayambakar <<endl;
	cout << endl;
	cout << "Total Pesanan      : Rp. " << totalpembelian << endl;
	cout << "Total Ongkir       : Rp. " << ongkir << endl;
	cout << "Potongan Ongkir    : Rp. " << disongkir << endl;
	cout << "Diskon             : Rp. " << potongan << endl;
	cout << endl;
	cout << "Total Pembayaran   : Rp. " << totalakhir << endl;
	cout << endl;
	cout << "Masukkan Uang Anda : Rp. "; cin >> uang;
	kembalian = uang - totalakhir;
	cout << "Kembalian anda     : Rp. " << kembalian << endl; 
	cout << endl;
	cout << "================ Terima Kasih =================" << endl;
	getch();
	return 0;

}
