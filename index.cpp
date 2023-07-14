#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;
int main ()
{
  int input1, input2, pil;
float hasil;
string op;
system("color 0b");
cout << "Kalkulator Sederhana" << endl;
cout << "====================" << endl;
cout << endl;
//pemilihan op
cout << "pilih oprator yang kamu inginkan : " << endl;
cout << "1.penjumlahan" << endl;
cout << "2.pengurangan" << endl;
cout << "3.pembagian" << endl;
cout << "4.perkalian" << endl;
cout << "5.modulus" << endl;
cout << endl;
cout << "masukan pilihan : ";
cin >> pil;

switch(pil) {
case 1 : hasil=input1+input2;
op = "+"; break;
case 2 : hasil=input1-input2;
op = "-"; break;
case 3 : hasil=input1/input2;
op = "/"; break;
case 4 : hasil=input1*input2;
op = "*"; break;
case 5 : hasil=input1%input2;
op = "%"; break;
default : cout << "kayaknya oprator yang kamu masukin salah deh" << endl;
}

cout << "masukan angka pertama yang akan dihitung : ";
cin >> input1;
cout << "masukan angka kedua yang akan dihitung : ";
cin >> input2;
cout << endl;


cout << input1 << op << input2 << "=" << hasil << endl;
}
  
