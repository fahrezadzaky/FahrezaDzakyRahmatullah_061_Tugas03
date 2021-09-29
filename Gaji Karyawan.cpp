#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int nilai,nik,jenis,status,kendaraan,gajipokok,uang,gajikotor,tunjangan,pajak,gajibersih,transport;
	char nama[20];
		cout << " Nama Karyawan = "; gets(nama);
		cout << " NIK = "; cin >> nik;
		cout << " Jenis Kelamin= "; cin >> jenis;
		if (jenis==0){
			cout << "perempuan" ;
		}else if(jenis==1){
			cout << "laki-laki" ;
		}else{
			cout << "salah" ;
		}
		cout << " Status Pernikahan = "; cin>>status;
		if (status==0){
			cout << "single" ;
		}else if (status==1){
			cout << "menikah";
		}else{
			cout << "jomblo" ;
		}
		cout << " Kendaraan = "; cin>>kendaraan;
		if (kendaraan==0){
			cout <<"motor" ;
		}else if (kendaraan==1){
			cout <<"mobil";
		}else{
			cout <<"gapunya";
		}
		cout << " Gaji Pokok = "; cin>>gajipokok;
		cout << " Uang  = ";  cin>>uang; 
		
		//tunjangan
			if (jenis==1 && status==1)
			{	
				tunjangan = 500;
				cout<<"\ntunjangan=500";
			}	
			else
			{
				tunjangan = 0;
				cout<<"\ntunjangan=0";
			}
		//transport
			if (kendaraan==1)
			{
				transport=1000;
				cout<<"\ntransport=1000";
			}
			else if (kendaraan==0)
			{
				transport=500;
				cout<<"\ntrasnport=500";	
			}
			
			
		//gaji kotor
			gajikotor-gajipokok+tunjangan;
			cout<<"gaji kotor\t=" <<gajikotor <<endl;
		//pajak
			pajak ;0.05*gajikotor;
			cout<<"\npajak="<<pajak;
		//gaji bersih
			gajibersih-gajikotor-pajak;
			cout<<"\ngaji bersih="<<gajibersih;
	getch();
}
