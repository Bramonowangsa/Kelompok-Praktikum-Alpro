#include<iostream>
using namespace std;

class Bensin{ 
	public:
		Bensin();
		void pil();
		void hitung();
		string nama;
		
	private:
		char pilih;
		char jenis;
		float pertalite,pertamax;
		float harga;
		float liter;
		float total;
		
};
Bensin::Bensin(){
	harga=0;
	pertalite=7000;
	pertamax=9000;
}
void Bensin::pil(){
	cout<<"==========================================================="<<endl;
    cout<<"                   SELAMAT DATANG DI SPBU                  "<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"Masukan nama anda : ";cin>>nama;
    cout<<"pilih jenis bensin : "<<endl;
	cout<<"1. Pertalite "<<endl;
	cout<<"2. Pertamax "<<endl;
	cout<<"pilihan anda : ";cin>>pilih;
	
	if(pilih=='1'){
		cout<<"masukkan jumlah liter: "<<endl;
		cin>>liter;
		total=liter*pertalite;
		cout<<"Total harga yang harus dibayarkan : Rp."<<total<<",00"<<endl;
	}
	else if(pilih=='2'){
		cout<<"masukkan jumlah liter: "<<endl;
		cin>>liter;
		total=liter*pertamax;
		cout<<"Total harga yang harus dibayarkan : Rp."<<total<<",00"<<endl;}
		cout<<endl;
	
	cout<<"==========================================================="<<endl;
	cout<<"                        Struk SPBU                         "<<endl;
	cout<<"==========================================================="<<endl;
	cout<<"Nama Pelanggan  : "<<nama<<endl;
	cout<<"Jenis Bensin    : ";
	if(pilih=='1'){
		cout<<"Pertalite"<<endl;
	}else if (pilih=='2'){
		cout<<"Pertamax"<<endl;
	}
	cout<<"Total Liter     : "<<liter<<endl;
	cout<<"Total harga     : "<<total<<endl;
    cout<<"==========================================================="<<endl;
}
    
int main(){
Bensin x;
x.pil();
return 0;
}

