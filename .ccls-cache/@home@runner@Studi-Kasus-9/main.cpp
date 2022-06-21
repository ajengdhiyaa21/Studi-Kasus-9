#include <iostream>
using namespace std;

class SK{
  public:
    void input();
    void proses();
    void output();

  private:
int *nim;
int nimX[5];
string *nama;
string namaX[5];
};
void SK :: input(){
 cout<<"== Data Mahasiswa =="<<endl;
  for(int a = 0; a<5; a++){
    cout<<"Masukkan NIM : ";cin>>nimX[a];
    cout<<"Masukkan Nama : ";cin>>namaX[a];
  }
}

void SK::proses(){
  cout<<endl;
  nim=new int [5];
  nama=new string[5];
  for(int a=0; a<5; a++){
    *nim=nimX[a];
    nim+=1;
    *nama=namaX[a];
    nama+=1;
  }
}
void SK :: output(){
	cout<<"======================"<<endl;
	cout<<"=== Nama Mahasiswa ==="<<endl;
	cout<<"======================"<<endl;
  nim -= 5;
	nama -= 5;
	for (int a=0; a<5; a++) {
		cout<<endl;
		cout<<"NIM : " <<*nim <<endl;
		nim += 1;
		cout<<"Nama : " <<*nama;
		nama += 1;
	}
}
int main(){
  SK run;
  run.input();
  run.proses();
  run.output();
};